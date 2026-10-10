// from server: 36% by colin
struct ClumpStage {
    char pad[0xb4];
    int field_b4;
    int field_b8;
    bool func_6050a0(int);
    void func_605110(int);
    void func_605550(int*, int*);
    void func_605b30(int*);
    void func_606c70(int);

    void func_607a70(int param);
};

extern "C" int __stdcall func_5b4830(int);
extern "C" void __stdcall func_77e6d8();

void ClumpStage::func_607a70(int param)
{
    char local[8];
    if (!func_6050a0(param)) {
        int v = func_5b4830(*(int*)(param + 8));
        func_606c70(v);
    }
    func_605110(param);
    int saved = field_b8;
    int* p = (int*)((char*)this + 0xb4);
    *(int*)(local + 4) = param;
    func_605550((int*)local, (int*)(local + 4));
    int* ebx = (int*)*(int*)local;
    if (ebx != 0 && ebx != p) {
        func_77e6d8();
    }
    if (*(int*)((char*)local + 4) != saved) {
        *(int*)(local + 4) = param;
        func_605b30((int*)local);
    }
}
