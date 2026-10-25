// from server: 100% by king_originala
// roc 2008-06 0066a9d0  unit: RBX::GroupDragTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066a9d0
//
// 0066a9d0  6aff                 push -1
// 0066a9d2  68f8a97d00           push 0x7da9f8
// 0066a9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0066a9dd  50                   push eax
// 0066a9de  64892500000000       mov dword ptr fs:[0], esp
// 0066a9e5  51                   push ecx
// 0066a9e6  56                   push esi
// 0066a9e7  8bf1                 mov esi, ecx
// 0066a9e9  57                   push edi
// 0066a9ea  89742408             mov dword ptr [esp + 8], esi
// 0066a9ee  c7062cd08400         mov dword ptr [esi], 0x84d02c
// 0066a9f4  c7460414d08400       mov dword ptr [esi + 4], 0x84d014
// 0066a9fb  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0066a9fe  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0066aa06  85ff                 test edi, edi
// 0066aa08  7410                 je 0x66aa1a
// 0066aa0a  8bcf                 mov ecx, edi
// 0066aa0c  e8ef3cfaff           call 0x60e700
// 0066aa11  57                   push edi
// 0066aa12  e8635c0300           call 0x6a067a
// 0066aa17  83c404               add esp, 4
// 0066aa1a  8bce                 mov ecx, esi
// 0066aa1c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0066aa24  e857adfaff           call 0x615780
// 0066aa29  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066aa2d  5f                   pop edi
// 0066aa2e  5e                   pop esi
// 0066aa2f  64890d00000000       mov dword ptr fs:[0], ecx
// 0066aa36  83c410               add esp, 0x10
// 0066aa39  c3                   ret 

void __cdecl operator delete(void *);

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    unsigned int reserved[5];
    virtual ~Base();
};

struct Owned {
    ~Owned();
};

struct S : Base {
    Owned *owned;
    virtual ~S();
};

S::~S()
{
    delete owned;
}
