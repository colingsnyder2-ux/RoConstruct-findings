// roc 2009-12 0081f890  unit: CXTPReportControl  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081f890
//
// 0081f890  53                   push ebx
// 0081f891  56                   push esi
// 0081f892  57                   push edi
// 0081f893  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0081f897  8b4750               mov eax, dword ptr [edi + 0x50]
// 0081f89a  33db                 xor ebx, ebx
// 0081f89c  8bf1                 mov esi, ecx
// 0081f89e  85c0                 test eax, eax
// 0081f8a0  7419                 je 0x81f8bb
// 0081f8a2  8b5844               mov ebx, dword ptr [eax + 0x44]
// 0081f8a5  85db                 test ebx, ebx
// 0081f8a7  7412                 je 0x81f8bb
// 0081f8a9  837c241400           cmp dword ptr [esp + 0x14], 0
// 0081f8ae  750b                 jne 0x81f8bb
// 0081f8b0  e8cbfbffff           call 0x81f480
// 0081f8b5  5f                   pop edi
// 0081f8b6  5e                   pop esi
// 0081f8b7  5b                   pop ebx
// 0081f8b8  c20800               ret 8
// 0081f8bb  55                   push ebp
// 0081f8bc  8bcf                 mov ecx, edi
// 0081f8be  e80dba0000           call 0x82b2d0
// 0081f8c3  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0081f8c9  8b01                 mov eax, dword ptr [ecx]
// 0081f8cb  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0081f8d1  57                   push edi
// 0081f8d2  ffd2                 call edx
// 0081f8d4  8b686c               mov ebp, dword ptr [eax + 0x6c]
// 0081f8d7  8b06                 mov eax, dword ptr [esi]
// 0081f8d9  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 0081f8df  6a01                 push 1
// 0081f8e1  6a00                 push 0
// 0081f8e3  57                   push edi
// 0081f8e4  8bce                 mov ecx, esi
// 0081f8e6  ffd2                 call edx
// 0081f8e8  8b06                 mov eax, dword ptr [esi]
// 0081f8ea  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0081f8f0  55                   push ebp
// 0081f8f1  53                   push ebx
// 0081f8f2  57                   push edi
// 0081f8f3  8bce                 mov ecx, esi
// 0081f8f5  ffd2                 call edx
// 0081f8f7  8bcf                 mov ecx, edi
// 0081f8f9  e832ba0000           call 0x82b330
// 0081f8fe  5d                   pop ebp
// 0081f8ff  5f                   pop edi
// 0081f900  5e                   pop esi
// 0081f901  5b                   pop ebx
// 0081f902  c20800               ret 8
// copied from an identical function in another client (function ?UpdateRecord@CXTPReportControl@@UAEXPAVCXTPReportRecord@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp