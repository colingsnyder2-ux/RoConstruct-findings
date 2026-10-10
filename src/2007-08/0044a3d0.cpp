// from server: 51% by colin
// roc 2007-08 0044a3d0  unit: CRobloxModule  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a3d0

extern "C" int __cdecl sub_409920();
extern "C" char __cdecl sub_4085f0();

struct CRobloxModule {
    int method(int* arg);
};

int CRobloxModule::method(int* arg) {
    int state = sub_409920();
    state = *(int*)(state + 0xec);
    state = state - 1;
    if (state == 0) {
        if (sub_4085f0()) {
            int* p = arg;
            int* vtbl = (int*)*p;
            int fn = vtbl[0];
            arg = (int*)1;
            return ((int (__cdecl*)(int*))fn)(arg);
        }
    } else {
        state = state - 1;
        if (state == 0) {
            int* p = arg;
            int* vtbl = (int*)*p;
            int fn = vtbl[0];
            arg = (int*)1;
            return ((int (__cdecl*)(int*))fn)(arg);
        }
    }
    return 0;
}
