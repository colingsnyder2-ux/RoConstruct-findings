// roc 2010-06 0088cb50  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0088cb50
//
// 0088cb50  53                   push ebx
// 0088cb51  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0088cb55  56                   push esi
// 0088cb56  8b7304               mov esi, dword ptr [ebx + 4]
// 0088cb59  57                   push edi
// 0088cb5a  8bf9                 mov edi, ecx
// 0088cb5c  85f6                 test esi, esi
// 0088cb5e  7452                 je 0x88cbb2
// 0088cb60  8b07                 mov eax, dword ptr [edi]
// 0088cb62  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0088cb65  55                   push ebp
// 0088cb66  53                   push ebx
// 0088cb67  ffd2                 call edx
// 0088cb69  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0088cb6c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088cb70  8b5b5c               mov ebx, dword ptr [ebx + 0x5c]
// 0088cb73  41                   inc ecx
// 0088cb74  0fafc8               imul ecx, eax
// 0088cb77  8d4c0a01             lea ecx, [edx + ecx + 1]
// 0088cb7b  8b542424             mov edx, dword ptr [esp + 0x24]
// 0088cb7f  8beb                 mov ebp, ebx
// 0088cb81  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0088cb85  2b6e2c               sub ebp, dword ptr [esi + 0x2c]
// 0088cb88  4d                   dec ebp
// 0088cb89  0fafe8               imul ebp, eax
// 0088cb8c  2bd5                 sub edx, ebp
// 0088cb8e  03c1                 add eax, ecx
// 0088cb90  3bc2                 cmp eax, edx
// 0088cb92  89542424             mov dword ptr [esp + 0x24], edx
// 0088cb96  5d                   pop ebp
// 0088cb97  7e04                 jle 0x88cb9d
// 0088cb99  89442420             mov dword ptr [esp + 0x20], eax
// 0088cb9d  4b                   dec ebx
// 0088cb9e  395e2c               cmp dword ptr [esi + 0x2c], ebx
// 0088cba1  7513                 jne 0x88cbb6
// 0088cba3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0088cba6  83783802             cmp dword ptr [eax + 0x38], 2
// 0088cbaa  740a                 je 0x88cbb6
// 0088cbac  ff4c2420             dec dword ptr [esp + 0x20]
// 0088cbb0  eb04                 jmp 0x88cbb6
// 0088cbb2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0088cbb6  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0088cbb9  837a3802             cmp dword ptr [edx + 0x38], 2
// 0088cbbd  5f                   pop edi
// 0088cbbe  5e                   pop esi
// 0088cbbf  5b                   pop ebx
// 0088cbc0  740d                 je 0x88cbcf
// 0088cbc2  b801000000           mov eax, 1
// 0088cbc7  01442408             add dword ptr [esp + 8], eax
// 0088cbcb  29442410             sub dword ptr [esp + 0x10], eax
// 0088cbcf  8b442404             mov eax, dword ptr [esp + 4]
// 0088cbd3  8b542408             mov edx, dword ptr [esp + 8]
// 0088cbd7  8910                 mov dword ptr [eax], edx
// 0088cbd9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0088cbdd  894804               mov dword ptr [eax + 4], ecx
// 0088cbe0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0088cbe4  894808               mov dword ptr [eax + 8], ecx
// 0088cbe7  89500c               mov dword ptr [eax + 0xc], edx
// 0088cbea  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSetVisio@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
