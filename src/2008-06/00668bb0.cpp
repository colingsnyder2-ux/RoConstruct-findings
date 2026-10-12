// from server: 69% by king_originala
extern "C" double __cdecl ceil(double);

struct Dimensions {
    float unused;
    float values[3];
};

struct S {
    char padding0[0x14];
    unsigned int count;
    char padding1[0x84];
    Dimensions* dimensions;
};

double __cdecl f(S* s)
{
    float* d = s->dimensions->values;
    double area;

    if (d[0] < d[1]) {
        if (d[0] < d[2])
            area = (double)d[2] * d[1];
        else
            area = (double)d[1] * d[0];
    } else {
        if (d[1] < d[2])
            area = (double)d[2] * d[0];
        else
            area = (double)d[1] * d[0];
    }

    float rounded = (float)ceil(area);
    return (double)((unsigned __int64)s->count * (int)rounded);
}
