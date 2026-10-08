// from server: 100% by auto
// roc 2011-06 00871f30  unit: CXTPToolTipContextToolTip  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00871f30
//
// 00871f30  83ec18               sub esp, 0x18
// 00871f33  56                   push esi
// 00871f34  8d44240c             lea eax, [esp + 0xc]
// 00871f38  57                   push edi
// 00871f39  50                   push eax
// 00871f3a  e8d101feff           call 0x852110
// 00871f3f  8bc8                 mov ecx, eax
// 00871f41  e89afdfdff           call 0x851ce0
// 00871f46  8b742424             mov esi, dword ptr [esp + 0x24]
// 00871f4a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00871f4e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00871f51  8b3d601ca400         mov edi, dword ptr [0xa41c60]
// 00871f57  8d50fc               lea edx, [eax - 4]
// 00871f5a  3bd1                 cmp edx, ecx
// 00871f5c  7d0b                 jge 0x871f69
// 00871f5e  2bc1                 sub eax, ecx
// 00871f60  6a00                 push 0
// 00871f62  83e804               sub eax, 4
// 00871f65  50                   push eax
// 00871f66  56                   push esi
// 00871f67  ffd7                 call edi
// 00871f69  8b0e                 mov ecx, dword ptr [esi]
// 00871f6b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00871f6f  3bc1                 cmp eax, ecx
// 00871f71  7e08                 jle 0x871f7b
// 00871f73  6a00                 push 0
// 00871f75  2bc1                 sub eax, ecx
// 00871f77  50                   push eax
// 00871f78  56                   push esi
// 00871f79  ffd7                 call edi
// 00871f7b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00871f7f  83c0fc               add eax, -4
// 00871f82  3b460c               cmp eax, dword ptr [esi + 0xc]
// 00871f85  7d1b                 jge 0x871fa2
// 00871f87  8d4c2408             lea ecx, [esp + 8]
// 00871f8b  51                   push ecx
// 00871f8c  ff15c819a400         call dword ptr [0xa419c8]
// 00871f92  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00871f96  2b560c               sub edx, dword ptr [esi + 0xc]
// 00871f99  83ea03               sub edx, 3
// 00871f9c  52                   push edx
// 00871f9d  6a00                 push 0
// 00871f9f  56                   push esi
// 00871fa0  ffd7                 call edi
// 00871fa2  5f                   pop edi
// 00871fa3  5e                   pop esi
// 00871fa4  83c418               add esp, 0x18
// 00871fa7  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPToolTipContext.cpp (function ?EnsureVisible@CXTPToolTipContextToolTip@@IAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPToolTipContext.cpp
