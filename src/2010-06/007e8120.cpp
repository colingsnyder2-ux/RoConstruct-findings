// roc 2010-06 007e8120  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8120
//
// 007e8120  83ec48               sub esp, 0x48
// 007e8123  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8128  33c4                 xor eax, esp
// 007e812a  89442444             mov dword ptr [esp + 0x44], eax
// 007e812e  56                   push esi
// 007e812f  57                   push edi
// 007e8130  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007e8134  6a3c                 push 0x3c
// 007e8136  8d44240c             lea eax, [esp + 0xc]
// 007e813a  6a00                 push 0
// 007e813c  50                   push eax
// 007e813d  8bf1                 mov esi, ecx
// 007e813f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007e8147  e8980afcff           call 0x7a8be4
// 007e814c  83c40c               add esp, 0xc
// 007e814f  8d4c2408             lea ecx, [esp + 8]
// 007e8153  51                   push ecx
// 007e8154  57                   push edi
// 007e8155  8d4e18               lea ecx, [esi + 0x18]
// 007e8158  e8c3fcffff           call 0x7e7e20
// 007e815d  5f                   pop edi
// 007e815e  5e                   pop esi
// 007e815f  85c0                 test eax, eax
// 007e8161  7415                 je 0x7e8178
// 007e8163  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007e8167  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007e816b  33cc                 xor ecx, esp
// 007e816d  e86213fcff           call 0x7a94d4
// 007e8172  83c448               add esp, 0x48
// 007e8175  c20400               ret 4
// 007e8178  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007e817c  33cc                 xor ecx, esp
// 007e817e  83c8ff               or eax, 0xffffffff
// 007e8181  e84e13fcff           call 0x7a94d4
// 007e8186  83c448               add esp, 0x48
// 007e8189  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp