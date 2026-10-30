// roc 2007-08 006679f0  unit: CRobloxTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006679f0
//
// 006679f0  83ec48               sub esp, 0x48
// 006679f3  a188518b00           mov eax, dword ptr [0x8b5188]
// 006679f8  33c4                 xor eax, esp
// 006679fa  89442444             mov dword ptr [esp + 0x44], eax
// 006679fe  53                   push ebx
// 006679ff  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00667a03  56                   push esi
// 00667a04  57                   push edi
// 00667a05  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00667a09  6a3c                 push 0x3c
// 00667a0b  8d442410             lea eax, [esp + 0x10]
// 00667a0f  6a00                 push 0
// 00667a11  50                   push eax
// 00667a12  8bf1                 mov esi, ecx
// 00667a14  e87391fcff           call 0x630b8c
// 00667a19  83c40c               add esp, 0xc
// 00667a1c  8d4c240c             lea ecx, [esp + 0xc]
// 00667a20  51                   push ecx
// 00667a21  53                   push ebx
// 00667a22  8d4e18               lea ecx, [esi + 0x18]
// 00667a25  e846fdffff           call 0x667770
// 00667a2a  85c0                 test eax, eax
// 00667a2c  7516                 jne 0x667a44
// 00667a2e  5f                   pop edi
// 00667a2f  5e                   pop esi
// 00667a30  33c0                 xor eax, eax
// 00667a32  5b                   pop ebx
// 00667a33  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00667a37  33cc                 xor ecx, esp
// 00667a39  e8e08ffcff           call 0x630a1e
// 00667a3e  83c448               add esp, 0x48
// 00667a41  c20800               ret 8
// 00667a44  807c242800           cmp byte ptr [esp + 0x28], 0
// 00667a49  74e3                 je 0x667a2e
// 00667a4b  b90f000000           mov ecx, 0xf
// 00667a50  8d74240c             lea esi, [esp + 0xc]
// 00667a54  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00667a56  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00667a5a  5f                   pop edi
// 00667a5b  5e                   pop esi
// 00667a5c  5b                   pop ebx
// 00667a5d  33cc                 xor ecx, esp
// 00667a5f  b801000000           mov eax, 1
// 00667a64  e8b58ffcff           call 0x630a1e
// 00667a69  83c448               add esp, 0x48
// 00667a6c  c20800               ret 8
// copied from an identical function in another client (function ?GetItemFont@CXTTreeBase@@UAEHPAU_TREEITEM@@PAUtagLOGFONTA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp