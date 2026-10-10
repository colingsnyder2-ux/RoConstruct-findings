// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_00630b60(unsigned int);
extern "C" void __cdecl sub_00412d60(void*);
extern "C" void __cdecl sub_004135a0(void*, int, void*);
extern "C" void __cdecl sub_00545160(void*);
extern "C" void __cdecl sub_00547600(void*, void*);
extern "C" int __stdcall sub_0077e6cc();
extern "C" int __stdcall sub_0077e868(void*, void*);
extern "C" int __cdecl _mbsnbcpy_s(char*, unsigned int, const char*, unsigned int);

extern void* g_786f98;

struct RefCounted
{
    void* vptr;
    long refcount;
};

struct S
{
    bool f(void* arg);
};

bool S::f(void* arg)
{
    char buf[0x1240];
    void* p;
    int n;
    int r;
    RefCounted* rc;

    sub_00412d60(buf);
    n = sub_0077e6cc();
    _mbsnbcpy_s(buf, 0x21, (const char*)g_786f98, 4);
    sub_00545160(buf);
    sub_004135a0(buf, 0, arg);

    r = *(int*)(buf + 0x1234);
    if (r != 0 || (r > 1 && r <= 3))
    {
        sub_00547600(&p, arg);
        rc = (RefCounted*)((char*)p - 0x10);
        if (rc->refcount >= 0)
        {
            if (sub_0077e868(p, (void*)0x7a7bd4) != 0 &&
                sub_0077e868(p, (void*)0x7a7bd4) == (int)p)
            {
                if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1)
                {
                    void** vt = (void**)rc->vptr;
                    ((void(__stdcall*)(RefCounted*))vt[1])(rc);
                }
                return true;
            }
            if (sub_0077e868(p, (void*)0x7a7bc8) != 0 &&
                sub_0077e868(p, (void*)0x7a7bc8) == (int)p)
            {
                if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1)
                {
                    void** vt = (void**)rc->vptr;
                    ((void(__stdcall*)(RefCounted*))vt[1])(rc);
                }
                return true;
            }
        }
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1)
        {
            void** vt = (void**)rc->vptr;
            ((void(__stdcall*)(RefCounted*))vt[1])(rc);
        }
    }
    return false;
}
