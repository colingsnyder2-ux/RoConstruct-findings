// from server: 95% by atomic.potato
struct S {
    char pad0[0x2c];
    unsigned int count;
    char pad1[0x90 - 0x30];
    int* items;
    bool get(unsigned int index, int* out);
};

extern "C" int __cdecl sub_783d30();
extern "C" int __cdecl sub_754cd0(void* self, int* value);

bool S::get(unsigned int index, int* out) {
    bool ok;
    int value;
    if (index < count) {
        value = items[index];
        ok = true;
    } else {
        ok = false;
    }
    *out = sub_783d30();
    sub_754cd0(out + 1, &value);
    return ok;
}
