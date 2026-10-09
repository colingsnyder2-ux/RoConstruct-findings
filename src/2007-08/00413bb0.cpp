// from server: 29% by colin
// roc 2007-08 00413bb0  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413bb0
//
// 00413bb0  6aff                 push -1
// 00413bb2  68188c7400           push 0x748c18
// 00413bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00413bbd  50                   push eax
// 00413bbe  51                   push ecx
// 00413bbf  56                   push esi
// 00413bc0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00413bc5  33c4                 xor eax, esp
// 00413bc7  50                   push eax
// 00413bc8  8d44240c             lea eax, [esp + 0xc]
// 00413bcc  64a300000000         mov dword ptr fs:[0], eax
// 00413bd2  8bf1                 mov esi, ecx
// 00413bd4  89742408             mov dword ptr [esp + 8], esi
// 00413bd8  8d4e04               lea ecx, [esi + 4]
// 00413bdb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00413be3  ff15ace67700         call dword ptr [0x77e6ac]
// 00413be9  c706bc707800         mov dword ptr [esi], 0x7870bc
// 00413bef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00413bf3  64890d00000000       mov dword ptr fs:[0], ecx
// 00413bfa  59                   pop ecx
// 00413bfb  5e                   pop esi
// 00413bfc  83c410               add esp, 0x10
// 00413bff  c3                   ret 

struct S {
    void* m_pVtable;
    char m_string[0x18];
    S();
};

extern "C" void __stdcall sub_77E6AC(void*);

S::S()
{
    sub_77E6AC(&m_string[0]);
    m_pVtable = (void*)0x7870bc;
}
