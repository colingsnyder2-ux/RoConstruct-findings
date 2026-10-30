// roc 2011-06 008499e0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008499e0
//
// 008499e0  83ec48               sub esp, 0x48
// 008499e3  a12058c900           mov eax, dword ptr [0xc95820]
// 008499e8  33c4                 xor eax, esp
// 008499ea  89442444             mov dword ptr [esp + 0x44], eax
// 008499ee  56                   push esi
// 008499ef  57                   push edi
// 008499f0  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008499f4  6a3c                 push 0x3c
// 008499f6  8d44240c             lea eax, [esp + 0xc]
// 008499fa  6a00                 push 0
// 008499fc  50                   push eax
// 008499fd  8bf1                 mov esi, ecx
// 008499ff  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00849a07  e8d818fcff           call 0x80b2e4
// 00849a0c  83c40c               add esp, 0xc
// 00849a0f  8d4c2408             lea ecx, [esp + 8]
// 00849a13  51                   push ecx
// 00849a14  57                   push edi
// 00849a15  8d4e18               lea ecx, [esi + 0x18]
// 00849a18  e853fcffff           call 0x849670
// 00849a1d  5f                   pop edi
// 00849a1e  5e                   pop esi
// 00849a1f  85c0                 test eax, eax
// 00849a21  7415                 je 0x849a38
// 00849a23  8b442440             mov eax, dword ptr [esp + 0x40]
// 00849a27  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00849a2b  33cc                 xor ecx, esp
// 00849a2d  e8c51efcff           call 0x80b8f7
// 00849a32  83c448               add esp, 0x48
// 00849a35  c20400               ret 4
// 00849a38  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00849a3c  33cc                 xor ecx, esp
// 00849a3e  83c8ff               or eax, 0xffffffff
// 00849a41  e8b11efcff           call 0x80b8f7
// 00849a46  83c448               add esp, 0x48
// 00849a49  c20400               ret 4
// copied from an identical function in another client (function ?GetItemBackColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp