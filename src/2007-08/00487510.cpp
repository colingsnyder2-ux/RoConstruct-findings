// from server: 45% by colin
struct GWindow {
    static int s_initialized;
    static int s_value;
    static int init();
};

int GWindow::s_initialized = 0;
int GWindow::s_value = 0;

extern "C" int __cdecl sub_554B20();

int GWindow::init()
{
    if (!(s_initialized & 1))
    {
        s_initialized |= 1;
        s_value = sub_554B20();
    }
    return s_value;
}
