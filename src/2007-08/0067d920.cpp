// from server: 70% by colin
struct CXTPControlWorkspaceActions {
    char pad[0xf4];
    void* field_f4;
    void sub_67D2A0(int, int, const char*, int, int);
    int sub_68DBF0(int, int);
    void func(int, int, int);
};

void CXTPControlWorkspaceActions::func(int a, int b, int c) {
    int* p = (int*)c;
    if (sub_68DBF0(a, b)) {
        int v = *p;
        *p = v + 1;
        sub_67D2A0(1, v, (const char*)0x785954, b, 1);
    }
}
