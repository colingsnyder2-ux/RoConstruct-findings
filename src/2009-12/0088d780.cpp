// roc 2009-12 0088d780  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088d780
//
// 0088d780  83ec14               sub esp, 0x14
// 0088d783  57                   push edi
// 0088d784  33ff                 xor edi, edi
// 0088d786  397924               cmp dword ptr [ecx + 0x24], edi
// 0088d789  894c2404             mov dword ptr [esp + 4], ecx
// 0088d78d  0f8e8e000000         jle 0x88d821
// 0088d793  55                   push ebp
// 0088d794  53                   push ebx
// 0088d795  8d691c               lea ebp, [ecx + 0x1c]
// 0088d798  56                   push esi
// 0088d799  8da42400000000       lea esp, [esp]
// 0088d7a0  85ff                 test edi, edi
// 0088d7a2  0f8c80000000         jl 0x88d828
// 0088d7a8  3b7d08               cmp edi, dword ptr [ebp + 8]
// 0088d7ab  7d7b                 jge 0x88d828
// 0088d7ad  8b4504               mov eax, dword ptr [ebp + 4]
// 0088d7b0  8b34b8               mov esi, dword ptr [eax + edi*4]
// 0088d7b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088d7b7  51                   push ecx
// 0088d7b8  8d5e10               lea ebx, [esi + 0x10]
// 0088d7bb  53                   push ebx
// 0088d7bc  8d54241c             lea edx, [esp + 0x1c]
// 0088d7c0  52                   push edx
// 0088d7c1  ff15dcca9800         call dword ptr [0x98cadc]
// 0088d7c7  85c0                 test eax, eax
// 0088d7c9  7449                 je 0x88d814
// 0088d7cb  53                   push ebx
// 0088d7cc  8d442418             lea eax, [esp + 0x18]
// 0088d7d0  50                   push eax
// 0088d7d1  ff15bcca9800         call dword ptr [0x98cabc]
// 0088d7d7  85c0                 test eax, eax
// 0088d7d9  7421                 je 0x88d7fc
// 0088d7db  6a01                 push 1
// 0088d7dd  57                   push edi
// 0088d7de  8bcd                 mov ecx, ebp
// 0088d7e0  e89bfaf9ff           call 0x82d280
// 0088d7e5  85f6                 test esi, esi
// 0088d7e7  7410                 je 0x88d7f9
// 0088d7e9  8bce                 mov ecx, esi
// 0088d7eb  e8f0fdffff           call 0x88d5e0
// 0088d7f0  56                   push esi
// 0088d7f1  e86460f6ff           call 0x7f385a
// 0088d7f6  83c404               add esp, 4
// 0088d7f9  4f                   dec edi
// 0088d7fa  eb18                 jmp 0x88d814
// 0088d7fc  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 0088d801  7411                 je 0x88d814
// 0088d803  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088d807  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0088d80a  8d4e24               lea ecx, [esi + 0x24]
// 0088d80d  52                   push edx
// 0088d80e  50                   push eax
// 0088d80f  e82c7efcff           call 0x855640
// 0088d814  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088d818  47                   inc edi
// 0088d819  3b7924               cmp edi, dword ptr [ecx + 0x24]
// 0088d81c  7c82                 jl 0x88d7a0
// 0088d81e  5e                   pop esi
// 0088d81f  5b                   pop ebx
// 0088d820  5d                   pop ebp
// 0088d821  5f                   pop edi
// 0088d822  83c414               add esp, 0x14
// 0088d825  c20800               ret 8
// 0088d828  e8df62f6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveIntersections@CXTPCommandBarAnimation@@IAEXPBUtagRECT@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp