// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void sub_48A9B0(void*, void*);
};

struct Outer {
    Inner* field0;
    Inner* field4;
    void construct(void* a, void* b);
};

void Outer::construct(void* a, void* b)
{
    Inner* p = (Inner*)a;
    this->field0 = p;
    ((Inner*)((char*)this + 4))->sub_48A9B0(a, b);
    if (p != 0) {
        Inner** slot = (Inner**)((char*)p + 0xa4);
        if (slot != 0) {
            *slot = p;
            Inner* q = this->field4;
            if (q != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)q + 8), 1);
            }
            Inner* r = slot[1];
            if (r != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                    (*(void(**)(Inner*))(*(void***)r)[2])(r);
                }
            }
            slot[1] = q;
        }
    }
}
