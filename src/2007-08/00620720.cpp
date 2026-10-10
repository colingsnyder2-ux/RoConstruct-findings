// from server: 32% by colin
struct ScoreHud {
    char pad0[4];
    void* field4;
    void* field8;
    void* fieldC;
    char pad10[4];
    void method();
};

extern "C" void __stdcall sub_40A260(void*);
extern "C" void __stdcall sub_61E700(void*, void*, void*, void*);
extern "C" void __stdcall sub_62FC62(void*);

void ScoreHud::method() {
    sub_40A260(&pad10[0]);
    if (field4 != 0) {
        sub_61E700(field4, field8, this, this);
        sub_62FC62(field4);
    }
    field4 = 0;
    field8 = 0;
    fieldC = 0;
}
