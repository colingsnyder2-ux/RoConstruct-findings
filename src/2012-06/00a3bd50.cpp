// roc 2012-06 00a3bd50  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3bd50
//
// 00a3bd50  8b442404             mov eax, dword ptr [esp + 4]
// 00a3bd54  85c0                 test eax, eax
// 00a3bd56  7c17                 jl 0xa3bd6f
// 00a3bd58  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 00a3bd5e  7d0f                 jge 0xa3bd6f
// 00a3bd60  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00a3bd66  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00a3bd69  8b4040               mov eax, dword ptr [eax + 0x40]
// 00a3bd6c  c20400               ret 4
// 00a3bd6f  33c0                 xor eax, eax
// 00a3bd71  8b4040               mov eax, dword ptr [eax + 0x40]
// 00a3bd74  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
