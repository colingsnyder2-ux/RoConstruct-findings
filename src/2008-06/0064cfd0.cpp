// from server: 32% by colin
struct ClumpStage {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    char field10[0x68];
    ClumpStage(int, int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __stdcall sub_669870(void*, int, int);
extern "C" void __stdcall sub_64B2A0(void*, int*, int*);

ClumpStage::ClumpStage(int a2, int a3) {
    void* p = operator_new(0x78);
    if (p) {
        sub_669870(p, (int)this, a3);
    } else {
        p = 0;
    }
    field4 = a2;
    field8 = (int)p;
    fieldC = a3;
    vtable = (void*)0x84b14c;
    int local1 = 0;
    int local2 = 0;
    sub_64B2A0(this->field10, &local1, &local2);
}
