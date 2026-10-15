// from server: 59% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct CRobloxModule {
    void f(int);
};

extern "C" int __cdecl sub_407BE0();
extern "C" bool __cdecl sub_4061E0();

void CRobloxModule::f(int a) {
    int v = sub_407BE0();
    int state = *(int*)(v + 0x134) - 1;
    if (state != 0) {
        if (sub_4061E0()) {
            int* p = (int*)a;
            int* vt = (int*)*p;
            void (*fn)() = (void (*)())*vt;
            fn();
        }
    } else if (state == 1) {
        int* p = (int*)a;
        int* vt = (int*)*p;
        void (*fn)() = (void (*)())*vt;
        fn();
    }
}
