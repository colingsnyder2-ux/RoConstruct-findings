// roc 2010-06 0055c850  unit: G3D::GCamera  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055c850
//
// 0055c850  6aff                 push -1
// 0055c852  68bc5f9800           push 0x985fbc
// 0055c857  64a100000000         mov eax, dword ptr fs:[0]
// 0055c85d  50                   push eax
// 0055c85e  64892500000000       mov dword ptr fs:[0], esp
// 0055c865  51                   push ecx
// 0055c866  56                   push esi
// 0055c867  8bf1                 mov esi, ecx
// 0055c869  89742404             mov dword ptr [esp + 4], esi
// 0055c86d  c706880aa200         mov dword ptr [esi], 0xa20a88
// 0055c873  8d4e28               lea ecx, [esi + 0x28]
// 0055c876  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055c87e  ff1500a49e00         call dword ptr [0x9ea400]
// 0055c884  8d4e04               lea ecx, [esi + 4]
// 0055c887  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055c88f  ff1500a49e00         call dword ptr [0x9ea400]
// 0055c895  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055c899  5e                   pop esi
// 0055c89a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c8a1  83c410               add esp, 0x10
// 0055c8a4  c3                   ret 
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??1TokenException@TextInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
