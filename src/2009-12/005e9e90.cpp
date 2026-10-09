// roc 2009-12 005e9e90  unit: G3D::Shader  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9e90
//
// 005e9e90  6aff                 push -1
// 005e9e92  6813eb9300           push 0x93eb13
// 005e9e97  64a100000000         mov eax, dword ptr fs:[0]
// 005e9e9d  50                   push eax
// 005e9e9e  64892500000000       mov dword ptr fs:[0], esp
// 005e9ea5  51                   push ecx
// 005e9ea6  56                   push esi
// 005e9ea7  8bf1                 mov esi, ecx
// 005e9ea9  89742404             mov dword ptr [esp + 4], esi
// 005e9ead  8d4e18               lea ecx, [esi + 0x18]
// 005e9eb0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005e9eb8  c701dc189c00         mov dword ptr [ecx], 0x9c18dc
// 005e9ebe  e8cd36efff           call 0x4dd590
// 005e9ec3  8b460c               mov eax, dword ptr [esi + 0xc]
// 005e9ec6  c644241000           mov byte ptr [esp + 0x10], 0
// 005e9ecb  85c0                 test eax, eax
// 005e9ecd  742c                 je 0x5e9efb
// 005e9ecf  83c004               add eax, 4
// 005e9ed2  50                   push eax
// 005e9ed3  ff1508b29800         call dword ptr [0x98b208]
// 005e9ed9  85c0                 test eax, eax
// 005e9edb  7517                 jne 0x5e9ef4
// 005e9edd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005e9ee0  e83b11e6ff           call 0x44b020
// 005e9ee5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005e9ee8  85c9                 test ecx, ecx
// 005e9eea  7408                 je 0x5e9ef4
// 005e9eec  8b01                 mov eax, dword ptr [ecx]
// 005e9eee  8b10                 mov edx, dword ptr [eax]
// 005e9ef0  6a01                 push 1
// 005e9ef2  ffd2                 call edx
// 005e9ef4  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005e9efb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e9eff  c706a0559b00         mov dword ptr [esi], 0x9b55a0
// 005e9f05  5e                   pop esi
// 005e9f06  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9f0d  83c410               add esp, 0x10
// 005e9f10  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??1Shader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
