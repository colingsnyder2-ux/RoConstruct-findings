// from server: 69% by colin
extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void*);

void __cdecl sub_746afe(int a, void* b)
{
    unsigned char* p = (unsigned char*)b;
    unsigned int v = *(unsigned int*)(p - 4);
    v ^= (unsigned int)p;
    sub_630a1e((void*)v);
    sub_630a18((void*)0x84cf9c);
}
