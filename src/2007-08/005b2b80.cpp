// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct Instance {
    virtual int getType();
};

struct JointsService {
    void onAutoJoin(Instance* instance, Instance* target);
};

struct JointsServiceImpl {
    char pad[0xE8];
    void onAutoJoin(Instance* instance, Instance* target);
};

void JointsServiceImpl::onAutoJoin(Instance* instance, Instance* target) {
    int type = instance->getType();
    switch (type) {
    case 1:
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    default:
        break;
    }
}
