// from server: 84% by atomic.potato
struct S {
    char pad0[0x2c];
    unsigned int count;
    char pad1[0x90 - 0x30];
    void** items;
    bool get(unsigned int i, void** out);
};

extern "C" void* __cdecl sub_783d50();
extern "C" void __cdecl sub_479710(void** out);

bool S::get(unsigned int i, void** out)
{
    bool ok;
    void* val;
    if (i < count) {
        val = items[i];
        ok = true;
    } else {
        ok = false;
    }
    void* r = sub_783d50();
    *out = r;
    sub_479710(&val);
    return ok;
}
