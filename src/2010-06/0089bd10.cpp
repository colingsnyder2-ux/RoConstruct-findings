// roc 2010-06 0089bd10  unit: CXTPTabPaintManager::CColorSetWinXP  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089bd10
//
// 0089bd10  83ec10               sub esp, 0x10
// 0089bd13  56                   push esi
// 0089bd14  8bf1                 mov esi, ecx
// 0089bd16  57                   push edi
// 0089bd17  8d8e08020000         lea ecx, [esi + 0x208]
// 0089bd1d  e89e3ef8ff           call 0x81fbc0
// 0089bd22  85c0                 test eax, eax
// 0089bd24  0f84b9000000         je 0x89bde3
// 0089bd2a  8b8604020000         mov eax, dword ptr [esi + 0x204]
// 0089bd30  8b742430             mov esi, dword ptr [esp + 0x30]
// 0089bd34  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0089bd3a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089bd3e  8b11                 mov edx, dword ptr [ecx]
// 0089bd40  8b520c               mov edx, dword ptr [edx + 0xc]
// 0089bd43  56                   push esi
// 0089bd44  83ec10               sub esp, 0x10
// 0089bd47  8bc4                 mov eax, esp
// 0089bd49  8938                 mov dword ptr [eax], edi
// 0089bd4b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0089bd4f  897804               mov dword ptr [eax + 4], edi
// 0089bd52  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0089bd56  897808               mov dword ptr [eax + 8], edi
// 0089bd59  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0089bd5d  89780c               mov dword ptr [eax + 0xc], edi
// 0089bd60  8d44241c             lea eax, [esp + 0x1c]
// 0089bd64  50                   push eax
// 0089bd65  ffd2                 call edx
// 0089bd67  8b06                 mov eax, dword ptr [esi]
// 0089bd69  8b5048               mov edx, dword ptr [eax + 0x48]
// 0089bd6c  8bce                 mov ecx, esi
// 0089bd6e  ffd2                 call edx
// 0089bd70  83f803               cmp eax, 3
// 0089bd73  776e                 ja 0x89bde3
// 0089bd75  ff2485ecbd8900       jmp dword ptr [eax*4 + 0x89bdec]
// 0089bd7c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089bd80  8d48ff               lea ecx, [eax - 1]
// 0089bd83  51                   push ecx
// 0089bd84  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089bd88  8d5101               lea edx, [ecx + 1]
// 0089bd8b  52                   push edx
// 0089bd8c  83c0fe               add eax, -2
// 0089bd8f  50                   push eax
// 0089bd90  51                   push ecx
// 0089bd91  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089bd95  e8fa140e00           call 0x97d294
// 0089bd9a  5f                   pop edi
// 0089bd9b  5e                   pop esi
// 0089bd9c  83c410               add esp, 0x10
// 0089bd9f  c21800               ret 0x18
// 0089bda2  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089bda6  8d4801               lea ecx, [eax + 1]
// 0089bda9  51                   push ecx
// 0089bdaa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089bdae  8d5101               lea edx, [ecx + 1]
// 0089bdb1  52                   push edx
// 0089bdb2  50                   push eax
// 0089bdb3  51                   push ecx
// 0089bdb4  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089bdb8  e8d7140e00           call 0x97d294
// 0089bdbd  5f                   pop edi
// 0089bdbe  5e                   pop esi
// 0089bdbf  83c410               add esp, 0x10
// 0089bdc2  c21800               ret 0x18
// 0089bdc5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089bdc9  8d4801               lea ecx, [eax + 1]
// 0089bdcc  51                   push ecx
// 0089bdcd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089bdd1  8d51ff               lea edx, [ecx - 1]
// 0089bdd4  52                   push edx
// 0089bdd5  83c1fe               add ecx, -2
// 0089bdd8  50                   push eax
// 0089bdd9  51                   push ecx
// 0089bdda  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089bdde  e8b1140e00           call 0x97d294
// 0089bde3  5f                   pop edi
// 0089bde4  5e                   pop esi
// 0089bde5  83c410               add esp, 0x10
// 0089bde8  c21800               ret 0x18
// 0089bdeb  90                   nop 
// 0089bdec  a2bd8900a2           mov byte ptr [0xa20089bd], al
// 0089bdf1  bd89007cbd           mov ebp, 0xbd7c0089
// 0089bdf6  8900                 mov dword ptr [eax], eax
// copied from an identical function in another client (function ?SelectClipRgn@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp