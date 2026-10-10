// from server: 42% by colin
struct ChatEnter {
    void func_00557610(int a, int b, int c);
};

extern "C" int __cdecl func_0056da00(void*);
extern "C" int __cdecl func_0056d840(void*);
extern "C" int __cdecl func_0052c940(int, int, int);
extern "C" int __cdecl func_0056d400(int, int);

void ChatEnter::func_00557610(int a, int b, int c)
{
    int* p14 = (int*)((char*)this + 0x14);
    *p14 = func_0056da00((char*)this + 0x14);
    int v = func_0056da00((char*)this + 0x30);
    int r = func_0052c940(a, -1, v);
    func_0056d400((int)p14, r);
    int v2 = func_0056da00((char*)this + 0x38);
    int r2 = func_0052c940(b, -1, v2);
    func_0056d400((int)p14, r2);
    int v3 = func_0056d840((char*)this + 0x40);
    int r3 = func_0052c940(c, -1, v3);
    func_0056d400((int)p14, r3);
}
