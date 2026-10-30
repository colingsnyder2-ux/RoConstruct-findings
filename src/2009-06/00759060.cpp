// roc 2009-06 00759060  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759060
//
// 00759060  83ec48               sub esp, 0x48
// 00759063  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00759068  33c4                 xor eax, esp
// 0075906a  89442444             mov dword ptr [esp + 0x44], eax
// 0075906e  53                   push ebx
// 0075906f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00759073  56                   push esi
// 00759074  57                   push edi
// 00759075  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00759079  6a3c                 push 0x3c
// 0075907b  8d442410             lea eax, [esp + 0x10]
// 0075907f  6a00                 push 0
// 00759081  50                   push eax
// 00759082  8bf1                 mov esi, ecx
// 00759084  e8eb0bfcff           call 0x719c74
// 00759089  83c40c               add esp, 0xc
// 0075908c  8d4c240c             lea ecx, [esp + 0xc]
// 00759090  51                   push ecx
// 00759091  53                   push ebx
// 00759092  8d4e18               lea ecx, [esi + 0x18]
// 00759095  e846fdffff           call 0x758de0
// 0075909a  85c0                 test eax, eax
// 0075909c  7516                 jne 0x7590b4
// 0075909e  5f                   pop edi
// 0075909f  5e                   pop esi
// 007590a0  33c0                 xor eax, eax
// 007590a2  5b                   pop ebx
// 007590a3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007590a7  33cc                 xor ecx, esp
// 007590a9  e8cc14fcff           call 0x71a57a
// 007590ae  83c448               add esp, 0x48
// 007590b1  c20800               ret 8
// 007590b4  807c242800           cmp byte ptr [esp + 0x28], 0
// 007590b9  74e3                 je 0x75909e
// 007590bb  b90f000000           mov ecx, 0xf
// 007590c0  8d74240c             lea esi, [esp + 0xc]
// 007590c4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007590c6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007590ca  5f                   pop edi
// 007590cb  5e                   pop esi
// 007590cc  5b                   pop ebx
// 007590cd  33cc                 xor ecx, esp
// 007590cf  b801000000           mov eax, 1
// 007590d4  e8a114fcff           call 0x71a57a
// 007590d9  83c448               add esp, 0x48
// 007590dc  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp