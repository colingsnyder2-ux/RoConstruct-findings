// roc 2007-03 006bc730  unit: seg_006b0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006bc730
//
// 006bc730  53                   push ebx
// 006bc731  55                   push ebp
// 006bc732  56                   push esi
// 006bc733  57                   push edi
// 006bc734  8bf9                 mov edi, ecx
// 006bc736  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 006bc739  33ed                 xor ebp, ebp
// 006bc73b  33f6                 xor esi, esi
// 006bc73d  85db                 test ebx, ebx
// 006bc73f  7e26                 jle 0x6bc767
// 006bc741  85f6                 test esi, esi
// 006bc743  7c1b                 jl 0x6bc760
// 006bc745  3b7730               cmp esi, dword ptr [edi + 0x30]
// 006bc748  7d16                 jge 0x6bc760
// 006bc74a  8b472c               mov eax, dword ptr [edi + 0x2c]
// 006bc74d  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006bc750  85c9                 test ecx, ecx
// 006bc752  740c                 je 0x6bc760
// 006bc754  e827e2f8ff           call 0x64a980
// 006bc759  85c0                 test eax, eax
// 006bc75b  7403                 je 0x6bc760
// 006bc75d  83c501               add ebp, 1
// 006bc760  83c601               add esi, 1
// 006bc763  3bf3                 cmp esi, ebx
// 006bc765  7cda                 jl 0x6bc741
// 006bc767  5f                   pop edi
// 006bc768  5e                   pop esi
// 006bc769  8bc5                 mov eax, ebp
// 006bc76b  5d                   pop ebp
// 006bc76c  5b                   pop ebx
// 006bc76d  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportColumns.cpp (function ?GetVisibleColumnsCount@CXTPReportColumns@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportColumns.cpp
