// from server: 64% by colin
struct Contact {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float field10;
    float field14;
};

extern "C" bool __fastcall sub_606B60(float* p);

struct BlockBlockContact {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float field10;
    float field14;
    bool method(float a, float b);
};

bool BlockBlockContact::method(float a, float b) {
    float v[6];
    v[0] = field0 - a;
    v[1] = field4 - b;
    v[2] = field8 - a;
    v[3] = fieldC + b;
    v[4] = field10 + a;
    v[5] = field14 + b;
    return !sub_606B60(v);
}
