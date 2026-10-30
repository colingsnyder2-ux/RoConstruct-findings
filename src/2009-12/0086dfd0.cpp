// roc 2009-12 0086dfd0  unit: CXTPReportColumnOrder  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086dfd0
//
// 0086dfd0  6aff                 push -1
// 0086dfd2  68f3f99500           push 0x95f9f3
// 0086dfd7  64a100000000         mov eax, dword ptr fs:[0]
// 0086dfdd  50                   push eax
// 0086dfde  51                   push ecx
// 0086dfdf  56                   push esi
// 0086dfe0  a10052b600           mov eax, dword ptr [0xb65200]
// 0086dfe5  33c4                 xor eax, esp
// 0086dfe7  50                   push eax
// 0086dfe8  8d44240c             lea eax, [esp + 0xc]
// 0086dfec  64a300000000         mov dword ptr fs:[0], eax
// 0086dff2  8bf1                 mov esi, ecx
// 0086dff4  89742408             mov dword ptr [esp + 8], esi
// 0086dff8  c7063c05a000         mov dword ptr [esi], 0xa0053c
// 0086dffe  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0086e006  e855ffffff           call 0x86df60
// 0086e00b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086e00e  85c9                 test ecx, ecx
// 0086e010  7405                 je 0x86e017
// 0086e012  e8c55df8ff           call 0x7f3ddc
// 0086e017  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0086e01a  85c9                 test ecx, ecx
// 0086e01c  7405                 je 0x86e023
// 0086e01e  e8b95df8ff           call 0x7f3ddc
// 0086e023  8d4e28               lea ecx, [esi + 0x28]
// 0086e026  c644241400           mov byte ptr [esp + 0x14], 0
// 0086e02b  e860f6ffff           call 0x86d690
// 0086e030  8bce                 mov ecx, esi
// 0086e032  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0086e03a  e8a363f8ff           call 0x7f43e2
// 0086e03f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086e043  64890d00000000       mov dword ptr fs:[0], ecx
// 0086e04a  59                   pop ecx
// 0086e04b  5e                   pop esi
// 0086e04c  83c410               add esp, 0x10
// 0086e04f  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportColumns@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportColumns.cpp