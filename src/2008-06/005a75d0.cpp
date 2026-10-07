// roc 2008-06 005a75d0  unit: RBX::Log  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a75d0
//
// 005a75d0  55                   push ebp
// 005a75d1  8bec                 mov ebp, esp
// 005a75d3  6aff                 push -1
// 005a75d5  6808307d00           push 0x7d3008
// 005a75da  64a100000000         mov eax, dword ptr fs:[0]
// 005a75e0  50                   push eax
// 005a75e1  64892500000000       mov dword ptr fs:[0], esp
// 005a75e8  83ec2c               sub esp, 0x2c
// 005a75eb  53                   push ebx
// 005a75ec  56                   push esi
// 005a75ed  57                   push edi
// 005a75ee  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a75f1  68546b9700           push 0x976b54
// 005a75f6  6800735a00           push 0x5a7300
// 005a75fb  8bf9                 mov edi, ecx
// 005a75fd  e82efdfaff           call 0x557330
// 005a7602  83c408               add esp, 8
// 005a7605  833d5c6b970000       cmp dword ptr [0x976b5c], 0
// 005a760c  7516                 jne 0x5a7624
// 005a760e  8d4dd8               lea ecx, [ebp - 0x28]
// 005a7611  e81a0efcff           call 0x568430
// 005a7616  68304f8d00           push 0x8d4f30
// 005a761b  8d45d8               lea eax, [ebp - 0x28]
// 005a761e  50                   push eax
// 005a761f  e8689f0f00           call 0x6a158c
// 005a7624  8b35586b9700         mov esi, dword ptr [0x976b58]
// 005a762a  8bce                 mov ecx, esi
// 005a762c  8975e8               mov dword ptr [ebp - 0x18], esi
// 005a762f  e8acd6feff           call 0x594ce0
// 005a7634  bb01000000           mov ebx, 1
// 005a7639  885dec               mov byte ptr [ebp - 0x14], bl
// 005a763c  8d4d08               lea ecx, [ebp + 8]
// 005a763f  51                   push ecx
// 005a7640  8b0d5c6b9700         mov ecx, dword ptr [0x976b5c]
// 005a7646  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a764d  885dfc               mov byte ptr [ebp - 4], bl
// 005a7650  e84b9de7ff           call 0x4213a0
// 005a7655  a15c6b9700           mov eax, dword ptr [0x976b5c]
// 005a765a  8b5010               mov edx, dword ptr [eax + 0x10]
// 005a765d  2b500c               sub edx, dword ptr [eax + 0xc]
// 005a7660  8bce                 mov ecx, esi
// 005a7662  c1fa02               sar edx, 2
// 005a7665  2bd3                 sub edx, ebx
// 005a7667  8917                 mov dword ptr [edi], edx
// 005a7669  011d606b9700         add dword ptr [0x976b60], ebx
// 005a766f  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 005a7676  e885d6feff           call 0x594d00
// 005a767b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005a767e  5f                   pop edi
// 005a767f  5e                   pop esi
// 005a7680  64890d00000000       mov dword ptr fs:[0], ecx
// 005a7687  5b                   pop ebx
// 005a7688  8be5                 mov esp, ebp
// 005a768a  5d                   pop ebp
// 005a768b  c20400               ret 4
// library boost-1.34.1/libs\thread\src\tss.cpp (function ?init@tss@detail@boost@@AAEXPAV?$function1@XPAXV?$allocator@Vfunction_base@boost@@@std@@@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/tss.cpp
