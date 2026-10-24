// from server: 37% by colin
// roc-cl: 21022
// roc-flags: /Od /Ob0 /GS /EHsc /MD
struct CPatchedControlComboBox {
    void sub_42F490();
};

extern "C" void __cdecl sub_42F380(void*);
extern "C" void __cdecl sub_42F290(void*, unsigned int, unsigned int, void*);
extern "C" void __cdecl sub_6BDE60(void*, unsigned int);

void CPatchedControlComboBox::sub_42F490()
{
    sub_42F380(this);

    sub_6BDE60(this, 0xE100);
    sub_42F290(this, 0xE100, 0x10, (void*)0x810D90);
    sub_42F290(this, 0xE100, 0x20, (void*)0x810D90);

    sub_6BDE60(this, 0xE101);
    sub_42F290(this, 0xE101, 0x10, (void*)0x810D80);
    sub_42F290(this, 0xE101, 0x20, (void*)0x810D80);

    sub_6BDE60(this, 0xE103);
    sub_42F290(this, 0xE103, 0x10, (void*)0x810D78);
    sub_42F290(this, 0xE103, 0x20, (void*)0x810D78);

    sub_6BDE60(this, 0xE12B);
    sub_42F290(this, 0xE12B, 0x10, (void*)0x810D70);
    sub_42F290(this, 0xE12B, 0x20, (void*)0x810D70);

    sub_6BDE60(this, 0xE12C);
    sub_42F290(this, 0xE12C, 0x10, (void*)0x810D68);
    sub_42F290(this, 0xE12C, 0x20, (void*)0x810D68);

    sub_6BDE60(this, 0xE120);
    sub_42F290(this, 0xE120, 0x10, (void*)0x810D5C);
    sub_42F290(this, 0xE120, 0x20, (void*)0x810D5C);

    sub_6BDE60(this, 0xE122);
    sub_42F290(this, 0xE122, 0x10, (void*)0x810D4C);
    sub_42F290(this, 0xE122, 0x20, (void*)0x810D4C);

    sub_6BDE60(this, 0xE123);
    sub_42F290(this, 0xE123, 0x10, (void*)0x810D3C);
    sub_42F290(this, 0xE123, 0x20, (void*)0x810D3C);

    sub_6BDE60(this, 0xE125);
    sub_42F290(this, 0xE125, 0x10, (void*)0x810D2C);
    sub_42F290(this, 0xE125, 0x20, (void*)0x810D2C);

    sub_6BDE60(this, 0x8040);
    sub_42F290(this, 0x8040, 0x10, (void*)0x810D20);
    sub_42F290(this, 0x8040, 0x20, (void*)0x810D20);

    sub_6BDE60(this, 0x8073);
    sub_42F290(this, 0x8073, 0x10, (void*)0x810D18);
    sub_42F290(this, 0x8073, 0x20, (void*)0x810D18);

    sub_6BDE60(this, 0x8010);
    sub_42F290(this, 0x8010, 0x10, (void*)0x810D0C);
    sub_42F290(this, 0x8010, 0x20, (void*)0x810D0C);

    sub_6BDE60(this, 0x8011);
    sub_42F290(this, 0x8011, 0x10, (void*)0x810D0C);
    sub_42F290(this, 0x8011, 0x20, (void*)0x810D0C);

    sub_6BDE60(this, 0x80DA);
    sub_42F290(this, 0x80DA, 0x10, (void*)0x810D04);
    sub_42F290(this, 0x80DA, 0x20, (void*)0x810D04);

    sub_6BDE60(this, 0x80F1);
    sub_42F290(this, 0x80F1, 0x10, (void*)0x810CF8);
    sub_42F290(this, 0x80F1, 0x20, (void*)0x810CF8);

    sub_6BDE60(this, 0x80F3);
    sub_42F290(this, 0x80F3, 0x10, (void*)0x810CF0);
    sub_42F290(this, 0x80F3, 0x20, (void*)0x810CF0);

    sub_6BDE60(this, 0x800F);
    sub_42F290(this, 0x800F, 0x10, (void*)0x810CE8);
    sub_42F290(this, 0x800F, 0x20, (void*)0x810CE8);

    sub_6BDE60(this, 0x80E2);
    sub_42F290(this, 0x80E2, 0x10, (void*)0x810CD4);
    sub_42F290(this, 0x80E2, 0x20, (void*)0x810CD4);

    sub_6BDE60(this, 0x80BF);
    sub_42F290(this, 0x80BF, 0x10, (void*)0x810CCC);
    sub_42F290(this, 0x80BF, 0x20, (void*)0x810CCC);

    sub_6BDE60(this, 0x8101);
    sub_42F290(this, 0x8101, 0x10, (void*)0x810CC0);
    sub_42F290(this, 0x8101, 0x20, (void*)0x810CC0);

    sub_6BDE60(this, 0x8100);
    sub_42F290(this, 0x8100, 0x10, (void*)0x810CB8);
    sub_42F290(this, 0x8100, 0x20, (void*)0x810CB8);

    sub_6BDE60(this, 0x803A);
    sub_42F290(this, 0x803A, 0x10, (void*)0x810CB0);
    sub_42F290(this, 0x803A, 0x20, (void*)0x810CB0);

    sub_6BDE60(this, 0x8039);
    sub_42F290(this, 0x8039, 0x10, (void*)0x810CA8);
    sub_42F290(this, 0x8039, 0x20, (void*)0x810CA8);
}
