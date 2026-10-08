// from server: 100% by colin
// roc 2007-08 006b2ef0  unit: CXTPResourceManager  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2ef0
//
// 006b2ef0  8bc1                 mov eax, ecx
// 006b2ef2  c7008c5f7d00         mov dword ptr [eax], 0x7d5f8c
// 006b2ef8  c7400401000000       mov dword ptr [eax + 4], 1
// 006b2eff  c7400800000000       mov dword ptr [eax + 8], 0
// 006b2f06  66c7400c0904         mov word ptr [eax + 0xc], 0x409
// 006b2f0c  c3                   ret 

struct CXTPResourceManager
{
    void* m_pVtable;
    int m_nField4;
    int m_nField8;
    unsigned short m_nFieldC;
    CXTPResourceManager* Init();
};

CXTPResourceManager* CXTPResourceManager::Init()
{
    CXTPResourceManager* p = this;
    p->m_pVtable = (void*)0x7d5f8c;
    p->m_nField4 = 1;
    p->m_nField8 = 0;
    p->m_nFieldC = 0x409;
    return p;
}
