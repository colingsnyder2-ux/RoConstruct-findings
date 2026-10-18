// from server: 93% by colin
struct Inner
{
    char padding[4];
};

struct S
{
    int field0;
    Inner inner;
    double field8;
    char data[0x30];
    float f40;
    int f44;
    float f48;
    S* assign(S* other);
};

extern "C" void __stdcall sub_4025B0(Inner* dst, Inner* src);

S* S::assign(S* other)
{
    field0 = other->field0;
    sub_4025B0(&inner, &other->inner);
    field8 = other->field8;
    struct Block { int v[9]; };
    Block* src = reinterpret_cast<Block*>(reinterpret_cast<char*>(other) + 0x10);
    Block* dst = reinterpret_cast<Block*>(reinterpret_cast<char*>(this) + 0x10);
    *dst = *src;
    float* sf = reinterpret_cast<float*>(src);
    float* df = reinterpret_cast<float*>(dst);
    df[9] = sf[9];
    df[10] = sf[10];
    df[11] = sf[11];
    f40 = other->f40;
    f44 = other->f44;
    f48 = other->f48;
    return this;
}
