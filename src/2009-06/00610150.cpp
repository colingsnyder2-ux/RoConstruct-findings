// from server: 45% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long ref1;
    volatile long ref2;
};

struct Inner {
    char pad[0xa4];
    void* begin;
    void* end;
};

struct Holder {
    char pad0[0xc];
    Inner* inner;
};

struct Sub {
    char pad[0x118];
    void* vptr;
};

struct Obj {
    char pad[0x13c];
    int flag;
};

struct CameraCenterCommand {
    char pad0[0xc];
    Holder* holder;
    bool execute();
};

bool CameraCenterCommand::execute() {
    Inner* inner = this->holder->inner;
    void* b = inner->begin;
    void* e = inner->end;
    bool result = ((char*)e - (char*)b) >> 2 >= 1;

    RefCounted* rc = (RefCounted*)b;
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            void** vt = rc->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(rc);
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                void** vt2 = rc->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(rc);
            }
        }
    }

    if (result) {
        Holder* h = this->holder;
        Sub* s = (Sub*)((char*)h + 0x118);
        void** vt = (void**)s->vptr;
        Obj* o = (Obj*)((void* (__thiscall*)(Sub*))vt[1])(s);
        if (o && o->flag == 0) {
            return true;
        }
    }
    return false;
}
