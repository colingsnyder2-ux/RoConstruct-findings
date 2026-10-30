// roc 2009-12 0081da60  unit: CXTPReportControl  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081da60
//
// 0081da60  55                   push ebp
// 0081da61  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0081da65  8b4500               mov eax, dword ptr [ebp]
// 0081da68  8b5060               mov edx, dword ptr [eax + 0x60]
// 0081da6b  57                   push edi
// 0081da6c  8bf9                 mov edi, ecx
// 0081da6e  8bcd                 mov ecx, ebp
// 0081da70  ffd2                 call edx
// 0081da72  85c0                 test eax, eax
// 0081da74  7505                 jne 0x81da7b
// 0081da76  5f                   pop edi
// 0081da77  5d                   pop ebp
// 0081da78  c20c00               ret 0xc
// 0081da7b  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 0081da81  8b01                 mov eax, dword ptr [ecx]
// 0081da83  8b542410             mov edx, dword ptr [esp + 0x10]
// 0081da87  8b407c               mov eax, dword ptr [eax + 0x7c]
// 0081da8a  53                   push ebx
// 0081da8b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0081da8f  56                   push esi
// 0081da90  53                   push ebx
// 0081da91  52                   push edx
// 0081da92  ffd0                 call eax
// 0081da94  8bf0                 mov esi, eax
// 0081da96  85f6                 test esi, esi
// 0081da98  7448                 je 0x81dae2
// 0081da9a  8d9b00000000         lea ebx, [ebx]
// 0081daa0  8b5500               mov edx, dword ptr [ebp]
// 0081daa3  8b4260               mov eax, dword ptr [edx + 0x60]
// 0081daa6  56                   push esi
// 0081daa7  8bcd                 mov ecx, ebp
// 0081daa9  ffd0                 call eax
// 0081daab  8bc8                 mov ecx, eax
// 0081daad  e88ed20000           call 0x82ad40
// 0081dab2  85c0                 test eax, eax
// 0081dab4  7410                 je 0x81dac6
// 0081dab6  8b10                 mov edx, dword ptr [eax]
// 0081dab8  8bc8                 mov ecx, eax
// 0081daba  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0081dac0  ffd0                 call eax
// 0081dac2  85c0                 test eax, eax
// 0081dac4  7525                 jne 0x81daeb
// 0081dac6  8bce                 mov ecx, esi
// 0081dac8  e8b3a10000           call 0x827c80
// 0081dacd  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 0081dad3  8b11                 mov edx, dword ptr [ecx]
// 0081dad5  53                   push ebx
// 0081dad6  50                   push eax
// 0081dad7  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0081dada  ffd0                 call eax
// 0081dadc  8bf0                 mov esi, eax
// 0081dade  85f6                 test esi, esi
// 0081dae0  75be                 jne 0x81daa0
// 0081dae2  5e                   pop esi
// 0081dae3  5b                   pop ebx
// 0081dae4  5f                   pop edi
// 0081dae5  33c0                 xor eax, eax
// 0081dae7  5d                   pop ebp
// 0081dae8  c20c00               ret 0xc
// 0081daeb  8bc6                 mov eax, esi
// 0081daed  5e                   pop esi
// 0081daee  5b                   pop ebx
// 0081daef  5f                   pop edi
// 0081daf0  5d                   pop ebp
// 0081daf1  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetNextFocusableColumn@CXTPReportControl@@MAEPAVCXTPReportColumn@@PAVCXTPReportRow@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp