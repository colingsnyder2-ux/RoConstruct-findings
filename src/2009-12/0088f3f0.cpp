// roc 2009-12 0088f3f0  unit: UtagACCEL::?$CArray  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088f3f0
//
// 0088f3f0  6aff                 push -1
// 0088f3f2  6899869500           push 0x958699
// 0088f3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0088f3fd  50                   push eax
// 0088f3fe  51                   push ecx
// 0088f3ff  56                   push esi
// 0088f400  a10052b600           mov eax, dword ptr [0xb65200]
// 0088f405  33c4                 xor eax, esp
// 0088f407  50                   push eax
// 0088f408  8d44240c             lea eax, [esp + 0xc]
// 0088f40c  64a300000000         mov dword ptr fs:[0], eax
// 0088f412  8bf1                 mov esi, ecx
// 0088f414  8d4c2408             lea ecx, [esp + 8]
// 0088f418  c744240800000000     mov dword ptr [esp + 8], 0
// 0088f420  ff1574de9800         call dword ptr [0x98de74]
// 0088f426  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0088f42a  8d442408             lea eax, [esp + 8]
// 0088f42e  50                   push eax
// 0088f42f  51                   push ecx
// 0088f430  8bce                 mov ecx, esi
// 0088f432  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0088f43a  e831feffff           call 0x88f270
// 0088f43f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0088f443  8bce                 mov ecx, esi
// 0088f445  85c0                 test eax, eax
// 0088f447  740d                 je 0x88f456
// 0088f449  8d542408             lea edx, [esp + 8]
// 0088f44d  52                   push edx
// 0088f44e  ff1594de9800         call dword ptr [0x98de94]
// 0088f454  eb0b                 jmp 0x88f461
// 0088f456  6856fd9900           push 0x99fd56
// 0088f45b  ff15b8de9800         call dword ptr [0x98deb8]
// 0088f461  8d4c2408             lea ecx, [esp + 8]
// 0088f465  ff15c0de9800         call dword ptr [0x98dec0]
// 0088f46b  8bc6                 mov eax, esi
// 0088f46d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088f471  64890d00000000       mov dword ptr fs:[0], ecx
// 0088f478  59                   pop ecx
// 0088f479  5e                   pop esi
// 0088f47a  83c410               add esp, 0x10
// 0088f47d  c20800               ret 8
// copied from an identical function in another client (function ?Translate@CKeyNameText@CXTPShortcutManager@@QAE?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPShortcutManager.cpp