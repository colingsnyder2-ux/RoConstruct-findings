// roc 2010-06 00842bd0  unit: CXTPShortcutManager::CKeyHelper  size: 347 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00842bd0
//
// 00842bd0  6aff                 push -1
// 00842bd2  68096f9b00           push 0x9b6f09
// 00842bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00842bdd  50                   push eax
// 00842bde  83ec40               sub esp, 0x40
// 00842be1  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00842be6  33c4                 xor eax, esp
// 00842be8  8944243c             mov dword ptr [esp + 0x3c], eax
// 00842bec  53                   push ebx
// 00842bed  55                   push ebp
// 00842bee  56                   push esi
// 00842bef  57                   push edi
// 00842bf0  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00842bf5  33c4                 xor eax, esp
// 00842bf7  50                   push eax
// 00842bf8  8d442454             lea eax, [esp + 0x54]
// 00842bfc  64a300000000         mov dword ptr fs:[0], eax
// 00842c02  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 00842c06  33f6                 xor esi, esi
// 00842c08  6a32                 push 0x32
// 00842c0a  8d442420             lea eax, [esp + 0x20]
// 00842c0e  56                   push esi
// 00842c0f  50                   push eax
// 00842c10  89742424             mov dword ptr [esp + 0x24], esi
// 00842c14  e8cb5ff6ff           call 0x7a8be4
// 00842c19  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 00842c1d  83c40c               add esp, 0xc
// 00842c20  83ff03               cmp edi, 3
// 00842c23  7512                 jne 0x842c37
// 00842c25  68fe08a000           push 0xa008fe
// 00842c2a  8bcd                 mov ecx, ebp
// 00842c2c  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00842c32  e9d3000000           jmp 0x842d0a
// 00842c37  56                   push esi
// 00842c38  ff15a8bb9e00         call dword ptr [0x9ebba8]
// 00842c3e  50                   push eax
// 00842c3f  56                   push esi
// 00842c40  57                   push edi
// 00842c41  ff15acbb9e00         call dword ptr [0x9ebbac]
// 00842c47  c1e010               shl eax, 0x10
// 00842c4a  83c7df               add edi, -0x21
// 00842c4d  83c801               or eax, 1
// 00842c50  83ff0e               cmp edi, 0xe
// 00842c53  7705                 ja 0x842c5a
// 00842c55  0d00000001           or eax, 0x1000000
// 00842c5a  6a32                 push 0x32
// 00842c5c  8d4c2420             lea ecx, [esp + 0x20]
// 00842c60  51                   push ecx
// 00842c61  50                   push eax
// 00842c62  ff1514bb9e00         call dword ptr [0x9ebb14]
// 00842c68  8d54241c             lea edx, [esp + 0x1c]
// 00842c6c  52                   push edx
// 00842c6d  8d4c2418             lea ecx, [esp + 0x18]
// 00842c71  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 00842c77  8d4c2414             lea ecx, [esp + 0x14]
// 00842c7b  8974245c             mov dword ptr [esp + 0x5c], esi
// 00842c7f  ff15eccd9e00         call dword ptr [0x9ecdec]
// 00842c85  84c0                 test al, al
// 00842c87  756a                 jne 0x842cf3
// 00842c89  8d4c2414             lea ecx, [esp + 0x14]
// 00842c8d  ff1540c89e00         call dword ptr [0x9ec840]
// 00842c93  8d4c2414             lea ecx, [esp + 0x14]
// 00842c97  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00842c9d  85c0                 test eax, eax
// 00842c9f  7e52                 jle 0x842cf3
// 00842ca1  8b1d18bb9e00         mov ebx, dword ptr [0x9ebb18]
// 00842ca7  eb07                 jmp 0x842cb0
// 00842ca9  8da42400000000       lea esp, [esp]
// 00842cb0  56                   push esi
// 00842cb1  8d4c2418             lea ecx, [esp + 0x18]
// 00842cb5  ff1558c59e00         call dword ptr [0x9ec558]
// 00842cbb  88442418             mov byte ptr [esp + 0x18], al
// 00842cbf  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00842cc3  57                   push edi
// 00842cc4  ffd3                 call ebx
// 00842cc6  85c0                 test eax, eax
// 00842cc8  7511                 jne 0x842cdb
// 00842cca  8d4c2414             lea ecx, [esp + 0x14]
// 00842cce  46                   inc esi
// 00842ccf  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00842cd5  3bf0                 cmp esi, eax
// 00842cd7  7cd7                 jl 0x842cb0
// 00842cd9  eb18                 jmp 0x842cf3
// 00842cdb  57                   push edi
// 00842cdc  e8bff8ffff           call 0x8425a0
// 00842ce1  0fb6c0               movzx eax, al
// 00842ce4  83c404               add esp, 4
// 00842ce7  50                   push eax
// 00842ce8  56                   push esi
// 00842ce9  8d4c241c             lea ecx, [esp + 0x1c]
// 00842ced  ff1540cc9e00         call dword ptr [0x9ecc40]
// 00842cf3  8d4c2414             lea ecx, [esp + 0x14]
// 00842cf7  51                   push ecx
// 00842cf8  8bcd                 mov ecx, ebp
// 00842cfa  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00842d00  8d4c2414             lea ecx, [esp + 0x14]
// 00842d04  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00842d0a  8bc5                 mov eax, ebp
// 00842d0c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00842d10  64890d00000000       mov dword ptr fs:[0], ecx
// 00842d17  59                   pop ecx
// 00842d18  5f                   pop edi
// 00842d19  5e                   pop esi
// 00842d1a  5d                   pop ebp
// 00842d1b  5b                   pop ebx
// 00842d1c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00842d20  33cc                 xor ecx, esp
// 00842d22  e8ad67f6ff           call 0x7a94d4
// 00842d27  83c44c               add esp, 0x4c
// 00842d2a  c3                   ret 
// copied from an identical function in another client (function ?GetLocalKeyNameText@CKeyHelper@CXTPShortcutManager@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPShortcutManager.cpp