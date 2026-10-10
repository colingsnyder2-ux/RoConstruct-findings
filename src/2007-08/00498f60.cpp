// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted
{
    void (__stdcall *vtable[3])();
    volatile long refCount1;
    volatile long refCount2;
};

struct AbuseReporterData
{
    int field0;
    int field4;
};

extern int g_8be2f8;
extern int g_8c1c50;

extern void __stdcall func_00498ed0(void*);
extern void __stdcall func_0054a950(void*);
extern void __stdcall func_00541630(void*, void*);
extern void __stdcall func_00725750(void*);
extern void __stdcall func_00725770(void*);

void func_00498f60()
{
    func_00725750(&g_8c1c50);

    if (g_8be2f8 == 0)
    {
        AbuseReporterData data;
        func_00498ed0(&data);

        void* ptr = 0;
        func_0054a950(&ptr);

        void* val = *(void**)ptr;
        func_00541630(&data, val);

        RefCounted* r1 = (RefCounted*)ptr;
        if (r1)
        {
            if (_InterlockedExchangeAdd(&r1->refCount1, -1) == 1)
            {
                r1->vtable[1]();
                if (_InterlockedExchangeAdd(&r1->refCount2, -1) == 1)
                {
                    r1->vtable[2]();
                }
            }
        }

        RefCounted* r2 = (RefCounted*)data.field0;
        if (r2)
        {
            if (_InterlockedExchangeAdd(&r2->refCount1, -1) == 1)
            {
                r2->vtable[1]();
                if (_InterlockedExchangeAdd(&r2->refCount2, -1) == 1)
                {
                    r2->vtable[2]();
                }
            }
        }
    }

    func_00725770(&g_8c1c50);
}
