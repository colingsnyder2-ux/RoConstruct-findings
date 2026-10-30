// roc 2012-06 00a02360  unit: RBX::MovingStage  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02360
//
// 00a02360  83ec10               sub esp, 0x10
// 00a02363  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 00a02369  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 00a0236f  890424               mov dword ptr [esp], eax
// 00a02372  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 00a02378  89442408             mov dword ptr [esp + 8], eax
// 00a0237c  89542404             mov dword ptr [esp + 4], edx
// 00a02380  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 00a02386  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00a0238c  8d0424               lea eax, [esp]
// 00a0238f  50                   push eax
// 00a02390  51                   push ecx
// 00a02391  89542414             mov dword ptr [esp + 0x14], edx
// 00a02395  e856ffffff           call 0xa022f0
// 00a0239a  83c418               add esp, 0x18
// 00a0239d  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
