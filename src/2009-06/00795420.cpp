// roc 2009-06 00795420  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00795420
//
// 00795420  83ec10               sub esp, 0x10
// 00795423  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00795429  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0079542f  890424               mov dword ptr [esp], eax
// 00795432  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00795438  89442408             mov dword ptr [esp + 8], eax
// 0079543c  89542404             mov dword ptr [esp + 4], edx
// 00795440  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00795446  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0079544c  8d0424               lea eax, [esp]
// 0079544f  50                   push eax
// 00795450  51                   push ecx
// 00795451  89542414             mov dword ptr [esp + 0x14], edx
// 00795455  e856ffffff           call 0x7953b0
// 0079545a  83c418               add esp, 0x18
// 0079545d  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
