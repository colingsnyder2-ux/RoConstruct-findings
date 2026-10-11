// from server: 69% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool func_0060a2f0();

struct Inner {
    void release();
};

struct Holder {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
};

struct S {
    int field0;
    Holder holder;
    int method(int, int, int, int, int, int);
};

int S::method(int a1, int a2, int a3, int a4, int a5, int a6)
{
    int local;
    this->field0 = 0;
    if (func_0060a2f0()) {
        ((Inner*)((char*)&this->holder + 4))->release();
        this->field0 = 0;
        return (int)this;
    }
    Holder* h = &this->holder;
    if (h) {
        h->field0 = a1;
        h->field4 = a2;
        h->field8 = a3;
        if (a3) {
            _InterlockedExchangeAdd((volatile long*)(a3 + 4), 1);
        }
        h->fieldC = a4;
        h->field10 = a5;
        if (a5) {
            _InterlockedExchangeAdd((volatile long*)(a5 + 4), 1);
        }
    }
    ((Inner*)((char*)&this->holder + 4))->release();
    this->field0 = 0x82175c;
    return (int)this;
}
