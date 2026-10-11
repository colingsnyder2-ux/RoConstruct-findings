// from server: 78% by atomic.potato
extern "C" void sub_006f7e80(int, int, int, int, int);
extern "C" void __cdecl sub_007f4929(const char *);

struct S {
    void f();
};

void S::f()
{
    sub_006f7e80(0x9dcce4, 0x9d1b80, 0x29c, 2, 0);
    sub_007f4929("Button2DownConnectionCount");
}
