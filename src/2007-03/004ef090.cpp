// roc 2007-03 004ef090  unit: seg_004e0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ef090
//
// 004ef090  56                   push esi
// 004ef091  57                   push edi
// 004ef092  8bf1                 mov esi, ecx
// 004ef094  33ff                 xor edi, edi
// 004ef096  397e04               cmp dword ptr [esi + 4], edi
// 004ef099  7e1a                 jle 0x4ef0b5
// 004ef09b  53                   push ebx
// 004ef09c  33db                 xor ebx, ebx
// 004ef09e  8bff                 mov edi, edi
// 004ef0a0  8b0e                 mov ecx, dword ptr [esi]
// 004ef0a2  03cb                 add ecx, ebx
// 004ef0a4  e8c7fdffff           call 0x4eee70
// 004ef0a9  83c701               add edi, 1
// 004ef0ac  83c328               add ebx, 0x28
// 004ef0af  3b7e04               cmp edi, dword ptr [esi + 4]
// 004ef0b2  7cec                 jl 0x4ef0a0
// 004ef0b4  5b                   pop ebx
// 004ef0b5  8b06                 mov eax, dword ptr [esi]
// 004ef0b7  50                   push eax
// 004ef0b8  e8c3420000           call 0x4f3380
// 004ef0bd  83c404               add esp, 4
// 004ef0c0  5f                   pop edi
// 004ef0c1  c70600000000         mov dword ptr [esi], 0
// 004ef0c7  c7460400000000       mov dword ptr [esi + 4], 0
// 004ef0ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004ef0d5  5e                   pop esi
// 004ef0d6  c3                   ret 
// library rbxgs-render/Material.cpp (function ??1?$Array@VLevel@Material@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
