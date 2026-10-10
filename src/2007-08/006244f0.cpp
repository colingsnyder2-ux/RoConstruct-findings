// from server: 18% by colin
struct ArrowButton {
    void construct(int a, unsigned short b, int c, int d, int e, int f, int g);
};

extern "C" {
    void __stdcall sub_77E460();
    void __stdcall sub_77E4FC();
    void __cdecl sub_6243A0(int, int, int, int, int);
}

void ArrowButton::construct(int a, unsigned short b, int c, int d, int e, int f, int g)
{
    struct Local {
        unsigned short w;
        int v;
    } local;
    local.w = b;
    local.v = c;
    sub_77E460();
    sub_6243A0(a, d, e, f, g);
    sub_77E4FC();
}
