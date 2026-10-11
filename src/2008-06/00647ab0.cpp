// from server: 67% by colin
// roc 2008-06 00647ab0  unit: RBX::Block  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647ab0

struct RBX_Block {
    char pad[0x10];
    float* field10;
    int func(float* a, int* b, float* c);
};

extern float g_84af88;

int RBX_Block::func(float* a, int* b, float* c)
{
    float t = g_84af88;
    float* p = field10;

    if (p[0] - a[0] <= t) {
        *b = 0;
    }

    if (a[0] - p[0] <= t) {
        *b = 3;
    }

    if (p[1] - a[1] <= t) {
        *b = 1;
    }

    if (a[1] - p[1] <= t) {
        *b = 4;
    }

    if (p[2] - a[2] <= t) {
        *b = 2;
    }

    if (a[2] - p[2] <= t) {
        *b = 5;
    }

    if (*b > 2) {
        *c = *(float*)((char*)field10 + 0x54);
    } else {
        *c = *(float*)field10;
    }
    return 3;
}
