// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct SlotBase;

struct Udata {
    void* vptr;
    long refcount;
    long weakcount;
};

struct SlotBase {
    void* a;
    void* b;
    void* c;
    void construct(void* p1, void* p2, void* p3, Udata* ud);
};

void SlotBase::construct(void* p1, void* p2, void* p3, Udata* ud)
{
    this->a = 0;
    this->b = 0;
    this->c = 0;

    void* local[4];
    local[0] = p1;
    local[1] = p2;
    local[2] = p3;
    local[3] = ud;

    if (ud) {
        _InterlockedExchangeAdd(&ud->refcount, 1);
    }

    void (*fn)(void*, void*) = *(void (**)(void*, void*))0x417fd0;
    fn(this, local);

    if (ud) {
        if (_InterlockedExchangeAdd(&ud->refcount, -1) == 1) {
            void** vt = (void**)ud->vptr;
            ((void (__thiscall*)(Udata*))vt[1])(ud);
            if (_InterlockedExchangeAdd(&ud->weakcount, -1) == 1) {
                void** vt2 = (void**)ud->vptr;
                ((void (__thiscall*)(Udata*))vt2[2])(ud);
            }
        }
    }
}
