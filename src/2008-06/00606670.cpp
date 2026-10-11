// from server: 49% by colin
struct Connector {
    char pad0[8];
    int field8;
    int fieldC;
    float field10;
    float field14;
    char field18;
    int field1C;
    void func(int a, int b);
};

struct Helper {
    void method();
};

extern "C" void sub_599360(int);

void Connector::func(int a, int b)
{
    if (field18 != 0)
        return;

    int edi = *(int*)(field8 + 0xC);
    ((Helper*)edi)->method();

    int ecx = field1C;
    int eax = ecx / 3;
    int rem = ecx - eax * 3;
    int eax2 = eax + eax;

    float f0 = *(float*)(edi + rem * 4 + 0x94);
    float f1 = *(float*)(edi + rem * 4 + 0xA0);
    float f2 = *(float*)(edi + rem * 4 + 0xAC);

    int t = 1 - eax2;
    float ft = (float)t;

    f0 *= ft;
    f1 *= ft;
    f2 *= ft;

    int eax3 = fieldC + 0x1C;
    int ecx3 = field8;

    float d0 = *(float*)eax3 - *(float*)(ecx3 + 0x1C);
    float d1 = *(float*)(eax3 + 4) - *(float*)(ecx3 + 0x20);
    float d2 = *(float*)(eax3 + 8) - *(float*)(ecx3 + 0x24);

    float neg = -field10;
    d0 *= neg;
    d1 *= neg;
    d2 *= neg;

    float r0 = f0 + d0;
    float r1 = f1 + d1;
    float r2 = f2 + d2;

    float cmp = -r2;
    if (cmp == field14)
        field18 = 0;
    else
        field18 = 1;

    float n0 = -r0;
    float n1 = -r1;
    float n2 = -r2;

    *(float*)(ecx3 + 0x28) += n0;
    *(float*)(ecx3 + 0x2C) += n1;
    *(float*)(ecx3 + 0x30) += n2;

    int esi = fieldC;
    *(float*)(esi + 0x28) += n0;
    *(float*)(esi + 0x2C) += n1;
    *(float*)(esi + 0x30) += n2;
}
