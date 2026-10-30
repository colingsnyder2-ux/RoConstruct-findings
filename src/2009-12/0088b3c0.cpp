// roc 2009-12 0088b3c0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b3c0
//
// 0088b3c0  83ec58               sub esp, 0x58
// 0088b3c3  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b3c8  33c4                 xor eax, esp
// 0088b3ca  89442454             mov dword ptr [esp + 0x54], eax
// 0088b3ce  56                   push esi
// 0088b3cf  8bf1                 mov esi, ecx
// 0088b3d1  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0088b3d4  8b01                 mov eax, dword ptr [ecx]
// 0088b3d6  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 0088b3dc  57                   push edi
// 0088b3dd  8d542408             lea edx, [esp + 8]
// 0088b3e1  52                   push edx
// 0088b3e2  ffd0                 call eax
// 0088b3e4  8bce                 mov ecx, esi
// 0088b3e6  e895e8f6ff           call 0x7f9c80
// 0088b3eb  8b4808               mov ecx, dword ptr [eax + 8]
// 0088b3ee  8b4620               mov eax, dword ptr [esi + 0x20]
// 0088b3f1  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0088b3f7  f7d9                 neg ecx
// 0088b3f9  8d542408             lea edx, [esp + 8]
// 0088b3fd  52                   push edx
// 0088b3fe  1bc9                 sbb ecx, ecx
// 0088b400  6a00                 push 0
// 0088b402  83e118               and ecx, 0x18
// 0088b405  6844040000           push 0x444
// 0088b40a  83c13c               add ecx, 0x3c
// 0088b40d  50                   push eax
// 0088b40e  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088b412  ffd7                 call edi
// 0088b414  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0088b418  8b5620               mov edx, dword ptr [esi + 0x20]
// 0088b41b  51                   push ecx
// 0088b41c  6a00                 push 0
// 0088b41e  6843040000           push 0x443
// 0088b423  52                   push edx
// 0088b424  ffd7                 call edi
// 0088b426  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0088b42a  5f                   pop edi
// 0088b42b  5e                   pop esi
// 0088b42c  33cc                 xor ecx, esp
// 0088b42e  e8679ff6ff           call 0x7f539a
// 0088b433  83c458               add esp, 0x58
// 0088b436  c3                   ret 
// copied from an identical function in another client (function ?UpdateCharFormat@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp