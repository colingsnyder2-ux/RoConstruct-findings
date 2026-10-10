// from server: 24% by colin
struct S {
    void* f(void*);
};

extern "C" void __cdecl sub_54D560();
extern "C" void __cdecl sub_54C6E0();
extern "C" void __cdecl sub_40CC20();

void* S::f(void* arg) {
    char buf[0x28];
    void* p1;
    void* p2;
    void* p3;
    void* p4;
    void* p5;
    void* result;

    p1 = (void*)((char*)&buf[0x38] - 0x28);
    p2 = (void*)((char*)&buf[0x03] - 0x28);
    p3 = (void*)((char*)&buf[0x40] - 0x28);
    p4 = (void*)((char*)&buf[0x0c] - 0x28);
    p5 = (void*)((char*)&buf[0x18] - 0x28);

    sub_54D560();
    sub_54C6E0();
    sub_40CC20();
    return result;
}
