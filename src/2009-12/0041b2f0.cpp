// from server: 37% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Slot {
    void invoke();
};

struct Ref {
    long count;
};

struct Conn {
    void* vptr;
    Ref* ref;
    void disconnect();
};

void Conn::disconnect() {
    Ref* local = 0;
    (void)local;
    Ref* r = this->ref;
    if (r) {
        _InterlockedExchangeAdd(&r->count, 1);
    }
    void** vt = (void**)this->vptr;
    void (*fn)() = (void (*)())vt[0];
    fn();
}
