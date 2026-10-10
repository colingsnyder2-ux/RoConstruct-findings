// from server: 82% by why2
// roc 2009-06 008053f0  unit: CXTPRichRender::XTextHost  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008053f0

extern "C" int (__stdcall *g_fn)(int, int);

struct XTextHost {
    int f(int a, int b, int c, int d);
};

int XTextHost::f(int a, int b, int c, int d) {
    g_fn(c, d);
    return 0;
}
