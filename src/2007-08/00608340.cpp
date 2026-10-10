// from server: 56% by colin
struct ClumpStage {
    bool func_006063d0(int);
    void func_00607b00(int);
    void func_00607b60(int, int);
    void func_00608340(int);
};

void ClumpStage::func_00608340(int a)
{
    int* p = (int*)a;
    if (func_006063d0(a)) {
        return;
    }
    int x = *(int*)(p[2] + 0x20);
    if (x != 0) {
        int y = *(int*)(p[3] + 0x20);
        if (x == y) {
            func_00607b60(x, a);
            func_006063d0(a);
            return;
        }
        if (x != 0) {
            func_00607b00(x);
        }
    }
    int z = *(int*)(p[3] + 0x20);
    if (z != 0) {
        func_00607b00(z);
    }
    func_006063d0(a);
}
