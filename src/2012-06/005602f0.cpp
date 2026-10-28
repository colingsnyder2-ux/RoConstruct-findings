// from server: 0% by atomic.potato
struct S {
    int* field0;
    int f(int a, int b);
};

extern "C" void* __cdecl sub_98211a(unsigned int size);

int S::f(int a, int b)
{
    int* p;
    this->field0 = 0;
    p = (int*)sub_98211a(0x14);
    if (p) {
        p[1] = 1;
        p[2] = 1;
        p[0] = 0xb73fe0;
        p[3] = a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return (int)this;
}
