// from server: 46% by colin
struct S_func_0054e090 {
    char pad[0x28];
    unsigned int m_28;
    unsigned int m_2c;
    void f(unsigned int arg);
};

extern "C" {
    void __stdcall sub_77e698(void*);
    void __stdcall sub_77e6ac(void*);
    void __stdcall sub_412dc0(void*, void*);
}

void S_func_0054e090::f(unsigned int arg) {
    char buf[8];
    sub_77e698(buf);
    sub_412dc0(this, buf);
    *(unsigned int*)this = 0x7a783c;
    sub_77e6ac(buf);
    m_28 = arg;
    *(unsigned int*)this = 0x7a7af4;
    m_2c = *(unsigned int*)0x7ba580;
}
