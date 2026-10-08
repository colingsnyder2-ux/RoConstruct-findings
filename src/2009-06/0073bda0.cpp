// roc 2009-06 0073bda0  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073bda0
//
// 0073bda0  83ec10               sub esp, 0x10
// 0073bda3  56                   push esi
// 0073bda4  8bf1                 mov esi, ecx
// 0073bda6  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0073bdad  7418                 je 0x73bdc7
// 0073bdaf  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073bdb3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073bdb7  50                   push eax
// 0073bdb8  51                   push ecx
// 0073bdb9  8bce                 mov ecx, esi
// 0073bdbb  e8e055ffff           call 0x7313a0
// 0073bdc0  5e                   pop esi
// 0073bdc1  83c410               add esp, 0x10
// 0073bdc4  c20800               ret 8
// 0073bdc7  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 0073bdce  7516                 jne 0x73bde6
// 0073bdd0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0073bdd4  8b442418             mov eax, dword ptr [esp + 0x18]
// 0073bdd8  52                   push edx
// 0073bdd9  50                   push eax
// 0073bdda  e8c155ffff           call 0x7313a0
// 0073bddf  5e                   pop esi
// 0073bde0  83c410               add esp, 0x10
// 0073bde3  c20800               ret 8
// 0073bde6  8b5620               mov edx, dword ptr [esi + 0x20]
// 0073bde9  8d4c2404             lea ecx, [esp + 4]
// 0073bded  51                   push ecx
// 0073bdee  52                   push edx
// 0073bdef  ff15f4ed8900         call dword ptr [0x89edf4]
// 0073bdf5  6afd                 push -3
// 0073bdf7  6afd                 push -3
// 0073bdf9  8d44240c             lea eax, [esp + 0xc]
// 0073bdfd  50                   push eax
// 0073bdfe  ff15bced8900         call dword ptr [0x89edbc]
// 0073be04  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0073be08  3b442408             cmp eax, dword ptr [esp + 8]
// 0073be0c  7d0c                 jge 0x73be1a
// 0073be0e  b80c000000           mov eax, 0xc
// 0073be13  5e                   pop esi
// 0073be14  83c410               add esp, 0x10
// 0073be17  c20800               ret 8
// 0073be1a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0073be1e  7c0c                 jl 0x73be2c
// 0073be20  b80f000000           mov eax, 0xf
// 0073be25  5e                   pop esi
// 0073be26  83c410               add esp, 0x10
// 0073be29  c20800               ret 8
// 0073be2c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073be30  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 0073be34  7d0c                 jge 0x73be42
// 0073be36  b80a000000           mov eax, 0xa
// 0073be3b  5e                   pop esi
// 0073be3c  83c410               add esp, 0x10
// 0073be3f  c20800               ret 8
// 0073be42  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 0073be46  0f8c6bffffff         jl 0x73bdb7
// 0073be4c  b80b000000           mov eax, 0xb
// 0073be51  5e                   pop esi
// 0073be52  83c410               add esp, 0x10
// 0073be55  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
