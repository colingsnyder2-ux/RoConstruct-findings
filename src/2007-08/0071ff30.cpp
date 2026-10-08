// from server: 100% by auto
// roc 2007-08 0071ff30  unit: CXTPDockingPaneAutoHidePanel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ff30
//
// 0071ff30  dd442418             fld qword ptr [esp + 0x18]
// 0071ff34  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0071ff38  83ec18               sub esp, 0x18
// 0071ff3b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0071ff3f  c70100000000         mov dword ptr [ecx], 0
// 0071ff45  dd442428             fld qword ptr [esp + 0x28]
// 0071ff49  dd5c2408             fstp qword ptr [esp + 8]
// 0071ff4d  dd442420             fld qword ptr [esp + 0x20]
// 0071ff51  dd1c24               fstp qword ptr [esp]
// 0071ff54  e867feffff           call 0x71fdc0
// 0071ff59  8bc1                 mov eax, ecx
// 0071ff5b  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?fromHSL@CXTColorRef@@SA?AV1@NNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
