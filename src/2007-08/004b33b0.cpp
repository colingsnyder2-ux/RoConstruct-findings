// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    void ctor(int* a, int b);
};

extern "C" void __stdcall sub_45aac0();
extern "C" void* __stdcall sub_5974e0(const char*);
extern "C" void* __stdcall sub_5975b0(int);
extern "C" void __stdcall sub_4b2dc0(const char*, int);

void S::ctor(int* a, int b)
{
    sub_45aac0();
    *(int*)((char*)this + 0x00) = 0x79dd8c;
    *(int*)((char*)this + 0x04) = 0x79dd80;
    *(int*)((char*)this + 0x10) = 0x79dd78;
    *(int*)((char*)this + 0x14) = 0x79dd68;
    *(int*)((char*)this + 0x2c) = 0x79dd58;
    *(int*)((char*)this + 0x44) = 0x79dd48;
    *(int*)((char*)this + 0x5c) = 0x79dd38;
    *(int*)((char*)this + 0x74) = 0x79dd28;
    *(int*)((char*)this + 0x8c) = 0x79dd18;

    int v = *(int*)a;
    *(int*)((char*)this + 0x124) = v;
    int w = *(int*)((char*)a + 4);
    *(int*)((char*)this + 0x128) = w;
    if (w == 0) {
        _InterlockedExchangeAdd((volatile long*)(w + 4), 1);
    }

    *(int*)((char*)this + 0x130) = 0;
    *(int*)((char*)this + 0x134) = 0;
    *(int*)((char*)this + 0x12c) = b;

    void* p = sub_5974e0((const char*)0x79dd0c);
    *(int*)((char*)this + 0x120) = (int)p;
    sub_4b2dc0((const char*)0x79dcf8, b + 0xc4);

    void* q = sub_5974e0((const char*)0x79dcec);
    *(int*)((char*)this + 0x114) = (int)q;

    void* r = sub_5974e0((const char*)0x79dce4);
    *(int*)((char*)this + 0x118) = (int)r;

    int* obj = *(int**)a;
    void* s = sub_5975b0(*(int*)((char*)obj + 0x1df8));
    int* obj2 = *(int**)a;
    void* t = sub_5975b0(*(int*)((char*)obj2 + 0x1dfc));
    int* obj3 = *(int**)a;
    sub_5975b0(*(int*)((char*)obj3 + 0x1e04));
    int* obj4 = *(int**)a;
    sub_5975b0(*(int*)((char*)obj4 + 0x1e0c));
    int* obj5 = *(int**)a;
    sub_5975b0(*(int*)((char*)obj5 + 0x1e00));
    int* obj6 = *(int**)a;
    sub_5975b0(*(int*)((char*)obj6 + 0x1e08));

    void* u = sub_5974e0((const char*)0x79dcd0);
    *(int*)((char*)this + 0x11c) = (int)u;

    void* vv = sub_5974e0((const char*)0x79dcc0);
    *(int*)((char*)this + 0x110) = (int)vv;
}
