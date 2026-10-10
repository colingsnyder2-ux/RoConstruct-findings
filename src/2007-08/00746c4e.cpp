// from server: 69% by colin
extern "C" void __cdecl G1_func_00630a1e(void*);
extern "C" void __cdecl G1_func_00630a18(void*);

struct S_seg_00740000 {
    void __cdecl func_00746c4e(void*);
};

void S_seg_00740000::func_00746c4e(void* p)
{
    unsigned char* edx = (unsigned char*)p;
    unsigned char* eax = edx;
    unsigned int ecx = *(unsigned int*)(edx - 4);
    ecx ^= (unsigned int)eax;
    G1_func_00630a1e((void*)ecx);
    G1_func_00630a18((void*)0x84d0d0);
}
