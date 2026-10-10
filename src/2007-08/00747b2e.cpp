// from server: 62% by colin
extern "C" void __fastcall sub_630a1e(void*);
extern "C" void __cdecl sub_630a18();

void __cdecl sub_747b2e(int* a)
{
    int* p = (int*)((char*)a + 8);
    int v = *(int*)((char*)p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18();
}
