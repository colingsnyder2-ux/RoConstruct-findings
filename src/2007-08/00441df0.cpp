// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ContentId {
    void* vfptr;
    int refcount1;
    int refcount2;
};

struct SoundIdHolder {
    char pad[0x8c];
    void assign(const void* p);
};

struct SoundIdOwner {
    char pad[0x1c4];
    void set(const void* p);
};

struct VSoundIdItem {
    void construct(const void* a, const void* b, const void* c);
};

void SoundIdHolder::assign(const void* p) {
    (void)p;
}

void SoundIdOwner::set(const void* p) {
    (void)p;
}

void VSoundIdItem::construct(const void* a, const void* b, const void* c) {
    SoundIdOwner* owner = (SoundIdOwner*)((char*)this + 0x1c4);
    owner->set(a);

    void* container = 0;
    if (this != 0) {
        container = (char*)this + 0x17c;
    }

    if (b != 0) {
        SoundIdHolder* holder = (SoundIdHolder*)((char*)b + 0x8c);
        holder->assign(container);
    }

    if (c != 0) {
        ContentId* sid = (ContentId*)c;
        if (_InterlockedExchangeAdd((volatile long*)&sid->refcount1, -1) == 1) {
            void** vt = (void**)sid->vfptr;
            void (__thiscall *fn)(ContentId*) = (void (__thiscall *)(ContentId*))vt[1];
            fn(sid);
            if (_InterlockedExchangeAdd((volatile long*)&sid->refcount2, -1) == 1) {
                void** vt2 = (void**)sid->vfptr;
                void (__thiscall *fn2)(ContentId*) = (void (__thiscall *)(ContentId*))vt2[2];
                fn2(sid);
            }
        }
    }
}
