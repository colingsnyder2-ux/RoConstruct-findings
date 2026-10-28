// from server: 0% by atomic.potato
struct S {
    int f(int, int);
};

extern "C" void* __cdecl sub_98211a(unsigned int);

int S::f(int a, int b)
{
    int* p;
    *(int*)this = 0;
    p = (int*)sub_98211a(0x14);
    if (p) {
        p[1] = 1;
        p[2] = 1;
        p[0] = 0xb5f068;
        p[3] = a;
    } else {
        p = 0;
    }
    *(int*)this = (int)p;
    return (int)this;
}
