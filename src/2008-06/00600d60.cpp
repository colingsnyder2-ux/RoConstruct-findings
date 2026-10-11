// from server: 31% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_6A17C6(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_4025B0(void*);

struct BoundPropGetSet {
    void* field0;
    void* field4;
    void* method(void* arg0, void* arg1);
};

void* BoundPropGetSet::method(void* arg0, void* arg1)
{
    void* p = *(void**)arg0;
    void* r = sub_6A17C6(p, (void*)0x92907c, (void*)0x94676c, (void*)0, (void*)0);
    this->field0 = r;

    void* q = *(void**)((char*)arg0 + 4);
    this->field4 = q;
    if (q != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }

    if (this->field0 == 0) {
        void* tmp = 0;
        sub_4025B0(&tmp);
    }

    return this;
}
