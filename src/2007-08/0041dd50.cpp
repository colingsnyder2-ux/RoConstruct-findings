// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_00661d90();
extern "C" void __cdecl func_00661e20();
extern "C" void* __cdecl func_00654d90(unsigned int);
extern "C" void __cdecl func_00653f40();
extern "C" void __cdecl func_006622e0();
extern "C" void* __cdecl func_0077e6a8();

struct CInstanceExplorer
{
    void construct(unsigned int a, void* b);
};

void CInstanceExplorer::construct(unsigned int a, void* b)
{
    char* self = (char*)this;
    *(void**)self = (void*)0x787eec;
    *(unsigned int*)(self + 0x54) = a;
    *(void**)(self + 0x58) = b;
    if (b != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    func_00661d90();
    void* p1 = func_00654d90(0x80);
    if (p1 != 0)
    {
        func_00653f40();
        *(void**)p1 = (void*)0x787d54;
        *(unsigned int*)((char*)p1 + 0x7c) = a;
    }
    else
    {
        p1 = 0;
    }
    func_00661e20();
    void* p2 = func_00654d90(0x80);
    if (p2 != 0)
    {
        void** vtbl = *(void***)a;
        void* (*fn)(void*) = (void* (*)(void*))vtbl[1];
        void* r = fn((void*)a);
        void* s = func_0077e6a8();
        func_006622e0();
    }
    else
    {
        p2 = 0;
    }
    func_00661e20();
    if (b != 0)
    {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1)
        {
            void** vtbl = *(void***)b;
            void (*fn1)(void*) = (void (*)(void*))vtbl[1];
            fn1(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1)
            {
                void** vtbl2 = *(void***)b;
                void (*fn2)(void*) = (void (*)(void*))vtbl2[2];
                fn2(b);
            }
        }
    }
}
