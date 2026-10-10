// from server: 69% by colin
struct seg_00740000
{
};

extern "C" void __cdecl sub_630a1e(void*);
extern "C" void __cdecl sub_630a18(void);

void __cdecl func(int, void* p)
{
    unsigned int v = *(unsigned int*)((char*)p - 4);
    v ^= (unsigned int)p;
    sub_630a1e((void*)v);
    sub_630a18();
}
