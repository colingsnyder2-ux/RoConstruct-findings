// from server: 69% by atomic.potato
extern "C" void __cdecl fn(unsigned int, unsigned int, unsigned int, unsigned int,
                            unsigned int, unsigned int, unsigned int);

struct S {
};

void __cdecl f(unsigned int a, unsigned int b, unsigned int c, unsigned int d,
          unsigned int e, unsigned int f, unsigned int g) {
    fn(g, f, e, d, c, b, a);
}
