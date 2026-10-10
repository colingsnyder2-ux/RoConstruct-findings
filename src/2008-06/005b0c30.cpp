// from server: 45% by colin
struct S {
    char pad0[8];
    int m8;
    int mC;
    int m10;
    char pad14[0x150 - 0x14];
    int m150;
    int get(int* out);
};

int S::get(int* out)
{
    int* self = (int*)this;
    int* arg = out;
    int* p = arg;
    if (p) {
        p = (int*)((char*)p - 0x14);
    } else {
        p = 0;
    }
    int idx = self[4];
    int base = *(int*)((char*)this + 0x150);
    int off = *(int*)(base + idx) + self[3];
    int (*fn)(void*, int*) = (int (*)(void*, int*))self[2];
    int* r = (int*)fn((char*)this + off + 0x150, p);
    out[0] = r[0];
    out[1] = r[1];
    out[2] = r[2];
    return (int)out;
}
