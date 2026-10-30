// roc 2012-06 00a78cc0  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78cc0
//
// 00a78cc0  dd442418             fld qword ptr [esp + 0x18]
// 00a78cc4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a78cc8  83ec18               sub esp, 0x18
// 00a78ccb  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a78ccf  c70100000000         mov dword ptr [ecx], 0
// 00a78cd5  dd442428             fld qword ptr [esp + 0x28]
// 00a78cd9  dd5c2408             fstp qword ptr [esp + 8]
// 00a78cdd  dd442420             fld qword ptr [esp + 0x20]
// 00a78ce1  dd1c24               fstp qword ptr [esp]
// 00a78ce4  e867feffff           call 0xa78b50
// 00a78ce9  8bc1                 mov eax, ecx
// 00a78ceb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
