// roc 2010-06 008a73d0  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a73d0
//
// 008a73d0  dd442418             fld qword ptr [esp + 0x18]
// 008a73d4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008a73d8  83ec18               sub esp, 0x18
// 008a73db  dd5c2410             fstp qword ptr [esp + 0x10]
// 008a73df  c70100000000         mov dword ptr [ecx], 0
// 008a73e5  dd442428             fld qword ptr [esp + 0x28]
// 008a73e9  dd5c2408             fstp qword ptr [esp + 8]
// 008a73ed  dd442420             fld qword ptr [esp + 0x20]
// 008a73f1  dd1c24               fstp qword ptr [esp]
// 008a73f4  e867feffff           call 0x8a7260
// 008a73f9  8bc1                 mov eax, ecx
// 008a73fb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
