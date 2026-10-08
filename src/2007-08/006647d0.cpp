// from server: 100% by auto
// roc 2007-08 006647d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006647d0
//
// 006647d0  53                   push ebx
// 006647d1  56                   push esi
// 006647d2  8b7134               mov esi, dword ptr [ecx + 0x34]
// 006647d5  33c0                 xor eax, eax
// 006647d7  33d2                 xor edx, edx
// 006647d9  85f6                 test esi, esi
// 006647db  57                   push edi
// 006647dc  7e1f                 jle 0x6647fd
// 006647de  8bff                 mov edi, edi
// 006647e0  85d2                 test edx, edx
// 006647e2  7c1d                 jl 0x664801
// 006647e4  3bd6                 cmp edx, esi
// 006647e6  7d19                 jge 0x664801
// 006647e8  8b7930               mov edi, dword ptr [ecx + 0x30]
// 006647eb  8bdf                 mov ebx, edi
// 006647ed  8b5cd304             mov ebx, dword ptr [ebx + edx*8 + 4]
// 006647f1  2b1cd7               sub ebx, dword ptr [edi + edx*8]
// 006647f4  83c201               add edx, 1
// 006647f7  03c3                 add eax, ebx
// 006647f9  3bd6                 cmp edx, esi
// 006647fb  7ce3                 jl 0x6647e0
// 006647fd  5f                   pop edi
// 006647fe  5e                   pop esi
// 006647ff  5b                   pop ebx
// 00664800  c3                   ret 
// 00664801  e91ab7fcff           jmp 0x62ff20
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?GetCount@CXTPReportSelectedRows@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp
