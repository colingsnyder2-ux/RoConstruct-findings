// from server: 7% by colin
struct S {
    char pad0[0xc];
    char field_c;
    char pad_d[0xb];
    char field_18;
    void method_4f4730();
    void method_4f4d30();
    ~S();
};

void S::method_4f4730() {}
void S::method_4f4d30() {}

S::~S() {
    *(int*)this = 0x79f754;
    method_4f4730();
    *(int*)this = 0x797984;
    method_4f4d30();
}
