// from server: 82% by atomic.potato
struct S {
    int vftable;
    int pad04;
    int pad08;
    int pad0c;
    int pad10;
    int pad14;
    int pad18;
    int pad1c;
    int field20;
    int field24;
    int field28;
    int field2c;
    int field30;
    S();
};

extern "C" void sub_926442(S*);
extern "C" void sub_98DE74(int*);

S::S()
{
    sub_926442(this);
    vftable = 0x9fe964;
    sub_98DE74(&field20);
    field2c = 0;
    field24 = 0;
    field30 = 0;
    field28 = -1;
}
