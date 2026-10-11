// from server: 89% by colin
extern "C" int __cdecl _type_info_compare(const void*, const void*);

struct S {
};

void __cdecl f(int a, int b, int c)
{
    if (c == 0) {
        if (b == 0)
            return;
        *(int*)(b + 0) = *(int*)(a + 0);
        *(int*)(b + 4) = *(int*)(a + 4);
        *(int*)(b + 8) = *(int*)(a + 8);
        *(int*)(b + 12) = *(int*)(a + 12);
        return;
    }
    if (c == 1)
        return;
    {
        int* p = (int*)b;
        int v = *p;
        int r = _type_info_compare((const void*)v, (const void*)0x94b7c8);
        unsigned char al = (unsigned char)r;
        int neg = -(int)al;
        int mask = neg >> 31;
        *p = mask & a;
    }
}
