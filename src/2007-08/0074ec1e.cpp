// from server: 65% by colin
extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void*);

void __cdecl sub_74ec1e(int a, int b, void* c)
{
    int* p = (int*)c;
    int v = *(int*)((char*)p - 4) ^ (int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x855a1c);
}
