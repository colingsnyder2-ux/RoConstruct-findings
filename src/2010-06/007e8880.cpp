// roc 2010-06 007e8880  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8880
//
// 007e8880  83ec48               sub esp, 0x48
// 007e8883  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8888  33c4                 xor eax, esp
// 007e888a  89442444             mov dword ptr [esp + 0x44], eax
// 007e888e  53                   push ebx
// 007e888f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 007e8893  55                   push ebp
// 007e8894  56                   push esi
// 007e8895  57                   push edi
// 007e8896  6a3c                 push 0x3c
// 007e8898  8d442414             lea eax, [esp + 0x14]
// 007e889c  83cfff               or edi, 0xffffffff
// 007e889f  6a00                 push 0
// 007e88a1  50                   push eax
// 007e88a2  8bf1                 mov esi, ecx
// 007e88a4  897c2458             mov dword ptr [esp + 0x58], edi
// 007e88a8  897c245c             mov dword ptr [esp + 0x5c], edi
// 007e88ac  e83303fcff           call 0x7a8be4
// 007e88b1  83c40c               add esp, 0xc
// 007e88b4  8d4c2410             lea ecx, [esp + 0x10]
// 007e88b8  51                   push ecx
// 007e88b9  8d6e18               lea ebp, [esi + 0x18]
// 007e88bc  53                   push ebx
// 007e88bd  8bcd                 mov ecx, ebp
// 007e88bf  e85cf5ffff           call 0x7e7e20
// 007e88c4  85c0                 test eax, eax
// 007e88c6  7504                 jne 0x7e88cc
// 007e88c8  897c244c             mov dword ptr [esp + 0x4c], edi
// 007e88cc  8b742460             mov esi, dword ptr [esp + 0x60]
// 007e88d0  b90f000000           mov ecx, 0xf
// 007e88d5  8d7c2410             lea edi, [esp + 0x10]
// 007e88d9  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e88db  53                   push ebx
// 007e88dc  8bcd                 mov ecx, ebp
// 007e88de  e82dffffff           call 0x7e8810
// 007e88e3  b911000000           mov ecx, 0x11
// 007e88e8  8d742410             lea esi, [esp + 0x10]
// 007e88ec  8bf8                 mov edi, eax
// 007e88ee  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e88f0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007e88f4  5f                   pop edi
// 007e88f5  5e                   pop esi
// 007e88f6  5d                   pop ebp
// 007e88f7  5b                   pop ebx
// 007e88f8  33cc                 xor ecx, esp
// 007e88fa  e8d50bfcff           call 0x7a94d4
// 007e88ff  83c448               add esp, 0x48
// 007e8902  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp