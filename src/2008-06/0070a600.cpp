// from server: 100% by auto
// roc 2008-06 0070a600  unit: CXTPToolTipContextToolTip  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070a600
//
// 0070a600  83ec18               sub esp, 0x18
// 0070a603  56                   push esi
// 0070a604  8d44240c             lea eax, [esp + 0xc]
// 0070a608  57                   push edi
// 0070a609  50                   push eax
// 0070a60a  e871eafdff           call 0x6e9080
// 0070a60f  8bc8                 mov ecx, eax
// 0070a611  e83ae6fdff           call 0x6e8c50
// 0070a616  8b742424             mov esi, dword ptr [esp + 0x24]
// 0070a61a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0070a61e  8b4e08               mov ecx, dword ptr [esi + 8]
// 0070a621  8b3d682d8000         mov edi, dword ptr [0x802d68]
// 0070a627  8d50fc               lea edx, [eax - 4]
// 0070a62a  3bd1                 cmp edx, ecx
// 0070a62c  7d0b                 jge 0x70a639
// 0070a62e  2bc1                 sub eax, ecx
// 0070a630  6a00                 push 0
// 0070a632  83e804               sub eax, 4
// 0070a635  50                   push eax
// 0070a636  56                   push esi
// 0070a637  ffd7                 call edi
// 0070a639  8b0e                 mov ecx, dword ptr [esi]
// 0070a63b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070a63f  3bc1                 cmp eax, ecx
// 0070a641  7e08                 jle 0x70a64b
// 0070a643  6a00                 push 0
// 0070a645  2bc1                 sub eax, ecx
// 0070a647  50                   push eax
// 0070a648  56                   push esi
// 0070a649  ffd7                 call edi
// 0070a64b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0070a64f  83c0fc               add eax, -4
// 0070a652  3b460c               cmp eax, dword ptr [esi + 0xc]
// 0070a655  7d1b                 jge 0x70a672
// 0070a657  8d4c2408             lea ecx, [esp + 8]
// 0070a65b  51                   push ecx
// 0070a65c  ff159c2d8000         call dword ptr [0x802d9c]
// 0070a662  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070a666  2b560c               sub edx, dword ptr [esi + 0xc]
// 0070a669  83ea03               sub edx, 3
// 0070a66c  52                   push edx
// 0070a66d  6a00                 push 0
// 0070a66f  56                   push esi
// 0070a670  ffd7                 call edi
// 0070a672  5f                   pop edi
// 0070a673  5e                   pop esi
// 0070a674  83c418               add esp, 0x18
// 0070a677  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPToolTipContext.cpp (function ?EnsureVisible@CXTPToolTipContextToolTip@@IAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPToolTipContext.cpp
