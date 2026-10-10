// from server: 65% by colin
extern "C" void __fastcall sub_630a1e(void* p);
extern "C" void __cdecl sub_630a18(void* p);

void __cdecl sub_0074996e(int a, int b)
{
    int* p = (int*)b;
    int v = p[-1] ^ (int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x850384);
}
