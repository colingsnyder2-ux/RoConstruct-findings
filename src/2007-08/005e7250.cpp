// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance {
    void* vtable;
    void addRef();
    void release();
};

struct Flag {
    char pad[0x240];
    int field_240;
    void onServiceProvider(Instance* oldProvider, Instance* newProvider);
};

extern "C" void* __stdcall sub_5a56b0(void*);
extern "C" void* __stdcall sub_495870(void*);
extern "C" void* __stdcall sub_5e70e0(void*);
extern "C" int __stdcall sub_5e9f90(void*, void*);
extern "C" void* __stdcall sub_5ea2b0(void*, void*);
extern "C" int __stdcall sub_5e9ef0(void*, void*);
extern "C" void __stdcall sub_492360(void*);

void Flag::onServiceProvider(Instance* oldProvider, Instance* newProvider)
{
    void* p = sub_5a56b0(*(void**)((char*)newProvider + 0xbc));
    if (p != 0) {
        void* q = sub_495870(*(void**)((char*)newProvider + 0xbc));
        if (q != 0) {
            if (*(char*)((char*)q + 0x124) == 0 &&
                *(int*)((char*)q + 0x120) == this->field_240) {
                void* r = sub_5e70e0(this);
                if (sub_5e9f90(r, this) == 0) {
                    void* s = sub_5ea2b0(r, this);
                    if (s != 0) {
                        sub_5e9ef0(s, this);
                    }
                }
            }
        }
    }
    if (newProvider != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)newProvider + 4), -1) == 1) {
            ((void (__thiscall*)(Instance*))((void**)newProvider)[1])(newProvider);
            if (_InterlockedExchangeAdd((volatile long*)((char*)newProvider + 8), -1) == 1) {
                ((void (__thiscall*)(Instance*))((void**)newProvider)[2])(newProvider);
            }
        }
    }
    sub_492360((char*)this + 0x18);
}
