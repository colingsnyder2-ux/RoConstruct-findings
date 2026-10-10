// from server: 69% by colin
struct CChatPrompt {
    void sub_40CC60(int, int);
    void* GetFocus();
};


extern "C" void* __stdcall sub_6301C0(void*);

void CChatPrompt::sub_40CC60(int a, int b) {
    void* focus = GetFocus();
    void* result = sub_6301C0(focus);
    int* p = (int*)a;
    int* obj = (int*)*p;
    void (__thiscall *fn1)(void*, int) = (void (__thiscall *)(void*, int))obj[0x38 / 4];
    if (result == (void*)this) {
        fn1((void*)a, 0);
        fn1((void*)a, 0xfae6e6);
    } else {
        fn1((void*)a, 0xc8ffff);
        fn1((void*)a, 0x404040);
    }
    int* obj2 = (int*)*p;
    void (__thiscall *fn2)(void*, int) = (void (__thiscall *)(void*, int))obj2[0x34 / 4];
    fn2((void*)a, 0x404040);
    int* q = (int*)((char*)this + 0x94);
    if (q != 0) {
        q = (int*)q[1];
    }
}
