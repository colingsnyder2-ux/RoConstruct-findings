// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakCount;
};

struct Tool {
    char pad0[0x18];
    int field18;
    char pad1[0x20 - 0x1c];
    int field20;
    float field24;
    float field28;
    float field2c;

    int doActivate(int);
};

extern "C" {
    void* __cdecl sub_5A4AA0(int);
    void* __cdecl sub_573F80();
    int __cdecl sub_5E3DC0();
    void __cdecl sub_58E8C0(void*);
    void __cdecl sub_541630(int, int);
    void __cdecl sub_531530();
    void* __cdecl sub_561B10(int, int);
    void __cdecl sub_58C810();
}

extern void* g_8c6f88;
extern void* g_8c6fa4;

int Tool::doActivate(int param)
{
    void* obj = sub_5A4AA0(this->field18);
    if (obj == 0) {
        return 0;
    }

    void* result = sub_573F80();
    float* f = (float*)((char*)result + 0x24);
    this->field24 = f[0];
    this->field28 = f[1];
    this->field2c = f[2];

    int local10 = 0;
    int local14 = 0;
    int local18 = 0;
    int local1c = 0;

    int r = sub_5E3DC0();
    int edi = r;
    if (edi == 0) {
        this->field20 = 4;
        return 0;
    }

    void* local8 = 0;
    sub_58E8C0(&local8);

    void* eax = local8;
    if (eax != 0) {
        eax = (char*)eax + 4;
    } else {
        eax = 0;
    }

    void* ecx = g_8c6f88;
    void** vtable = *(void***)ecx;
    void* fn = vtable[2];
    ((void (__stdcall*)(void*, void*, void*))fn)(eax, &local14, &local10);

    float fzero = 0.0f;
    void* eax2 = local8;
    if (eax2 != 0) {
        eax2 = (char*)eax2 + 4;
    } else {
        eax2 = 0;
    }

    void* ecx2 = g_8c6fa4;
    void** vtable2 = *(void***)ecx2;
    void* fn2 = vtable2[2];
    ((void (__stdcall*)(void*, void*, void*))fn2)(eax2, &fzero, &local10);

    sub_541630(this->field18, local10);

    if (*(char*)((char*)edi + 0x1a0) == 0) {
        sub_531530();
    }

    void* v = sub_561B10(this->field18, 9);
    sub_58C810();

    RefCounted* rc = (RefCounted*)local8;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
            void** vt = *(void***)rc;
            ((void (__stdcall*)(void*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakCount, -1) == 1) {
                void** vt2 = *(void***)rc;
                ((void (__stdcall*)(void*))vt2[2])(rc);
            }
        }
    }

    this->field20 = 4;
    return 0;
}
