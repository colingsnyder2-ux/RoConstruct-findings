// roc 2010-06 007ddb10  unit: CXTPReportHeader  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ddb10
//
// 007ddb10  8b442404             mov eax, dword ptr [esp + 4]
// 007ddb14  53                   push ebx
// 007ddb15  55                   push ebp
// 007ddb16  56                   push esi
// 007ddb17  8bd9                 mov ebx, ecx
// 007ddb19  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007ddb1c  8b6930               mov ebp, dword ptr [ecx + 0x30]
// 007ddb1f  57                   push edi
// 007ddb20  50                   push eax
// 007ddb21  e82a260400           call 0x820150
// 007ddb26  8bf0                 mov esi, eax
// 007ddb28  46                   inc esi
// 007ddb29  3bf5                 cmp esi, ebp
// 007ddb2b  7d2f                 jge 0x7ddb5c
// 007ddb2d  8d4900               lea ecx, [ecx]
// 007ddb30  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007ddb33  85f6                 test esi, esi
// 007ddb35  7c20                 jl 0x7ddb57
// 007ddb37  3b7030               cmp esi, dword ptr [eax + 0x30]
// 007ddb3a  7d1b                 jge 0x7ddb57
// 007ddb3c  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007ddb3f  8b3cb1               mov edi, dword ptr [ecx + esi*4]
// 007ddb42  85ff                 test edi, edi
// 007ddb44  7411                 je 0x7ddb57
// 007ddb46  8bcf                 mov ecx, edi
// 007ddb48  e853e0ffff           call 0x7dbba0
// 007ddb4d  85c0                 test eax, eax
// 007ddb4f  7406                 je 0x7ddb57
// 007ddb51  837f6800             cmp dword ptr [edi + 0x68], 0
// 007ddb55  7511                 jne 0x7ddb68
// 007ddb57  46                   inc esi
// 007ddb58  3bf5                 cmp esi, ebp
// 007ddb5a  7cd4                 jl 0x7ddb30
// 007ddb5c  5f                   pop edi
// 007ddb5d  5e                   pop esi
// 007ddb5e  5d                   pop ebp
// 007ddb5f  b801000000           mov eax, 1
// 007ddb64  5b                   pop ebx
// 007ddb65  c20400               ret 4
// 007ddb68  5f                   pop edi
// 007ddb69  5e                   pop esi
// 007ddb6a  5d                   pop ebp
// 007ddb6b  33c0                 xor eax, eax
// 007ddb6d  5b                   pop ebx
// 007ddb6e  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?IsLastResizebleColumn@CXTPReportHeader@@QBEHPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
