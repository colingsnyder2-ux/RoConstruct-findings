// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct CreatorBase {
    int field0;
    int field4;
    void sub_48B6E0(void* a, void* b);
};

struct Creator : CreatorBase {
    Creator(void* a, void* b);
};

Creator::Creator(void* a, void* b)
{
    this->field0 = (int)a;
    this->sub_48B6E0(a, b);

    if (a != 0) {
        int* p = (int*)((char*)a + 0xa4);
        if (p != 0) {
            p[0] = (int)a;

            int* old = (int*)this->field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }

            int* cur = (int*)p[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = (void**)cur[0];
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(cur);
                }
            }

            p[1] = (int)old;
        }
    }
}
