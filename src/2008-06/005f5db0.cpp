// from server: 45% by atomic.potato
struct S
{
    int pad0[41];
    int* p10;
    int pad1[3];
    int* p20;
    int pad2[3];
    int* p30;
    int get();
};

int S::get()
{
    int v = pad0[40];
    *p10 = v;
    *p20 = v;
    *p30 = v - v;
    return v;
}
