// from server: 90% by colin
extern float g_float_93cc40;

struct Inner {
    char pad[0x24];
    float a;
    float b;
    float c;
};

struct Sender {
    void* vtable;
    char pad[0x0C];
    char data[0x24];
    float a;
    float b;
    float c;
    char pad2[0x08];
    float f40;
    int f44;
};

struct Obj {
    Inner* getInner();
};

void __cdecl init(Sender* out)
{
    Inner* in = ((Obj*)*(void**)out)->getInner();
    Sender* dst = (Sender*)((char*)out + 0x10);
    *(Inner*)dst = *in;
    dst->a = in->a;
    dst->b = in->b;
    dst->c = in->c;
    out->f40 = g_float_93cc40;
    out->f44 = 0;
}
