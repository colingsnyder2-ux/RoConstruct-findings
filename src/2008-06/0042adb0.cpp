// from server: 76% by colin
struct S_func_0042adb0 {
    int f(int a1, int a2, int a3);
};

extern "C" int __cdecl sub_0042AD40(const char* a1, const char* a2);

int S_func_0042adb0::f(int a1, int a2, int a3)
{
    int* out = (int*)a2;
    *out = 0;
    if (sub_0042AD40((const char*)0x8501cc, (const char*)a1)) {
        *out = a3;
        int* v = (int*)a3;
        int* vt = (int*)*v;
        void (__stdcall *fn)(int*) = (void (__stdcall *)(int*))vt[1];
        fn((int*)a3);
        return 0;
    }
    if (sub_0042AD40((const char*)0x85021c, (const char*)a1)) {
        *out = a3;
        int* v = (int*)a3;
        int* vt = (int*)*v;
        void (__stdcall *fn)(int*) = (void (__stdcall *)(int*))vt[1];
        fn((int*)a3);
        return 0;
    }
    return (int)0x80004002;
}
