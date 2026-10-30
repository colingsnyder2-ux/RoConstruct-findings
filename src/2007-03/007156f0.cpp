// roc 2007-03 007156f0  unit: seg_00710000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007156f0
//
// 007156f0  dd442418             fld qword ptr [esp + 0x18]
// 007156f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007156f8  83ec18               sub esp, 0x18
// 007156fb  dd5c2410             fstp qword ptr [esp + 0x10]
// 007156ff  c70100000000         mov dword ptr [ecx], 0
// 00715705  dd442428             fld qword ptr [esp + 0x28]
// 00715709  dd5c2408             fstp qword ptr [esp + 8]
// 0071570d  dd442420             fld qword ptr [esp + 0x20]
// 00715711  dd1c24               fstp qword ptr [esp]
// 00715714  e867feffff           call 0x715580
// 00715719  8bc1                 mov eax, ecx
// 0071571b  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
