// from server: 37% by colin
struct CXTPPropertyGridItemBool
{
    void construct(unsigned int, unsigned int, unsigned int);
    void setValue(unsigned int);
};

void CXTPPropertyGridItemBool::construct(unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int v1;
    unsigned int v2;
    unsigned int v3;

    v1 = c;
    v2 = b;
    v3 = a;

    setValue(v1);
    *(unsigned int *)((char *)this + 0x104) = v2;
    *(unsigned int *)this = 0x7d264c;
    *(unsigned int *)((char *)this + 0x20) = 0x7d25ec;
    setValue(v3);
}
