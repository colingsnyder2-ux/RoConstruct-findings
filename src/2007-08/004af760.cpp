// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad[8];
    long refcount;
};

struct Holder {
    int* ptr;
    Inner* inner;
};

struct Outer {
    int* field0;
    Holder holder;
    void assign(int* p, int* q);
};

void __stdcall helper(Holder* h, int* p, int* q);

void Outer::assign(int* p, int* q)
{
    this->field0 = p;
    helper(&this->holder, p, q);
    if (p != 0) {
        int* pi = p + 0x29;
        if (pi != 0) {
            *pi = (int)p;
            Inner* old = this->holder.inner;
            if (old != 0) {
                _InterlockedExchangeAdd(&old->refcount, 1);
            }
            Inner* cur = (Inner*)pi[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd(&cur->refcount, -1) == 1) {
                    void** vt = *(void***)cur;
                    void (*fn)(Inner*) = (void (*)(Inner*))vt[2];
                    fn(cur);
                }
            }
            pi[1] = (int)old;
        }
    }
}
