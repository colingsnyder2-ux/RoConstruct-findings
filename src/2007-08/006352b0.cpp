// from server: 82% by colin
extern "C" __declspec(dllimport) int __stdcall PostMessageA(void*, unsigned int, unsigned int, int);

struct S_func_006352b0 {
    char pad[0x44];
    int m_44;
    char pad2[0x2c];
    void* m_74;
    char pad3[0x4c];
    void* m_c4;

    int f(int, int);
    int sub_633900();
    int sub_6338d0(int);
    int sub_633860();
    int sub_6a3940(int);
    void sub_62ff20();
};

int S_func_006352b0::f(int a, int b)
{
    int edi = sub_633900();

    if (a == 0 && m_c4 != 0) {
        if (sub_6a3940(0) == 0) {
            sub_6338d0(0);
        }
    }

    if (m_44 > 0) {
        void* p = m_74;
        if (*(void**)((char*)p + 0xc4) != 0) {
            sub_633860();
            if (sub_6a3940(0) != 0) {
                int idx = *(int*)((char*)edi + 0x10) - 1;
                if (idx >= 0 && idx < *(int*)((char*)edi + 0x10)) {
                    int* arr = *(int**)((char*)edi + 0xc);
                    int v = arr[idx];
                    if (*(int*)(v + 0x12c) != 0) {
                        PostMessageA(*(void**)(v + 0x20), 0x113, 0xccca, 0);
                    }
                } else {
                    sub_62ff20();
                }
            }
        }
    }

    return 0;
}
