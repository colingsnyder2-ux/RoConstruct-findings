// from server: 76% by colin
extern "C" __declspec(dllimport) void __stdcall _chkstk();

struct CXTPCommandBar {
    unsigned int f(unsigned int color, double t);
};

unsigned int CXTPCommandBar::f(unsigned int color, double t) {
    unsigned int r = (color >> 16) & 0xff;
    unsigned int g = (color >> 8) & 0xff;
    unsigned int b = color & 0xff;

    double scale = 1.0 - t;
    double factor = t * *(double*)0x78d3a8;

    r = (unsigned int)((double)r * factor + scale);
    g = (unsigned int)((double)g * factor + scale);
    b = (unsigned int)((double)b * factor + scale);

    return (r << 16) | (g << 8) | b;
}
