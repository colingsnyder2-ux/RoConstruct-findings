// from server: 62% by colin
extern "C" __declspec(dllimport) long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct CRobloxTreeCtrl
{
    char pad[0x20];
    void* hwnd;
    char pad2[0x94 - 0x24];
    void* obj;
    char pad3[0xb8 - 0x98];
    char flag;
    void func();
};

void CRobloxTreeCtrl::func()
{
    char old = flag;
    flag = 1;
    if (hwnd)
    {
        SendMessageA(hwnd, 0x1101, 0, 0xffff0000);
        if (obj)
        {
            void** vt = *(void***)obj;
            ((void (__stdcall*)(int))vt[1])(1);
            obj = 0;
        }
    }
    flag = old;
}
