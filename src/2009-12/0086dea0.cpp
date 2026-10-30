// roc 2009-12 0086dea0  unit: CXTPReportColumnOrder  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086dea0
//
// 0086dea0  6aff                 push -1
// 0086dea2  68b7f99500           push 0x95f9b7
// 0086dea7  64a100000000         mov eax, dword ptr fs:[0]
// 0086dead  50                   push eax
// 0086deae  51                   push ecx
// 0086deaf  56                   push esi
// 0086deb0  a10052b600           mov eax, dword ptr [0xb65200]
// 0086deb5  33c4                 xor eax, esp
// 0086deb7  50                   push eax
// 0086deb8  8d44240c             lea eax, [esp + 0xc]
// 0086debc  64a300000000         mov dword ptr fs:[0], eax
// 0086dec2  8bf1                 mov esi, ecx
// 0086dec4  89742408             mov dword ptr [esp + 8], esi
// 0086dec8  e875850b00           call 0x926442
// 0086decd  8d4e28               lea ecx, [esi + 0x28]
// 0086ded0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0086ded8  c7063c05a000         mov dword ptr [esi], 0xa0053c
// 0086dede  e88df7ffff           call 0x86d670
// 0086dee3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0086dee7  6a38                 push 0x38
// 0086dee9  c644241801           mov byte ptr [esp + 0x18], 1
// 0086deee  89463c               mov dword ptr [esi + 0x3c], eax
// 0086def1  e86a59f8ff           call 0x7f3860
// 0086def6  83c404               add esp, 4
// 0086def9  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086defd  c644241402           mov byte ptr [esp + 0x14], 2
// 0086df02  85c0                 test eax, eax
// 0086df04  740a                 je 0x86df10
// 0086df06  56                   push esi
// 0086df07  8bc8                 mov ecx, eax
// 0086df09  e802fcffff           call 0x86db10
// 0086df0e  eb02                 jmp 0x86df12
// 0086df10  33c0                 xor eax, eax
// 0086df12  6a38                 push 0x38
// 0086df14  c644241801           mov byte ptr [esp + 0x18], 1
// 0086df19  894620               mov dword ptr [esi + 0x20], eax
// 0086df1c  e83f59f8ff           call 0x7f3860
// 0086df21  83c404               add esp, 4
// 0086df24  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086df28  c644241403           mov byte ptr [esp + 0x14], 3
// 0086df2d  85c0                 test eax, eax
// 0086df2f  740a                 je 0x86df3b
// 0086df31  56                   push esi
// 0086df32  8bc8                 mov ecx, eax
// 0086df34  e8d7fbffff           call 0x86db10
// 0086df39  eb02                 jmp 0x86df3d
// 0086df3b  33c0                 xor eax, eax
// 0086df3d  894624               mov dword ptr [esi + 0x24], eax
// 0086df40  c7464000000000       mov dword ptr [esi + 0x40], 0
// 0086df47  8bc6                 mov eax, esi
// 0086df49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086df4d  64890d00000000       mov dword ptr fs:[0], ecx
// 0086df54  59                   pop ecx
// 0086df55  5e                   pop esi
// 0086df56  83c410               add esp, 0x10
// 0086df59  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPReportColumns@@QAE@PAVCXTPReportControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp