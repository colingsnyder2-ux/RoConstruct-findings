// from server: 33% by Cezant64gamejr
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CXTIconHandle {
    long refCount;
    long someValue;

    long getRef();
};

long CXTIconHandle::getRef() {
    long oldValue = _InterlockedExchangeAdd(&this->refCount, 1);
    return oldValue;
}
