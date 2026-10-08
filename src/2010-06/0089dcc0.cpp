// roc 2010-06 0089dcc0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089dcc0
//
// 0089dcc0  56                   push esi
// 0089dcc1  8bf1                 mov esi, ecx
// 0089dcc3  57                   push edi
// 0089dcc4  8dbe08020000         lea edi, [esi + 0x208]
// 0089dcca  8bcf                 mov ecx, edi
// 0089dccc  e8ef1ef8ff           call 0x81fbc0
// 0089dcd1  85c0                 test eax, eax
// 0089dcd3  7536                 jne 0x89dd0b
// 0089dcd5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089dcd9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089dcdd  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089dce1  50                   push eax
// 0089dce2  83ec10               sub esp, 0x10
// 0089dce5  8bc4                 mov eax, esp
// 0089dce7  8908                 mov dword ptr [eax], ecx
// 0089dce9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0089dced  895004               mov dword ptr [eax + 4], edx
// 0089dcf0  8b542430             mov edx, dword ptr [esp + 0x30]
// 0089dcf4  894808               mov dword ptr [eax + 8], ecx
// 0089dcf7  89500c               mov dword ptr [eax + 0xc], edx
// 0089dcfa  8b442420             mov eax, dword ptr [esp + 0x20]
// 0089dcfe  50                   push eax
// 0089dcff  8bce                 mov ecx, esi
// 0089dd01  e83ae8ffff           call 0x89c540
// 0089dd06  5f                   pop edi
// 0089dd07  5e                   pop esi
// 0089dd08  c21800               ret 0x18
// 0089dd0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0089dd0f  8b11                 mov edx, dword ptr [ecx]
// 0089dd11  8b4248               mov eax, dword ptr [edx + 0x48]
// 0089dd14  ffd0                 call eax
// 0089dd16  83e802               sub eax, 2
// 0089dd19  740b                 je 0x89dd26
// 0089dd1b  83e801               sub eax, 1
// 0089dd1e  750a                 jne 0x89dd2a
// 0089dd20  ff442418             inc dword ptr [esp + 0x18]
// 0089dd24  eb04                 jmp 0x89dd2a
// 0089dd26  ff44241c             inc dword ptr [esp + 0x1c]
// 0089dd2a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0089dd2e  85c0                 test eax, eax
// 0089dd30  7403                 je 0x89dd35
// 0089dd32  8b4004               mov eax, dword ptr [eax + 4]
// 0089dd35  6a00                 push 0
// 0089dd37  8d4c2414             lea ecx, [esp + 0x14]
// 0089dd3b  51                   push ecx
// 0089dd3c  6a00                 push 0
// 0089dd3e  6a09                 push 9
// 0089dd40  50                   push eax
// 0089dd41  8bcf                 mov ecx, edi
// 0089dd43  e8f81af8ff           call 0x81f840
// 0089dd48  5f                   pop edi
// 0089dd49  33c0                 xor eax, eax
// 0089dd4b  5e                   pop esi
// 0089dd4c  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
