// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    int field0;
    RefCounted* field4;
    char pad[0x9c];
    RefCounted* fieldA4;
    RefCounted* fieldA8;
};

struct Sub {
    void init(RefCounted* other, int arg);
};

struct Players {
    int field0;
    RefCounted* field4;
    char pad[0x9c];
    RefCounted* fieldA4;
    RefCounted* fieldA8;

    Players* construct(RefCounted* other, int arg);
};

Players* Players::construct(RefCounted* other, int arg) {
    this->field0 = (int)other;
    ((Sub*)((char*)this + 4))->init(other, arg);

    if (other != 0) {
        RefCounted* p = (RefCounted*)((char*)other + 0xa4);
        if (p != 0) {
            p->field0 = (int)other;
            RefCounted* old = this->field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            RefCounted* old2 = p->field4;
            if (old2 != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)old2 + 8), -1) == 1) {
                    void** vtbl = *(void***)old2;
                    void (*fn)(void) = (void (*)(void))vtbl[2];
                    fn();
                }
            }
            p->field4 = old;
        }
    }
    return this;
}
