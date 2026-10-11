// from server: 53% by colin
// roc 2007-08 0054f9d0  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f9d0

extern "C" int __cdecl sub_54f8a0(int, int, int, int, int);

struct S {
    int f(int, int, int, int, int);
};

int S::f(int a, int b, int c, int d, int e)
{
    return sub_54f8a0(a, b, c, d, e);
}
