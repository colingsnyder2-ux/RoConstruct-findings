// roc 2009-12 0088e2b0  unit: CXTPShortcutManager  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e2b0
//
// 0088e2b0  6aff                 push -1
// 0088e2b2  68890f9600           push 0x960f89
// 0088e2b7  64a100000000         mov eax, dword ptr fs:[0]
// 0088e2bd  50                   push eax
// 0088e2be  56                   push esi
// 0088e2bf  a10052b600           mov eax, dword ptr [0xb65200]
// 0088e2c4  33c4                 xor eax, esp
// 0088e2c6  50                   push eax
// 0088e2c7  8d442408             lea eax, [esp + 8]
// 0088e2cb  64a300000000         mov dword ptr fs:[0], eax
// 0088e2d1  83790800             cmp dword ptr [ecx + 8], 0
// 0088e2d5  7456                 je 0x88e32d
// 0088e2d7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088e2db  8b4908               mov ecx, dword ptr [ecx + 8]
// 0088e2de  8b01                 mov eax, dword ptr [ecx]
// 0088e2e0  8b4060               mov eax, dword ptr [eax + 0x60]
// 0088e2e3  52                   push edx
// 0088e2e4  8d542420             lea edx, [esp + 0x20]
// 0088e2e8  52                   push edx
// 0088e2e9  ffd0                 call eax
// 0088e2eb  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e2ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0088e2f7  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088e2fd  84c0                 test al, al
// 0088e2ff  7522                 jne 0x88e323
// 0088e301  8b742418             mov esi, dword ptr [esp + 0x18]
// 0088e305  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e309  51                   push ecx
// 0088e30a  8bce                 mov ecx, esi
// 0088e30c  ff1588d79800         call dword ptr [0x98d788]
// 0088e312  837c242000           cmp dword ptr [esp + 0x20], 0
// 0088e317  750a                 jne 0x88e323
// 0088e319  6a2b                 push 0x2b
// 0088e31b  8bce                 mov ecx, esi
// 0088e31d  ff15bcd79800         call dword ptr [0x98d7bc]
// 0088e323  8d4c241c             lea ecx, [esp + 0x1c]
// 0088e327  ff15c0de9800         call dword ptr [0x98dec0]
// 0088e32d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0088e331  64890d00000000       mov dword ptr fs:[0], ecx
// 0088e338  59                   pop ecx
// 0088e339  5e                   pop esi
// 0088e33a  83c40c               add esp, 0xc
// 0088e33d  c20c00               ret 0xc
// copied from an identical function in another client (function ?AddVirtKeyStr@CKeyHelper@CXTPShortcutManager@@IBEXAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@IH@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp