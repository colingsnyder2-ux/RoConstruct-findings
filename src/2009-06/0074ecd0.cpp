// roc 2009-06 0074ecd0  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ecd0
//
// 0074ecd0  8b442404             mov eax, dword ptr [esp + 4]
// 0074ecd4  53                   push ebx
// 0074ecd5  55                   push ebp
// 0074ecd6  56                   push esi
// 0074ecd7  8bd9                 mov ebx, ecx
// 0074ecd9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0074ecdc  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 0074ecdf  57                   push edi
// 0074ece0  50                   push eax
// 0074ece1  e8ba360400           call 0x7923a0
// 0074ece6  8bf0                 mov esi, eax
// 0074ece8  46                   inc esi
// 0074ece9  3bf5                 cmp esi, ebp
// 0074eceb  7d2f                 jge 0x74ed1c
// 0074eced  8d4900               lea ecx, [ecx]
// 0074ecf0  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0074ecf3  85f6                 test esi, esi
// 0074ecf5  7c20                 jl 0x74ed17
// 0074ecf7  3b7030               cmp esi, dword ptr [eax + 0x30]
// 0074ecfa  7d1b                 jge 0x74ed17
// 0074ecfc  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0074ecff  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 0074ed02  85ff                 test edi, edi
// 0074ed04  7411                 je 0x74ed17
// 0074ed06  8bcf                 mov ecx, edi
// 0074ed08  e843e0ffff           call 0x74cd50
// 0074ed0d  85c0                 test eax, eax
// 0074ed0f  7406                 je 0x74ed17
// 0074ed11  837f6800             cmp dword ptr [edi + 0x68], 0
// 0074ed15  7511                 jne 0x74ed28
// 0074ed17  46                   inc esi
// 0074ed18  3bf5                 cmp esi, ebp
// 0074ed1a  7cd4                 jl 0x74ecf0
// 0074ed1c  5f                   pop edi
// 0074ed1d  5e                   pop esi
// 0074ed1e  5d                   pop ebp
// 0074ed1f  b801000000           mov eax, 1
// 0074ed24  5b                   pop ebx
// 0074ed25  c20400               ret 4
// 0074ed28  5f                   pop edi
// 0074ed29  5e                   pop esi
// 0074ed2a  5d                   pop ebp
// 0074ed2b  33c0                 xor eax, eax
// 0074ed2d  5b                   pop ebx
// 0074ed2e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
