// roc 2010-06 0082ccf0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082ccf0
//
// 0082ccf0  83ec10               sub esp, 0x10
// 0082ccf3  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0082ccf9  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0082ccff  890424               mov dword ptr [esp], eax
// 0082cd02  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0082cd08  89442408             mov dword ptr [esp + 8], eax
// 0082cd0c  89542404             mov dword ptr [esp + 4], edx
// 0082cd10  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 0082cd16  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0082cd1c  8d0424               lea eax, [esp]
// 0082cd1f  50                   push eax
// 0082cd20  51                   push ecx
// 0082cd21  89542414             mov dword ptr [esp + 0x14], edx
// 0082cd25  e856ffffff           call 0x82cc80
// 0082cd2a  83c418               add esp, 0x18
// 0082cd2d  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
