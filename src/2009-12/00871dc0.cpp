// roc 2009-12 00871dc0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00871dc0
//
// 00871dc0  83ec10               sub esp, 0x10
// 00871dc3  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00871dc9  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00871dcf  890424               mov dword ptr [esp], eax
// 00871dd2  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00871dd8  89442408             mov dword ptr [esp + 8], eax
// 00871ddc  89542404             mov dword ptr [esp + 4], edx
// 00871de0  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00871de6  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00871dec  8d0424               lea eax, [esp]
// 00871def  50                   push eax
// 00871df0  51                   push ecx
// 00871df1  89542414             mov dword ptr [esp + 0x14], edx
// 00871df5  e856ffffff           call 0x871d50
// 00871dfa  83c418               add esp, 0x18
// 00871dfd  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
