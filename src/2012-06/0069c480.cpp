// from server: 95% by atomic.potato
struct S {
    char pad0[0x2c];
    unsigned int count;
    char pad1[0x90 - 0x30];
    int* data;
    bool get(unsigned int index, int* out);
};

extern "C" int __cdecl sub_783cb0();
extern "C" void __cdecl sub_54d0f0(int* a, int* b);

bool S::get(unsigned int index, int* out) {
    bool ok;
    int val;
    if (index < count) {
        val = data[index];
        ok = true;
    } else {
        ok = false;
    }
    *out = sub_783cb0();
    sub_54d0f0(out + 1, &val);
    return ok;
}
