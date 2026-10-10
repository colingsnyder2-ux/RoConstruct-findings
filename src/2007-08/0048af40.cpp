// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Creator {
    void* field0;
    void* field4;
    void* field8;

    Creator(void* a, void* b);
};

void constructHelper(void* self, void* a, void* b);

Creator::Creator(void* a, void* b)
{
    field0 = a;
    constructHelper(&field4, a, b);
    if (a != 0) {
        void** p = (void**)((char*)a + 0xa4);
        if (p != 0) {
            *p = a;
            void* old = field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = p[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = *(void***)cur;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(cur);
                }
            }
            p[1] = old;
        }
    }
}
