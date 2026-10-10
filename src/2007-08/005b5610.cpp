// from server: 91% by colin
struct Primitive {
    char pad[0x1c];
    int field1c;
    char pad2[0x70 - 0x20];
    unsigned char field70;
    unsigned char field71;
    unsigned char field72;
    void sub_5b50b0(unsigned char);
    void sub_5a92d0();
    void setSomething(unsigned char);
};

void Primitive::setSomething(unsigned char val) {
    unsigned char old = field70;
    if (old == val) return;
    bool bl;
    if (old == 0 && field72 != 0)
        bl = true;
    else
        bl = false;
    unsigned char f71 = field71;
    field70 = val;
    sub_5b50b0(f71);
    if (field1c != 0) {
        bool al;
        if (field70 == 0 && field72 != 0)
            al = true;
        else
            al = false;
        if (al != bl)
            sub_5a92d0();
    }
}
