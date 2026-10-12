// from server: 51% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Inner {
    char pad[0x0c];
    int* begin;
    int* end;
};

struct Outer {
    char pad[0x0c];
    Inner* inner;
};

struct S {
    char pad[0x20];
    unsigned short field20;
    int find(int a, int b, int c);
};

int S::find(int a, int b, int c)
{
    int* p = (int*)&a;
    unsigned int h = (unsigned int)p[2] * 0x4f9ffb7u;
    h ^= (unsigned int)p[1] * 0x127409fu;
    h ^= (unsigned int)p[0] * 0x466f45du;

    unsigned short sh = *(unsigned short*)((char*)this + 0x20);
    unsigned int mask = 0xffffu >> sh;
    h &= mask;

    Inner* inner = (Inner*)((char*)this + sh * 24 + 0xc);

    int count = (int)(((char*)inner->end - (char*)inner->begin) >> 3);
    if (h >= (unsigned int)count)
        _invalid_parameter_noinfo();

    int* node = (int*)((char*)inner->begin + h * 8);
    while (*(int*)node != a)
    {
        node = (int*)*(int*)((char*)node + 4);
        if (node == 0)
            break;
    }
    return (int)node;
}
