// from server: 17% by colin
struct CXTPCustomizeSheet {
    void sub_73872A();
    void sub_6F2780();
    void sub_630AF7(int, int, int, void *);
    void sub_6304BA();
    void sub_7386EE();
    void sub_7384DE();
    void sub_630412();
    void func_006743D0();
    char pad[0x74];
    int field_74;
};

void CXTPCustomizeSheet::func_006743D0()
{
    sub_73872A();
    sub_6F2780();
    sub_73872A();
    sub_73872A();
    sub_630AF7(0x5c, 0x10, 0x6737a0, (char *)this + 0x29c);
    sub_6304BA();
    sub_7386EE();
    sub_6304BA();
    sub_7386EE();
    sub_7384DE();
    sub_7384DE();
    sub_630412();
}
