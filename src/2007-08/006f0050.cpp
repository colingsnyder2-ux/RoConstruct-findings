// from server: 70% by colin
struct CShadowWnd {
    char pad[0x54];
    void func_0062ff4a(int);
    int func_006f0050(int, int, int, int, int);
};

struct CHookSink;

struct CXTPHookManager {
    static CHookSink* __stdcall FindHookSink(int);
};

struct CHookSink {
    void __thiscall Install(int);
};

void __stdcall func_006a3510(int a, int b);
void __stdcall func_006a3040(int a, int b);
void __stdcall func_006effe0(void* p);
void __stdcall func_006efeb0(void* p);

int CShadowWnd::func_006f0050(int a, int b, int c, int d, int e)
{
    if (a == 0x18) {
        int* p = (int*)b;
        if (*p == 0) {
            ((CShadowWnd*)((char*)this - 0x54))->func_0062ff4a(0);
        }
        if (*p == 1) {
            ((CShadowWnd*)((char*)this - 0x54))->func_0062ff4a(8);
            return 0;
        }
    }
    else if (a == 2) {
        int x = (this != 0) ? (int)this : 0;
        func_006a3040(b, x);
        func_006a3510(b, x);
        func_006effe0((char*)this - 0x54);
        func_006efeb0((char*)this - 0x54);
    }
    return 0;
}
