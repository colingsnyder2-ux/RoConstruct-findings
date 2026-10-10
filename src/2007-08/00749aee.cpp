// from server: 69% by colin
extern "C" void __cdecl sub_630a1e(int);
extern "C" void __cdecl sub_630a18(int);

void __cdecl sub_749aee(int arg1, int arg2)
{
    int* p = (int*)arg2;
    int v = p[-1];
    v ^= (int)p;
    sub_630a1e(v);
    sub_630a18(0x8504e4);
}
