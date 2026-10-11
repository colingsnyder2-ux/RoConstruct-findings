// from server: 69% by tester
struct RunService {
    char pad[0x14];
    int field14;
    char pad2[0x130 - 0x18];
    int field130;
    char pad3[0x1b8 - 0x134];
    double field1b8;
    void sub_5559a0();
    void sub_554960(int, int);
    void func(int);
};

extern "C" int (__thiscall *sub_56b620)(int, int);
extern "C" void __stdcall sub_4937f0(int, int);

void RunService::func(int arg)
{
    sub_5559a0();
    float f1 = (float)field1b8;
    int i1 = *(int*)&f1;
    float f2 = *(float*)&arg;
    int i2 = *(int*)&f2;
    sub_554960(i1, i2);
    int r = sub_56b620(0x973b40, (int)(this->pad + 0x14));
    if (r != 0) {
        float f3 = *(float*)&arg;
        int i3 = *(int*)&f3;
        sub_4937f0(r + 0x10, i3);
    }
}
