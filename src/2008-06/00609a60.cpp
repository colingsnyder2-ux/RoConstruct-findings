// from server: 74% by colin
extern "C" int __cdecl sub_6A17C6(int, int, int, int, int);

struct S {
    int f(int, int);
};

int S::f(int a, int b) {
    if (sub_6A17C6(a, 0, 0x92907c, 0x959a28, 0) != 0) {
        if (sub_6A17C6(b, 0, 0x92907c, 0x959a08, 0) != 0)
            return 1;
    }
    if (sub_6A17C6(b, 0, 0x92907c, 0x959a28, 0) != 0) {
        if (sub_6A17C6(a, 0, 0x92907c, 0x959a08, 0) != 0)
            return 1;
    }
    return 0;
}
