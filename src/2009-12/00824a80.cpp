// roc 2009-12 00824a80  unit: CXTPReportControl  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824a80
//
// 00824a80  6aff                 push -1
// 00824a82  689ab39500           push 0x95b39a
// 00824a87  64a100000000         mov eax, dword ptr fs:[0]
// 00824a8d  50                   push eax
// 00824a8e  51                   push ecx
// 00824a8f  56                   push esi
// 00824a90  a10052b600           mov eax, dword ptr [0xb65200]
// 00824a95  33c4                 xor eax, esp
// 00824a97  50                   push eax
// 00824a98  8d44240c             lea eax, [esp + 0xc]
// 00824a9c  64a300000000         mov dword ptr fs:[0], eax
// 00824aa2  6a74                 push 0x74
// 00824aa4  e857ecffff           call 0x823700
// 00824aa9  8bf0                 mov esi, eax
// 00824aab  89742408             mov dword ptr [esp + 8], esi
// 00824aaf  33c0                 xor eax, eax
// 00824ab1  89442414             mov dword ptr [esp + 0x14], eax
// 00824ab5  3bf0                 cmp esi, eax
// 00824ab7  740f                 je 0x824ac8
// 00824ab9  8bce                 mov ecx, esi
// 00824abb  e840f80700           call 0x8a4300
// 00824ac0  c706d44d9f00         mov dword ptr [esi], 0x9f4dd4
// 00824ac6  8bc6                 mov eax, esi
// 00824ac8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00824acc  64890d00000000       mov dword ptr fs:[0], ecx
// 00824ad3  59                   pop ecx
// 00824ad4  5e                   pop esi
// 00824ad5  83c410               add esp, 0x10
// 00824ad8  c3                   ret 
// copied from an identical function in another client (function ?CreateHeaderFooterRow@CXTPReportControl@@MAEPAVCXTPReportRow@@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp