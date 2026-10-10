// from server: 50% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct CreatorBase {
    void construct(Name* n, int arg);
};

struct RefCounted {
    long refCount;
    virtual void destroy();
};

struct Holder {
    RefCounted* ptr;
    RefCounted* prev;
};

struct Creator {
    Name* name;
    Holder holder;
    Creator(Name* n, int arg);
};

Creator::Creator(Name* n, int arg) {
    this->name = n;
    ((CreatorBase*)((char*)this + 4))->construct(n, arg);
    if (n != 0) {
        Holder* h = (Holder*)((char*)n + 0xa4);
        if (h != 0) {
            h->ptr = (RefCounted*)n;
            RefCounted* p = this->holder.ptr;
            if (p != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)p + 8), 1);
            }
            RefCounted* old = h->prev;
            if (old != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                    old->destroy();
                }
            }
            h->prev = p;
        }
    }
}
