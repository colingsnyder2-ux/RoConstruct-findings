// from server: 100% by auto
// roc 2008-06 0075f090  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f090
//
// 0075f090  8b442404             mov eax, dword ptr [esp + 4]
// 0075f094  85c0                 test eax, eax
// 0075f096  7c17                 jl 0x75f0af
// 0075f098  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 0075f09e  7d0f                 jge 0x75f0af
// 0075f0a0  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 0075f0a6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0075f0a9  8b4040               mov eax, dword ptr [eax + 0x40]
// 0075f0ac  c20400               ret 4
// 0075f0af  33c0                 xor eax, eax
// 0075f0b1  8b4040               mov eax, dword ptr [eax + 0x40]
// 0075f0b4  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
