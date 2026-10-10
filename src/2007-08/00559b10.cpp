// from server: 50% by colin
struct S {
    int f(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl func_62fc62(void*);
extern "C" int __cdecl func_5594f0(void*, int);

int S::f(int arg) {
    if (arg == 0) {
        void* p = operator_new(0x18);
        if (p != 0) {
            func_5594f0(p, arg);
        }
        return (int)p;
    } else {
        int* q = (int*)arg;
        if (q[1] != 0) {
            int (*fn)(int, int) = (int (*)(int, int))q[1];
            q[2] = fn(q[2], 1);
        }
        q[1] = 0;
        q[3] = 0;
        func_62fc62(q);
        return 0;
    }
}
