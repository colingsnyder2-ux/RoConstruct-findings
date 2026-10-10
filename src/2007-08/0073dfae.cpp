// from server: 69% by colin
extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

void __cdecl func_0073dfae(void* a, void* b)
{
    unsigned char* p = (unsigned char*)b;
    unsigned int v = *(unsigned int*)(p - 4);
    v ^= (unsigned int)p;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x844f58);
}
