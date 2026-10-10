// from server: 78% by atomic.potato
struct Win32Window
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    void Finish();
};

void Win32Window::Finish()
{
    a = 0x9dce54;
    b = 0x9dce4c;
    e = 0x9dce40;
    f = 0x9dce38;
    reinterpret_cast<void (__cdecl *)()>(0x637b00)();
}
