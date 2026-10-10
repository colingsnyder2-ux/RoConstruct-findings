// from server: 33% by atomic.potato
struct S
{
    char data[0x7c];
    S* f();
};

extern "C" int CheckBitmapDC(void*);
extern "C" void ReleaseBitmapDC(S*);

S* S::f()
{
    S* p;
    p = this;
    if (CheckBitmapDC(p + 0x78))
        ReleaseBitmapDC(p);
    return p + 0x78;
}
