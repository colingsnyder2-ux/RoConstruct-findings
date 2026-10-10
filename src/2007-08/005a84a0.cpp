// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
};

struct FuncDescBase {
    void setFunction(void* f);
};

struct BoundFuncDesc {
    char pad[0x180];
    void* function;
    void* boundArg;
    void assign(void* f);
};

void __stdcall sub_5e49e0(void* out, void* in);
void __stdcall sub_402a60(void* dst, void* src);
void __stdcall sub_444710(void* arg);

void BoundFuncDesc::assign(void* f)
{
    if (this->function != f) {
        void* tmp;
        sub_5e49e0(&tmp, f);
        this->function = *(void**)tmp;
        void* src = (char*)tmp + 4;
        sub_402a60(&this->boundArg, src);
        if (tmp) {
            RefCounted* rc = (RefCounted*)tmp;
            if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1) {
                void (*dtor)(void*) = *(void(**)(void*))((*(void***)rc)[1]);
                dtor(rc);
            }
            long* rc2 = (long*)((char*)rc + 8);
            if (_InterlockedExchangeAdd(rc2, -1) == 1) {
                void (*dtor2)(void*) = *(void(**)(void*))((*(void***)rc)[2]);
                dtor2(rc);
            }
        }
        sub_444710((void*)0x8c59ac);
    }
}
