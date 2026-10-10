// from server: 87% by colin
struct CXTPBitmapDC
{
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    void Draw(int a, int b, int c, int d);
};

extern "C" void* __stdcall sub_7388EC();
extern "C" void* __stdcall sub_738406(void*, void*);
extern "C" int __stdcall sub_77EE40(void*, void*);
extern "C" int __stdcall sub_77D120(void*, int, int, int, int, int, int);

void CXTPBitmapDC::Draw(int a, int b, int c, int d)
{
    if (field4 != 0)
    {
        sub_77EE40(*(void**)(*(int**)this + 1), &a);
        return;
    }

    void* p = sub_7388EC();
    void* q = sub_738406(*(void**)this, p);
    int x = a;
    int y = b;
    int w = c - a;
    int h = d - b;
    sub_77D120(*(void**)(*(int**)this + 1), x, y, w, h, 0x5a0049, 0);
    sub_738406(*(void**)this, q);
}
