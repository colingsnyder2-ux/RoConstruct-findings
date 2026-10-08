// from server: 100% by auto
// roc 2007-08 006e1f80  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1f80
//
// 006e1f80  8b442404             mov eax, dword ptr [esp + 4]
// 006e1f84  85c0                 test eax, eax
// 006e1f86  7c17                 jl 0x6e1f9f
// 006e1f88  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 006e1f8e  7d0f                 jge 0x6e1f9f
// 006e1f90  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 006e1f96  8b0481               mov eax, dword ptr [ecx + eax*4]
// 006e1f99  8b4040               mov eax, dword ptr [eax + 0x40]
// 006e1f9c  c20400               ret 4
// 006e1f9f  33c0                 xor eax, eax
// 006e1fa1  8b4040               mov eax, dword ptr [eax + 0x40]
// 006e1fa4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
