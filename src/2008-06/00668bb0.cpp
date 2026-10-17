// from server: 85% by colin
struct Dimensions {
    float x;
    float y;
    float z;
};

struct S {
    char padding0[0x14];
    unsigned int scale;
    char padding1[0x84];
    Dimensions* dimensions;
};

extern "C" double __cdecl floor(double);

double __cdecl f(S* object)
{
    float* d = &object->dimensions->x;
    double area;

    if (d[1] < d[0]) {
        if (d[2] < d[0])
            area = d[2] * d[1];
        else
            area = d[1] * d[0];
    } else {
        if (d[2] < d[1])
            area = d[2] * d[0];
        else
            area = d[1] * d[0];
    }

    float length = (float)floor(area);
    int count = (int)length;
    return (double)((unsigned __int64)object->scale * count);
}
