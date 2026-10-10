// from server: 95% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BoundFuncDesc {
    struct Entry {
        int a;
        int b;
        volatile long* ref;
    };
    static Entry* copy(Entry* first, Entry* last, Entry* dest);
};

BoundFuncDesc::Entry* BoundFuncDesc::copy(Entry* first, Entry* last, Entry* dest) {
    while (first != last) {
        if (dest) {
            dest->a = first->a;
            dest->b = first->b;
            volatile long* r = first->ref;
            dest->ref = r;
            if (r) {
                _InterlockedExchangeAdd(r + 1, 1);
            }
        }
        ++first;
        ++dest;
    }
    return dest;
}
