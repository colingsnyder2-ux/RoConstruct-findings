// from server: 81% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct placeholder {
    void* field0;
    long* field4;
    void* __cdecl copy_from(placeholder* src);
};

void* placeholder::copy_from(placeholder* src) {
    void* p = src->field0;
    void* result;
    if (p != 0) {
        result = (char*)p + 0x18;
    } else {
        result = 0;
    }
    this->field0 = result;
    long* ref = src->field4;
    this->field4 = ref;
    if (ref != 0) {
        _InterlockedExchangeAdd(ref + 1, 1);
    }
    return this;
}
