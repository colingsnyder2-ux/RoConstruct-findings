// roc 2010-06 008664d0  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008664d0
//
// 008664d0  8b442404             mov eax, dword ptr [esp + 4]
// 008664d4  85c0                 test eax, eax
// 008664d6  7c17                 jl 0x8664ef
// 008664d8  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 008664de  7d0f                 jge 0x8664ef
// 008664e0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008664e6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008664e9  8b4040               mov eax, dword ptr [eax + 0x40]
// 008664ec  c20400               ret 4
// 008664ef  33c0                 xor eax, eax
// 008664f1  8b4040               mov eax, dword ptr [eax + 0x40]
// 008664f4  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
