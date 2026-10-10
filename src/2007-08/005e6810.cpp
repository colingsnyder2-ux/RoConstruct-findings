// from server: 71% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FactoryProduct {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
    void* field14;
};

struct RefCounted {
    void* vptr;
    long refCount;
    long weakCount;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void FactoryProduct_ctor(FactoryProduct* self, int flag);
void FactoryProduct_dtor(FactoryProduct* self);

void FactoryProduct_ctor(FactoryProduct* self, int flag) {
    if (flag == 0) {
        FactoryProduct* p = (FactoryProduct*)operator_new(0x18);
        if (p != 0) {
            p->field0 = self->field0;
            p->field4 = self->field4;
            p->field8 = self->field8;
            p->fieldC = self->fieldC;
            p->field10 = self->field10;
            p->field14 = self->field14;
            if (p->field14 != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)p->field14 + 4), 1);
            }
        }
    } else {
        RefCounted* r = (RefCounted*)self->field14;
        if (r != 0) {
            if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
                void (__thiscall *fn)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)r->vptr + 4);
                fn(r);
                if (_InterlockedExchangeAdd(&r->weakCount, -1) == 1) {
                    void (__thiscall *fn2)(RefCounted*) = *(void (__thiscall **)(RefCounted*))((char*)r->vptr + 8);
                    fn2(r);
                }
            }
        }
        operator_delete(self);
    }
}
