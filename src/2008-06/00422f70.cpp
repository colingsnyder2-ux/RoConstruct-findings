// from server: 86% by king_originala
extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);
extern "C" void __stdcall func_006a0bde(long);

struct Handler
{
    void func_006de610(unsigned int, unsigned int, unsigned int);
};

struct CRobloxTreeCtrl
{
    char padding0[0x20];
    void* window;
    char padding1[0x30];
    Handler handler;

    void func_00422f70(unsigned int, unsigned int, unsigned int);
};

void CRobloxTreeCtrl::func_00422f70(unsigned int key, unsigned int repeat, unsigned int flags)
{
    if (key == 0x71)
    {
        long (__stdcall *send)(void*, unsigned int, unsigned int, long) = SendMessageA;
        long item = send(window, 0x110a, 9, 0);
        func_006a0bde(send(window, 0x110e, 0, item));
    }
    handler.func_006de610(key, repeat, flags);
}
