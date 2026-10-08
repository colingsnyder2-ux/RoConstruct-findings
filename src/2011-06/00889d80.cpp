// roc 2011-06 00889d80  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00889d80
//
// 00889d80  83ec10               sub esp, 0x10
// 00889d83  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00889d89  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00889d8f  890424               mov dword ptr [esp], eax
// 00889d92  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00889d98  89442408             mov dword ptr [esp + 8], eax
// 00889d9c  89542404             mov dword ptr [esp + 4], edx
// 00889da0  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00889da6  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00889dac  8d0424               lea eax, [esp]
// 00889daf  50                   push eax
// 00889db0  51                   push ecx
// 00889db1  89542414             mov dword ptr [esp + 0x14], edx
// 00889db5  e856ffffff           call 0x889d10
// 00889dba  83c418               add esp, 0x18
// 00889dbd  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
