// roc 2007-03 004aa3c0  unit: seg_004a0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa3c0
//
// 004aa3c0  6aff                 push -1
// 004aa3c2  6808c77400           push 0x74c708
// 004aa3c7  64a100000000         mov eax, dword ptr fs:[0]
// 004aa3cd  50                   push eax
// 004aa3ce  64892500000000       mov dword ptr fs:[0], esp
// 004aa3d5  51                   push ecx
// 004aa3d6  56                   push esi
// 004aa3d7  57                   push edi
// 004aa3d8  8bf9                 mov edi, ecx
// 004aa3da  897c2408             mov dword ptr [esp + 8], edi
// 004aa3de  33f6                 xor esi, esi
// 004aa3e0  397704               cmp dword ptr [edi + 4], esi
// 004aa3e3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004aa3eb  7626                 jbe 0x4aa413
// 004aa3ed  53                   push ebx
// 004aa3ee  8bff                 mov edi, edi
// 004aa3f0  8b07                 mov eax, dword ptr [edi]
// 004aa3f2  8b5cf004             mov ebx, dword ptr [eax + esi*8 + 4]
// 004aa3f6  85db                 test ebx, ebx
// 004aa3f8  7410                 je 0x4aa40a
// 004aa3fa  8bcb                 mov ecx, ebx
// 004aa3fc  e82fea0000           call 0x4b8e30
// 004aa401  53                   push ebx
// 004aa402  e8e93c1700           call 0x61e0f0
// 004aa407  83c404               add esp, 4
// 004aa40a  83c601               add esi, 1
// 004aa40d  3b7704               cmp esi, dword ptr [edi + 4]
// 004aa410  72de                 jb 0x4aa3f0
// 004aa412  5b                   pop ebx
// 004aa413  8bcf                 mov ecx, edi
// 004aa415  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004aa41d  e8eefdffff           call 0x4aa210
// 004aa422  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004aa426  5f                   pop edi
// 004aa427  5e                   pop esi
// 004aa428  64890d00000000       mov dword ptr fs:[0], ecx
// 004aa42f  83c410               add esp, 0x10
// 004aa432  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ??1StringCompressor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
