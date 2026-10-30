// roc 2007-08 006681e0  unit: CRobloxTreeCtrl  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006681e0
//
// 006681e0  83ec48               sub esp, 0x48
// 006681e3  a188518b00           mov eax, dword ptr [0x8b5188]
// 006681e8  33c4                 xor eax, esp
// 006681ea  89442444             mov dword ptr [esp + 0x44], eax
// 006681ee  53                   push ebx
// 006681ef  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006681f3  55                   push ebp
// 006681f4  56                   push esi
// 006681f5  57                   push edi
// 006681f6  6a3c                 push 0x3c
// 006681f8  8d442414             lea eax, [esp + 0x14]
// 006681fc  83cfff               or edi, 0xffffffff
// 006681ff  6a00                 push 0
// 00668201  50                   push eax
// 00668202  8bf1                 mov esi, ecx
// 00668204  897c2458             mov dword ptr [esp + 0x58], edi
// 00668208  897c245c             mov dword ptr [esp + 0x5c], edi
// 0066820c  e87b89fcff           call 0x630b8c
// 00668211  83c40c               add esp, 0xc
// 00668214  8d4c2410             lea ecx, [esp + 0x10]
// 00668218  51                   push ecx
// 00668219  8d6e18               lea ebp, [esi + 0x18]
// 0066821c  53                   push ebx
// 0066821d  8bcd                 mov ecx, ebp
// 0066821f  e84cf5ffff           call 0x667770
// 00668224  85c0                 test eax, eax
// 00668226  7504                 jne 0x66822c
// 00668228  897c244c             mov dword ptr [esp + 0x4c], edi
// 0066822c  8b742460             mov esi, dword ptr [esp + 0x60]
// 00668230  b90f000000           mov ecx, 0xf
// 00668235  8d7c2410             lea edi, [esp + 0x10]
// 00668239  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066823b  53                   push ebx
// 0066823c  8bcd                 mov ecx, ebp
// 0066823e  e82dffffff           call 0x668170
// 00668243  b911000000           mov ecx, 0x11
// 00668248  8d742410             lea esi, [esp + 0x10]
// 0066824c  8bf8                 mov edi, eax
// 0066824e  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00668250  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00668254  5f                   pop edi
// 00668255  5e                   pop esi
// 00668256  5d                   pop ebp
// 00668257  5b                   pop ebx
// 00668258  33cc                 xor ecx, esp
// 0066825a  e8bf87fcff           call 0x630a1e
// 0066825f  83c448               add esp, 0x48
// 00668262  c20800               ret 8
// copied from an identical function in another client (function ?SetItemFont@CXTTreeBase@@UAEXPAU_TREEITEM@@AAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp