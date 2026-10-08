// from server: 79% by colin
// roc 2007-08 0054f500  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f500

extern "C" int __cdecl helper_54f490(int, int, int, int, int, int, int, int, int);

struct S {
    int f(int, int, int, int, int, int, int, int);
};

int S::f(int a, int b, int c, int d, int e, int g, int h, int i) {
    return helper_54f490(a, b, c, d, e, g, h, i, 0);
}
