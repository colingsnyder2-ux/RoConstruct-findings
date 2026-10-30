// roc 2011-06 008498f0  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008498f0
//
// 008498f0  83ec48               sub esp, 0x48
// 008498f3  a12058c900           mov eax, dword ptr [0xc95820]
// 008498f8  33c4                 xor eax, esp
// 008498fa  89442444             mov dword ptr [esp + 0x44], eax
// 008498fe  53                   push ebx
// 008498ff  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00849903  56                   push esi
// 00849904  57                   push edi
// 00849905  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00849909  6a3c                 push 0x3c
// 0084990b  8d442410             lea eax, [esp + 0x10]
// 0084990f  6a00                 push 0
// 00849911  50                   push eax
// 00849912  8bf1                 mov esi, ecx
// 00849914  e8cb19fcff           call 0x80b2e4
// 00849919  83c40c               add esp, 0xc
// 0084991c  8d4c240c             lea ecx, [esp + 0xc]
// 00849920  51                   push ecx
// 00849921  53                   push ebx
// 00849922  8d4e18               lea ecx, [esi + 0x18]
// 00849925  e846fdffff           call 0x849670
// 0084992a  85c0                 test eax, eax
// 0084992c  7516                 jne 0x849944
// 0084992e  5f                   pop edi
// 0084992f  5e                   pop esi
// 00849930  33c0                 xor eax, eax
// 00849932  5b                   pop ebx
// 00849933  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00849937  33cc                 xor ecx, esp
// 00849939  e8b91ffcff           call 0x80b8f7
// 0084993e  83c448               add esp, 0x48
// 00849941  c20800               ret 8
// 00849944  807c242800           cmp byte ptr [esp + 0x28], 0
// 00849949  74e3                 je 0x84992e
// 0084994b  b90f000000           mov ecx, 0xf
// 00849950  8d74240c             lea esi, [esp + 0xc]
// 00849954  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00849956  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084995a  5f                   pop edi
// 0084995b  5e                   pop esi
// 0084995c  5b                   pop ebx
// 0084995d  33cc                 xor ecx, esp
// 0084995f  b801000000           mov eax, 1
// 00849964  e88e1ffcff           call 0x80b8f7
// 00849969  83c448               add esp, 0x48
// 0084996c  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp