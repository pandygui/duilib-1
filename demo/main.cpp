#include "../lib/UILib.h"

class MainWindow : public CWindowImpBase
{
public:
    MainWindow() {}

    CUIString GetWindowClassName() const {
        return L"wnd";
    }

    CUIString GetSkinFolder() {
        return L"";
    }

    CUIString GetSkinFile() {
        return L"";
    }

    bool OnClose(int Msg, WPARAM wParam, LPARAM lParam) {
        g_print("on close()");
        return false;
    }

    void onDestroy(int, WPARAM, LPARAM) {
        gtk_main_quit();
    }

    void InitWindow() {

    }

    void Notify(TNotifyUI &msg) {

    }

    void onClick(TNotifyUI &msg) {

    }
};

int main(int argc, char *argv[])
{
    gtk_init(NULL, NULL);

    MainWindow w;
    w.Create(0, 0, 800, 600);
    w.CenterWindow();
    w.Show();
    w.MainLoop();

    gtk_main_quit();

    return 0;
}
