// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef long HRESULT;
__declspec(noreturn) void __stdcall AtlThrowImpl(HRESULT hr);

struct Variant {
    unsigned short vt;
    unsigned short wReserved1;
    unsigned short wReserved2;
    unsigned short wReserved3;
    int data[4];
};

struct Unknown {
    char pad[0x24];
    int field24;
    int field28;
};

struct CComObject {
    int method(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void*);
};

extern "C" int __cdecl sub_403B60(void*);
extern "C" void __cdecl sub_411B40(void*);
extern "C" void __cdecl sub_4293D0(void*);
extern "C" void __cdecl sub_42DB20(void*);
extern "C" void __cdecl sub_42DFD0(void*);
extern "C" void* __cdecl sub_5B0480(void*, int, int, int, int, int);
extern "C" void __cdecl sub_42D630(void*);
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void* __cdecl sub_4165E0(void*);
extern "C" void __cdecl sub_5773C0(void*);
extern "C" void* __cdecl sub_46A940(void*, void*);

extern HRESULT (__stdcall *g_pfn)(Variant*, Variant*);

int CComObject::method(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, void* out)
{
    Unknown* self = (Unknown*)this;
    if (sub_403B60((char*)this + 8) != 0)
        return 0;

    Variant v1;
    v1.vt = 0;
    v1.wReserved1 = 0;
    v1.wReserved2 = 0;
    v1.wReserved3 = 0;
    v1.data[0] = self->field24;
    v1.data[1] = self->field28;
    if (v1.data[1] != 0)
        _InterlockedExchangeAdd((volatile long*)(v1.data[1] + 4), 1);

    char buf1[0x1c];
    sub_411B40(buf1);
    char buf2[0x18];
    sub_4293D0(buf2);

    Variant tmp;
    tmp.vt = 0;
    HRESULT hr = g_pfn(&tmp, (Variant*)&a1);
    if (hr < 0) {
        tmp.vt = 10;
        tmp.data[1] = hr;
        AtlThrowImpl(hr);
    }
    sub_42DB20(buf2);

    tmp.vt = 0;
    hr = g_pfn(&tmp, (Variant*)&a4);
    if (hr < 0) {
        tmp.vt = 10;
        tmp.data[1] = hr;
        AtlThrowImpl(hr);
    }
    sub_42DB20(buf2);

    tmp.vt = 0;
    hr = g_pfn(&tmp, (Variant*)&a7);
    if (hr < 0) {
        tmp.vt = 10;
        tmp.data[1] = hr;
        AtlThrowImpl(hr);
    }
    sub_42DB20(buf2);

    tmp.vt = 0;
    hr = g_pfn(&tmp, (Variant*)&a10);
    if (hr < 0) {
        tmp.vt = 10;
        tmp.data[1] = hr;
        AtlThrowImpl(hr);
    }
    sub_42DB20(buf2);

    void* p = sub_46A940(this, buf1);
    void* q = *(void**)p;
    sub_42DFD0(q);

    void* r = sub_5B0480(q, 4, a1, 0, (int)buf2, 0);
    void* result = *(void**)r;
    *(void**)r = 0;

    if (buf2[0] != 0) {
        sub_42D630(buf2);
        sub_6A067A(buf2);
    }

    if (v1.data[1] != 0) {
        if (_InterlockedExchangeAdd((volatile long*)(v1.data[1] + 4), -1) == 1) {
            void** vt = *(void***)v1.data[1];
            ((void(__thiscall*)(void*))vt[1])((void*)v1.data[1]);
            if (_InterlockedExchangeAdd((volatile long*)(v1.data[1] + 8), -1) == 1) {
                void** vt2 = *(void***)v1.data[1];
                ((void(__thiscall*)(void*))vt2[2])((void*)v1.data[1]);
            }
        }
    }

    if (out != 0) {
        *(void**)out = sub_4165E0(result);
    }

    if (result != 0) {
        sub_42D630(result);
        sub_6A067A(result);
    }

    sub_42D630(buf2);
    sub_5773C0(buf1);
    return 0;
}
