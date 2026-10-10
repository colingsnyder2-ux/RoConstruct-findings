// from server: 30% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CreatorBase {
    void construct(int* a, int* b);
};

struct Creator {
    int* field0;
    int* field4;
    void construct(int* a, int* b);
};

void CreatorBase::construct(int* a, int* b) {
}

void Creator::construct(int* a, int* b) {
    this->field0 = a;
    CreatorBase* base = (CreatorBase*)((char*)this + 4);
    base->construct(a, b);
    if (a != 0) {
        int* p = (int*)((char*)a + 0xa4);
        if (p != 0) {
            *p = (int)a;
            int* old = this->field4;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            int* cur = *(int**)((char*)p + 4);
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    (*(void(**)(int*))(*(int*)cur + 8))(cur);
                }
            }
            *(int**)((char*)p + 4) = old;
        }
    }
}
