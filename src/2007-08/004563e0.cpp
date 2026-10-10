// from server: 83% by colin
struct CRobloxView {
    char pad[0x54];
    int field_54;
    char pad2[0x30];
    char field_88[0x100];

    void sub_4563E0(int, int, int);
};

extern "C" void __stdcall sub_63029E(int, int, int);
extern "C" void __stdcall sub_4061F0(int, int);
extern "C" void __stdcall sub_458540(void*, int);

void CRobloxView::sub_4563E0(int a, int b, int c) {
    sub_63029E(c, b, a);
    if (c) {
        sub_4061F0(1, field_54);
        sub_458540(field_88, 1);
    } else if (b != a) {
        sub_4061F0(0, field_54);
        sub_458540(field_88, 0);
    }
}
