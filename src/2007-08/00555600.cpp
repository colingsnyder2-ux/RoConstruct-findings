// from server: 44% by colin
struct GuiTarget {
    void render(float, float, int, int, int, int, int);
};

extern "C" void __stdcall sub_5555B0(float*);

float g_797e9c;
float g_797eb0;

void GuiTarget::render(float a, float b, int c, int d, int e, int f, int g)
{
    if (*(int*)((char*)this + 0x14) == 0)
        return;

    float v[4];
    sub_5555B0(v);

    float x0 = v[0];
    float y0 = v[1];
    float x1 = v[2];
    float y1 = v[3];

    float w = x1 - x0;
    float h = y1 - y0;

    float f1 = w * g_797e9c;
    float f2 = h * g_797e9c;

    int mode = c;
    if (mode == 0) {
        f1 = f1 - f2 * g_797eb0;
    } else if (mode == 2) {
        // nothing
    } else {
        f1 = f1 + f2 * g_797eb0;
    }

    int (*fn)(void*, int, int, int, int, int, int) = *(int(**)(void*, int, int, int, int, int, int))(*(int*)this + 0x54);
    int r = fn(this, d, e, f, g, 2, 0);

    float fr = (float)r;

    void (*fn2)(void*, float*, float*, float*) = *(void(**)(void*, float*, float*, float*))(*(int*)((char*)this + 0x30));
    fn2((char*)this + 0x30, &f1, &f2, &fr);
}
