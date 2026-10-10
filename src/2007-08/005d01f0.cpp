// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall invalid_parameter_noinfo();

struct RefCounted
{
    void AddRef();
    void Release();
};

struct LocalBackpackItem
{
    char pad0[0xc0];
    char container[0x98];
    char pad158[0x4];
    void* field158;
    RefCounted* field15c;

    void func_005d01f0();
};

extern void __stdcall sub_004178f0(void* out, void* container);

void LocalBackpackItem::func_005d01f0()
{
    if (field158 != 0)
    {
        void* local = 0;
        sub_004178f0(&local, container);

        if (local != 0)
        {
            char* begin = *(char**)((char*)local + 4);
            char* end = *(char**)((char*)local + 8);
            if (begin > end)
                invalid_parameter_noinfo();

            char* cur = end;
            if (*(char**)((char*)local + 4) > cur)
                invalid_parameter_noinfo();

            while (begin != cur)
            {
                if (begin >= *(char**)((char*)local + 8))
                    invalid_parameter_noinfo();

                void* obj = *(void**)begin;
                void* other = *(void**)((char*)obj + 0x100);
                if (other != field158)
                {
                    void** vtbl = *(void***)other;
                    void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x8c / 4];
                    fn(other);
                }

                if (begin >= *(char**)((char*)local + 8))
                    invalid_parameter_noinfo();

                begin += 8;
            }
        }

        {
            void** vtbl = *(void***)field158;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x88 / 4];
            fn(field158);
        }
        field158 = 0;

        RefCounted* p = field15c;
        field15c = 0;
        if (p != 0)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
            {
                void** vtbl = *(void***)p;
                void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[4 / 4];
                fn(p);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                void** vtbl = *(void***)p;
                void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[8 / 4];
                fn(p);
            }
        }

        RefCounted* q = *(RefCounted**)((char*)&local + 4);
        if (q != 0)
        {
            if (_InterlockedExchangeAdd((volatile long*)((char*)q + 4), -1) == 1)
            {
                void** vtbl = *(void***)q;
                void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[4 / 4];
                fn(q);
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)q + 8), -1) == 1)
            {
                void** vtbl = *(void***)q;
                void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[8 / 4];
                fn(q);
            }
        }
    }
}
