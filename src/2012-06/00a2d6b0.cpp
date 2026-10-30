// roc 2012-06 00a2d6b0  unit: CXTPReportTip  size: 405 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2d6b0
//
// 00a2d6b0  6aff                 push -1
// 00a2d6b2  688050ae00           push 0xae5080
// 00a2d6b7  64a100000000         mov eax, dword ptr fs:[0]
// 00a2d6bd  50                   push eax
// 00a2d6be  81ec88000000         sub esp, 0x88
// 00a2d6c4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2d6c9  33c4                 xor eax, esp
// 00a2d6cb  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a2d6d2  56                   push esi
// 00a2d6d3  57                   push edi
// 00a2d6d4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2d6d9  33c4                 xor eax, esp
// 00a2d6db  50                   push eax
// 00a2d6dc  8d842494000000       lea eax, [esp + 0x94]
// 00a2d6e3  64a300000000         mov dword ptr fs:[0], eax
// 00a2d6e9  8bf1                 mov esi, ecx
// 00a2d6eb  56                   push esi
// 00a2d6ec  8d4c2440             lea ecx, [esp + 0x40]
// 00a2d6f0  e87953f5ff           call 0x982a6e
// 00a2d6f5  56                   push esi
// 00a2d6f6  8d4c2410             lea ecx, [esp + 0x10]
// 00a2d6fa  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 00a2d705  e8967afaff           call 0x9d51a0
// 00a2d70a  e85101f9ff           call 0x9bd860
// 00a2d70f  6a17                 push 0x17
// 00a2d711  8bc8                 mov ecx, eax
// 00a2d713  e8c8f8f8ff           call 0x9bcfe0
// 00a2d718  8bf8                 mov edi, eax
// 00a2d71a  e84101f9ff           call 0x9bd860
// 00a2d71f  6a18                 push 0x18
// 00a2d721  8bc8                 mov ecx, eax
// 00a2d723  e8b8f8f8ff           call 0x9bcfe0
// 00a2d728  50                   push eax
// 00a2d729  8d442410             lea eax, [esp + 0x10]
// 00a2d72d  50                   push eax
// 00a2d72e  8d4c2444             lea ecx, [esp + 0x44]
// 00a2d732  e87557f5ff           call 0x982eac
// 00a2d737  57                   push edi
// 00a2d738  57                   push edi
// 00a2d739  8d4c2414             lea ecx, [esp + 0x14]
// 00a2d73d  51                   push ecx
// 00a2d73e  8d4c2448             lea ecx, [esp + 0x48]
// 00a2d742  e85f57f5ff           call 0x982ea6
// 00a2d747  57                   push edi
// 00a2d748  8d4c2440             lea ecx, [esp + 0x40]
// 00a2d74c  e8ffbe0600           call 0xa99650
// 00a2d751  6a01                 push 1
// 00a2d753  8d4c2440             lea ecx, [esp + 0x40]
// 00a2d757  e84cbe0600           call 0xa995a8
// 00a2d75c  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2d75f  e874be0600           call 0xa995d8
// 00a2d764  a900200000           test eax, 0x2000
// 00a2d769  750f                 jne 0xa2d77a
// 00a2d76b  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00a2d76e  e865be0600           call 0xa995d8
// 00a2d773  a900004000           test eax, 0x400000
// 00a2d778  740e                 je 0xa2d788
// 00a2d77a  6800010000           push 0x100
// 00a2d77f  8d4c2440             lea ecx, [esp + 0x40]
// 00a2d783  e88058f5ff           call 0x983008
// 00a2d788  8d5674               lea edx, [esi + 0x74]
// 00a2d78b  52                   push edx
// 00a2d78c  8d442440             lea eax, [esp + 0x40]
// 00a2d790  50                   push eax
// 00a2d791  8d4c2434             lea ecx, [esp + 0x34]
// 00a2d795  e8967dfaff           call 0x9d5530
// 00a2d79a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a2d79e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a2d7a2  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a2d7a6  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00a2d7aa  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a2d7ae  83c003               add eax, 3
// 00a2d7b1  83e902               sub ecx, 2
// 00a2d7b4  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a2d7b8  89542424             mov dword ptr [esp + 0x24], edx
// 00a2d7bc  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a2d7c0  6824080000           push 0x824
// 00a2d7c5  8d442420             lea eax, [esp + 0x20]
// 00a2d7c9  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a2d7cd  83c668               add esi, 0x68
// 00a2d7d0  50                   push eax
// 00a2d7d1  8bce                 mov ecx, esi
// 00a2d7d3  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00a2d7db  89542430             mov dword ptr [esp + 0x30], edx
// 00a2d7df  83c770               add edi, 0x70
// 00a2d7e2  ff155846b200         call dword ptr [0xb24658]
// 00a2d7e8  50                   push eax
// 00a2d7e9  8bce                 mov ecx, esi
// 00a2d7eb  ff159847b200         call dword ptr [0xb24798]
// 00a2d7f1  8b17                 mov edx, dword ptr [edi]
// 00a2d7f3  50                   push eax
// 00a2d7f4  8d4c244c             lea ecx, [esp + 0x4c]
// 00a2d7f8  ffd2                 call edx
// 00a2d7fa  8d4c242c             lea ecx, [esp + 0x2c]
// 00a2d7fe  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00a2d806  e8a57dfaff           call 0x9d55b0
// 00a2d80b  8d4c243c             lea ecx, [esp + 0x3c]
// 00a2d80f  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00a2d81a  e84952f5ff           call 0x982a68
// 00a2d81f  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a2d826  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2d82d  59                   pop ecx
// 00a2d82e  5f                   pop edi
// 00a2d82f  5e                   pop esi
// 00a2d830  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a2d837  33cc                 xor ecx, esp
// 00a2d839  e8f961f5ff           call 0x983a37
// 00a2d83e  81c494000000         add esp, 0x94
// 00a2d844  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTPReportTip@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportTip.cpp