// from server: 93% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct IdSerializer {
};

void __cdecl f(int* dst, unsigned int count, int* src)
{
    if (count == 0)
        return;
    do {
        if (dst) {
            dst[0] = src[0];
            dst[1] = src[1];
            int r = src[2];
            dst[2] = r;
            if (r) {
                _InterlockedExchangeAdd((volatile long*)(r + 4), 1);
            }
        }
        --count;
        dst += 3;
    } while (count > 0);
}
