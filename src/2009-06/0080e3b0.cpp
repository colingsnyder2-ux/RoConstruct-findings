// roc 2009-06 0080e3b0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080e3b0
//
// 0080e3b0  56                   push esi
// 0080e3b1  8bf1                 mov esi, ecx
// 0080e3b3  57                   push edi
// 0080e3b4  8dbe08020000         lea edi, [esi + 0x208]
// 0080e3ba  8bcf                 mov ecx, edi
// 0080e3bc  e8df27f8ff           call 0x790ba0
// 0080e3c1  85c0                 test eax, eax
// 0080e3c3  7536                 jne 0x80e3fb
// 0080e3c5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080e3c9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080e3cd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080e3d1  50                   push eax
// 0080e3d2  83ec10               sub esp, 0x10
// 0080e3d5  8bc4                 mov eax, esp
// 0080e3d7  8908                 mov dword ptr [eax], ecx
// 0080e3d9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080e3dd  895004               mov dword ptr [eax + 4], edx
// 0080e3e0  8b542430             mov edx, dword ptr [esp + 0x30]
// 0080e3e4  894808               mov dword ptr [eax + 8], ecx
// 0080e3e7  89500c               mov dword ptr [eax + 0xc], edx
// 0080e3ea  8b442420             mov eax, dword ptr [esp + 0x20]
// 0080e3ee  50                   push eax
// 0080e3ef  8bce                 mov ecx, esi
// 0080e3f1  e83ae8ffff           call 0x80cc30
// 0080e3f6  5f                   pop edi
// 0080e3f7  5e                   pop esi
// 0080e3f8  c21800               ret 0x18
// 0080e3fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080e3ff  8b11                 mov edx, dword ptr [ecx]
// 0080e401  8b4248               mov eax, dword ptr [edx + 0x48]
// 0080e404  ffd0                 call eax
// 0080e406  83e802               sub eax, 2
// 0080e409  740b                 je 0x80e416
// 0080e40b  83e801               sub eax, 1
// 0080e40e  750a                 jne 0x80e41a
// 0080e410  ff442418             inc dword ptr [esp + 0x18]
// 0080e414  eb04                 jmp 0x80e41a
// 0080e416  ff44241c             inc dword ptr [esp + 0x1c]
// 0080e41a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0080e41e  85c0                 test eax, eax
// 0080e420  7403                 je 0x80e425
// 0080e422  8b4004               mov eax, dword ptr [eax + 4]
// 0080e425  6a00                 push 0
// 0080e427  8d4c2414             lea ecx, [esp + 0x14]
// 0080e42b  51                   push ecx
// 0080e42c  6a00                 push 0
// 0080e42e  6a09                 push 9
// 0080e430  50                   push eax
// 0080e431  8bcf                 mov ecx, edi
// 0080e433  e8e823f8ff           call 0x790820
// 0080e438  5f                   pop edi
// 0080e439  33c0                 xor eax, eax
// 0080e43b  5e                   pop esi
// 0080e43c  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
