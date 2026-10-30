// roc 2009-12 008b23e0  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b23e0
//
// 008b23e0  8b442404             mov eax, dword ptr [esp + 4]
// 008b23e4  85c0                 test eax, eax
// 008b23e6  7c17                 jl 0x8b23ff
// 008b23e8  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 008b23ee  7d0f                 jge 0x8b23ff
// 008b23f0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008b23f6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008b23f9  8b4040               mov eax, dword ptr [eax + 0x40]
// 008b23fc  c20400               ret 4
// 008b23ff  33c0                 xor eax, eax
// 008b2401  8b4040               mov eax, dword ptr [eax + 0x40]
// 008b2404  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
