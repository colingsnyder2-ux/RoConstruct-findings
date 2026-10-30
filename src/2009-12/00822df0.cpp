// roc 2009-12 00822df0  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00822df0
//
// 00822df0  56                   push esi
// 00822df1  8bf1                 mov esi, ecx
// 00822df3  83465cff             add dword ptr [esi + 0x5c], -1
// 00822df7  c7465401000000       mov dword ptr [esi + 0x54], 1
// 00822dfe  7523                 jne 0x822e23
// 00822e00  837e5800             cmp dword ptr [esi + 0x58], 0
// 00822e04  7415                 je 0x822e1b
// 00822e06  8b06                 mov eax, dword ptr [esi]
// 00822e08  8b90d4010000         mov edx, dword ptr [eax + 0x1d4]
// 00822e0e  6a00                 push 0
// 00822e10  6a01                 push 1
// 00822e12  c7465800000000       mov dword ptr [esi + 0x58], 0
// 00822e19  ffd2                 call edx
// 00822e1b  8bce                 mov ecx, esi
// 00822e1d  5e                   pop esi
// 00822e1e  e95dc6ffff           jmp 0x81f480
// 00822e23  5e                   pop esi
// 00822e24  c3                   ret 
// copied from an identical function in another client (function ?EndUpdate@CXTPReportControl@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp