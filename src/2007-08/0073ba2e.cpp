// from server: 63% by colin
// roc 2007-08 0073ba2e  size: 26 bytes
// library MFC

extern "C" void __cdecl func_00630a1e(void*);
extern "C" void __cdecl func_00630a18(void*);

struct CSpinButtonCtrl
{
    void func_0073ba2e(void*);
};

void CSpinButtonCtrl::func_0073ba2e(void* p)
{
    char* q = (char*)p;
    unsigned int v = *(unsigned int*)(q - 4);
    v ^= (unsigned int)q;
    func_00630a1e((void*)v);
    func_00630a18((void*)0x84285c);
}
