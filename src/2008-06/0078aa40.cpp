// from server: 83% by atomic.potato
struct S
{
    int value;
    int unused[28];
    S* f();
};

void __fastcall sub_78a2c0(S*);

S* S::f()
{
    sub_78a2c0(this);
    value = 0x869f1c;
    return this;
}
