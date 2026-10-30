// roc 2011-06 00849970  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849970
//
// 00849970  83ec48               sub esp, 0x48
// 00849973  a12058c900           mov eax, dword ptr [0xc95820]
// 00849978  33c4                 xor eax, esp
// 0084997a  89442444             mov dword ptr [esp + 0x44], eax
// 0084997e  56                   push esi
// 0084997f  57                   push edi
// 00849980  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00849984  6a3c                 push 0x3c
// 00849986  8d44240c             lea eax, [esp + 0xc]
// 0084998a  6a00                 push 0
// 0084998c  50                   push eax
// 0084998d  8bf1                 mov esi, ecx
// 0084998f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00849997  e84819fcff           call 0x80b2e4
// 0084999c  83c40c               add esp, 0xc
// 0084999f  8d4c2408             lea ecx, [esp + 8]
// 008499a3  51                   push ecx
// 008499a4  57                   push edi
// 008499a5  8d4e18               lea ecx, [esi + 0x18]
// 008499a8  e8c3fcffff           call 0x849670
// 008499ad  5f                   pop edi
// 008499ae  5e                   pop esi
// 008499af  85c0                 test eax, eax
// 008499b1  7415                 je 0x8499c8
// 008499b3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008499b7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008499bb  33cc                 xor ecx, esp
// 008499bd  e8351ffcff           call 0x80b8f7
// 008499c2  83c448               add esp, 0x48
// 008499c5  c20400               ret 4
// 008499c8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008499cc  33cc                 xor ecx, esp
// 008499ce  83c8ff               or eax, 0xffffffff
// 008499d1  e8211ffcff           call 0x80b8f7
// 008499d6  83c448               add esp, 0x48
// 008499d9  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp