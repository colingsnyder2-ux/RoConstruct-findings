// from server: 69% by colin
extern "C" void __cdecl sub_00630a1e(void*);
extern "C" void __cdecl sub_00630a18(void*);

struct seg_00730000 {
};

void __cdecl func_0073d57e(int, void* p)
{
    void* q = (char*)p - 4;
    int v = *(int*)((char*)p - 4);
    v ^= (int)p;
    sub_00630a1e((void*)v);
    sub_00630a18((void*)0x8444dc);
}
