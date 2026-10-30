// roc 2009-06 00740490  unit: PAVCXTPReportInplaceButton::?$CArray  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00740490
//
// 00740490  56                   push esi
// 00740491  57                   push edi
// 00740492  8bf9                 mov edi, ecx
// 00740494  33f6                 xor esi, esi
// 00740496  397734               cmp dword ptr [edi + 0x34], esi
// 00740499  7e1f                 jle 0x7404ba
// 0074049b  eb03                 jmp 0x7404a0
// 0074049d  8d4900               lea ecx, [ecx]
// 007404a0  85f6                 test esi, esi
// 007404a2  7c25                 jl 0x7404c9
// 007404a4  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007404a7  7d20                 jge 0x7404c9
// 007404a9  8b4730               mov eax, dword ptr [edi + 0x30]
// 007404ac  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007404af  e8f48afdff           call 0x718fa8
// 007404b4  46                   inc esi
// 007404b5  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007404b8  7ce6                 jl 0x7404a0
// 007404ba  6aff                 push -1
// 007404bc  6a00                 push 0
// 007404be  8d4f2c               lea ecx, [edi + 0x2c]
// 007404c1  e84a200100           call 0x752510
// 007404c6  5f                   pop edi
// 007404c7  5e                   pop esi
// 007404c8  c3                   ret 
// 007404c9  e81688fdff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveButtons@CXTPReportRecordItemEditOptions@@QAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp