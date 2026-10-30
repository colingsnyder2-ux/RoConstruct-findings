// roc 2009-06 008185e0  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008185e0
//
// 008185e0  dd442418             fld qword ptr [esp + 0x18]
// 008185e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008185e8  83ec18               sub esp, 0x18
// 008185eb  dd5c2410             fstp qword ptr [esp + 0x10]
// 008185ef  c70100000000         mov dword ptr [ecx], 0
// 008185f5  dd442428             fld qword ptr [esp + 0x28]
// 008185f9  dd5c2408             fstp qword ptr [esp + 8]
// 008185fd  dd442420             fld qword ptr [esp + 0x20]
// 00818601  dd1c24               fstp qword ptr [esp]
// 00818604  e867feffff           call 0x818470
// 00818609  8bc1                 mov eax, ecx
// 0081860b  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
