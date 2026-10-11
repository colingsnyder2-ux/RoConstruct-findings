// from server: 100% by auto
// roc 2007-08 004b7cf0  unit: Exposer  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7cf0
//
// 004b7cf0  6aff                 push -1
// 004b7cf2  68b8b47400           push 0x74b4b8
// 004b7cf7  64a100000000         mov eax, dword ptr fs:[0]
// 004b7cfd  50                   push eax
// 004b7cfe  51                   push ecx
// 004b7cff  53                   push ebx
// 004b7d00  56                   push esi
// 004b7d01  57                   push edi
// 004b7d02  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b7d07  33c4                 xor eax, esp
// 004b7d09  50                   push eax
// 004b7d0a  8d442414             lea eax, [esp + 0x14]
// 004b7d0e  64a300000000         mov dword ptr fs:[0], eax
// 004b7d14  8bf9                 mov edi, ecx
// 004b7d16  897c2410             mov dword ptr [esp + 0x10], edi
// 004b7d1a  33f6                 xor esi, esi
// 004b7d1c  397704               cmp dword ptr [edi + 4], esi
// 004b7d1f  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b7d27  7629                 jbe 0x4b7d52
// 004b7d29  8da42400000000       lea esp, [esp]
// 004b7d30  8b07                 mov eax, dword ptr [edi]
// 004b7d32  8b5cf004             mov ebx, dword ptr [eax + esi*8 + 4]
// 004b7d36  85db                 test ebx, ebx
// 004b7d38  7410                 je 0x4b7d4a
// 004b7d3a  8bcb                 mov ecx, ebx
// 004b7d3c  e84fc50000           call 0x4c4290
// 004b7d41  53                   push ebx
// 004b7d42  e81b7f1700           call 0x62fc62
// 004b7d47  83c404               add esp, 4
// 004b7d4a  83c601               add esi, 1
// 004b7d4d  3b7704               cmp esi, dword ptr [edi + 4]
// 004b7d50  72de                 jb 0x4b7d30
// 004b7d52  8bcf                 mov ecx, edi
// 004b7d54  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 004b7d5c  e8cffdffff           call 0x4b7b30
// 004b7d61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004b7d65  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7d6c  59                   pop ecx
// 004b7d6d  5f                   pop edi
// 004b7d6e  5e                   pop esi
// 004b7d6f  5b                   pop ebx
// 004b7d70  83c410               add esp, 0x10
// 004b7d73  c3                   ret 

// from server: 51% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 deque_wp.cpp