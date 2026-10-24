// from server: 13% by 41k
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VBitStream {
    long refCount;
    long* ptr;
    long size;

    void IncrementRef();

    void DecrementRef();

    int ProcessData();
};

void VBitStream::IncrementRef() {
    long oldRef = _InterlockedExchangeAdd(&this->refCount, 1);
    if (oldRef == 0) {
        // Handle special case where refCount was 0
        // This might involve calling a cleanup function or similar
    }
}

void VBitStream::DecrementRef() {
    long oldRef = _InterlockedExchangeAdd(&this->refCount, -1);
    if (oldRef == 1) {
        // Handle special case where refCount was 1
        // This might involve calling a cleanup function or similar
    }
}

int VBitStream::ProcessData() {
    IncrementRef();
    // Process data logic here
    DecrementRef();
    return 0;
}
