// from server: 28% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vfptr;
    long ref1;
    long ref2;
};

struct Mid {
    char pad[0x1c];
    Inner* ptr;
};

struct Outer {
    void* vfptr;
    char pad[0x18];
    void* field18;
    void* field1c;

    void method(void* arg);
};

extern "C" void* __stdcall sub_618a40(void*, void*);
extern "C" void* __stdcall sub_442140(void*, void*);
extern "C" void* __stdcall sub_420110(void*);

void Outer::method(void* arg) {
    void* local8 = 0;
    void* localc = 0;
    void* local10 = 0;
    Mid* m = (Mid*)arg;
    void* p = m->ptr;
    void* r = sub_618a40(p, &local8);
    void* q = sub_442140(this, &local10);
    sub_420110(q);
    Inner* obj = (Inner*)local8;
    if (obj) {
        if (_InterlockedExchangeAdd(&obj->ref1, -1) == 1) {
            void** vt = *(void***)obj;
            ((void(__thiscall*)(void*))vt[1])(obj);
            if (_InterlockedExchangeAdd(&obj->ref2, -1) == 1) {
                void** vt2 = *(void***)obj;
                ((void(__thiscall*)(void*))vt2[2])(obj);
            }
        }
    }
}
