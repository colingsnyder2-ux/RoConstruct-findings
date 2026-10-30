// roc 2009-12 0081b2b0  unit: PAVCXTPReportInplaceButton::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b2b0
//
// 0081b2b0  56                   push esi
// 0081b2b1  57                   push edi
// 0081b2b2  8bf9                 mov edi, ecx
// 0081b2b4  33f6                 xor esi, esi
// 0081b2b6  e8c5290300           call 0x84dc80
// 0081b2bb  85c0                 test eax, eax
// 0081b2bd  7e21                 jle 0x81b2e0
// 0081b2bf  90                   nop 
// 0081b2c0  85f6                 test esi, esi
// 0081b2c2  7c2b                 jl 0x81b2ef
// 0081b2c4  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0081b2c7  7d26                 jge 0x81b2ef
// 0081b2c9  8b4724               mov eax, dword ptr [edi + 0x24]
// 0081b2cc  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0081b2cf  e8088bfdff           call 0x7f3ddc
// 0081b2d4  8bcf                 mov ecx, edi
// 0081b2d6  46                   inc esi
// 0081b2d7  e8a4290300           call 0x84dc80
// 0081b2dc  3bf0                 cmp esi, eax
// 0081b2de  7ce0                 jl 0x81b2c0
// 0081b2e0  6aff                 push -1
// 0081b2e2  6a00                 push 0
// 0081b2e4  8d4f20               lea ecx, [edi + 0x20]
// 0081b2e7  e8b4a00300           call 0x8553a0
// 0081b2ec  5f                   pop edi
// 0081b2ed  5e                   pop esi
// 0081b2ee  c3                   ret 
// 0081b2ef  e81888fdff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecordItemConstraints@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp