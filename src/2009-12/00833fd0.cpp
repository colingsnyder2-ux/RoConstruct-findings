// roc 2009-12 00833fd0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833fd0
//
// 00833fd0  83ec48               sub esp, 0x48
// 00833fd3  a10052b600           mov eax, dword ptr [0xb65200]
// 00833fd8  33c4                 xor eax, esp
// 00833fda  89442444             mov dword ptr [esp + 0x44], eax
// 00833fde  56                   push esi
// 00833fdf  57                   push edi
// 00833fe0  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00833fe4  6a3c                 push 0x3c
// 00833fe6  8d44240c             lea eax, [esp + 0xc]
// 00833fea  6a00                 push 0
// 00833fec  50                   push eax
// 00833fed  8bf1                 mov esi, ecx
// 00833fef  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00833ff7  e8a80afcff           call 0x7f4aa4
// 00833ffc  83c40c               add esp, 0xc
// 00833fff  8d4c2408             lea ecx, [esp + 8]
// 00834003  51                   push ecx
// 00834004  57                   push edi
// 00834005  8d4e18               lea ecx, [esi + 0x18]
// 00834008  e853fcffff           call 0x833c60
// 0083400d  5f                   pop edi
// 0083400e  5e                   pop esi
// 0083400f  85c0                 test eax, eax
// 00834011  7415                 je 0x834028
// 00834013  8b442440             mov eax, dword ptr [esp + 0x40]
// 00834017  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083401b  33cc                 xor ecx, esp
// 0083401d  e87813fcff           call 0x7f539a
// 00834022  83c448               add esp, 0x48
// 00834025  c20400               ret 4
// 00834028  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0083402c  33cc                 xor ecx, esp
// 0083402e  83c8ff               or eax, 0xffffffff
// 00834031  e86413fcff           call 0x7f539a
// 00834036  83c448               add esp, 0x48
// 00834039  c20400               ret 4
// copied from an identical function in another client (function ?GetItemBackColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp