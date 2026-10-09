// roc 2007-03 00650900  unit: seg_00650000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00650900
//
// 00650900  53                   push ebx
// 00650901  56                   push esi
// 00650902  8b7134               mov esi, dword ptr [ecx + 0x34]
// 00650905  33c0                 xor eax, eax
// 00650907  33d2                 xor edx, edx
// 00650909  85f6                 test esi, esi
// 0065090b  57                   push edi
// 0065090c  7e1f                 jle 0x65092d
// 0065090e  8bff                 mov edi, edi
// 00650910  85d2                 test edx, edx
// 00650912  7c1d                 jl 0x650931
// 00650914  3bd6                 cmp edx, esi
// 00650916  7d19                 jge 0x650931
// 00650918  8b7930               mov edi, dword ptr [ecx + 0x30]
// 0065091b  8bdf                 mov ebx, edi
// 0065091d  8b5cd304             mov ebx, dword ptr [ebx + edx*8 + 4]
// 00650921  2b1cd7               sub ebx, dword ptr [edi + edx*8]
// 00650924  83c201               add edx, 1
// 00650927  03c3                 add eax, ebx
// 00650929  3bd6                 cmp edx, esi
// 0065092b  7ce3                 jl 0x650910
// 0065092d  5f                   pop edi
// 0065092e  5e                   pop esi
// 0065092f  5b                   pop ebx
// 00650930  c3                   ret 
// 00650931  e978dafcff           jmp 0x61e3ae
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportRows.cpp (function ?GetCount@CXTPReportSelectedRows@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportRows.cpp
