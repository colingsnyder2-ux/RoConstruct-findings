// roc 2012-06 00a7a900  unit: CXTCaptionButtonTheme  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a900
//
// 00a7a900  83ec14               sub esp, 0x14
// 00a7a903  8b01                 mov eax, dword ptr [ecx]
// 00a7a905  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a7a908  57                   push edi
// 00a7a909  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a7a90d  57                   push edi
// 00a7a90e  894c2408             mov dword ptr [esp + 8], ecx
// 00a7a912  ffd2                 call edx
// 00a7a914  85c0                 test eax, eax
// 00a7a916  0f841a010000         je 0xa7aa36
// 00a7a91c  53                   push ebx
// 00a7a91d  55                   push ebp
// 00a7a91e  56                   push esi
// 00a7a91f  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a7a923  8b4618               mov eax, dword ptr [esi + 0x18]
// 00a7a926  50                   push eax
// 00a7a927  e846ec0100           call 0xa99572
// 00a7a92c  8d4e1c               lea ecx, [esi + 0x1c]
// 00a7a92f  51                   push ecx
// 00a7a930  8d542418             lea edx, [esp + 0x18]
// 00a7a934  52                   push edx
// 00a7a935  8be8                 mov ebp, eax
// 00a7a937  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a7a93d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00a7a940  8ad8                 mov bl, al
// 00a7a942  c1e802               shr eax, 2
// 00a7a945  2401                 and al, 1
// 00a7a947  8bcf                 mov ecx, edi
// 00a7a949  80e301               and bl, 1
// 00a7a94c  8844242c             mov byte ptr [esp + 0x2c], al
// 00a7a950  be01000000           mov esi, 1
// 00a7a955  e886fdfeff           call 0xa6a6e0
// 00a7a95a  3c01                 cmp al, 1
// 00a7a95c  7505                 jne 0xa7a963
// 00a7a95e  be05000000           mov esi, 5
// 00a7a963  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00a7a96a  750b                 jne 0xa7a977
// 00a7a96c  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a7a972  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00a7a975  7505                 jne 0xa7a97c
// 00a7a977  be02000000           mov esi, 2
// 00a7a97c  84db                 test bl, bl
// 00a7a97e  7506                 jne 0xa7a986
// 00a7a980  837f7c00             cmp dword ptr [edi + 0x7c], 0
// 00a7a984  7405                 je 0xa7a98b
// 00a7a986  be03000000           mov esi, 3
// 00a7a98b  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00a7a990  7405                 je 0xa7a997
// 00a7a992  be04000000           mov esi, 4
// 00a7a997  8b7f20               mov edi, dword ptr [edi + 0x20]
// 00a7a99a  85ed                 test ebp, ebp
// 00a7a99c  7504                 jne 0xa7a9a2
// 00a7a99e  33db                 xor ebx, ebx
// 00a7a9a0  eb03                 jmp 0xa7a9a5
// 00a7a9a2  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00a7a9a5  57                   push edi
// 00a7a9a6  ff15503ab200         call dword ptr [0xb23a50]
// 00a7a9ac  50                   push eax
// 00a7a9ad  e8b47cf0ff           call 0x982666
// 00a7a9b2  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a7a9b5  57                   push edi
// 00a7a9b6  53                   push ebx
// 00a7a9b7  6835010000           push 0x135
// 00a7a9bc  50                   push eax
// 00a7a9bd  ff15043cb200         call dword ptr [0xb23c04]
// 00a7a9c3  85c0                 test eax, eax
// 00a7a9c5  7427                 je 0xa7a9ee
// 00a7a9c7  85ed                 test ebp, ebp
// 00a7a9c9  7511                 jne 0xa7a9dc
// 00a7a9cb  50                   push eax
// 00a7a9cc  8d542418             lea edx, [esp + 0x18]
// 00a7a9d0  33c9                 xor ecx, ecx
// 00a7a9d2  52                   push edx
// 00a7a9d3  51                   push ecx
// 00a7a9d4  ff157c3cb200         call dword ptr [0xb23c7c]
// 00a7a9da  eb2d                 jmp 0xa7aa09
// 00a7a9dc  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00a7a9df  50                   push eax
// 00a7a9e0  8d542418             lea edx, [esp + 0x18]
// 00a7a9e4  52                   push edx
// 00a7a9e5  51                   push ecx
// 00a7a9e6  ff157c3cb200         call dword ptr [0xb23c7c]
// 00a7a9ec  eb1b                 jmp 0xa7aa09
// 00a7a9ee  e86d2ef4ff           call 0x9bd860
// 00a7a9f3  6a0f                 push 0xf
// 00a7a9f5  8bc8                 mov ecx, eax
// 00a7a9f7  e8e425f4ff           call 0x9bcfe0
// 00a7a9fc  50                   push eax
// 00a7a9fd  8d442418             lea eax, [esp + 0x18]
// 00a7aa01  50                   push eax
// 00a7aa02  8bcd                 mov ecx, ebp
// 00a7aa04  e8a384f0ff           call 0x982eac
// 00a7aa09  85ed                 test ebp, ebp
// 00a7aa0b  7403                 je 0xa7aa10
// 00a7aa0d  8b6d04               mov ebp, dword ptr [ebp + 4]
// 00a7aa10  6a00                 push 0
// 00a7aa12  8d4c2418             lea ecx, [esp + 0x18]
// 00a7aa16  51                   push ecx
// 00a7aa17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a7aa1b  56                   push esi
// 00a7aa1c  6a01                 push 1
// 00a7aa1e  55                   push ebp
// 00a7aa1f  83c174               add ecx, 0x74
// 00a7aa22  e879abf7ff           call 0x9f55a0
// 00a7aa27  5e                   pop esi
// 00a7aa28  f7d8                 neg eax
// 00a7aa2a  5d                   pop ebp
// 00a7aa2b  1bc0                 sbb eax, eax
// 00a7aa2d  5b                   pop ebx
// 00a7aa2e  40                   inc eax
// 00a7aa2f  5f                   pop edi
// 00a7aa30  83c414               add esp, 0x14
// 00a7aa33  c20800               ret 8
// 00a7aa36  33c0                 xor eax, eax
// 00a7aa38  5f                   pop edi
// 00a7aa39  83c414               add esp, 0x14
// 00a7aa3c  c20800               ret 8
// library xtp-13.2.1/Source\Controls\XTButtonTheme.cpp (function ?DrawWinThemeBackground@CXTButtonTheme@@MAEHPAUtagDRAWITEMSTRUCT@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTButtonTheme.cpp
