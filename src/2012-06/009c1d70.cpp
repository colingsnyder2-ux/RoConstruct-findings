// roc 2012-06 009c1d70  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1d70
//
// 009c1d70  83ec48               sub esp, 0x48
// 009c1d73  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c1d78  33c4                 xor eax, esp
// 009c1d7a  89442444             mov dword ptr [esp + 0x44], eax
// 009c1d7e  53                   push ebx
// 009c1d7f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 009c1d83  56                   push esi
// 009c1d84  57                   push edi
// 009c1d85  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 009c1d89  6a3c                 push 0x3c
// 009c1d8b  8d442410             lea eax, [esp + 0x10]
// 009c1d8f  6a00                 push 0
// 009c1d91  50                   push eax
// 009c1d92  8bf1                 mov esi, ecx
// 009c1d94  e8db15fcff           call 0x983374
// 009c1d99  83c40c               add esp, 0xc
// 009c1d9c  8d4c240c             lea ecx, [esp + 0xc]
// 009c1da0  51                   push ecx
// 009c1da1  53                   push ebx
// 009c1da2  8d4e18               lea ecx, [esi + 0x18]
// 009c1da5  e846fdffff           call 0x9c1af0
// 009c1daa  85c0                 test eax, eax
// 009c1dac  7516                 jne 0x9c1dc4
// 009c1dae  5f                   pop edi
// 009c1daf  5e                   pop esi
// 009c1db0  33c0                 xor eax, eax
// 009c1db2  5b                   pop ebx
// 009c1db3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009c1db7  33cc                 xor ecx, esp
// 009c1db9  e8791cfcff           call 0x983a37
// 009c1dbe  83c448               add esp, 0x48
// 009c1dc1  c20800               ret 8
// 009c1dc4  807c242800           cmp byte ptr [esp + 0x28], 0
// 009c1dc9  74e3                 je 0x9c1dae
// 009c1dcb  b90f000000           mov ecx, 0xf
// 009c1dd0  8d74240c             lea esi, [esp + 0xc]
// 009c1dd4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c1dd6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009c1dda  5f                   pop edi
// 009c1ddb  5e                   pop esi
// 009c1ddc  5b                   pop ebx
// 009c1ddd  33cc                 xor ecx, esp
// 009c1ddf  b801000000           mov eax, 1
// 009c1de4  e84e1cfcff           call 0x983a37
// 009c1de9  83c448               add esp, 0x48
// 009c1dec  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp