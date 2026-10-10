// from server: 69% by colin
extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

struct S_func_00749b1e
{
};

void __cdecl func_00749b1e(int, void* p)
{
    unsigned int v = *(unsigned int*)((char*)p - 4);
    v ^= (unsigned int)p;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x850510);
}
