// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    long refcount;
};

struct MarshaledListener {
    void* vptr;
    int field4;
    int field8;
    int fieldC;
    int field10;
    RefCounted* field14;
    int field18;
    RefCounted* field1C;
    void ctor(int a, int b, int c, int d, RefCounted* e, int f, RefCounted* g, int h);
};

void sub_454150(MarshaledListener* self, int arg);
void sub_41DA00(void* p);

void MarshaledListener::ctor(int a, int b, int c, int d, RefCounted* e, int f, RefCounted* g, int h)
{
    this->vptr = (void*)0x787f88;
    this->field4 = 0;
    this->field8 = 0;
    this->fieldC = a;
    this->field10 = b;
    this->field14 = e;
    if (e == 0) {
        _InterlockedExchangeAdd(&e->refcount, 1);
    }
    this->field18 = f;
    this->field1C = g;
    if (g != 0) {
        _InterlockedExchangeAdd(&g->refcount, 1);
    }
    sub_454150(this, c);
    sub_41DA00(&this->field1C);
}
