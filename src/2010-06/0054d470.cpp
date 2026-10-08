// roc 2010-06 0054d470  unit: G3D::Shader  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d470
//
// 0054d470  6aff                 push -1
// 0054d472  6893089900           push 0x990893
// 0054d477  64a100000000         mov eax, dword ptr fs:[0]
// 0054d47d  50                   push eax
// 0054d47e  64892500000000       mov dword ptr fs:[0], esp
// 0054d485  51                   push ecx
// 0054d486  56                   push esi
// 0054d487  8bf1                 mov esi, ecx
// 0054d489  89742404             mov dword ptr [esp + 4], esi
// 0054d48d  8d4e18               lea ecx, [esi + 0x18]
// 0054d490  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0054d498  c70134f6a100         mov dword ptr [ecx], 0xa1f634
// 0054d49e  e85dc5f4ff           call 0x499a00
// 0054d4a3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0054d4a6  c644241000           mov byte ptr [esp + 0x10], 0
// 0054d4ab  85c0                 test eax, eax
// 0054d4ad  742c                 je 0x54d4db
// 0054d4af  83c004               add eax, 4
// 0054d4b2  50                   push eax
// 0054d4b3  ff157ca39e00         call dword ptr [0x9ea37c]
// 0054d4b9  85c0                 test eax, eax
// 0054d4bb  7517                 jne 0x54d4d4
// 0054d4bd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0054d4c0  e85b66f3ff           call 0x483b20
// 0054d4c5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0054d4c8  85c9                 test ecx, ecx
// 0054d4ca  7408                 je 0x54d4d4
// 0054d4cc  8b01                 mov eax, dword ptr [ecx]
// 0054d4ce  8b10                 mov edx, dword ptr [eax]
// 0054d4d0  6a01                 push 1
// 0054d4d2  ffd2                 call edx
// 0054d4d4  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0054d4db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054d4df  c7065032a100         mov dword ptr [esi], 0xa13250
// 0054d4e5  5e                   pop esi
// 0054d4e6  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d4ed  83c410               add esp, 0x10
// 0054d4f0  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??1Shader@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
