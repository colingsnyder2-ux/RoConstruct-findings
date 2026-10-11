// from server: 55% by atomic.potato
struct S_func_007f6060 {
    char pad0[212];
    int m_x;
    void f(int a1);
};

struct S_func_00890160 {
    void ctor();
};

struct S_func_00847ff0 {
    void f(void*, int, int, int, int);
};

struct S_func_00848160 {
    void* f(int, int, int, int, int);
};

struct S_func_00816540 {
    void f(void*, int, int, int, int, int, int);
};

struct S_func_00841990 {
    void* f(void*);
};

struct S_func_007f3ddc {
    void f();
};

extern "C" void* __stdcall sub_007f3860(unsigned int);
extern "C" void* __stdcall sub_00841990(void*);
extern "C" void __stdcall sub_00890160(void*);
extern "C" void __stdcall sub_00847ff0(void*, void*, int, int, int, int);
extern "C" void* __stdcall sub_00848160(void*, int, int, int, int, int);
extern "C" void __stdcall sub_00816540(void*, void*, int, int, int, int, int);
extern "C" void __stdcall sub_007f3ddc(void*);
extern "C" void __stdcall sub_007f6060(void*, int);
extern "C" int __stdcall ClientToScreen(void*, void*);

struct CXTPTabClientWnd {
    void f(int, int);
};

void CXTPTabClientWnd::f(int a1, int a2)
{
    void* p;
    void* q;
    void* r;
    void* s;
    void* t;
    int v1;
    int v2;
    void* u;
    void* v;
    void* w;

    p = (void*)((int(__thiscall*)(void*))*(void**)(*(int*)this + 0x154))(this);
    q = sub_00841990(p);
    ClientToScreen(*(void**)((char*)this + 0x20), &v1);
    r = sub_007f3860(0x174);
    if (r) {
        sub_00890160(r);
        *(void**)r = (void*)0x9fb27c;
        *(void**)((char*)r + 0x20) = (void*)0x9fb21c;
    } else {
        r = 0;
    }
    sub_00847ff0(*(void**)((char*)q + 0xfc), r, 0, 0, -1, 0);
    s = sub_00848160(*(void**)((char*)q + 0xfc), 1, 0x23c7, 0, -1, 0);
    (*(void(__thiscall**)(void*, int))(*(int*)s + 0x64))(s, 1);
    sub_007f6060(s, 8);
    sub_00816540(q, *(void**)((char*)this + 0x84), v1, v2, 0, 0, 0);
    sub_007f3ddc(q);
}
