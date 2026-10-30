// roc 2009-12 008a5e90  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5e90
//
// 008a5e90  6aff                 push -1
// 008a5e92  681aac9500           push 0x95ac1a
// 008a5e97  64a100000000         mov eax, dword ptr fs:[0]
// 008a5e9d  50                   push eax
// 008a5e9e  51                   push ecx
// 008a5e9f  56                   push esi
// 008a5ea0  a10052b600           mov eax, dword ptr [0xb65200]
// 008a5ea5  33c4                 xor eax, esp
// 008a5ea7  50                   push eax
// 008a5ea8  8d44240c             lea eax, [esp + 0xc]
// 008a5eac  64a300000000         mov dword ptr fs:[0], eax
// 008a5eb2  8bf1                 mov esi, ecx
// 008a5eb4  837e6000             cmp dword ptr [esi + 0x60], 0
// 008a5eb8  7525                 jne 0x8a5edf
// 008a5eba  6a3c                 push 0x3c
// 008a5ebc  e8df57f7ff           call 0x81b6a0
// 008a5ec1  89442408             mov dword ptr [esp + 8], eax
// 008a5ec5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a5ecd  85c0                 test eax, eax
// 008a5ecf  7409                 je 0x8a5eda
// 008a5ed1  8bc8                 mov ecx, eax
// 008a5ed3  e8988ef8ff           call 0x82ed70
// 008a5ed8  eb02                 jmp 0x8a5edc
// 008a5eda  33c0                 xor eax, eax
// 008a5edc  894660               mov dword ptr [esi + 0x60], eax
// 008a5edf  8b4660               mov eax, dword ptr [esi + 0x60]
// 008a5ee2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a5ee6  64890d00000000       mov dword ptr fs:[0], ecx
// 008a5eed  59                   pop ecx
// 008a5eee  5e                   pop esi
// 008a5eef  83c410               add esp, 0x10
// 008a5ef2  c3                   ret 
// copied from an identical function in another client (function ?GetChilds@CXTPReportRow@@UAEPAVCXTPReportRows@@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRow.cpp