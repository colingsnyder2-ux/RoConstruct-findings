// roc 2009-12 0088e9e0  unit: CXTPShortcutManager::CKeyHelper  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088e9e0
//
// 0088e9e0  6aff                 push -1
// 0088e9e2  68e90f9600           push 0x960fe9
// 0088e9e7  64a100000000         mov eax, dword ptr fs:[0]
// 0088e9ed  50                   push eax
// 0088e9ee  83ec40               sub esp, 0x40
// 0088e9f1  a10052b600           mov eax, dword ptr [0xb65200]
// 0088e9f6  33c4                 xor eax, esp
// 0088e9f8  8944243c             mov dword ptr [esp + 0x3c], eax
// 0088e9fc  53                   push ebx
// 0088e9fd  55                   push ebp
// 0088e9fe  56                   push esi
// 0088e9ff  57                   push edi
// 0088ea00  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ea05  33c4                 xor eax, esp
// 0088ea07  50                   push eax
// 0088ea08  8d442454             lea eax, [esp + 0x54]
// 0088ea0c  64a300000000         mov dword ptr fs:[0], eax
// 0088ea12  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 0088ea16  33f6                 xor esi, esi
// 0088ea18  6a32                 push 0x32
// 0088ea1a  8d442420             lea eax, [esp + 0x20]
// 0088ea1e  56                   push esi
// 0088ea1f  50                   push eax
// 0088ea20  89742424             mov dword ptr [esp + 0x24], esi
// 0088ea24  e87b60f6ff           call 0x7f4aa4
// 0088ea29  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0088ea2d  83c40c               add esp, 0xc
// 0088ea30  83ff03               cmp edi, 3
// 0088ea33  7512                 jne 0x88ea47
// 0088ea35  6856fd9900           push 0x99fd56
// 0088ea3a  8bcd                 mov ecx, ebp
// 0088ea3c  ff15b8de9800         call dword ptr [0x98deb8]
// 0088ea42  e9d3000000           jmp 0x88eb1a
// 0088ea47  56                   push esi
// 0088ea48  ff1528ca9800         call dword ptr [0x98ca28]
// 0088ea4e  50                   push eax
// 0088ea4f  56                   push esi
// 0088ea50  57                   push edi
// 0088ea51  ff152cca9800         call dword ptr [0x98ca2c]
// 0088ea57  c1e010               shl eax, 0x10
// 0088ea5a  83c7df               add edi, -0x21
// 0088ea5d  83c801               or eax, 1
// 0088ea60  83ff0e               cmp edi, 0xe
// 0088ea63  7705                 ja 0x88ea6a
// 0088ea65  0d00000001           or eax, 0x1000000
// 0088ea6a  6a32                 push 0x32
// 0088ea6c  8d4c2420             lea ecx, [esp + 0x20]
// 0088ea70  51                   push ecx
// 0088ea71  50                   push eax
// 0088ea72  ff15a8cb9800         call dword ptr [0x98cba8]
// 0088ea78  8d54241c             lea edx, [esp + 0x1c]
// 0088ea7c  52                   push edx
// 0088ea7d  8d4c2418             lea ecx, [esp + 0x18]
// 0088ea81  ff15b8de9800         call dword ptr [0x98deb8]
// 0088ea87  8d4c2414             lea ecx, [esp + 0x14]
// 0088ea8b  8974245c             mov dword ptr [esp + 0x5c], esi
// 0088ea8f  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0088ea95  84c0                 test al, al
// 0088ea97  756a                 jne 0x88eb03
// 0088ea99  8d4c2414             lea ecx, [esp + 0x14]
// 0088ea9d  ff1544d89800         call dword ptr [0x98d844]
// 0088eaa3  8d4c2414             lea ecx, [esp + 0x14]
// 0088eaa7  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088eaad  85c0                 test eax, eax
// 0088eaaf  7e52                 jle 0x88eb03
// 0088eab1  8b1da4cb9800         mov ebx, dword ptr [0x98cba4]
// 0088eab7  eb07                 jmp 0x88eac0
// 0088eab9  8da42400000000       lea esp, [esp]
// 0088eac0  56                   push esi
// 0088eac1  8d4c2418             lea ecx, [esp + 0x18]
// 0088eac5  ff1510d59800         call dword ptr [0x98d510]
// 0088eacb  88442418             mov byte ptr [esp + 0x18], al
// 0088eacf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0088ead3  57                   push edi
// 0088ead4  ffd3                 call ebx
// 0088ead6  85c0                 test eax, eax
// 0088ead8  7511                 jne 0x88eaeb
// 0088eada  8d4c2414             lea ecx, [esp + 0x14]
// 0088eade  46                   inc esi
// 0088eadf  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0088eae5  3bf0                 cmp esi, eax
// 0088eae7  7cd7                 jl 0x88eac0
// 0088eae9  eb18                 jmp 0x88eb03
// 0088eaeb  57                   push edi
// 0088eaec  e84ff8ffff           call 0x88e340
// 0088eaf1  0fb6c0               movzx eax, al
// 0088eaf4  83c404               add esp, 4
// 0088eaf7  50                   push eax
// 0088eaf8  56                   push esi
// 0088eaf9  8d4c241c             lea ecx, [esp + 0x1c]
// 0088eafd  ff1540dc9800         call dword ptr [0x98dc40]
// 0088eb03  8d4c2414             lea ecx, [esp + 0x14]
// 0088eb07  51                   push ecx
// 0088eb08  8bcd                 mov ecx, ebp
// 0088eb0a  ff1594de9800         call dword ptr [0x98de94]
// 0088eb10  8d4c2414             lea ecx, [esp + 0x14]
// 0088eb14  ff15c0de9800         call dword ptr [0x98dec0]
// 0088eb1a  8bc5                 mov eax, ebp
// 0088eb1c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0088eb20  64890d00000000       mov dword ptr fs:[0], ecx
// 0088eb27  59                   pop ecx
// 0088eb28  5f                   pop edi
// 0088eb29  5e                   pop esi
// 0088eb2a  5d                   pop ebp
// 0088eb2b  5b                   pop ebx
// 0088eb2c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0088eb30  33cc                 xor ecx, esp
// 0088eb32  e86368f6ff           call 0x7f539a
// 0088eb37  83c44c               add esp, 0x4c
// 0088eb3a  c3                   ret 
// copied from an identical function in another client (function ?GetLocalKeyNameText@CKeyHelper@CXTPShortcutManager@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp