// from server: 42% by colin
struct S {
    char pad[0x18];
    int* field18;
    int field1c;
    void f();
};

extern "C" int __cdecl sub_545550();
extern "C" char* __cdecl sub_541D90(int*);
extern "C" int* __cdecl sub_5423F0();
extern "C" int* __cdecl sub_5508E0();
extern "C" int* __cdecl sub_54CEC0();

void S::f() {
    field18 = (int*)sub_545550();
    *sub_541D90(field18) = 1;
    *sub_5423F0() = (int)field18;
    *sub_5508E0() = (int)field18;
    *sub_54CEC0() = (int)field18;
    field1c = 0;
}
