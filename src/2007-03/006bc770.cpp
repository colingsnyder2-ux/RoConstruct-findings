// roc 2007-03 006bc770  unit: seg_006b0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc770
//
// 006bc770  53                   push ebx
// 006bc771  55                   push ebp
// 006bc772  56                   push esi
// 006bc773  57                   push edi
// 006bc774  8bf9                 mov edi, ecx
// 006bc776  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc779  33f6                 xor esi, esi
// 006bc77b  85c0                 test eax, eax
// 006bc77d  7e30                 jle 0x6bc7af
// 006bc77f  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006bc783  85f6                 test esi, esi
// 006bc785  7c11                 jl 0x6bc798
// 006bc787  3bf0                 cmp esi, eax
// 006bc789  7d0d                 jge 0x6bc798
// 006bc78b  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006bc78e  7d28                 jge 0x6bc7b8
// 006bc790  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006bc793  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 006bc796  eb02                 jmp 0x6bc79a
// 006bc798  33db                 xor ebx, ebx
// 006bc79a  8bcb                 mov ecx, ebx
// 006bc79c  e83f88f6ff           call 0x624fe0
// 006bc7a1  3bc5                 cmp eax, ebp
// 006bc7a3  7418                 je 0x6bc7bd
// 006bc7a5  8b4730               mov eax, dword ptr [edi + 0x30]
// 006bc7a8  83c601               add esi, 1
// 006bc7ab  3bf0                 cmp esi, eax
// 006bc7ad  7cd4                 jl 0x6bc783
// 006bc7af  5f                   pop edi
// 006bc7b0  5e                   pop esi
// 006bc7b1  5d                   pop ebp
// 006bc7b2  33c0                 xor eax, eax
// 006bc7b4  5b                   pop ebx
// 006bc7b5  c20400               ret 4
// 006bc7b8  e8f11bf6ff           call 0x61e3ae
// 006bc7bd  5f                   pop edi
// 006bc7be  5e                   pop esi
// 006bc7bf  5d                   pop ebp
// 006bc7c0  8bc3                 mov eax, ebx
// 006bc7c2  5b                   pop ebx
// 006bc7c3  c20400               ret 4
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?Find@CXTPReportColumns@@QBEPAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
