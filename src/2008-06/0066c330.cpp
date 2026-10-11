// from server: 38% by colin
// roc 2008-06 0066c330  unit: RBX::GroupDragTool  size: 201 bytes
// library lua-5.1.4/lcode.c (function _luaK_patchlist)

extern "C" float __cdecl sub_5e82c0();
extern "C" int __cdecl sub_60f3e0(float, float, float, float, float, float, float, float);

extern float dword_819bac;

struct GroupDragTool {
    int field0;
    int field4;
    float field8;
    float fieldC;
    float field10;
    int method();
};

int GroupDragTool::method() {
    int v1;
    float f8, fC, f10;
    float a, b, c, d, e, f, g, h;
    float r1, r2, r3, r4, r5, r6;
    int result;

    v1 = sub_5e82c0();

    f8 = field8 - *(float*)(v1 + 0x24);
    fC = fieldC - *(float*)(v1 + 0x28);
    f10 = field10 - *(float*)(v1 + 0x2c);

    a = *(float*)(v1 + 0x1c) * f8;
    b = *(float*)(v1 + 0x10) * fC;
    c = *(float*)(v1 + 4) * f10;
    d = *(float*)(v1 + 0x20) * f8;
    e = *(float*)(v1 + 0x14) * fC;
    f = *(float*)(v1 + 8) * f10;
    g = *(float*)(v1 + 0x18) * f8;
    h = *(float*)(v1 + 0xc) * fC;

    r1 = a + b + c;
    r2 = d + e + f;
    r3 = g + h + *(float*)(v1) * f10;

    {
        int p = *(int*)(field0 + 0x9c);
        float m = dword_819bac;
        float x = *(float*)(p + 4) * m;
        float y = *(float*)(p + 8) * m;
        float z = *(float*)(p + 0xc) * m;
        r4 = -x;
        r5 = -y;
        r6 = -z;
    }

    result = sub_60f3e0(r1, r2, r3, r4, r5, r6, 0.0f, 0.0f);
    field4 = result;
    return result;
}
