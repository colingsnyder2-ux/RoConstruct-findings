// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Sub150 {
    void destroy();
};

struct Sub164 {
    void destroy();
};

struct RefCounted {
    virtual void onZero();
    virtual void onZero2();
    volatile long refA;
    volatile long refB;
};

struct ClientProxy {
    void* vptr0;
    char pad0[0x0c];
    void* vptr10;
    void* vptr14;
    char pad1[0x08];
    void* vptr20;
    void* vptr24;
    char pad2[0x1c];
    void* vptr44;
    char pad3[0x1c];
    void* vptr64;
    char pad4[0x1c];
    void* vptr84;
    char pad5[0x1c];
    void* vptrA4;
    char pad6[0x1c];
    void* vptrC4;
    char pad7[0x68];
    void* vptr130;
    void* vptr134;
    char pad8[0x14];
    RefCounted* ref;
    Sub150 sub150;
    Sub164 sub164;
    void destroy();
};

void ClientProxy::destroy()
{
    this->vptr0 = (void*)0x82367c;
    this->vptr10 = (void*)0x823670;
    this->vptr14 = (void*)0x823668;
    this->vptr20 = (void*)0x823660;
    this->vptr24 = (void*)0x823650;
    this->vptr44 = (void*)0x823640;
    this->vptr64 = (void*)0x823630;
    this->vptr84 = (void*)0x823620;
    this->vptrA4 = (void*)0x823610;
    this->vptrC4 = (void*)0x823600;
    this->vptr130 = (void*)0x8235d0;
    this->vptr134 = (void*)0x8235c4;
    this->sub164.destroy();
    this->sub150.destroy();
    RefCounted* r = this->ref;
    if (r != 0) {
        if (_InterlockedExchangeAdd(&r->refA, -1) == 1) {
            r->onZero();
            if (_InterlockedExchangeAdd(&r->refB, -1) == 1) {
                r->onZero2();
            }
        }
    }
    ((void (__thiscall*)(ClientProxy*))0x4a1580)(this);
}
