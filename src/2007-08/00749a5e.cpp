// from server: 69% by colin
struct S_00749a5e {
    void __cdecl m(void*);
};

extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

void S_00749a5e::m(void* p)
{
    unsigned char* q = (unsigned char*)p;
    unsigned int v = *(unsigned int*)(q - 4);
    v ^= (unsigned int)q;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x850460);
}
