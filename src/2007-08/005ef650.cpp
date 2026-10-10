// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct PartInstance;

struct RefCountedBase
{
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct SharedPtrStorage
{
    PartInstance* ptr;
};

struct Rocket
{
    char pad0[0x100];
    PartInstance* target;
    SharedPtrStorage targetStorage;
    char pad1[0x10];
    bool firedEvent;
    void setTarget(PartInstance* value);
};

extern "C" void __cdecl sub_5E49E0(SharedPtrStorage* out, PartInstance* value);
extern "C" void __cdecl sub_402A60(SharedPtrStorage* dest, SharedPtrStorage* src);
extern "C" void __cdecl sub_444710(Rocket* self, const char* name);

void Rocket::setTarget(PartInstance* value)
{
    if (this->target != value)
    {
        SharedPtrStorage tmp;
        sub_5E49E0(&tmp, value);
        this->target = tmp.ptr;
        sub_402A60(&this->targetStorage, &tmp);

        if (tmp.ptr)
        {
            RefCountedBase* p = (RefCountedBase*)tmp.ptr;
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1)
            {
                p->unknown1();
            }
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1)
            {
                p->unknown2();
            }
        }

        this->firedEvent = false;
        sub_444710(this, (const char*)0x8c7768);
    }
}
