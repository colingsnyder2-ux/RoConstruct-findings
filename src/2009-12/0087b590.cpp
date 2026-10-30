// roc 2009-12 0087b590  unit: CXTPControlGallery  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087b590
//
// 0087b590  83ec10               sub esp, 0x10
// 0087b593  56                   push esi
// 0087b594  8bf1                 mov esi, ecx
// 0087b596  8b96f8010000         mov edx, dword ptr [esi + 0x1f8]
// 0087b59c  c786fc01000001000000 mov dword ptr [esi + 0x1fc], 1
// 0087b5a6  c7862002000000000000 mov dword ptr [esi + 0x220], 0
// 0087b5b0  83faff               cmp edx, -1
// 0087b5b3  742a                 je 0x87b5df
// 0087b5b5  e896bdffff           call 0x877350
// 0087b5ba  85c0                 test eax, eax
// 0087b5bc  7418                 je 0x87b5d6
// 0087b5be  83782c00             cmp dword ptr [eax + 0x2c], 0
// 0087b5c2  7412                 je 0x87b5d6
// 0087b5c4  52                   push edx
// 0087b5c5  8d442408             lea eax, [esp + 8]
// 0087b5c9  50                   push eax
// 0087b5ca  e8a1f4ffff           call 0x87aa70
// 0087b5cf  6a00                 push 0
// 0087b5d1  50                   push eax
// 0087b5d2  8bce                 mov ecx, esi
// 0087b5d4  eb04                 jmp 0x87b5da
// 0087b5d6  6a01                 push 1
// 0087b5d8  6a00                 push 0
// 0087b5da  e841ccffff           call 0x878220
// 0087b5df  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087b5e6  7434                 je 0x87b61c
// 0087b5e8  83bef8010000ff       cmp dword ptr [esi + 0x1f8], -1
// 0087b5ef  740c                 je 0x87b5fd
// 0087b5f1  6813100000           push 0x1013
// 0087b5f6  8bce                 mov ecx, esi
// 0087b5f8  e893cff7ff           call 0x7f8590
// 0087b5fd  83be4402000000       cmp dword ptr [esi + 0x244], 0
// 0087b604  7416                 je 0x87b61c
// 0087b606  6811100000           push 0x1011
// 0087b60b  8bce                 mov ecx, esi
// 0087b60d  c7864402000000000000 mov dword ptr [esi + 0x244], 0
// 0087b617  e874cff7ff           call 0x7f8590
// 0087b61c  8b16                 mov edx, dword ptr [esi]
// 0087b61e  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 0087b624  8bce                 mov ecx, esi
// 0087b626  5e                   pop esi
// 0087b627  83c410               add esp, 0x10
// 0087b62a  ffe0                 jmp eax
// copied from an identical function in another client (function ?HideSelection@CXTPControlGallery@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlGallery.cpp