// from server: 35% by colin
struct COutputView {
    char pad[0xf8];
    int field_f8;
    char pad2[0x118 - 0xf8 - 4];
    int field_118;
    int field_11c;
    void sub_436760();
    void sub_465a80();
};

extern "C" void __cdecl sub_6a067a(int);

void COutputView::sub_465a80()
{
    int* p;
    if (field_11c) {
        p = (int*)field_11c;
        ((void (__thiscall*)(int*))((int*)*p)[2])(p);
    }
    if (field_118) {
        p = (int*)field_118;
        ((void (__thiscall*)(int*))((int*)*p)[2])(p);
    }
    sub_436760();
    sub_6a067a(field_f8);
}
