// roc 2009-06 007b49c0  unit: CXTPShortcutManager::CKeyHelper  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b49c0
//
// 007b49c0  6aff                 push -1
// 007b49c2  6849ce8700           push 0x87ce49
// 007b49c7  64a100000000         mov eax, dword ptr fs:[0]
// 007b49cd  50                   push eax
// 007b49ce  83ec40               sub esp, 0x40
// 007b49d1  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b49d6  33c4                 xor eax, esp
// 007b49d8  8944243c             mov dword ptr [esp + 0x3c], eax
// 007b49dc  53                   push ebx
// 007b49dd  55                   push ebp
// 007b49de  56                   push esi
// 007b49df  57                   push edi
// 007b49e0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b49e5  33c4                 xor eax, esp
// 007b49e7  50                   push eax
// 007b49e8  8d442454             lea eax, [esp + 0x54]
// 007b49ec  64a300000000         mov dword ptr fs:[0], eax
// 007b49f2  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 007b49f6  33f6                 xor esi, esi
// 007b49f8  6a32                 push 0x32
// 007b49fa  8d442420             lea eax, [esp + 0x20]
// 007b49fe  56                   push esi
// 007b49ff  50                   push eax
// 007b4a00  89742424             mov dword ptr [esp + 0x24], esi
// 007b4a04  e86b52f6ff           call 0x719c74
// 007b4a09  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 007b4a0d  83c40c               add esp, 0xc
// 007b4a10  83ff03               cmp edi, 3
// 007b4a13  7512                 jne 0x7b4a27
// 007b4a15  6816d28a00           push 0x8ad216
// 007b4a1a  8bcd                 mov ecx, ebp
// 007b4a1c  ff1508fd8900         call dword ptr [0x89fd08]
// 007b4a22  e9d3000000           jmp 0x7b4afa
// 007b4a27  56                   push esi
// 007b4a28  ff1594ed8900         call dword ptr [0x89ed94]
// 007b4a2e  50                   push eax
// 007b4a2f  56                   push esi
// 007b4a30  57                   push edi
// 007b4a31  ff1598ed8900         call dword ptr [0x89ed98]
// 007b4a37  c1e010               shl eax, 0x10
// 007b4a3a  83c7df               add edi, -0x21
// 007b4a3d  83c801               or eax, 1
// 007b4a40  83ff0e               cmp edi, 0xe
// 007b4a43  7705                 ja 0x7b4a4a
// 007b4a45  0d00000001           or eax, 0x1000000
// 007b4a4a  6a32                 push 0x32
// 007b4a4c  8d4c2420             lea ecx, [esp + 0x20]
// 007b4a50  51                   push ecx
// 007b4a51  50                   push eax
// 007b4a52  ff15acec8900         call dword ptr [0x89ecac]
// 007b4a58  8d54241c             lea edx, [esp + 0x1c]
// 007b4a5c  52                   push edx
// 007b4a5d  8d4c2418             lea ecx, [esp + 0x18]
// 007b4a61  ff1508fd8900         call dword ptr [0x89fd08]
// 007b4a67  8d4c2414             lea ecx, [esp + 0x14]
// 007b4a6b  8974245c             mov dword ptr [esp + 0x5c], esi
// 007b4a6f  ff155cfb8900         call dword ptr [0x89fb5c]
// 007b4a75  84c0                 test al, al
// 007b4a77  756a                 jne 0x7b4ae3
// 007b4a79  8d4c2414             lea ecx, [esp + 0x14]
// 007b4a7d  ff1578fe8900         call dword ptr [0x89fe78]
// 007b4a83  8d4c2414             lea ecx, [esp + 0x14]
// 007b4a87  ff1554fb8900         call dword ptr [0x89fb54]
// 007b4a8d  85c0                 test eax, eax
// 007b4a8f  7e52                 jle 0x7b4ae3
// 007b4a91  8b1db0ec8900         mov ebx, dword ptr [0x89ecb0]
// 007b4a97  eb07                 jmp 0x7b4aa0
// 007b4a99  8da42400000000       lea esp, [esp]
// 007b4aa0  56                   push esi
// 007b4aa1  8d4c2418             lea ecx, [esp + 0x18]
// 007b4aa5  ff15e0f98900         call dword ptr [0x89f9e0]
// 007b4aab  88442418             mov byte ptr [esp + 0x18], al
// 007b4aaf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007b4ab3  57                   push edi
// 007b4ab4  ffd3                 call ebx
// 007b4ab6  85c0                 test eax, eax
// 007b4ab8  7511                 jne 0x7b4acb
// 007b4aba  8d4c2414             lea ecx, [esp + 0x14]
// 007b4abe  46                   inc esi
// 007b4abf  ff1554fb8900         call dword ptr [0x89fb54]
// 007b4ac5  3bf0                 cmp esi, eax
// 007b4ac7  7cd7                 jl 0x7b4aa0
// 007b4ac9  eb18                 jmp 0x7b4ae3
// 007b4acb  57                   push edi
// 007b4acc  e84ff8ffff           call 0x7b4320
// 007b4ad1  0fb6c0               movzx eax, al
// 007b4ad4  83c404               add esp, 4
// 007b4ad7  50                   push eax
// 007b4ad8  56                   push esi
// 007b4ad9  8d4c241c             lea ecx, [esp + 0x1c]
// 007b4add  ff158cf78900         call dword ptr [0x89f78c]
// 007b4ae3  8d4c2414             lea ecx, [esp + 0x14]
// 007b4ae7  51                   push ecx
// 007b4ae8  8bcd                 mov ecx, ebp
// 007b4aea  ff15e4fc8900         call dword ptr [0x89fce4]
// 007b4af0  8d4c2414             lea ecx, [esp + 0x14]
// 007b4af4  ff1510fd8900         call dword ptr [0x89fd10]
// 007b4afa  8bc5                 mov eax, ebp
// 007b4afc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007b4b00  64890d00000000       mov dword ptr fs:[0], ecx
// 007b4b07  59                   pop ecx
// 007b4b08  5f                   pop edi
// 007b4b09  5e                   pop esi
// 007b4b0a  5d                   pop ebp
// 007b4b0b  5b                   pop ebx
// 007b4b0c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007b4b10  33cc                 xor ecx, esp
// 007b4b12  e8635af6ff           call 0x71a57a
// 007b4b17  83c44c               add esp, 0x4c
// 007b4b1a  c3                   ret 
// copied from an identical function in another client (function ?GetLocalKeyNameText@CKeyHelper@CXTPShortcutManager@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp