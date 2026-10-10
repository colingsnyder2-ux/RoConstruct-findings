// from server: 22% by colin
struct CArrayDerived {
    char pad[0x20];
    char pad2[0x1C];
    void* ptr40;
    void sub_661DD0();
    void sub_661D50();
    void sub_63069A();
    void destroy();
};

extern "C" void __stdcall sub_6301E4(void* p);

void CArrayDerived::destroy()
{
    this->sub_661DD0();
    if (this->ptr40 != 0) {
        sub_6301E4(this->ptr40);
    }
    this->sub_661D50();
    this->sub_63069A();
}
