// from server: 18% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct RefCounted {
    void* vptr;
    long refcount;
    long refcount2;
};

struct Inner {
    void* vptr;
    long refcount;
};

struct Holder {
    void* ptr;
    Inner* inner;
    char pad[0x40];
};

struct S {
    void* field0;
    void* field4;
    char field8[0x40];
    void* method();
};

void func_0044d0c0();
void func_0044d4b0();
void func_0047d410();
bool func_0060a2f0();
void func_0063b770();
void func_006a0920();
void func_005971d0();

void* S::method()
{
    void* mem = malloc(0x48);
    void* obj = 0;
    if (mem != 0) {
        obj = mem;
        func_0044d0c0();
    }
    this->field0 = obj;
    func_0044d4b0();
    func_0047d410();
    void* p = this->field0;
    void* q = this->field4;
    if (q != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    func_0063b770();
    if (!func_0060a2f0()) {
        void* a = this->field0;
        void* b = this->field4;
        if (b != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        }
    }
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*))vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(void*))vt2[2])(p);
            }
        }
    }
    func_005971d0();

    return this;
}
