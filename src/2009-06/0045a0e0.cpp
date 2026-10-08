// from server: 100% by auto
// roc 2009-06 0045a0e0  unit: G3D::Hashable  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0045a0e0
//
// 0045a0e0  6aff                 push -1
// 0045a0e2  6858238500           push 0x852358
// 0045a0e7  64a100000000         mov eax, dword ptr fs:[0]
// 0045a0ed  50                   push eax
// 0045a0ee  64892500000000       mov dword ptr fs:[0], esp
// 0045a0f5  51                   push ecx
// 0045a0f6  56                   push esi
// 0045a0f7  8bf1                 mov esi, ecx
// 0045a0f9  89742404             mov dword ptr [esp + 4], esi
// 0045a0fd  c70628a18b00         mov dword ptr [esi], 0x8ba128
// 0045a103  8d4e04               lea ecx, [esi + 4]
// 0045a106  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045a10e  ff15c4e48900         call dword ptr [0x89e4c4]
// 0045a114  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045a118  c70610a18b00         mov dword ptr [esi], 0x8ba110
// 0045a11e  5e                   pop esi
// 0045a11f  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a126  83c410               add esp, 0x10
// 0045a129  c3                   ret 
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ??1TextureArgs@TextureManager@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
