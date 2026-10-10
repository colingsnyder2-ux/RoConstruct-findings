// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refcount;
    long weakcount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Creator {
    void* field0;
    RefCounted* field4;
};

extern "C" void* __cdecl sub_58F4F0(void* out);

void __stdcall Creator_ctor(Creator* self, Creator* other);

void __stdcall Creator_ctor(Creator* self, Creator* other)
{
    Creator tmp;
    tmp.field0 = 0;
    tmp.field4 = 0;

    sub_58F4F0(&tmp);

    self->field0 = tmp.field0;
    self->field4 = tmp.field4;
    if (self->field4) {
        _InterlockedExchangeAdd((volatile long*)((char*)self->field4 + 4), 1);
    }

    RefCounted* old = other->field4;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                old->destroyWeak();
            }
        }
    }
}
