// roc 2009-12 008a2030  unit: CXTPReportInplaceList  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a2030
//
// 008a2030  6aff                 push -1
// 008a2032  68b8229600           push 0x9622b8
// 008a2037  64a100000000         mov eax, dword ptr fs:[0]
// 008a203d  50                   push eax
// 008a203e  51                   push ecx
// 008a203f  56                   push esi
// 008a2040  a10052b600           mov eax, dword ptr [0xb65200]
// 008a2045  33c4                 xor eax, esp
// 008a2047  50                   push eax
// 008a2048  8d44240c             lea eax, [esp + 0xc]
// 008a204c  64a300000000         mov dword ptr fs:[0], eax
// 008a2052  8bf1                 mov esi, ecx
// 008a2054  89742408             mov dword ptr [esp + 8], esi
// 008a2058  8d4e78               lea ecx, [esi + 0x78]
// 008a205b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a2063  ff15c0de9800         call dword ptr [0x98dec0]
// 008a2069  8d4e54               lea ecx, [esi + 0x54]
// 008a206c  e85ff5ffff           call 0x8a15d0
// 008a2071  8bce                 mov ecx, esi
// 008a2073  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008a207b  e884480800           call 0x926904
// 008a2080  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a2084  64890d00000000       mov dword ptr fs:[0], ecx
// 008a208b  59                   pop ecx
// 008a208c  5e                   pop esi
// 008a208d  83c410               add esp, 0x10
// 008a2090  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportInplaceList@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportInplaceControls.cpp