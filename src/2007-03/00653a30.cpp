// roc 2007-03 00653a30  unit: seg_00650000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00653a30
//
// 00653a30  83ec48               sub esp, 0x48
// 00653a33  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00653a38  33c4                 xor eax, esp
// 00653a3a  89442444             mov dword ptr [esp + 0x44], eax
// 00653a3e  53                   push ebx
// 00653a3f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00653a43  56                   push esi
// 00653a44  57                   push edi
// 00653a45  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00653a49  6a3c                 push 0x3c
// 00653a4b  8d442410             lea eax, [esp + 0x10]
// 00653a4f  6a00                 push 0
// 00653a51  50                   push eax
// 00653a52  8bf1                 mov esi, ecx
// 00653a54  e8c3b5fcff           call 0x61f01c
// 00653a59  83c40c               add esp, 0xc
// 00653a5c  8d4c240c             lea ecx, [esp + 0xc]
// 00653a60  51                   push ecx
// 00653a61  53                   push ebx
// 00653a62  8d4e18               lea ecx, [esi + 0x18]
// 00653a65  e846fdffff           call 0x6537b0
// 00653a6a  85c0                 test eax, eax
// 00653a6c  7516                 jne 0x653a84
// 00653a6e  5f                   pop edi
// 00653a6f  5e                   pop esi
// 00653a70  33c0                 xor eax, eax
// 00653a72  5b                   pop ebx
// 00653a73  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00653a77  33cc                 xor ecx, esp
// 00653a79  e828b4fcff           call 0x61eea6
// 00653a7e  83c448               add esp, 0x48
// 00653a81  c20800               ret 8
// 00653a84  807c242800           cmp byte ptr [esp + 0x28], 0
// 00653a89  74e3                 je 0x653a6e
// 00653a8b  b90f000000           mov ecx, 0xf
// 00653a90  8d74240c             lea esi, [esp + 0xc]
// 00653a94  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00653a96  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00653a9a  5f                   pop edi
// 00653a9b  5e                   pop esi
// 00653a9c  5b                   pop ebx
// 00653a9d  33cc                 xor ecx, esp
// 00653a9f  b801000000           mov eax, 1
// 00653aa4  e8fdb3fcff           call 0x61eea6
// 00653aa9  83c448               add esp, 0x48
// 00653aac  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp