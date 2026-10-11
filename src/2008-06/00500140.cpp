// from server: 38% by colin
extern "C" void __stdcall sub_4FFD40(int, int, int, int);

struct HeadBuilder {
    float field20;
    int field24;
    void sub_500140(int);
};

void HeadBuilder::sub_500140(int a)
{
    float f = field20;
    int v = field24 + 1;
    int half = v / 2;
    short s = (short)field24;
    sub_4FFD40(a, half, *(int*)&f, s);
}
