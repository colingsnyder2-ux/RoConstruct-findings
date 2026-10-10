// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FactoryProductCreator {
    int* field0;
    int* field4;
    void init(int* a, int* b);
};

void FactoryProductCreator::init(int* a, int* b)
{
    field0 = a;
    if (a != 0) {
        int* p = (int*)((char*)a + 0xa4);
        if (p != 0) {
            *p = (int)a;
            int* old = field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            int* cur = *(int**)((char*)p + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    (*(void(__thiscall**)(int*))(*(int*)cur + 8))(cur);
                }
            }
            *(int**)((char*)p + 4) = old;
        }
    }
}
