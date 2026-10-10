// from server: 37% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    long refCount;
};

struct FuncDescBase {
    void** vptr;
    void* function;
};

struct BoundFuncDesc {
    void** vptr;
    void* function;
    void** vptr2;
    void* data;

    void construct(void* function, const char* name, int security, int attributes);
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

void BoundFuncDesc::construct(void* function, const char* name, int security, int attributes)
{
    int local = 0;
    if (sub_4879D0(&local)) {
        // already constructed
    } else {
        this->vptr2 = (void**)0x5a7750;
        this->vptr = (void**)0x5a6f30;
        void* mem = sub_62FEF6(8);
        if (mem) {
            *(int*)mem = local;
            *(int*)((char*)mem + 4) = *(int*)((char*)&local + 4);
            int* rc = (int*)((char*)&local + 4);
            if (rc) {
                _InterlockedExchangeAdd((volatile long*)((char*)rc + 4), 1);
            }
        }
        this->function = mem;
    }
    int* rc2 = (int*)((char*)&local + 4);
    if (rc2) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)rc2 + 4), -1) == 1) {
            void** vt = *(void***)rc2;
            void (*dtor)(void*) = (void (*)(void*))vt[1];
            dtor(rc2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)rc2 + 8), -1) == 1) {
                void** vt2 = *(void***)rc2;
                void (*dtor2)(void*) = (void (*)(void*))vt2[2];
                dtor2(rc2);
            }
        }
    }
}
