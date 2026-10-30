// roc 2007-03 0064ca80  unit: seg_00640000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0064ca80
//
// 0064ca80  8b442408             mov eax, dword ptr [esp + 8]
// 0064ca84  83f801               cmp eax, 1
// 0064ca87  53                   push ebx
// 0064ca88  55                   push ebp
// 0064ca89  56                   push esi
// 0064ca8a  57                   push edi
// 0064ca8b  8be9                 mov ebp, ecx
// 0064ca8d  754b                 jne 0x64cada
// 0064ca8f  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064ca92  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064ca96  8b5830               mov ebx, dword ptr [eax + 0x30]
// 0064ca99  83c601               add esi, 1
// 0064ca9c  3bf3                 cmp esi, ebx
// 0064ca9e  7d6d                 jge 0x64cb0d
// 0064caa0  85f6                 test esi, esi
// 0064caa2  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064caa5  7c1a                 jl 0x64cac1
// 0064caa7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0064caaa  7d15                 jge 0x64cac1
// 0064caac  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0064caaf  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0064cab2  85ff                 test edi, edi
// 0064cab4  740b                 je 0x64cac1
// 0064cab6  8bcf                 mov ecx, edi
// 0064cab8  e8c3deffff           call 0x64a980
// 0064cabd  85c0                 test eax, eax
// 0064cabf  7510                 jne 0x64cad1
// 0064cac1  83c601               add esi, 1
// 0064cac4  3bf3                 cmp esi, ebx
// 0064cac6  7cd8                 jl 0x64caa0
// 0064cac8  5f                   pop edi
// 0064cac9  5e                   pop esi
// 0064caca  5d                   pop ebp
// 0064cacb  33c0                 xor eax, eax
// 0064cacd  5b                   pop ebx
// 0064cace  c20800               ret 8
// 0064cad1  8bc7                 mov eax, edi
// 0064cad3  5f                   pop edi
// 0064cad4  5e                   pop esi
// 0064cad5  5d                   pop ebp
// 0064cad6  5b                   pop ebx
// 0064cad7  c20800               ret 8
// 0064cada  83f8ff               cmp eax, -1
// 0064cadd  752e                 jne 0x64cb0d
// 0064cadf  8b742414             mov esi, dword ptr [esp + 0x14]
// 0064cae3  03f0                 add esi, eax
// 0064cae5  7826                 js 0x64cb0d
// 0064cae7  85f6                 test esi, esi
// 0064cae9  8b4520               mov eax, dword ptr [ebp + 0x20]
// 0064caec  7c1a                 jl 0x64cb08
// 0064caee  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0064caf1  7d15                 jge 0x64cb08
// 0064caf3  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0064caf6  8b3cb2               mov edi, dword ptr [edx + esi*4]
// 0064caf9  85ff                 test edi, edi
// 0064cafb  740b                 je 0x64cb08
// 0064cafd  8bcf                 mov ecx, edi
// 0064caff  e87cdeffff           call 0x64a980
// 0064cb04  85c0                 test eax, eax
// 0064cb06  75c9                 jne 0x64cad1
// 0064cb08  83ee01               sub esi, 1
// 0064cb0b  79da                 jns 0x64cae7
// 0064cb0d  5f                   pop edi
// 0064cb0e  5e                   pop esi
// 0064cb0f  5d                   pop ebp
// 0064cb10  33c0                 xor eax, eax
// 0064cb12  5b                   pop ebx
// 0064cb13  c20800               ret 8
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportHeader.cpp (function ?GetNextVisibleColumn@CXTPReportHeader@@UAEPAVCXTPReportColumn@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportHeader.cpp
