// from server: 49% by colin
struct CXTPControlSelector
{
    int field_0;
    int field_4;
    int (__stdcall *field_8)(int, int, int, int, int, int);
    int method(int, int, int, int, int, int);
};

int CXTPControlSelector::method(int a, int b, int c, int d, int e, int f)
{
    int (__stdcall *p)(int, int, int, int, int, int) = field_8;
    if (p != 0)
        return p(a, b, c, d, e, f);
    return 0;
}

struct CXTPDrawHelpers
{
    int method(int* p1, int* p2, int a, int b, int c);
};

int CXTPDrawHelpers::method(int* p1, int* p2, int a, int b, int c)
{
    int local[10];
    int* q = local;

    q[0] = p1[0];
    q[1] = p1[1];
    q[2] = p1[2];
    q[3] = p1[3];

    local[4] = 0;
    local[5] = 1;

    local[6] = (unsigned short)((unsigned char)a | ((unsigned char)b << 8));
    local[7] = (unsigned short)((unsigned char)((unsigned int)a >> 16) | ((unsigned char)((unsigned int)b >> 16) << 8));
    local[8] = (unsigned short)((unsigned char)c | ((unsigned char)((unsigned int)c >> 8) << 8));
    local[9] = (unsigned short)((unsigned char)((unsigned int)c >> 16) | ((unsigned char)((unsigned int)c >> 24) << 8));

    int* r = p2;
    if (r != 0)
        r = (int*)r[1];

    int flag = (p2 == 0) ? 1 : 0;

    CXTPControlSelector* sel = (CXTPControlSelector*)this;
    return sel->method((int)r, 2, (int)local, 1, flag, 0);
}
