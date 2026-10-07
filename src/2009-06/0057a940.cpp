// roc 2009-06 0057a940  unit: G3D::TextInput::TokenException  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057a940
//
// 0057a940  6aff                 push -1
// 0057a942  68040a8600           push 0x860a04
// 0057a947  64a100000000         mov eax, dword ptr fs:[0]
// 0057a94d  50                   push eax
// 0057a94e  64892500000000       mov dword ptr fs:[0], esp
// 0057a955  51                   push ecx
// 0057a956  56                   push esi
// 0057a957  8bf1                 mov esi, ecx
// 0057a959  89742404             mov dword ptr [esp + 4], esi
// 0057a95d  8d4e60               lea ecx, [esi + 0x60]
// 0057a960  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0057a968  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a96e  8d4e44               lea ecx, [esi + 0x44]
// 0057a971  c644241000           mov byte ptr [esp + 0x10], 0
// 0057a976  ff15c4e48900         call dword ptr [0x89e4c4]
// 0057a97c  8bce                 mov ecx, esi
// 0057a97e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0057a986  e865fbffff           call 0x57a4f0
// 0057a98b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a98f  5e                   pop esi
// 0057a990  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a997  83c410               add esp, 0x10
// 0057a99a  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1WrongSymbol@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
