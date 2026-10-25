// from server: 100% by king_originala
// roc 2008-06 005e75e0  unit: RBX::Ball  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e75e0
//
// 005e75e0  8a442404             mov al, byte ptr [esp + 4]
// 005e75e4  3a81ab000000         cmp al, byte ptr [ecx + 0xab]
// 005e75ea  7406                 je 0x5e75f2
// 005e75ec  8881ab000000         mov byte ptr [ecx + 0xab], al
// 005e75f2  c20400               ret 4

struct S {
    unsigned char padding[0xAB];
    unsigned char value;
    void setValue(unsigned char v);
};

void S::setValue(unsigned char v)
{
    if (v != value)
        value = v;
}
