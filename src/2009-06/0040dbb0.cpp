// from server: 88% by atomic.potato
extern "C" void __cdecl sub_40D580();

struct Inner {
    char pad[0xFC];
    int field;
};

struct Outer {
    char pad[0xC];
    Inner* inner;
};

void __stdcall sub_40DBB0(Outer* a, int* b) {
    if (a->inner->field == 5) {
        sub_40D580();
        *b = 1;
    }
}
