// roc 2009-12 00812e70  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00812e70
//
// 00812e70  83ec10               sub esp, 0x10
// 00812e73  56                   push esi
// 00812e74  8bf1                 mov esi, ecx
// 00812e76  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 00812e7d  7418                 je 0x812e97
// 00812e7f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00812e83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00812e87  50                   push eax
// 00812e88  51                   push ecx
// 00812e89  8bce                 mov ecx, esi
// 00812e8b  e89056ffff           call 0x808520
// 00812e90  5e                   pop esi
// 00812e91  83c410               add esp, 0x10
// 00812e94  c20800               ret 8
// 00812e97  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 00812e9e  7516                 jne 0x812eb6
// 00812ea0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00812ea4  8b442418             mov eax, dword ptr [esp + 0x18]
// 00812ea8  52                   push edx
// 00812ea9  50                   push eax
// 00812eaa  e87156ffff           call 0x808520
// 00812eaf  5e                   pop esi
// 00812eb0  83c410               add esp, 0x10
// 00812eb3  c20800               ret 8
// 00812eb6  8b5620               mov edx, dword ptr [esi + 0x20]
// 00812eb9  8d4c2404             lea ecx, [esp + 4]
// 00812ebd  51                   push ecx
// 00812ebe  52                   push edx
// 00812ebf  ff1570cc9800         call dword ptr [0x98cc70]
// 00812ec5  6afd                 push -3
// 00812ec7  6afd                 push -3
// 00812ec9  8d44240c             lea eax, [esp + 0xc]
// 00812ecd  50                   push eax
// 00812ece  ff1558ca9800         call dword ptr [0x98ca58]
// 00812ed4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00812ed8  3b442408             cmp eax, dword ptr [esp + 8]
// 00812edc  7d0c                 jge 0x812eea
// 00812ede  b80c000000           mov eax, 0xc
// 00812ee3  5e                   pop esi
// 00812ee4  83c410               add esp, 0x10
// 00812ee7  c20800               ret 8
// 00812eea  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00812eee  7c0c                 jl 0x812efc
// 00812ef0  b80f000000           mov eax, 0xf
// 00812ef5  5e                   pop esi
// 00812ef6  83c410               add esp, 0x10
// 00812ef9  c20800               ret 8
// 00812efc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00812f00  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 00812f04  7d0c                 jge 0x812f12
// 00812f06  b80a000000           mov eax, 0xa
// 00812f0b  5e                   pop esi
// 00812f0c  83c410               add esp, 0x10
// 00812f0f  c20800               ret 8
// 00812f12  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 00812f16  0f8c6bffffff         jl 0x812e87
// 00812f1c  b80b000000           mov eax, 0xb
// 00812f21  5e                   pop esi
// 00812f22  83c410               add esp, 0x10
// 00812f25  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
