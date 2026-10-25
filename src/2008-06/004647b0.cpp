// from server: 100% by king_originala
// roc 2008-06 004647b0  unit: CScriptDoc  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004647b0
//
// 004647b0  6aff                 push -1
// 004647b2  681afa7b00           push 0x7bfa1a
// 004647b7  64a100000000         mov eax, dword ptr fs:[0]
// 004647bd  50                   push eax
// 004647be  64892500000000       mov dword ptr fs:[0], esp
// 004647c5  51                   push ecx
// 004647c6  56                   push esi
// 004647c7  6a5c                 push 0x5c
// 004647c9  e852c12300           call 0x6a0920
// 004647ce  8bf0                 mov esi, eax
// 004647d0  83c404               add esp, 4
// 004647d3  89742404             mov dword ptr [esp + 4], esi
// 004647d7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004647df  85f6                 test esi, esi
// 004647e1  742d                 je 0x464810
// 004647e3  8bce                 mov ecx, esi
// 004647e5  e896c12300           call 0x6a0980
// 004647ea  c706acb28100         mov dword ptr [esi], 0x81b2ac
// 004647f0  c7465400000000       mov dword ptr [esi + 0x54], 0
// 004647f7  c7465800000000       mov dword ptr [esi + 0x58], 0
// 004647fe  8bc6                 mov eax, esi
// 00464800  5e                   pop esi
// 00464801  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00464805  64890d00000000       mov dword ptr fs:[0], ecx
// 0046480c  83c410               add esp, 0x10
// 0046480f  c3                   ret 
// 00464810  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00464814  33c0                 xor eax, eax
// 00464816  5e                   pop esi
// 00464817  64890d00000000       mov dword ptr fs:[0], ecx
// 0046481e  83c410               add esp, 0x10
// 00464821  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Base {
    Base();
    virtual ~Base();
    char padding[0x50];
};

struct CScriptDoc : Base {
    virtual ~CScriptDoc();
    int field54;
    int field58;
    static CScriptDoc* Create();
};

CScriptDoc* CScriptDoc::Create()
{
    CScriptDoc* p = new CScriptDoc;
    if (p) {
        p->field54 = 0;
        p->field58 = 0;
    }
    return p;
}
