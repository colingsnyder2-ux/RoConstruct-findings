// roc 2008-06 004ba8e0  unit: RBX::Network::IdSerializer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ba8e0
//
// 004ba8e0  6aff                 push -1
// 004ba8e2  68b8927c00           push 0x7c92b8
// 004ba8e7  64a100000000         mov eax, dword ptr fs:[0]
// 004ba8ed  50                   push eax
// 004ba8ee  64892500000000       mov dword ptr fs:[0], esp
// 004ba8f5  51                   push ecx
// 004ba8f6  56                   push esi
// 004ba8f7  57                   push edi
// 004ba8f8  8bf9                 mov edi, ecx
// 004ba8fa  897c2408             mov dword ptr [esp + 8], edi
// 004ba8fe  33f6                 xor esi, esi
// 004ba900  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ba908  397704               cmp dword ptr [edi + 4], esi
// 004ba90b  7624                 jbe 0x4ba931
// 004ba90d  53                   push ebx
// 004ba90e  8bff                 mov edi, edi
// 004ba910  8b07                 mov eax, dword ptr [edi]
// 004ba912  8b5cf004             mov ebx, dword ptr [eax + esi*8 + 4]
// 004ba916  85db                 test ebx, ebx
// 004ba918  7410                 je 0x4ba92a
// 004ba91a  8bcb                 mov ecx, ebx
// 004ba91c  e8af390100           call 0x4ce2d0
// 004ba921  53                   push ebx
// 004ba922  e8535d1e00           call 0x6a067a
// 004ba927  83c404               add esp, 4
// 004ba92a  46                   inc esi
// 004ba92b  3b7704               cmp esi, dword ptr [edi + 4]
// 004ba92e  72e0                 jb 0x4ba910
// 004ba930  5b                   pop ebx
// 004ba931  8bcf                 mov ecx, edi
// 004ba933  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ba93b  e8e0fdffff           call 0x4ba720
// 004ba940  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ba944  5f                   pop edi
// 004ba945  5e                   pop esi
// 004ba946  64890d00000000       mov dword ptr fs:[0], ecx
// 004ba94d  83c410               add esp, 0x10
// 004ba950  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ??1StringCompressor@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
