// roc 2009-06 007d78b0  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d78b0
//
// 007d78b0  8b442404             mov eax, dword ptr [esp + 4]
// 007d78b4  85c0                 test eax, eax
// 007d78b6  7c17                 jl 0x7d78cf
// 007d78b8  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 007d78be  7d0f                 jge 0x7d78cf
// 007d78c0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 007d78c6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 007d78c9  8b4040               mov eax, dword ptr [eax + 0x40]
// 007d78cc  c20400               ret 4
// 007d78cf  33c0                 xor eax, eax
// 007d78d1  8b4040               mov eax, dword ptr [eax + 0x40]
// 007d78d4  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
