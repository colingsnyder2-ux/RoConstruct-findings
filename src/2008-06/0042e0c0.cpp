// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef long HRESULT;
__declspec(noreturn) void __stdcall AfxThrowMemoryException();
__declspec(noreturn) void __stdcall AfxThrowOleException(HRESULT sc);
namespace ATL {
void __stdcall AtlThrowImpl(HRESULT hr);
}

struct Variant {
    unsigned short vt;
    unsigned short wReserved1;
    unsigned short wReserved2;
    unsigned short wReserved3;
    int data[4];
};

struct VariantArray {
    Variant* begin;
    Variant* end;
    Variant* cap;
};

struct DescribedBase;

struct Function {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    char pad14[0x20];
    void* field34;
};

struct VCLuaFunction {
    int __thiscall execute(
        DescribedBase* instance,
        Variant* arg1,
        Variant* arg2,
        Variant* arg3,
        Variant* arg4,
        Variant* result);
};

extern "C" void* __cdecl sub_6A0968();
extern "C" void __cdecl sub_6A0962(void*, void*);
extern "C" void* __cdecl sub_6A0920(int);
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void __cdecl sub_401000(long);
extern "C" void __cdecl sub_42DB20(void*);
extern "C" void __cdecl sub_42D630(void*);
extern "C" void* __cdecl sub_42DFD0(void*);
extern "C" void __cdecl sub_42BC10(void*, void*);
extern "C" void* __cdecl sub_42BBB0();
extern "C" void __cdecl sub_5773C0(void*);
extern "C" void* __cdecl sub_5AF830(void*, void*, void*);
extern "C" void* __cdecl sub_5A7570(void*);
extern "C" void __cdecl sub_5A76B0(void*, void*);
extern "C" void __cdecl sub_5A6FF0(void*, void*);
extern "C" void __cdecl sub_416370(void*, void*);
extern "C" void __cdecl sub_411B40(void*);

extern void* g_8028D8;
extern void* g_802890;

int VCLuaFunction::execute(
    DescribedBase* instance,
    Variant* arg1,
    Variant* arg2,
    Variant* arg3,
    Variant* arg4,
    Variant* result)
{
    VariantArray args;
    args.begin = 0;
    args.end = 0;
    args.cap = 0;

    Variant* pv = (Variant*)sub_6A0968();
    sub_6A0962(&args, pv);

    Variant* slot = (Variant*)sub_6A0920(4);
    if (slot) {
        *(Variant**)slot = (Variant*)&args;
    } else {
        slot = 0;
    }
    args.begin = slot;
    args.end = 0;
    args.cap = 0;

    void* fn = g_8028D8;

    {
        Variant tmp;
        tmp.vt = 0;
        long hr = ((long (__stdcall*)(Variant*, Variant*))fn)(&tmp, arg1);
        if (hr < 0) {
            tmp.vt = 10;
            tmp.data[0] = hr;
            sub_401000(hr);
        }
        sub_42DB20(&args);
    }
    {
        Variant tmp;
        tmp.vt = 0;
        long hr = ((long (__stdcall*)(Variant*, Variant*))fn)(&tmp, arg2);
        if (hr < 0) {
            tmp.vt = 10;
            tmp.data[0] = hr;
            sub_401000(hr);
        }
        sub_42DB20(&args);
    }
    {
        Variant tmp;
        tmp.vt = 0;
        long hr = ((long (__stdcall*)(Variant*, Variant*))fn)(&tmp, arg3);
        if (hr < 0) {
            tmp.vt = 10;
            tmp.data[0] = hr;
            sub_401000(hr);
        }
        sub_42DB20(&args);
    }
    {
        Variant tmp;
        tmp.vt = 0;
        long hr = ((long (__stdcall*)(Variant*, Variant*))fn)(&tmp, arg4);
        if (hr < 0) {
            tmp.vt = 10;
            tmp.data[0] = hr;
            sub_401000(hr);
        }
        sub_42DB20(&args);
    }

    Function* self = (Function*)instance;
    void* p8 = self->field8;
    void* pC = self->fieldC;

    void* local8 = p8;
    void* localC = pC;
    if (pC) {
        _InterlockedExchangeAdd((volatile long*)((char*)pC + 4), 1);
    }

    sub_411B40(&local8);

    void* obj = 0;
    if (self->field8) {
        obj = sub_42DFD0(self->field8);
    }

    void* holder = 0;
    sub_42BC10(&holder, self->field34);

    void* tmpOut = 0;
    void* r = sub_5AF830(obj, &local8, &args);
    void* inner = *(void**)r;
    tmpOut = inner;
    *(void**)r = 0;

    if (local8) {
        sub_42D630(local8);
        sub_6A067A(local8);
    }

    void* h = holder;
    void* v = sub_42BBB0();
    void* res = sub_5A7570(v);
    if (res != h) {
        sub_5A76B0(v, h);
        if (res) {
            sub_5A6FF0(v, res);
        }
    }

    sub_5773C0(&local8);

    void* out = tmpOut;
    void* b = *(void**)((char*)out + 0xC);
    void* e = *(void**)((char*)out + 0x10);
    if ((unsigned)((char*)e - (char*)b) & 0xFFFFFFF8) {
        if (b > e) {
            ((void (__cdecl*)())g_802890)();
        }
        if (*(void**)out) {
            *(void**)out = *(void**)out;
        } else {
            ((void (__cdecl*)())g_802890)();
        }
        sub_416370(b, result);
    }

    sub_42D630(out);
    sub_6A067A(out);

    sub_42D630(&args);

    return 0;
}
