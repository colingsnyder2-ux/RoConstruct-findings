// roc 2008-06 006ca5a0  unit: CXTPReportControl  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ca5a0
//
// 006ca5a0  55                   push ebp
// 006ca5a1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006ca5a5  8b4500               mov eax, dword ptr [ebp]
// 006ca5a8  8b5060               mov edx, dword ptr [eax + 0x60]
// 006ca5ab  57                   push edi
// 006ca5ac  8bf9                 mov edi, ecx
// 006ca5ae  8bcd                 mov ecx, ebp
// 006ca5b0  ffd2                 call edx
// 006ca5b2  85c0                 test eax, eax
// 006ca5b4  7505                 jne 0x6ca5bb
// 006ca5b6  5f                   pop edi
// 006ca5b7  5d                   pop ebp
// 006ca5b8  c20c00               ret 0xc
// 006ca5bb  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 006ca5c1  8b01                 mov eax, dword ptr [ecx]
// 006ca5c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca5c7  8b407c               mov eax, dword ptr [eax + 0x7c]
// 006ca5ca  53                   push ebx
// 006ca5cb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006ca5cf  56                   push esi
// 006ca5d0  53                   push ebx
// 006ca5d1  52                   push edx
// 006ca5d2  ffd0                 call eax
// 006ca5d4  8bf0                 mov esi, eax
// 006ca5d6  85f6                 test esi, esi
// 006ca5d8  7448                 je 0x6ca622
// 006ca5da  8d9b00000000         lea ebx, [ebx]
// 006ca5e0  8b5500               mov edx, dword ptr [ebp]
// 006ca5e3  8b4260               mov eax, dword ptr [edx + 0x60]
// 006ca5e6  56                   push esi
// 006ca5e7  8bcd                 mov ecx, ebp
// 006ca5e9  ffd0                 call eax
// 006ca5eb  8bc8                 mov ecx, eax
// 006ca5ed  e84ed90000           call 0x6d7f40
// 006ca5f2  85c0                 test eax, eax
// 006ca5f4  7410                 je 0x6ca606
// 006ca5f6  8b10                 mov edx, dword ptr [eax]
// 006ca5f8  8bc8                 mov ecx, eax
// 006ca5fa  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 006ca600  ffd0                 call eax
// 006ca602  85c0                 test eax, eax
// 006ca604  7525                 jne 0x6ca62b
// 006ca606  8bce                 mov ecx, esi
// 006ca608  e833a10000           call 0x6d4740
// 006ca60d  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 006ca613  8b11                 mov edx, dword ptr [ecx]
// 006ca615  53                   push ebx
// 006ca616  50                   push eax
// 006ca617  8b427c               mov eax, dword ptr [edx + 0x7c]
// 006ca61a  ffd0                 call eax
// 006ca61c  8bf0                 mov esi, eax
// 006ca61e  85f6                 test esi, esi
// 006ca620  75be                 jne 0x6ca5e0
// 006ca622  5e                   pop esi
// 006ca623  5b                   pop ebx
// 006ca624  5f                   pop edi
// 006ca625  33c0                 xor eax, eax
// 006ca627  5d                   pop ebp
// 006ca628  c20c00               ret 0xc
// 006ca62b  8bc6                 mov eax, esi
// 006ca62d  5e                   pop esi
// 006ca62e  5b                   pop ebx
// 006ca62f  5f                   pop edi
// 006ca630  5d                   pop ebp
// 006ca631  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?GetNextFocusableColumn@CXTPReportControl@@MAEPAVCXTPReportColumn@@PAVCXTPReportRow@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
