// from server: 69% by tester
struct S {
    int field_0x24c;
    int method_0x51ebb0(int, int);
    int method_0x51ecd0(int, int);
};

int S::method_0x51ecd0(int a, int b) {
    if (a != 0 && b != 0) {
        int fn = *(int*)((char*)a + 0x24c);
        if (fn != 0)
            return ((int (__thiscall*)(int, int))fn)(a, b);
        return ((S*)a)->method_0x51ebb0(a, b);
    }
    return 0;
}
