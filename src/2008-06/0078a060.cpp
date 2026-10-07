// roc 2008-06 0078a060  unit: CXTColorBase  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a060
//
// 0078a060  51                   push ecx
// 0078a061  dd442410             fld qword ptr [esp + 0x10]
// 0078a065  83ec18               sub esp, 0x18
// 0078a068  dd5c2410             fstp qword ptr [esp + 0x10]
// 0078a06c  8d442418             lea eax, [esp + 0x18]
// 0078a070  dd442430             fld qword ptr [esp + 0x30]
// 0078a074  dd5c2408             fstp qword ptr [esp + 8]
// 0078a078  dd442420             fld qword ptr [esp + 0x20]
// 0078a07c  dd1c24               fstp qword ptr [esp]
// 0078a07f  50                   push eax
// 0078a080  e86b6a0100           call 0x7a0af0
// 0078a085  8b00                 mov eax, dword ptr [eax]
// 0078a087  83c420               add esp, 0x20
// 0078a08a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?HLStoRGB@CXTColorBase@@SAKNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
