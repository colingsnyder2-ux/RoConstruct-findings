// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace RBX {
class Instance { public: virtual ~Instance(); char pad[0x100]; Instance* next; };
class ServiceProvider : public Instance { public: ServiceProvider* finish(); };
}

RBX::ServiceProvider* func_00492e00(RBX::Instance* p);

struct RefCounted {
    virtual void Release();
};

struct CameraModelViewCommand {
    int field0;
    int field4;
    int field8;
    int Get();
};

void* func_00618a40(void*, void*);
void func_004025b0(void*, void*);

int CameraModelViewCommand::Get() {
    if (this->field4 == 0) {
        RBX::ServiceProvider* sp = func_00492e00((RBX::Instance*)this->field0);
        void* tmp = 0;
        void* obj = func_00618a40(sp, &tmp);
        this->field4 = *(int*)obj;
        func_004025b0(&this->field8, (char*)obj + 4);
        RefCounted* rc = (RefCounted*)tmp;
        if (rc) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 4), -1) == 1) {
                rc->Release();
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                rc->Release();
            }
        }
    }
    return this->field4;
}
