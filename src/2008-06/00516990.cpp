// from server: 100% by auto
// roc 2008-06 00516990  unit: G3D::TextInput::TokenException  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516990
//
// 00516990  6aff                 push -1
// 00516992  6874c87c00           push 0x7cc874
// 00516997  64a100000000         mov eax, dword ptr fs:[0]
// 0051699d  50                   push eax
// 0051699e  64892500000000       mov dword ptr fs:[0], esp
// 005169a5  51                   push ecx
// 005169a6  56                   push esi
// 005169a7  8bf1                 mov esi, ecx
// 005169a9  89742404             mov dword ptr [esp + 4], esi
// 005169ad  8d4e60               lea ecx, [esi + 0x60]
// 005169b0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005169b8  ff1568248000         call dword ptr [0x802468]
// 005169be  8d4e44               lea ecx, [esi + 0x44]
// 005169c1  c644241000           mov byte ptr [esp + 0x10], 0
// 005169c6  ff1568248000         call dword ptr [0x802468]
// 005169cc  8bce                 mov ecx, esi
// 005169ce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005169d6  e865fbffff           call 0x516540
// 005169db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005169df  5e                   pop esi
// 005169e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005169e7  83c410               add esp, 0x10
// 005169ea  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
