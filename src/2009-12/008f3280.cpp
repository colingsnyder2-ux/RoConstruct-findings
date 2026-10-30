// roc 2009-12 008f3280  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3280
//
// 008f3280  dd442418             fld qword ptr [esp + 0x18]
// 008f3284  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008f3288  83ec18               sub esp, 0x18
// 008f328b  dd5c2410             fstp qword ptr [esp + 0x10]
// 008f328f  c70100000000         mov dword ptr [ecx], 0
// 008f3295  dd442428             fld qword ptr [esp + 0x28]
// 008f3299  dd5c2408             fstp qword ptr [esp + 8]
// 008f329d  dd442420             fld qword ptr [esp + 0x20]
// 008f32a1  dd1c24               fstp qword ptr [esp]
// 008f32a4  e867feffff           call 0x8f3110
// 008f32a9  8bc1                 mov eax, ecx
// 008f32ab  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
