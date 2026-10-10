// from server: 65% by colin
extern "C" int __cdecl sub_630a1e(int);
extern "C" int __cdecl sub_630a18();

int __cdecl sub_75dcee(int a, int b, int c)
{
    int* p = (int*)c;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    return sub_630a18();
}
