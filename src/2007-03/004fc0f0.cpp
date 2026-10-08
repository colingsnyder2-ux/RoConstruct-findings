// roc 2007-03 004fc0f0  unit: seg_004f0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fc0f0
//
// 004fc0f0  56                   push esi
// 004fc0f1  8bf1                 mov esi, ecx
// 004fc0f3  33c0                 xor eax, eax
// 004fc0f5  394604               cmp dword ptr [esi + 4], eax
// 004fc0f8  7e1a                 jle 0x4fc114
// 004fc0fa  33c9                 xor ecx, ecx
// 004fc0fc  ba3cfd7900           mov edx, 0x79fd3c
// 004fc101  53                   push ebx
// 004fc102  8b1e                 mov ebx, dword ptr [esi]
// 004fc104  89541910             mov dword ptr [ecx + ebx + 0x10], edx
// 004fc108  83c001               add eax, 1
// 004fc10b  83c124               add ecx, 0x24
// 004fc10e  3b4604               cmp eax, dword ptr [esi + 4]
// 004fc111  7cef                 jl 0x4fc102
// 004fc113  5b                   pop ebx
// 004fc114  8b06                 mov eax, dword ptr [esi]
// 004fc116  50                   push eax
// 004fc117  e86472ffff           call 0x4f3380
// 004fc11c  83c404               add esp, 4
// 004fc11f  c70600000000         mov dword ptr [esi], 0
// 004fc125  c7460400000000       mov dword ptr [esi + 4], 0
// 004fc12c  c7460800000000       mov dword ptr [esi + 8], 0
// 004fc133  5e                   pop esi
// 004fc134  c3                   ret 
// library rbxgs/v8datamodel\Camera.cpp (function ??1?$Array@VFace@Frustum@GCamera@G3D@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
