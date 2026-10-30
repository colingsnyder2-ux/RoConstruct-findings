// roc 2012-06 00a6eb80  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6eb80
//
// 00a6eb80  56                   push esi
// 00a6eb81  8bf1                 mov esi, ecx
// 00a6eb83  57                   push edi
// 00a6eb84  8dbe08020000         lea edi, [esi + 0x208]
// 00a6eb8a  8bcf                 mov ecx, edi
// 00a6eb8c  e8df6cf8ff           call 0x9f5870
// 00a6eb91  85c0                 test eax, eax
// 00a6eb93  7536                 jne 0xa6ebcb
// 00a6eb95  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a6eb99  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6eb9d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a6eba1  50                   push eax
// 00a6eba2  83ec10               sub esp, 0x10
// 00a6eba5  8bc4                 mov eax, esp
// 00a6eba7  8908                 mov dword ptr [eax], ecx
// 00a6eba9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a6ebad  895004               mov dword ptr [eax + 4], edx
// 00a6ebb0  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a6ebb4  894808               mov dword ptr [eax + 8], ecx
// 00a6ebb7  89500c               mov dword ptr [eax + 0xc], edx
// 00a6ebba  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a6ebbe  50                   push eax
// 00a6ebbf  8bce                 mov ecx, esi
// 00a6ebc1  e83ae8ffff           call 0xa6d400
// 00a6ebc6  5f                   pop edi
// 00a6ebc7  5e                   pop esi
// 00a6ebc8  c21800               ret 0x18
// 00a6ebcb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a6ebcf  8b11                 mov edx, dword ptr [ecx]
// 00a6ebd1  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a6ebd4  ffd0                 call eax
// 00a6ebd6  83e802               sub eax, 2
// 00a6ebd9  740b                 je 0xa6ebe6
// 00a6ebdb  83e801               sub eax, 1
// 00a6ebde  750a                 jne 0xa6ebea
// 00a6ebe0  ff442418             inc dword ptr [esp + 0x18]
// 00a6ebe4  eb04                 jmp 0xa6ebea
// 00a6ebe6  ff44241c             inc dword ptr [esp + 0x1c]
// 00a6ebea  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00a6ebee  85c0                 test eax, eax
// 00a6ebf0  7403                 je 0xa6ebf5
// 00a6ebf2  8b4004               mov eax, dword ptr [eax + 4]
// 00a6ebf5  6a00                 push 0
// 00a6ebf7  8d4c2414             lea ecx, [esp + 0x14]
// 00a6ebfb  51                   push ecx
// 00a6ebfc  6a00                 push 0
// 00a6ebfe  6a09                 push 9
// 00a6ec00  50                   push eax
// 00a6ec01  8bcf                 mov ecx, edi
// 00a6ec03  e89869f8ff           call 0x9f55a0
// 00a6ec08  5f                   pop edi
// 00a6ec09  33c0                 xor eax, eax
// 00a6ec0b  5e                   pop esi
// 00a6ec0c  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
