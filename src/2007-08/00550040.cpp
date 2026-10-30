// roc 2007-08 00550040  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00550040
//
// 00550040  6aff                 push -1
// 00550042  68fa287500           push 0x7528fa
// 00550047  64a100000000         mov eax, dword ptr fs:[0]
// 0055004d  50                   push eax
// 0055004e  64892500000000       mov dword ptr fs:[0], esp
// 00550055  83ec34               sub esp, 0x34
// 00550058  53                   push ebx
// 00550059  56                   push esi
// 0055005a  c744240800000000     mov dword ptr [esp + 8], 0
// 00550062  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00550066  57                   push edi
// 00550067  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0055006f  ff15a4e67700         call dword ptr [0x77e6a4]
// 00550075  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00550079  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00550081  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00550089  8da42400000000       lea esp, [esp]
// 00550090  33ff                 xor edi, edi
// 00550092  8b33                 mov esi, dword ptr [ebx]
// 00550094  6a01                 push 1
// 00550096  8d442458             lea eax, [esp + 0x58]
// 0055009a  50                   push eax
// 0055009b  8bce                 mov ecx, esi
// 0055009d  ff150ce67700         call dword ptr [0x77e60c]
// 005500a3  85c0                 test eax, eax
// 005500a5  7507                 jne 0x5500ae
// 005500a7  8a463c               mov al, byte ptr [esi + 0x3c]
// 005500aa  f6d8                 neg al
// 005500ac  1bc0                 sbb eax, eax
// 005500ae  83f8ff               cmp eax, -1
// 005500b1  7407                 je 0x5500ba
// 005500b3  03f8                 add edi, eax
// 005500b5  83ff01               cmp edi, 1
// 005500b8  7cd8                 jl 0x550092
// 005500ba  85ff                 test edi, edi
// 005500bc  7437                 je 0x5500f5
// 005500be  83ff01               cmp edi, 1
// 005500c1  751b                 jne 0x5500de
// 005500c3  0fb6442454           movzx eax, byte ptr [esp + 0x54]
// 005500c8  83f8ff               cmp eax, -1
// 005500cb  7428                 je 0x5500f5
// 005500cd  85c0                 test eax, eax
// 005500cf  743e                 je 0x55010f
// 005500d1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005500d5  50                   push eax
// 005500d6  ff155ce57700         call dword ptr [0x77e55c]
// 005500dc  ebb2                 jmp 0x550090
// 005500de  83ffff               cmp edi, -1
// 005500e1  7412                 je 0x5500f5
// 005500e3  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 005500e7  b8feffffff           mov eax, 0xfffffffe
// 005500ec  50                   push eax
// 005500ed  ff155ce57700         call dword ptr [0x77e55c]
// 005500f3  eb9b                 jmp 0x550090
// 005500f5  6a04                 push 4
// 005500f7  8d4c2414             lea ecx, [esp + 0x14]
// 005500fb  e890dfffff           call 0x54e090
// 00550100  6814a48500           push 0x85a414
// 00550105  8d4c2414             lea ecx, [esp + 0x14]
// 00550109  51                   push ecx
// 0055010a  e88f0a0e00           call 0x630b9e
// 0055010f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00550113  8b442450             mov eax, dword ptr [esp + 0x50]
// 00550117  5f                   pop edi
// 00550118  5e                   pop esi
// 00550119  5b                   pop ebx
// 0055011a  64890d00000000       mov dword ptr fs:[0], ecx
// 00550121  83c440               add esp, 0x40
// 00550124  c20800               ret 8
// copied from an identical function in another client (function ??$read_string@V?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@iostreams@boost@@@?$basic_gzip_decompressor@V?$allocator@D@std@@@iostreams@boost@@AAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV?$non_blocking_adapter@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@12@@Z)

// roc-cl: 50727
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_rtti_01f403e5b5979552.cpp