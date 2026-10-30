// roc 2012-06 009a0ff0  unit: CXTPToolBar  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a0ff0
//
// 009a0ff0  83ec10               sub esp, 0x10
// 009a0ff3  56                   push esi
// 009a0ff4  8bf1                 mov esi, ecx
// 009a0ff6  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 009a0ffd  7418                 je 0x9a1017
// 009a0fff  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a1003  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a1007  50                   push eax
// 009a1008  51                   push ecx
// 009a1009  8bce                 mov ecx, esi
// 009a100b  e8f05dffff           call 0x996e00
// 009a1010  5e                   pop esi
// 009a1011  83c410               add esp, 0x10
// 009a1014  c20800               ret 8
// 009a1017  83bef800000002       cmp dword ptr [esi + 0xf8], 2
// 009a101e  7516                 jne 0x9a1036
// 009a1020  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009a1024  8b442418             mov eax, dword ptr [esp + 0x18]
// 009a1028  52                   push edx
// 009a1029  50                   push eax
// 009a102a  e8d15dffff           call 0x996e00
// 009a102f  5e                   pop esi
// 009a1030  83c410               add esp, 0x10
// 009a1033  c20800               ret 8
// 009a1036  8b5620               mov edx, dword ptr [esi + 0x20]
// 009a1039  8d4c2404             lea ecx, [esp + 4]
// 009a103d  51                   push ecx
// 009a103e  52                   push edx
// 009a103f  ff15f83ab200         call dword ptr [0xb23af8]
// 009a1045  6afd                 push -3
// 009a1047  6afd                 push -3
// 009a1049  8d44240c             lea eax, [esp + 0xc]
// 009a104d  50                   push eax
// 009a104e  ff154c3bb200         call dword ptr [0xb23b4c]
// 009a1054  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009a1058  3b442408             cmp eax, dword ptr [esp + 8]
// 009a105c  7d0c                 jge 0x9a106a
// 009a105e  b80c000000           mov eax, 0xc
// 009a1063  5e                   pop esi
// 009a1064  83c410               add esp, 0x10
// 009a1067  c20800               ret 8
// 009a106a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 009a106e  7c0c                 jl 0x9a107c
// 009a1070  b80f000000           mov eax, 0xf
// 009a1075  5e                   pop esi
// 009a1076  83c410               add esp, 0x10
// 009a1079  c20800               ret 8
// 009a107c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009a1080  3b4c2404             cmp ecx, dword ptr [esp + 4]
// 009a1084  7d0c                 jge 0x9a1092
// 009a1086  b80a000000           mov eax, 0xa
// 009a108b  5e                   pop esi
// 009a108c  83c410               add esp, 0x10
// 009a108f  c20800               ret 8
// 009a1092  3b4c240c             cmp ecx, dword ptr [esp + 0xc]
// 009a1096  0f8c6bffffff         jl 0x9a1007
// 009a109c  b80b000000           mov eax, 0xb
// 009a10a1  5e                   pop esi
// 009a10a2  83c410               add esp, 0x10
// 009a10a5  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?OnNcHitTest@CXTPToolBar@@IAEJVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
