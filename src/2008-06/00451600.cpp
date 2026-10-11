// from server: 34% by colin
struct S_func_00451600 {
    char pad0[24];
    void* m_tree;
    void* m_unk;
    void f(void* a, void* b);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

void S_func_00451600::f(void* a, void* b)
{
    void* node = m_tree;
    void* header = *(void**)((char*)node + 4);
    void* result = node;
    if (*(char*)((char*)header + 0x15) == 0) {
        int key = *(int*)a;
        while (1) {
            if (*(int*)((char*)header + 0xc) >= key) {
                result = header;
                header = *(void**)header;
            } else {
                header = *(void**)((char*)header + 8);
            }
            if (*(char*)((char*)header + 0x15) != 0)
                break;
        }
    }
    void* tmp1 = *(void**)this;
    void* tmp2 = m_tree;
    void* local1 = result;
    void* local2 = tmp1;
    if (tmp1 != 0) {
        if (tmp1 != tmp1)
            _invalid_parameter_noinfo();
    }
    if (result != tmp2 && *(int*)a >= *(int*)((char*)result + 0xc)) {
        *(void**)b = *(void**)((char*)&local1);
        *(void**)((char*)b + 4) = *(void**)((char*)&local1 + 4);
    } else {
        void* local3 = m_tree;
        void* local4 = *(void**)this;
        *(void**)b = local4;
        *(void**)((char*)b + 4) = local3;
    }
}
