// from server: 72% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vfptr;
    long refCount;
};

struct SharedPtr {
    void* ptr;
    void* control;
};

struct Item {
    void* vfptr;
    int field4;
    int field8;
    int fieldC;
    SharedPtr shared;
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void __cdecl sub_62fef6();
void __cdecl sub_62fc62();

struct Replicator {
    Item* DeleteInstanceItem(int flag, Item* src);
};

Item* Replicator::DeleteInstanceItem(int flag, Item* src) {
    if (flag == 0) {
        Item* p = (Item*)operator_new(0x18);
        if (p == 0)
            return 0;
        p->vfptr = src->vfptr;
        p->field4 = src->field4;
        p->field8 = src->field8;
        p->fieldC = src->fieldC;
        p->shared = src->shared;
        if (p->shared.control != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)p->shared.control + 4), 1);
        }
        return p;
    } else {
        Item* p = src;
        void* ctrl = p->shared.control;
        if (ctrl != 0) {
            if (_InterlockedExchangeAdd((volatile long*)((char*)ctrl + 4), -1) == 1) {
                void** vt = *(void***)ctrl;
                ((void (__thiscall*)(void*))vt[1])(ctrl);
                if (_InterlockedExchangeAdd((volatile long*)((char*)ctrl + 8), -1) == 1) {
                    void** vt2 = *(void***)ctrl;
                    ((void (__thiscall*)(void*))vt2[2])(ctrl);
                }
            }
        }
        operator_delete(p);
        return 0;
    }
}
