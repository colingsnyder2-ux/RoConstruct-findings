// from server: 74% by colin
#pragma float_control(precise, off)

struct Helper {
    const void* get();
};

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

void Connector::func(int a, int b)
{
    if (field18 != 0)
        return;

    int object = *(int*)(field8 + 0xC);
    ((Helper*)object)->get();

    int quotient = field1C / 3;
    int remainder = field1C - quotient * 3;

    float f0 = *(float*)(object + remainder * 4 + 0x94);
    float f1 = *(float*)(object + remainder * 4 + 0xA0);
    float f2 = *(float*)(object + remainder * 4 + 0xAC);

    float scale = (float)(1 - (quotient + quotient));
    f0 *= scale;
    f1 *= scale;
    f2 *= scale;

    int position = fieldC + 0x1C;
    int first = field8;

    float d0 = *(float*)position - *(float*)(first + 0x1C);
    float d1 = *(float*)(position + 4) - *(float*)(first + 0x20);
    float d2 = *(float*)(position + 8) - *(float*)(first + 0x24);

    float negative = -field10;
    d0 *= negative;
    d1 *= negative;
    d2 *= negative;

    float sum = f0 * d0 + f1 * d1 + f2 * d2;
    field18 = (-sum > field14) ? 1 : 0;

    float n0 = -d0;
    float n1 = -d1;
    float n2 = -d2;

    *(float*)(first + 0x28) += n0;
    *(float*)(first + 0x2C) += n1;
    *(float*)(first + 0x30) += n2;

    int second = fieldC + 0x28;
    *(float*)second += n0;
    *(float*)(second + 4) += n1;
    *(float*)(second + 8) += n2;
}
