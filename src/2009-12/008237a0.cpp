// roc 2009-12 008237a0  unit: VCXTPReportRow::?$CXTPInternalCollectionT  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008237a0
//
// 008237a0  8b442404             mov eax, dword ptr [esp + 4]
// 008237a4  85c0                 test eax, eax
// 008237a6  7c2b                 jl 0x8237d3
// 008237a8  3b4108               cmp eax, dword ptr [ecx + 8]
// 008237ab  7d26                 jge 0x8237d3
// 008237ad  837c240800           cmp dword ptr [esp + 8], 0
// 008237b2  8b4904               mov ecx, dword ptr [ecx + 4]
// 008237b5  56                   push esi
// 008237b6  8d34c1               lea esi, [ecx + eax*8]
// 008237b9  7411                 je 0x8237cc
// 008237bb  8b4604               mov eax, dword ptr [esi + 4]
// 008237be  85c0                 test eax, eax
// 008237c0  740a                 je 0x8237cc
// 008237c2  83c004               add eax, 4
// 008237c5  50                   push eax
// 008237c6  ff150cb29800         call dword ptr [0x98b20c]
// 008237cc  8b4604               mov eax, dword ptr [esi + 4]
// 008237cf  5e                   pop esi
// 008237d0  c20800               ret 8
// 008237d3  e83403fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?GetAt@?$CXTPInternalCollectionT@VCXTPSyntaxEditLexVariant@XTPSyntaxEditLexAnalyser@@@@UAEPAVCXTPSyntaxEditLexVariant@XTPSyntaxEditLexAnalyser@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/SyntaxEdit/XTPSyntaxEditLexClass.cpp