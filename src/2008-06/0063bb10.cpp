// from server: 61% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

bool func_0060a2f0();

struct GetSetImpl {
    void* vptr;
    int field4;
    int field8;
    int fieldC;
    void construct(int* src);
};

void GetSetImpl::construct(int* src)
{
    if (!func_0060a2f0()) {
        int* dst = (int*)((char*)this + 8);
        if (dst) {
            dst[0] = src[0];
            dst[1] = src[1];
            dst[2] = src[2];
            if (dst[2]) {
                _InterlockedExchangeAdd((volatile long*)(dst[2] + 4), 1);
            }
        }
        *(int*)this = 0x849970;
    } else {
        *(int*)this = 0;
    }
}
