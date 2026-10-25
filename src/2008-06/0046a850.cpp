// from server: 100% by king_originala
// roc 2008-06 0046a850  unit: CWebToolbox  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a850
//
// 0046a850  6aff                 push -1
// 0046a852  681afa7b00           push 0x7bfa1a
// 0046a857  64a100000000         mov eax, dword ptr fs:[0]
// 0046a85d  50                   push eax
// 0046a85e  64892500000000       mov dword ptr fs:[0], esp
// 0046a865  51                   push ecx
// 0046a866  56                   push esi
// 0046a867  6800010000           push 0x100
// 0046a86c  e8af602300           call 0x6a0920
// 0046a871  8bf0                 mov esi, eax
// 0046a873  83c404               add esp, 4
// 0046a876  89742404             mov dword ptr [esp + 4], esi
// 0046a87a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046a882  85f6                 test esi, esi
// 0046a884  7429                 je 0x46a8af
// 0046a886  8bce                 mov ecx, esi
// 0046a888  e8d3b1ffff           call 0x465a60
// 0046a88d  c706f4c48100         mov dword ptr [esi], 0x81c4f4
// 0046a893  c786fc00000000000000 mov dword ptr [esi + 0xfc], 0
// 0046a89d  8bc6                 mov eax, esi
// 0046a89f  5e                   pop esi
// 0046a8a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046a8a4  64890d00000000       mov dword ptr fs:[0], ecx
// 0046a8ab  83c410               add esp, 0x10
// 0046a8ae  c3                   ret 
// 0046a8af  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046a8b3  33c0                 xor eax, eax
// 0046a8b5  5e                   pop esi
// 0046a8b6  64890d00000000       mov dword ptr fs:[0], ecx
// 0046a8bd  83c410               add esp, 0x10
// 0046a8c0  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct VCSecureHtmlView
{
    void* vtable;
    char pad[0xf0];
    char field_f4;
    VCSecureHtmlView* construct();
};

struct CWebToolbox : VCSecureHtmlView
{
    char pad_f8[4];
    int field_fc;
    CWebToolbox();
};

__forceinline CWebToolbox::CWebToolbox()
{
    construct();
    vtable = (void*)0x81c4f4;
    field_fc = 0;
}

CWebToolbox* create()
{
    return new CWebToolbox;
}
