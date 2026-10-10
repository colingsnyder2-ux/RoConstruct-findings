// from server: 93% by colin
struct TypedStatsItem {
    void update();
};

extern "C" double __fastcall sub_0057E790(int);
extern "C" void __fastcall sub_00596C70(int, double*);

void TypedStatsItem::update()
{
    double value = sub_0057E790((int)this + 0x110);
    sub_00596C70((int)this, &value);
}
