// roc 2012-06 009c2550  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2550
//
// 009c2550  83ec48               sub esp, 0x48
// 009c2553  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c2558  33c4                 xor eax, esp
// 009c255a  89442444             mov dword ptr [esp + 0x44], eax
// 009c255e  53                   push ebx
// 009c255f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 009c2563  55                   push ebp
// 009c2564  56                   push esi
// 009c2565  57                   push edi
// 009c2566  6a3c                 push 0x3c
// 009c2568  8d442414             lea eax, [esp + 0x14]
// 009c256c  83cfff               or edi, 0xffffffff
// 009c256f  6a00                 push 0
// 009c2571  50                   push eax
// 009c2572  8bf1                 mov esi, ecx
// 009c2574  897c2458             mov dword ptr [esp + 0x58], edi
// 009c2578  897c245c             mov dword ptr [esp + 0x5c], edi
// 009c257c  e8f30dfcff           call 0x983374
// 009c2581  83c40c               add esp, 0xc
// 009c2584  8d4c2410             lea ecx, [esp + 0x10]
// 009c2588  51                   push ecx
// 009c2589  8d6e18               lea ebp, [esi + 0x18]
// 009c258c  53                   push ebx
// 009c258d  8bcd                 mov ecx, ebp
// 009c258f  e85cf5ffff           call 0x9c1af0
// 009c2594  85c0                 test eax, eax
// 009c2596  7504                 jne 0x9c259c
// 009c2598  897c244c             mov dword ptr [esp + 0x4c], edi
// 009c259c  8b742460             mov esi, dword ptr [esp + 0x60]
// 009c25a0  b90f000000           mov ecx, 0xf
// 009c25a5  8d7c2410             lea edi, [esp + 0x10]
// 009c25a9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c25ab  53                   push ebx
// 009c25ac  8bcd                 mov ecx, ebp
// 009c25ae  e82dffffff           call 0x9c24e0
// 009c25b3  b911000000           mov ecx, 0x11
// 009c25b8  8d742410             lea esi, [esp + 0x10]
// 009c25bc  8bf8                 mov edi, eax
// 009c25be  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c25c0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 009c25c4  5f                   pop edi
// 009c25c5  5e                   pop esi
// 009c25c6  5d                   pop ebp
// 009c25c7  5b                   pop ebx
// 009c25c8  33cc                 xor ecx, esp
// 009c25ca  e86814fcff           call 0x983a37
// 009c25cf  83c448               add esp, 0x48
// 009c25d2  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp