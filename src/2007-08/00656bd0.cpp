// roc 2007-08 00656bd0  unit: CXTPReportControl  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00656bd0
//
// 00656bd0  57                   push edi
// 00656bd1  8bf9                 mov edi, ecx
// 00656bd3  837f0400             cmp dword ptr [edi + 4], 0
// 00656bd7  c707cc837c00         mov dword ptr [edi], 0x7c83cc
// 00656bdd  742c                 je 0x656c0b
// 00656bdf  56                   push esi
// 00656be0  33f6                 xor esi, esi
// 00656be2  397708               cmp dword ptr [edi + 8], esi
// 00656be5  7e17                 jle 0x656bfe
// 00656be7  8b4704               mov eax, dword ptr [edi + 4]
// 00656bea  8b14f0               mov edx, dword ptr [eax + esi*8]
// 00656bed  8d0cf0               lea ecx, [eax + esi*8]
// 00656bf0  8b02                 mov eax, dword ptr [edx]
// 00656bf2  6a00                 push 0
// 00656bf4  ffd0                 call eax
// 00656bf6  83c601               add esi, 1
// 00656bf9  3b7708               cmp esi, dword ptr [edi + 8]
// 00656bfc  7ce9                 jl 0x656be7
// 00656bfe  8b4f04               mov ecx, dword ptr [edi + 4]
// 00656c01  51                   push ecx
// 00656c02  e81f93fdff           call 0x62ff26
// 00656c07  83c404               add esp, 4
// 00656c0a  5e                   pop esi
// 00656c0b  5f                   pop edi
// 00656c0c  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayView.cpp (function ??1?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarDayViewDay@@@@AAV1@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayView.cpp
