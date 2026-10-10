// from server: 18% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
};

struct FuncDesc {
    char pad[0x170];
    void* funcPtr;
    void* boundArg;
    void assign(void* arg);
};

extern "C" void __cdecl sub_5e49e0(void* dst, void* src);
extern "C" void __cdecl sub_402a60(void* dst, void* src);
extern "C" void __cdecl sub_444710(void* self, void* arg);

void FuncDesc::assign(void* arg)
{
    if (this->funcPtr != arg) {
        void* tmp;
        sub_5e49e0(&tmp, arg);
        this->funcPtr = *(void**)&tmp;
        sub_402a60(&this->boundArg, (char*)&tmp + 4);
        if (tmp) {
            RefCounted* rc = (RefCounted*)tmp;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                typedef void (__thiscall *Fn)(void*);
                ((Fn)rc->vptr[1])(rc);
                if (_InterlockedExchangeAdd((volatile long*)((char*)rc + 8), -1) == 1) {
                    ((Fn)rc->vptr[2])(rc);
                }
            }
        }
        sub_444710(this, (void*)0x8c5944);
    }
}
