// from server: 61% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxModule {
    void f(int);
};

extern "C" void* __cdecl sub_407BE0();

void CRobloxModule::f(int a) {
    void* v = sub_407BE0();
    int state = *(int*)((char*)v + 0x134) - 1;
    if (state == 0) {
        int* p = (int*)a;
        int* vt = (int*)*p;
        void (*fn)() = (void (*)())*vt;
        fn();
    } else {
        state -= 1;
        if (state == 0) {
            int* p = (int*)a;
            int* vt = (int*)*p;
            void (*fn)() = (void (*)())*vt;
            fn();
        }
    }
}
