// roc 2008-06 0079dd20  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079dd20
//
// 0079dd20  56                   push esi
// 0079dd21  8bf1                 mov esi, ecx
// 0079dd23  57                   push edi
// 0079dd24  8dbe08020000         lea edi, [esi + 0x208]
// 0079dd2a  8bcf                 mov ecx, edi
// 0079dd2c  e8ffa6f7ff           call 0x718430
// 0079dd31  85c0                 test eax, eax
// 0079dd33  7536                 jne 0x79dd6b
// 0079dd35  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079dd39  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079dd3d  8b542414             mov edx, dword ptr [esp + 0x14]
// 0079dd41  50                   push eax
// 0079dd42  83ec10               sub esp, 0x10
// 0079dd45  8bc4                 mov eax, esp
// 0079dd47  8908                 mov dword ptr [eax], ecx
// 0079dd49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0079dd4d  895004               mov dword ptr [eax + 4], edx
// 0079dd50  8b542430             mov edx, dword ptr [esp + 0x30]
// 0079dd54  894808               mov dword ptr [eax + 8], ecx
// 0079dd57  89500c               mov dword ptr [eax + 0xc], edx
// 0079dd5a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0079dd5e  50                   push eax
// 0079dd5f  8bce                 mov ecx, esi
// 0079dd61  e83ae8ffff           call 0x79c5a0
// 0079dd66  5f                   pop edi
// 0079dd67  5e                   pop esi
// 0079dd68  c21800               ret 0x18
// 0079dd6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079dd6f  8b11                 mov edx, dword ptr [ecx]
// 0079dd71  8b4248               mov eax, dword ptr [edx + 0x48]
// 0079dd74  ffd0                 call eax
// 0079dd76  83e802               sub eax, 2
// 0079dd79  740b                 je 0x79dd86
// 0079dd7b  83e801               sub eax, 1
// 0079dd7e  750a                 jne 0x79dd8a
// 0079dd80  ff442418             inc dword ptr [esp + 0x18]
// 0079dd84  eb04                 jmp 0x79dd8a
// 0079dd86  ff44241c             inc dword ptr [esp + 0x1c]
// 0079dd8a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0079dd8e  85c0                 test eax, eax
// 0079dd90  7403                 je 0x79dd95
// 0079dd92  8b4004               mov eax, dword ptr [eax + 4]
// 0079dd95  6a00                 push 0
// 0079dd97  8d4c2414             lea ecx, [esp + 0x14]
// 0079dd9b  51                   push ecx
// 0079dd9c  6a00                 push 0
// 0079dd9e  6a09                 push 9
// 0079dda0  50                   push eax
// 0079dda1  8bcf                 mov ecx, edi
// 0079dda3  e808a3f7ff           call 0x7180b0
// 0079dda8  5f                   pop edi
// 0079dda9  33c0                 xor eax, eax
// 0079ddab  5e                   pop esi
// 0079ddac  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
