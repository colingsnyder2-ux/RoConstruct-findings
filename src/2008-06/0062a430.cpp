// from server: 66% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ControlBlock {
    void* vptr;
    volatile long strong;
    volatile long weak;
};

struct SharedPtr {
    void* ptr;
    ControlBlock* ctrl;
};

void __cdecl assign(SharedPtr* dst, SharedPtr* src, int mode) {
    if (mode == 0) {
        if (src == 0) return;
        src->ptr = dst->ptr;
        src->ctrl = dst->ctrl;
        if (dst->ctrl) {
            _InterlockedExchangeAdd(&dst->ctrl->strong, 1);
        }
        return;
    }
    if (mode == 1) {
        ControlBlock* c = src->ctrl;
        if (c) {
            if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                ((void(__thiscall*)(ControlBlock*))((void**)c->vptr)[1])(c);
                if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                    ((void(__thiscall*)(ControlBlock*))((void**)c->vptr)[2])(c);
                }
            }
        }
        return;
    }
    return;
}
