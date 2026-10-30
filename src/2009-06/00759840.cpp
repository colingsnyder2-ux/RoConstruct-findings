// roc 2009-06 00759840  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759840
//
// 00759840  83ec48               sub esp, 0x48
// 00759843  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00759848  33c4                 xor eax, esp
// 0075984a  89442444             mov dword ptr [esp + 0x44], eax
// 0075984e  53                   push ebx
// 0075984f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00759853  55                   push ebp
// 00759854  56                   push esi
// 00759855  57                   push edi
// 00759856  6a3c                 push 0x3c
// 00759858  8d442414             lea eax, [esp + 0x14]
// 0075985c  83cfff               or edi, 0xffffffff
// 0075985f  6a00                 push 0
// 00759861  50                   push eax
// 00759862  8bf1                 mov esi, ecx
// 00759864  897c2458             mov dword ptr [esp + 0x58], edi
// 00759868  897c245c             mov dword ptr [esp + 0x5c], edi
// 0075986c  e80304fcff           call 0x719c74
// 00759871  83c40c               add esp, 0xc
// 00759874  8d4c2410             lea ecx, [esp + 0x10]
// 00759878  51                   push ecx
// 00759879  8d6e18               lea ebp, [esi + 0x18]
// 0075987c  53                   push ebx
// 0075987d  8bcd                 mov ecx, ebp
// 0075987f  e85cf5ffff           call 0x758de0
// 00759884  85c0                 test eax, eax
// 00759886  7504                 jne 0x75988c
// 00759888  897c244c             mov dword ptr [esp + 0x4c], edi
// 0075988c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00759890  b90f000000           mov ecx, 0xf
// 00759895  8d7c2410             lea edi, [esp + 0x10]
// 00759899  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0075989b  53                   push ebx
// 0075989c  8bcd                 mov ecx, ebp
// 0075989e  e82dffffff           call 0x7597d0
// 007598a3  b911000000           mov ecx, 0x11
// 007598a8  8d742410             lea esi, [esp + 0x10]
// 007598ac  8bf8                 mov edi, eax
// 007598ae  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007598b0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007598b4  5f                   pop edi
// 007598b5  5e                   pop esi
// 007598b6  5d                   pop ebp
// 007598b7  5b                   pop ebx
// 007598b8  33cc                 xor ecx, esp
// 007598ba  e8bb0cfcff           call 0x71a57a
// 007598bf  83c448               add esp, 0x48
// 007598c2  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp