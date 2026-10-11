// from server: 39% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct EventDesc {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

struct VPlayer {
    char pad[0x18];
    void* field18;
    void AddEventDesc(EventDesc* desc);
};

void VPlayer::AddEventDesc(EventDesc* desc)
{
    EventDesc local;
    local.field0 = desc->field0;
    local.field4 = desc->field4;
    local.field8 = desc->field8;
    local.fieldC = desc->fieldC;

    RefCounted* rc = (RefCounted*)desc;
    if (rc != 0) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }

    ((void (__thiscall*)(VPlayer*, EventDesc*))0x6b1e10)(this, &local);

    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }
}
