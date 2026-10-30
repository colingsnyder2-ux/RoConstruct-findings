// from server: 100% by auto
// roc 2008-06 006cb700  unit: CXTPReportControl  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb700
//
// 006cb700  57                   push edi
// 006cb701  8bf9                 mov edi, ecx
// 006cb703  837f0400             cmp dword ptr [edi + 4], 0
// 006cb707  c7070c3a8500         mov dword ptr [edi], 0x853a0c
// 006cb70d  742a                 je 0x6cb739
// 006cb70f  56                   push esi
// 006cb710  33f6                 xor esi, esi
// 006cb712  397708               cmp dword ptr [edi + 8], esi
// 006cb715  7e15                 jle 0x6cb72c
// 006cb717  8b4704               mov eax, dword ptr [edi + 4]
// 006cb71a  8b14f0               mov edx, dword ptr [eax + esi*8]
// 006cb71d  8d0cf0               lea ecx, [eax + esi*8]
// 006cb720  8b02                 mov eax, dword ptr [edx]
// 006cb722  6a00                 push 0
// 006cb724  ffd0                 call eax
// 006cb726  46                   inc esi
// 006cb727  3b7708               cmp esi, dword ptr [edi + 8]
// 006cb72a  7ceb                 jl 0x6cb717
// 006cb72c  8b4f04               mov ecx, dword ptr [edi + 4]
// 006cb72f  51                   push ecx
// 006cb730  e81552fdff           call 0x6a094a
// 006cb735  83c404               add esp, 4
// 006cb738  5e                   pop esi
// 006cb739  5f                   pop edi
// 006cb73a  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayView.cpp (function ??1?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarDayViewDay@@@@AAV1@@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayView.cpp
