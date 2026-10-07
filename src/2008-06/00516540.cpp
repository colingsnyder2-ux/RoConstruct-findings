// roc 2008-06 00516540  unit: G3D::BinaryInput  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516540
//
// 00516540  6aff                 push -1
// 00516542  689c6a7c00           push 0x7c6a9c
// 00516547  64a100000000         mov eax, dword ptr fs:[0]
// 0051654d  50                   push eax
// 0051654e  64892500000000       mov dword ptr fs:[0], esp
// 00516555  51                   push ecx
// 00516556  56                   push esi
// 00516557  8bf1                 mov esi, ecx
// 00516559  89742404             mov dword ptr [esp + 4], esi
// 0051655d  c706008a8200         mov dword ptr [esi], 0x828a00
// 00516563  8d4e28               lea ecx, [esi + 0x28]
// 00516566  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0051656e  ff1568248000         call dword ptr [0x802468]
// 00516574  8d4e04               lea ecx, [esi + 4]
// 00516577  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0051657f  ff1568248000         call dword ptr [0x802468]
// 00516585  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00516589  5e                   pop esi
// 0051658a  64890d00000000       mov dword ptr fs:[0], ecx
// 00516591  83c410               add esp, 0x10
// 00516594  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1TokenException@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
