// roc 2009-12 0082e3b0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082e3b0
//
// 0082e3b0  83792800             cmp dword ptr [ecx + 0x28], 0
// 0082e3b4  56                   push esi
// 0082e3b5  8d7120               lea esi, [ecx + 0x20]
// 0082e3b8  753a                 jne 0x82e3f4
// 0082e3ba  8b442408             mov eax, dword ptr [esp + 8]
// 0082e3be  50                   push eax
// 0082e3bf  6a01                 push 1
// 0082e3c1  8bce                 mov ecx, esi
// 0082e3c3  e8d86f0200           call 0x8553a0
// 0082e3c8  8b4e08               mov ecx, dword ptr [esi + 8]
// 0082e3cb  6a00                 push 0
// 0082e3cd  51                   push ecx
// 0082e3ce  8bce                 mov ecx, esi
// 0082e3d0  e89bc80300           call 0x86ac70
// 0082e3d5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0082e3d9  33d2                 xor edx, edx
// 0082e3db  85c0                 test eax, eax
// 0082e3dd  0f9cc2               setl dl
// 0082e3e0  8bce                 mov ecx, esi
// 0082e3e2  4a                   dec edx
// 0082e3e3  23d0                 and edx, eax
// 0082e3e5  52                   push edx
// 0082e3e6  6a01                 push 1
// 0082e3e8  e8b36f0200           call 0x8553a0
// 0082e3ed  c7460800000000       mov dword ptr [esi + 8], 0
// 0082e3f4  5e                   pop esi
// 0082e3f5  c20800               ret 8
// copied from an identical function in another client (function ?ReserveSize@CXTPReportRows@@UAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp