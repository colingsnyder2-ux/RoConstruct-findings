// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name {
    void* ptr;
    void* ptr2;
};

extern "C" void __cdecl sub_5f73c0(Name* out, const char* name);

struct Creator {
    void* field0;
    void* field4;
    Creator();
    ~Creator();
};

Creator::Creator() {
    Name name;
    name.ptr = 0;
    sub_5f73c0(&name, (const char*)0x755869);
    this->field0 = name.ptr;
    this->field4 = name.ptr2;
    if (this->field4) {
        _InterlockedExchangeAdd((volatile long*)((char*)this->field4 + 4), 1);
    }
}

Creator::~Creator() {
    if (this->field4) {
        long old = _InterlockedExchangeAdd((volatile long*)((char*)this->field4 + 4), -1);
        if (old == 1) {
            void** vtbl = *(void***)this->field4;
            ((void (__thiscall*)(void*))vtbl[1])(this->field4);
            long old2 = _InterlockedExchangeAdd((volatile long*)((char*)this->field4 + 8), -1);
            if (old2 == 1) {
                void** vtbl2 = *(void***)this->field4;
                ((void (__thiscall*)(void*))vtbl2[2])(this->field4);
            }
        }
    }
}
