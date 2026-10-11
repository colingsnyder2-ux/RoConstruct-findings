// from server: 5% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* rep;
};

struct CreatorBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct Creator : CreatorBase {
    void* field4;
    long refcount8;
    long refcountC;
};

struct Registry {
    char pad[0x19c];
    void* begin;
    void* end;
};

struct FactoryProduct {
    char pad[0x1a0];
};

extern "C" void* __stdcall make_value_0057d800();
extern "C" void __stdcall func_0057f710(void*);
extern "C" void __stdcall func_0057fd20();
extern "C" void __stdcall func_00557330(void*, void*, void*);
extern "C" void __stdcall func_0055a8f0(void*, void*);
extern "C" void __stdcall func_004025b0(void*, void*);
extern "C" void __stdcall func_00802890();

struct VVelocityMotor_FactoryProduct_Creator {
    int ctor();
};

int VVelocityMotor_FactoryProduct_Creator::ctor() {
    if (func_0057fd20(), 0) {
    }
    return 0;
}
