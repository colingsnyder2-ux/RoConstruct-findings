// from server: 34% by colin
struct VFillToolColor {
    void init();
};

extern "C" void __stdcall sub_42FA60(void*);
extern "C" void __stdcall sub_42F960(void*, unsigned int, unsigned int, void*);
extern "C" void __stdcall sub_64CB60(void*, unsigned int);

void VFillToolColor::init()
{
    sub_42FA60(this);

    sub_64CB60(this, 0xE100);
    sub_42F960(this, 0xE100, 0x10, (void*)0x78AC90);
    sub_42F960(this, 0xE100, 0x20, (void*)0x78AC90);

    sub_64CB60(this, 0xE101);
    sub_42F960(this, 0xE101, 0x10, (void*)0x78AC80);
    sub_42F960(this, 0xE101, 0x20, (void*)0x78AC80);

    sub_64CB60(this, 0xE103);
    sub_42F960(this, 0xE103, 0x10, (void*)0x78AC78);
    sub_42F960(this, 0xE103, 0x20, (void*)0x78AC78);

    sub_64CB60(this, 0xE12B);
    sub_42F960(this, 0xE12B, 0x10, (void*)0x78AC70);
    sub_42F960(this, 0xE12B, 0x20, (void*)0x78AC70);

    sub_64CB60(this, 0xE12C);
    sub_42F960(this, 0xE12C, 0x10, (void*)0x78AC68);
    sub_42F960(this, 0xE12C, 0x20, (void*)0x78AC68);

    sub_64CB60(this, 0xE120);
    sub_42F960(this, 0xE120, 0x10, (void*)0x78AC5C);
    sub_42F960(this, 0xE120, 0x20, (void*)0x78AC5C);

    sub_64CB60(this, 0xE122);
    sub_42F960(this, 0xE122, 0x10, (void*)0x78AC4C);
    sub_42F960(this, 0xE122, 0x20, (void*)0x78AC4C);

    sub_64CB60(this, 0xE123);
    sub_42F960(this, 0xE123, 0x10, (void*)0x78AC3C);
    sub_42F960(this, 0xE123, 0x20, (void*)0x78AC3C);

    sub_64CB60(this, 0xE125);
    sub_42F960(this, 0xE125, 0x10, (void*)0x78AC2C);
    sub_42F960(this, 0xE125, 0x20, (void*)0x78AC2C);

    sub_64CB60(this, 0x8040);
    sub_42F960(this, 0x8040, 0x10, (void*)0x78AC20);
    sub_42F960(this, 0x8040, 0x20, (void*)0x78AC20);

    sub_64CB60(this, 0x8073);
    sub_42F960(this, 0x8073, 0x10, (void*)0x78AC18);
    sub_42F960(this, 0x8073, 0x20, (void*)0x78AC18);

    sub_64CB60(this, 0x8010);
    sub_42F960(this, 0x8010, 0x10, (void*)0x78AC0C);
    sub_42F960(this, 0x8010, 0x20, (void*)0x78AC0C);

    sub_64CB60(this, 0x8011);
    sub_42F960(this, 0x8011, 0x10, (void*)0x78AC0C);
    sub_42F960(this, 0x8011, 0x20, (void*)0x78AC0C);

    sub_64CB60(this, 0x80DA);
    sub_42F960(this, 0x80DA, 0x10, (void*)0x78AC04);
    sub_42F960(this, 0x80DA, 0x20, (void*)0x78AC04);

    sub_64CB60(this, 0x80F1);
    sub_42F960(this, 0x80F1, 0x10, (void*)0x78ABF8);
    sub_42F960(this, 0x80F1, 0x20, (void*)0x78ABF8);

    sub_64CB60(this, 0x80F3);
    sub_42F960(this, 0x80F3, 0x10, (void*)0x78ABF0);
    sub_42F960(this, 0x80F3, 0x20, (void*)0x78ABF0);

    sub_64CB60(this, 0x800F);
    sub_42F960(this, 0x800F, 0x10, (void*)0x78ABE8);
    sub_42F960(this, 0x800F, 0x20, (void*)0x78ABE8);

    sub_64CB60(this, 0x80E2);
    sub_42F960(this, 0x80E2, 0x10, (void*)0x78ABD4);
    sub_42F960(this, 0x80E2, 0x20, (void*)0x78ABD4);

    sub_64CB60(this, 0x80BF);
    sub_42F960(this, 0x80BF, 0x10, (void*)0x78ABCC);
    sub_42F960(this, 0x80BF, 0x20, (void*)0x78ABCC);

    sub_64CB60(this, 0x8101);
    sub_42F960(this, 0x8101, 0x10, (void*)0x78ABC0);
    sub_42F960(this, 0x8101, 0x20, (void*)0x78ABC0);

    sub_64CB60(this, 0x8100);
    sub_42F960(this, 0x8100, 0x10, (void*)0x78ABB8);
    sub_42F960(this, 0x8100, 0x20, (void*)0x78ABB8);

    sub_64CB60(this, 0x803A);
    sub_42F960(this, 0x803A, 0x10, (void*)0x78ABB0);
    sub_42F960(this, 0x803A, 0x20, (void*)0x78ABB0);

    sub_64CB60(this, 0x8039);
    sub_42F960(this, 0x8039, 0x10, (void*)0x78ABA8);
    sub_42F960(this, 0x8039, 0x20, (void*)0x78ABA8);
}
