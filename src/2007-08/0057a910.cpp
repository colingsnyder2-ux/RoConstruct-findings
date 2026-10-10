// from server: 38% by colin
struct std_string {
    void destroy();
};

extern "C" void __stdcall destroy_string(std_string* s);

struct SpecialShape {
    char pad[0xf8];
    std_string s1;
    char pad2[0x18];
    std_string s2;
    char pad3[0x8];
    int field0;
    int field4;
    int field10;
    int field14;
    int field2c;
    int field44;
    int field5c;
    int field74;
    int field8c;

    SpecialShape();
};

extern "C" void __stdcall sub_5402B0();

SpecialShape::SpecialShape()
{
    destroy_string(&s2);
    destroy_string(&s1);
    field0 = 0x7ab14c;
    field4 = 0x7ab144;
    field10 = 0x7ab13c;
    field14 = 0x7ab12c;
    field2c = 0x7ab11c;
    field44 = 0x7ab10c;
    field5c = 0x7ab0fc;
    field74 = 0x7ab0ec;
    field8c = 0x7ab0dc;
    sub_5402B0();
}
