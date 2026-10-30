// roc 2012-06 00a07420  unit: CXTPRibbonTheme  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a07420
//
// 00a07420  6aff                 push -1
// 00a07422  68fe2dae00           push 0xae2dfe
// 00a07427  64a100000000         mov eax, dword ptr fs:[0]
// 00a0742d  50                   push eax
// 00a0742e  83ec24               sub esp, 0x24
// 00a07431  53                   push ebx
// 00a07432  55                   push ebp
// 00a07433  56                   push esi
// 00a07434  57                   push edi
// 00a07435  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0743a  33c4                 xor eax, esp
// 00a0743c  50                   push eax
// 00a0743d  8d442438             lea eax, [esp + 0x38]
// 00a07441  64a300000000         mov dword ptr fs:[0], eax
// 00a07447  8bf9                 mov edi, ecx
// 00a07449  837c245000           cmp dword ptr [esp + 0x50], 0
// 00a0744e  740f                 je 0xa0745f
// 00a07450  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a07454  50                   push eax
// 00a07455  e896fbffff           call 0xa06ff0
// 00a0745a  e980010000           jmp 0xa075df
// 00a0745f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00a07463  55                   push ebp
// 00a07464  8d4c241c             lea ecx, [esp + 0x1c]
// 00a07468  e833ddfcff           call 0x9d51a0
// 00a0746d  8b742448             mov esi, dword ptr [esp + 0x48]
// 00a07471  8d8fbc000000         lea ecx, [edi + 0xbc]
// 00a07477  51                   push ecx
// 00a07478  56                   push esi
// 00a07479  8d4c2430             lea ecx, [esp + 0x30]
// 00a0747d  e8aee0fcff           call 0x9d5530
// 00a07482  51                   push ecx
// 00a07483  8bcc                 mov ecx, esp
// 00a07485  89642450             mov dword ptr [esp + 0x50], esp
// 00a07489  685487c100           push 0xc18754
// 00a0748e  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00a07496  ff15c847b200         call dword ptr [0xb247c8]
// 00a0749c  51                   push ecx
// 00a0749d  8bcc                 mov ecx, esp
// 00a0749f  89642458             mov dword ptr [esp + 0x58], esp
// 00a074a3  684c87c100           push 0xc1874c
// 00a074a8  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00a074ad  ff15c847b200         call dword ptr [0xb247c8]
// 00a074b3  8bcf                 mov ecx, edi
// 00a074b5  c644244802           mov byte ptr [esp + 0x48], 2
// 00a074ba  e8a1030000           call 0xa07860
// 00a074bf  8bc8                 mov ecx, eax
// 00a074c1  c644244800           mov byte ptr [esp + 0x48], 0
// 00a074c6  e865ee0500           call 0xa66330
// 00a074cb  51                   push ecx
// 00a074cc  8bcc                 mov ecx, esp
// 00a074ce  89642450             mov dword ptr [esp + 0x50], esp
// 00a074d2  684087c100           push 0xc18740
// 00a074d7  89442458             mov dword ptr [esp + 0x58], eax
// 00a074db  ff15c847b200         call dword ptr [0xb247c8]
// 00a074e1  51                   push ecx
// 00a074e2  8bcc                 mov ecx, esp
// 00a074e4  89642450             mov dword ptr [esp + 0x50], esp
// 00a074e8  684c87c100           push 0xc1874c
// 00a074ed  c644244c03           mov byte ptr [esp + 0x4c], 3
// 00a074f2  ff15c847b200         call dword ptr [0xb247c8]
// 00a074f8  8bcf                 mov ecx, edi
// 00a074fa  c644244804           mov byte ptr [esp + 0x48], 4
// 00a074ff  e85c030000           call 0xa07860
// 00a07504  8bc8                 mov ecx, eax
// 00a07506  c644244800           mov byte ptr [esp + 0x48], 0
// 00a0750b  e820ee0500           call 0xa66330
// 00a07510  51                   push ecx
// 00a07511  8bcc                 mov ecx, esp
// 00a07513  8964244c             mov dword ptr [esp + 0x4c], esp
// 00a07517  683087c100           push 0xc18730
// 00a0751c  89442454             mov dword ptr [esp + 0x54], eax
// 00a07520  ff15c847b200         call dword ptr [0xb247c8]
// 00a07526  51                   push ecx
// 00a07527  8bcc                 mov ecx, esp
// 00a07529  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a0752d  684c87c100           push 0xc1874c
// 00a07532  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00a07537  ff15c847b200         call dword ptr [0xb247c8]
// 00a0753d  8bcf                 mov ecx, edi
// 00a0753f  c644244806           mov byte ptr [esp + 0x48], 6
// 00a07544  e817030000           call 0xa07860
// 00a07549  8bc8                 mov ecx, eax
// 00a0754b  c644244800           mov byte ptr [esp + 0x48], 0
// 00a07550  e8dbed0500           call 0xa66330
// 00a07555  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a07559  6a00                 push 0
// 00a0755b  52                   push edx
// 00a0755c  8bd8                 mov ebx, eax
// 00a0755e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a07562  50                   push eax
// 00a07563  8d4c2424             lea ecx, [esp + 0x24]
// 00a07567  51                   push ecx
// 00a07568  56                   push esi
// 00a07569  e822fcfcff           call 0x9d7190
// 00a0756e  8bc8                 mov ecx, eax
// 00a07570  e84bfcfcff           call 0x9d71c0
// 00a07575  53                   push ebx
// 00a07576  53                   push ebx
// 00a07577  8d542420             lea edx, [esp + 0x20]
// 00a0757b  52                   push edx
// 00a0757c  8bce                 mov ecx, esi
// 00a0757e  e823b9f7ff           call 0x982ea6
// 00a07583  6a01                 push 1
// 00a07585  8bce                 mov ecx, esi
// 00a07587  e81c200900           call 0xa995a8
// 00a0758c  8b1e                 mov ebx, dword ptr [esi]
// 00a0758e  33c0                 xor eax, eax
// 00a07590  39456c               cmp dword ptr [ebp + 0x6c], eax
// 00a07593  8bcf                 mov ecx, edi
// 00a07595  0f95c0               setne al
// 00a07598  83c011               add eax, 0x11
// 00a0759b  50                   push eax
// 00a0759c  e8ef02f8ff           call 0x987890
// 00a075a1  8b5338               mov edx, dword ptr [ebx + 0x38]
// 00a075a4  50                   push eax
// 00a075a5  8bce                 mov ecx, esi
// 00a075a7  ffd2                 call edx
// 00a075a9  8b3e                 mov edi, dword ptr [esi]
// 00a075ab  6a25                 push 0x25
// 00a075ad  8d44241c             lea eax, [esp + 0x1c]
// 00a075b1  83c554               add ebp, 0x54
// 00a075b4  50                   push eax
// 00a075b5  8bcd                 mov ecx, ebp
// 00a075b7  ff155846b200         call dword ptr [0xb24658]
// 00a075bd  50                   push eax
// 00a075be  8bcd                 mov ecx, ebp
// 00a075c0  ff159847b200         call dword ptr [0xb24798]
// 00a075c6  8b5770               mov edx, dword ptr [edi + 0x70]
// 00a075c9  50                   push eax
// 00a075ca  8bce                 mov ecx, esi
// 00a075cc  ffd2                 call edx
// 00a075ce  8d4c2428             lea ecx, [esp + 0x28]
// 00a075d2  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00a075da  e8d1dffcff           call 0x9d55b0
// 00a075df  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a075e3  64890d00000000       mov dword ptr fs:[0], ecx
// 00a075ea  59                   pop ecx
// 00a075eb  5f                   pop edi
// 00a075ec  5e                   pop esi
// 00a075ed  5d                   pop ebp
// 00a075ee  5b                   pop ebx
// 00a075ef  83c430               add esp, 0x30
// 00a075f2  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawKeyboardTip@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBarKeyboardTip@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp