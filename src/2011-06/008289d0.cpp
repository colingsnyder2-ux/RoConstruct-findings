// roc 2011-06 008289d0  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008289d0
//
// 008289d0  83ec10               sub esp, 0x10
// 008289d3  56                   push esi
// 008289d4  8bf1                 mov esi, ecx
// 008289d6  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 008289dd  7418                 je 0x8289f7
// 008289df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008289e3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008289e7  50                   push eax
// 008289e8  51                   push ecx
// 008289e9  8bce                 mov ecx, esi
// 008289eb  e81061ffff           call 0x81eb00
// 008289f0  5e                   pop esi
// 008289f1  83c410               add esp, 0x10
// 008289f4  c20800               ret 8
// 008289f7  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 008289fe  7516                 jne 0x828a16
// 00828a00  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00828a04  8b442418             mov eax, dword ptr [esp + 0x18]
// 00828a08  52                   push edx
// 00828a09  50                   push eax
// 00828a0a  e8f160ffff           call 0x81eb00
// 00828a0f  5e                   pop esi
// 00828a10  83c410               add esp, 0x10
// 00828a13  c20800               ret 8
// 00828a16  8b5620               mov edx, dword ptr [esi + 0x20]
// 00828a19  8d4c2404             lea ecx, [esp + 4]
// 00828a1d  51                   push ecx
// 00828a1e  52                   push edx
// 00828a1f  ff155c1ca400         call dword ptr [0xa41c5c]
// 00828a25  6afd                 push -3
// 00828a27  6afd                 push -3
// 00828a29  8d44240c             lea eax, [esp + 0xc]
// 00828a2d  50                   push eax
// 00828a2e  ff15e41ba400         call dword ptr [0xa41be4]
// 00828a34  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00828a38  3b442408             cmp eax, dword ptr [esp + 8]
// 00828a3c  7d0c                 jge 0x828a4a
// 00828a3e  b80c000000           mov eax, 0xc
// 00828a43  5e                   pop esi
// 00828a44  83c410               add esp, 0x10
// 00828a47  c20800               ret 8
// 00828a4a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00828a4e  7c0c                 jl 0x828a5c
// 00828a50  b80f000000           mov eax, 0xf
// 00828a55  5e                   pop esi
// 00828a56  83c410               add esp, 0x10
// 00828a59  c20800               ret 8
// 00828a5c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00828a60  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 00828a64  7d0c                 jge 0x828a72
// 00828a66  b80a000000           mov eax, 0xa
// 00828a6b  5e                   pop esi
// 00828a6c  83c410               add esp, 0x10
// 00828a6f  c20800               ret 8
// 00828a72  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 00828a76  0f8c6bffffff         jl 0x8289e7
// 00828a7c  b80b000000           mov eax, 0xb
// 00828a81  5e                   pop esi
// 00828a82  83c410               add esp, 0x10
// 00828a85  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
