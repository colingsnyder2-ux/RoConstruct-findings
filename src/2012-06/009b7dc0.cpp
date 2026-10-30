// roc 2012-06 009b7dc0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b7dc0
//
// 009b7dc0  56                   push esi
// 009b7dc1  57                   push edi
// 009b7dc2  8bf9                 mov edi, ecx
// 009b7dc4  33f6                 xor esi, esi
// 009b7dc6  e895380700           call 0xa2b660
// 009b7dcb  85c0                 test eax, eax
// 009b7dcd  7e21                 jle 0x9b7df0
// 009b7dcf  90                   nop 
// 009b7dd0  85f6                 test esi, esi
// 009b7dd2  7c2b                 jl 0x9b7dff
// 009b7dd4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 009b7dd7  7d26                 jge 0x9b7dff
// 009b7dd9  8b4724               mov eax, dword ptr [edi + 0x24]
// 009b7ddc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 009b7ddf  e8a6a8fcff           call 0x98268a
// 009b7de4  8bcf                 mov ecx, edi
// 009b7de6  46                   inc esi
// 009b7de7  e874380700           call 0xa2b660
// 009b7dec  3bf0                 cmp esi, eax
// 009b7dee  7ce0                 jl 0x9b7dd0
// 009b7df0  6aff                 push -1
// 009b7df2  6a00                 push 0
// 009b7df4  8d4f20               lea ecx, [edi + 0x20]
// 009b7df7  e86404feff           call 0x998260
// 009b7dfc  5f                   pop edi
// 009b7dfd  5e                   pop esi
// 009b7dfe  c3                   ret 
// 009b7dff  e8bca5fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecordItemConstraints@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp