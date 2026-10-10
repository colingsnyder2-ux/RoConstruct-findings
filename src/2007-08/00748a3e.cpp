// from server: 65% by colin
extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(void);

void __cdecl sub_748a3e(int a, int b, int c)
{
    int* p = (int*)c;
    int v = p[-1] ^ (int)p;
    sub_630a1e(v);
    sub_630a18();
}
