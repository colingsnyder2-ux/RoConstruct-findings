// from server: 74% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refcount1;
    volatile long refcount2;
};

struct VControllerService {
    void* getSomething(void** out);
};

struct BodyGyro {
    char pad[0x10];
    VControllerService svc;
    char pad2[0x2c8 - 0x10 - sizeof(VControllerService)];
    void* field2c8;
    void call1(void*);
    void call2(void*);
    void method(int a, int b);
};

void BodyGyro::method(int a, int b) {
    void* out;
    svc.getSomething(&out);
    void* v = *(void**)&out;
    void* ebx = *(void**)((char*)v + 0x2c8);
    RefCounted* rc = (RefCounted*)out;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->refcount1, -1) == 1) {
            rc->unknown1();
            if (_InterlockedExchangeAdd(&rc->refcount2, -1) == 1) {
                rc->unknown2();
            }
        }
    }
    BodyGyro* self = (BodyGyro*)((char*)this - 0x130);
    self->call1(ebx);
    self->call2(ebx);
}
