// from server: 48% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct CreatorBase {
    int field0;
    int field4;
    void sub_48BE60(int a, int b);
};

struct Creator : CreatorBase {
    Creator(int a, int b);
};

Creator::Creator(int a, int b)
{
    this->field0 = a;
    this->sub_48BE60(a, b);
    if (a != 0) {
        RefCounted* p = (RefCounted*)((char*)a + 0xa4);
        if (p != 0) {
            *(int*)p = a;
            RefCounted* old = (RefCounted*)this->field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            RefCounted* cur = *(RefCounted**)((char*)p + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void (__thiscall *fn)(RefCounted*) = *(void (__thiscall **)(RefCounted*))(*(int*)cur + 8);
                    fn(cur);
                }
            }
            *(RefCounted**)((char*)p + 4) = old;
        }
    }
}
