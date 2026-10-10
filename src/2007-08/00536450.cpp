// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_5BD980(const char*, int, int);
extern "C" void __cdecl sub_56C3B0(void*);
extern "C" void __cdecl sub_56C0A0(void*, int, const char*, void*, void*);

struct RefCounted {
    virtual void slot4();
    virtual void slot8();
    volatile long ref1;
    volatile long ref2;
};

struct StringBuf {
    char pad[0x10];
    unsigned int capacity;
    char* data;
};

extern "C" void __stdcall sub_77E698(void*);
extern "C" void __stdcall sub_77E6AC(void*);

void __cdecl sub_536450(const char* arg)
{
    void* p = sub_5BD980(arg, -1, 0);
    StringBuf sb;
    sub_77E698(&sb);
    void* local = 0;
    sub_56C3B0(&local);
    void* v = *(void**)p;
    void* str;
    if (sb.capacity >= 0x10)
        str = sb.data;
    else
        str = sb.pad;
    sub_56C0A0(v, 3, (const char*)0x7A5858, str, &sb);
    RefCounted* rc = (RefCounted*)local;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->slot4();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1)
                rc->slot8();
        }
    }
    *(int*)0 = *(int*)4;
    sub_77E6AC(&sb);
}
