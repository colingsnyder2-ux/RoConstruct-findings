// roc 2010-06 006b9cb0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b9cb0
//
// 006b9cb0  6aff                 push -1
// 006b9cb2  6889009a00           push 0x9a0089
// 006b9cb7  64a100000000         mov eax, dword ptr fs:[0]
// 006b9cbd  50                   push eax
// 006b9cbe  64892500000000       mov dword ptr fs:[0], esp
// 006b9cc5  51                   push ecx
// 006b9cc6  56                   push esi
// 006b9cc7  8bf1                 mov esi, ecx
// 006b9cc9  89742404             mov dword ptr [esp + 4], esi
// 006b9ccd  ff1504a49e00         call dword ptr [0x9ea404]
// 006b9cd3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006b9cdb  e810a7edff           call 0x5943f0
// 006b9ce0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b9ce4  89461c               mov dword ptr [esi + 0x1c], eax
// 006b9ce7  8bc6                 mov eax, esi
// 006b9ce9  5e                   pop esi
// 006b9cea  64890d00000000       mov dword ptr fs:[0], ecx
// 006b9cf1  83c410               add esp, 0x10
// 006b9cf4  c3                   ret 
// library rbxgs/v8datamodel\Sky.cpp (function ??0ContentId@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Sky.cpp
