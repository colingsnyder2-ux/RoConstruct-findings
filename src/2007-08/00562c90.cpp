// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Instance {
    void* vfptr;
    int refCount;
    void AddRef();
    void Release();
};

struct Command {
    void* vfptr;
    int refCount;
    void AddRef();
    void Release();
};

struct TrackCameraCommand {
    char pad0[0x0c];
    void* field0c;
    char pad10[0x10];
    void* field20;
    void execute(int);
};

extern "C" void* __stdcall sub_630d36(void*, void*, void*, int, void*);
extern "C" void __stdcall sub_40fc90(void*, void*);
extern "C" void __stdcall sub_4108b0(void*, int);
extern "C" void __stdcall sub_410d40(void*);
extern "C" void __stdcall sub_59b6c0(void*, int);
extern "C" void __stdcall sub_59b700(void*, void*);

void TrackCameraCommand::execute(int arg)
{
    void* p = this->field20;
    void* local;
    if (p) {
        sub_410d40(p);
        local = p;
    } else {
        local = 0;
    }
    sub_40fc90(local, &local);
    void* v = *(void**)local;
    void* result = sub_630d36(v, (void*)0x881f4c, (void*)0x898fc0, 0, 0);
    if (local) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local + 4), -1) == 1) {
            void** vt = *(void***)local;
            ((void (__stdcall*)(void*))vt[1])(local);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local + 8), -1) == 1) {
                void** vt2 = *(void***)local;
                ((void (__stdcall*)(void*))vt2[2])(local);
            }
        }
    }
    if (result) {
        void* f = this->field0c;
        void** vt3 = *(void***)((char*)f + 0x228);
        ((void (__stdcall*)(void*, void*))vt3[1])((char*)f + 0x228, result);
        sub_59b700((void*)0, (void*)0);
        void* f2 = this->field0c;
        void** vt4 = *(void***)((char*)f2 + 0x228);
        ((void (__stdcall*)(void*, int))vt4[1])((char*)f2 + 0x228, 3);
        sub_59b6c0((void*)0, 0);
    }
    void* obj = *(void**)((char*)&arg + 0x1c);
    sub_4108b0(obj, -1);
    void** vt5 = *(void***)obj;
    ((void (__stdcall*)(void*, int))vt5[1])(obj, 1);
    *(int*)((char*)obj + 4) = -1;
}
