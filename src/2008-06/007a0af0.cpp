// from server: 100% by auto
// roc 2008-06 007a0af0  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0af0
//
// 007a0af0  dd442418             fld qword ptr [esp + 0x18]
// 007a0af4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a0af8  83ec18               sub esp, 0x18
// 007a0afb  dd5c2410             fstp qword ptr [esp + 0x10]
// 007a0aff  c70100000000         mov dword ptr [ecx], 0
// 007a0b05  dd442428             fld qword ptr [esp + 0x28]
// 007a0b09  dd5c2408             fstp qword ptr [esp + 8]
// 007a0b0d  dd442420             fld qword ptr [esp + 0x20]
// 007a0b11  dd1c24               fstp qword ptr [esp]
// 007a0b14  e867feffff           call 0x7a0980
// 007a0b19  8bc1                 mov eax, ecx
// 007a0b1b  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
