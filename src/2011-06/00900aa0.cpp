// roc 2011-06 00900aa0  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900aa0
//
// 00900aa0  dd442418             fld qword ptr [esp + 0x18]
// 00900aa4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00900aa8  83ec18               sub esp, 0x18
// 00900aab  dd5c2410             fstp qword ptr [esp + 0x10]
// 00900aaf  c70100000000         mov dword ptr [ecx], 0
// 00900ab5  dd442428             fld qword ptr [esp + 0x28]
// 00900ab9  dd5c2408             fstp qword ptr [esp + 8]
// 00900abd  dd442420             fld qword ptr [esp + 0x20]
// 00900ac1  dd1c24               fstp qword ptr [esp]
// 00900ac4  e867feffff           call 0x900930
// 00900ac9  8bc1                 mov eax, ecx
// 00900acb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
