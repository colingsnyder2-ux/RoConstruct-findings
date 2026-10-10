// from server: 49% by colin
struct VFillToolColor {
    void init();
};

extern "C" void __stdcall sub_64CB60(int);
extern "C" void __stdcall sub_42F960(int, int);

void VFillToolColor::init()
{
    sub_64CB60(0x80bb);
    sub_42F960(0x80bb, (int)this);
    sub_42F960(0x80bb, (int)this);
    sub_64CB60(0x80bd);
    sub_42F960(0x80bd, (int)this);
    sub_42F960(0x80bd, (int)this);
    sub_64CB60(0x80bc);
    sub_42F960(0x80bc, (int)this);
    sub_42F960(0x80bc, (int)this);
    sub_64CB60(0x80ba);
    sub_42F960(0x80ba, (int)this);
    sub_42F960(0x80ba, (int)this);
    sub_64CB60(0x80b9);
    sub_42F960(0x80b9, (int)this);
    sub_42F960(0x80b9, (int)this);
}
