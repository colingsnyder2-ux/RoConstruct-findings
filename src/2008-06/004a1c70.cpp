// from server: 31% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_004025b0(void*);
extern "C" void* __cdecl func_006a17c6(void*, void*, void*, void*, void*);

struct S {
    void* field0;
    void* field4;
    void* method(void* arg0, void* arg1);
};

void* S::method(void* arg0, void* arg1)
{
    void* v = func_006a17c6(*(void**)arg0, (void*)0x92907c, (void*)0x937460, 0, 0);
    this->field0 = v;
    void* p = *(void**)((char*)arg0 + 4);
    this->field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    if (this->field0 == 0) {
        void* tmp = 0;
        func_004025b0(&tmp);
    }
    return this;
}
