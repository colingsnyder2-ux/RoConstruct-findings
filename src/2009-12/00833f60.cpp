// roc 2009-12 00833f60  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833f60
//
// 00833f60  83ec48               sub esp, 0x48
// 00833f63  a10052b600           mov eax, dword ptr [0xb65200]
// 00833f68  33c4                 xor eax, esp
// 00833f6a  89442444             mov dword ptr [esp + 0x44], eax
// 00833f6e  56                   push esi
// 00833f6f  57                   push edi
// 00833f70  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00833f74  6a3c                 push 0x3c
// 00833f76  8d44240c             lea eax, [esp + 0xc]
// 00833f7a  6a00                 push 0
// 00833f7c  50                   push eax
// 00833f7d  8bf1                 mov esi, ecx
// 00833f7f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00833f87  e8180bfcff           call 0x7f4aa4
// 00833f8c  83c40c               add esp, 0xc
// 00833f8f  8d4c2408             lea ecx, [esp + 8]
// 00833f93  51                   push ecx
// 00833f94  57                   push edi
// 00833f95  8d4e18               lea ecx, [esi + 0x18]
// 00833f98  e8c3fcffff           call 0x833c60
// 00833f9d  5f                   pop edi
// 00833f9e  5e                   pop esi
// 00833f9f  85c0                 test eax, eax
// 00833fa1  7415                 je 0x833fb8
// 00833fa3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00833fa7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00833fab  33cc                 xor ecx, esp
// 00833fad  e8e813fcff           call 0x7f539a
// 00833fb2  83c448               add esp, 0x48
// 00833fb5  c20400               ret 4
// 00833fb8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00833fbc  33cc                 xor ecx, esp
// 00833fbe  83c8ff               or eax, 0xffffffff
// 00833fc1  e8d413fcff           call 0x7f539a
// 00833fc6  83c448               add esp, 0x48
// 00833fc9  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp