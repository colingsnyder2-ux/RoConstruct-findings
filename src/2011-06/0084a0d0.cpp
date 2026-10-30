// roc 2011-06 0084a0d0  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a0d0
//
// 0084a0d0  83ec48               sub esp, 0x48
// 0084a0d3  a12058c900           mov eax, dword ptr [0xc95820]
// 0084a0d8  33c4                 xor eax, esp
// 0084a0da  89442444             mov dword ptr [esp + 0x44], eax
// 0084a0de  53                   push ebx
// 0084a0df  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 0084a0e3  55                   push ebp
// 0084a0e4  56                   push esi
// 0084a0e5  57                   push edi
// 0084a0e6  6a3c                 push 0x3c
// 0084a0e8  8d442414             lea eax, [esp + 0x14]
// 0084a0ec  83cfff               or edi, 0xffffffff
// 0084a0ef  6a00                 push 0
// 0084a0f1  50                   push eax
// 0084a0f2  8bf1                 mov esi, ecx
// 0084a0f4  897c2458             mov dword ptr [esp + 0x58], edi
// 0084a0f8  897c245c             mov dword ptr [esp + 0x5c], edi
// 0084a0fc  e8e311fcff           call 0x80b2e4
// 0084a101  83c40c               add esp, 0xc
// 0084a104  8d4c2410             lea ecx, [esp + 0x10]
// 0084a108  51                   push ecx
// 0084a109  8d6e18               lea ebp, [esi + 0x18]
// 0084a10c  53                   push ebx
// 0084a10d  8bcd                 mov ecx, ebp
// 0084a10f  e85cf5ffff           call 0x849670
// 0084a114  85c0                 test eax, eax
// 0084a116  7504                 jne 0x84a11c
// 0084a118  897c244c             mov dword ptr [esp + 0x4c], edi
// 0084a11c  8b742460             mov esi, dword ptr [esp + 0x60]
// 0084a120  b90f000000           mov ecx, 0xf
// 0084a125  8d7c2410             lea edi, [esp + 0x10]
// 0084a129  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084a12b  53                   push ebx
// 0084a12c  8bcd                 mov ecx, ebp
// 0084a12e  e82dffffff           call 0x84a060
// 0084a133  b911000000           mov ecx, 0x11
// 0084a138  8d742410             lea esi, [esp + 0x10]
// 0084a13c  8bf8                 mov edi, eax
// 0084a13e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084a140  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0084a144  5f                   pop edi
// 0084a145  5e                   pop esi
// 0084a146  5d                   pop ebp
// 0084a147  5b                   pop ebx
// 0084a148  33cc                 xor ecx, esp
// 0084a14a  e8a817fcff           call 0x80b8f7
// 0084a14f  83c448               add esp, 0x48
// 0084a152  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp