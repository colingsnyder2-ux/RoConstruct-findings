// from server: 29% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* vptr;
    long refcount;
};

extern "C" void __stdcall sub_618a40(void* out, void* in);
extern "C" void __stdcall sub_4025b0(void* dst, void* src);
extern "C" void __stdcall sub_40db00(void* self, void* arg);
extern "C" void __stdcall sub_49d200(void* self, void* arg);

struct Target {
    char pad[0x130];
    Inner* ptr130;
    Inner* ptr134;
    void method(void* arg);
};

void Target::method(void* arg)
{
    if (this->ptr130 != arg) {
        Inner* tmp = 0;
        sub_618a40(&tmp, arg);
        this->ptr130 = tmp;
        sub_4025b0(&this->ptr134, &tmp);
        if (tmp) {
            if (_InterlockedExchangeAdd(&tmp->refcount, -1) == 1) {
                void** vt = (void**)tmp->vptr;
                typedef void (__stdcall *Fn)(void*);
                ((Fn)vt[1])(tmp);
                if (_InterlockedExchangeAdd(&tmp->refcount, -1) == 1) {
                    ((Fn)vt[2])(tmp);
                }
            }
        }
        sub_40db00(this, (void*)0x97d364);
        Inner* p130 = this->ptr130;
        Inner* p134 = this->ptr134;
        void* local[2];
        local[0] = p130;
        local[1] = p134;
        if (p134) {
            _InterlockedExchangeAdd(&p134->refcount, 1);
        }
        sub_49d200((void*)0x97d330, local);
    }
}
