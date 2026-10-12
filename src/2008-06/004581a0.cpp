// from server: 19% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vptr;
    long ref1;
    long ref2;
};

struct Obj {
    char pad0[0x48];
    Inner* p48;
    Inner* p4c;
};

struct Holder {
    char pad0[0x54];
    Obj obj;
};

extern "C" void __stdcall sub_456ee0(void*, void*);
extern "C" void* __cdecl sub_6c81f0(unsigned int);
extern "C" void __stdcall sub_6d8180(void*, void*);
extern "C" void __stdcall sub_6d7ca0(void*);
extern "C" void __stdcall sub_457ca0(void*, void*, void*);

void __stdcall sub_4581a0(Holder* self, void* a, void* b, void* c)
{
    void* local0 = 0;
    void* local4 = 0;
    void* local8 = 0;
    void* localc = 0;

    sub_456ee0(&local0, &local4);

    if (local0 != 0) {
        void* mem = sub_6c81f0(0xb0);
        if (mem != 0) {
            Inner* p48 = self->obj.p48;
            Inner* p4c = self->obj.p4c;
            if (p4c != 0) {
                _InterlockedExchangeAdd(&p4c->ref1, 1);
            }
            if (local4 != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)local4 + 4), 1);
            }
            sub_457ca0(mem, p48, p4c);
        } else {
            mem = 0;
        }
        void* h = (void*)((char*)self - 0x54);
        sub_6d8180(h, mem);
        sub_6d7ca0(h);
    }

    if (local4 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local4 + 4), -1) == 1) {
            void** vt = *(void***)local4;
            ((void(__stdcall*)(void*))vt[1])(local4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local4 + 8), -1) == 1) {
                void** vt2 = *(void***)local4;
                ((void(__stdcall*)(void*))vt2[2])(local4);
            }
        }
    }

    if (local0 != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local0 + 4), -1) == 1) {
            void** vt = *(void***)local0;
            ((void(__stdcall*)(void*))vt[1])(local0);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local0 + 8), -1) == 1) {
                void** vt2 = *(void***)local0;
                ((void(__stdcall*)(void*))vt2[2])(local0);
            }
        }
    }
}
