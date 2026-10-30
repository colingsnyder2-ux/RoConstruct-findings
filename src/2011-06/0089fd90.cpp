// roc 2011-06 0089fd90  unit: CXTPShortcutManager::CKeyHelper  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089fd90
//
// 0089fd90  6aff                 push -1
// 0089fd92  68d9a0a000           push 0xa0a0d9
// 0089fd97  64a100000000         mov eax, dword ptr fs:[0]
// 0089fd9d  50                   push eax
// 0089fd9e  83ec40               sub esp, 0x40
// 0089fda1  a12058c900           mov eax, dword ptr [0xc95820]
// 0089fda6  33c4                 xor eax, esp
// 0089fda8  8944243c             mov dword ptr [esp + 0x3c], eax
// 0089fdac  53                   push ebx
// 0089fdad  55                   push ebp
// 0089fdae  56                   push esi
// 0089fdaf  57                   push edi
// 0089fdb0  a12058c900           mov eax, dword ptr [0xc95820]
// 0089fdb5  33c4                 xor eax, esp
// 0089fdb7  50                   push eax
// 0089fdb8  8d442454             lea eax, [esp + 0x54]
// 0089fdbc  64a300000000         mov dword ptr fs:[0], eax
// 0089fdc2  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0089fdc6  33f6                 xor esi, esi
// 0089fdc8  6a32                 push 0x32
// 0089fdca  8d442420             lea eax, [esp + 0x20]
// 0089fdce  56                   push esi
// 0089fdcf  50                   push eax
// 0089fdd0  89742424             mov dword ptr [esp + 0x24], esi
// 0089fdd4  e80bb5f6ff           call 0x80b2e4
// 0089fdd9  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0089fddd  83c40c               add esp, 0xc
// 0089fde0  83ff03               cmp edi, 3
// 0089fde3  7512                 jne 0x89fdf7
// 0089fde5  68cabea500           push 0xa5beca
// 0089fdea  8bcd                 mov ecx, ebp
// 0089fdec  ff15002ea400         call dword ptr [0xa42e00]
// 0089fdf2  e9d3000000           jmp 0x89feca
// 0089fdf7  56                   push esi
// 0089fdf8  ff15ac1ba400         call dword ptr [0xa41bac]
// 0089fdfe  50                   push eax
// 0089fdff  56                   push esi
// 0089fe00  57                   push edi
// 0089fe01  ff15b01ba400         call dword ptr [0xa41bb0]
// 0089fe07  c1e010               shl eax, 0x10
// 0089fe0a  83c7df               add edi, -0x21
// 0089fe0d  83c801               or eax, 1
// 0089fe10  83ff0e               cmp edi, 0xe
// 0089fe13  7705                 ja 0x89fe1a
// 0089fe15  0d00000001           or eax, 0x1000000
// 0089fe1a  6a32                 push 0x32
// 0089fe1c  8d4c2420             lea ecx, [esp + 0x20]
// 0089fe20  51                   push ecx
// 0089fe21  50                   push eax
// 0089fe22  ff153c1aa400         call dword ptr [0xa41a3c]
// 0089fe28  8d54241c             lea edx, [esp + 0x1c]
// 0089fe2c  52                   push edx
// 0089fe2d  8d4c2418             lea ecx, [esp + 0x18]
// 0089fe31  ff15002ea400         call dword ptr [0xa42e00]
// 0089fe37  8d4c2414             lea ecx, [esp + 0x14]
// 0089fe3b  8974245c             mov dword ptr [esp + 0x5c], esi
// 0089fe3f  ff15b026a400         call dword ptr [0xa426b0]
// 0089fe45  84c0                 test al, al
// 0089fe47  756a                 jne 0x89feb3
// 0089fe49  8d4c2414             lea ecx, [esp + 0x14]
// 0089fe4d  ff15e428a400         call dword ptr [0xa428e4]
// 0089fe53  8d4c2414             lea ecx, [esp + 0x14]
// 0089fe57  ff15a826a400         call dword ptr [0xa426a8]
// 0089fe5d  85c0                 test eax, eax
// 0089fe5f  7e52                 jle 0x89feb3
// 0089fe61  8b1d401aa400         mov ebx, dword ptr [0xa41a40]
// 0089fe67  eb07                 jmp 0x89fe70
// 0089fe69  8da42400000000       lea esp, [esp]
// 0089fe70  56                   push esi
// 0089fe71  8d4c2418             lea ecx, [esp + 0x18]
// 0089fe75  ff153c25a400         call dword ptr [0xa4253c]
// 0089fe7b  88442418             mov byte ptr [esp + 0x18], al
// 0089fe7f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0089fe83  57                   push edi
// 0089fe84  ffd3                 call ebx
// 0089fe86  85c0                 test eax, eax
// 0089fe88  7511                 jne 0x89fe9b
// 0089fe8a  8d4c2414             lea ecx, [esp + 0x14]
// 0089fe8e  46                   inc esi
// 0089fe8f  ff15a826a400         call dword ptr [0xa426a8]
// 0089fe95  3bf0                 cmp esi, eax
// 0089fe97  7cd7                 jl 0x89fe70
// 0089fe99  eb18                 jmp 0x89feb3
// 0089fe9b  57                   push edi
// 0089fe9c  e8bff8ffff           call 0x89f760
// 0089fea1  0fb6c0               movzx eax, al
// 0089fea4  83c404               add esp, 4
// 0089fea7  50                   push eax
// 0089fea8  56                   push esi
// 0089fea9  8d4c241c             lea ecx, [esp + 0x1c]
// 0089fead  ff155c2ca400         call dword ptr [0xa42c5c]
// 0089feb3  8d4c2414             lea ecx, [esp + 0x14]
// 0089feb7  51                   push ecx
// 0089feb8  8bcd                 mov ecx, ebp
// 0089feba  ff15e42da400         call dword ptr [0xa42de4]
// 0089fec0  8d4c2414             lea ecx, [esp + 0x14]
// 0089fec4  ff15082ea400         call dword ptr [0xa42e08]
// 0089feca  8bc5                 mov eax, ebp
// 0089fecc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089fed0  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fed7  59                   pop ecx
// 0089fed8  5f                   pop edi
// 0089fed9  5e                   pop esi
// 0089feda  5d                   pop ebp
// 0089fedb  5b                   pop ebx
// 0089fedc  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0089fee0  33cc                 xor ecx, esp
// 0089fee2  e810baf6ff           call 0x80b8f7
// 0089fee7  83c44c               add esp, 0x4c
// 0089feea  c3                   ret 
// copied from an identical function in another client (function ?GetLocalKeyNameText@CKeyHelper@CXTPShortcutManager@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp