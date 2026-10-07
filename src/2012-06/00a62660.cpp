// roc 2012-06 00a62660  unit: CXTColorBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62660
//
// 00a62660  51                   push ecx
// 00a62661  dd442410             fld qword ptr [esp + 0x10]
// 00a62665  83ec18               sub esp, 0x18
// 00a62668  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a6266c  8d442418             lea eax, [esp + 0x18]
// 00a62670  dd442430             fld qword ptr [esp + 0x30]
// 00a62674  dd5c2408             fstp qword ptr [esp + 8]
// 00a62678  dd442420             fld qword ptr [esp + 0x20]
// 00a6267c  dd1c24               fstp qword ptr [esp]
// 00a6267f  50                   push eax
// 00a62680  e83b660100           call 0xa78cc0
// 00a62685  8b00                 mov eax, dword ptr [eax]
// 00a62687  83c420               add esp, 0x20
// 00a6268a  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTColorPageCustom.cpp (function ?HLStoRGB@CXTColorBase@@SAKNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageCustom.cpp
