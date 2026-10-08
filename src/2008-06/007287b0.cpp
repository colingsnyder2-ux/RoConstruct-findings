// from server: 100% by auto
// roc 2008-06 007287b0  unit: RBX::KeyboardPrimaryController  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007287b0
//
// 007287b0  83ec10               sub esp, 0x10
// 007287b3  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 007287b9  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 007287bf  890424               mov dword ptr [esp], eax
// 007287c2  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 007287c8  89442408             mov dword ptr [esp + 8], eax
// 007287cc  89542404             mov dword ptr [esp + 4], edx
// 007287d0  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 007287d6  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007287dc  8d0424               lea eax, [esp]
// 007287df  50                   push eax
// 007287e0  51                   push ecx
// 007287e1  89542414             mov dword ptr [esp + 0x14], edx
// 007287e5  e856ffffff           call 0x728740
// 007287ea  83c418               add esp, 0x18
// 007287ed  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?HasDwmCompositedRect@CXTPControl@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
