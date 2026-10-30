// roc 2011-06 008c3920  unit: CXTPDockingPaneTabbedContainer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c3920
//
// 008c3920  8b442404             mov eax, dword ptr [esp + 4]
// 008c3924  85c0                 test eax, eax
// 008c3926  7c17                 jl 0x8c393f
// 008c3928  3b8104010000         cmp eax, dword ptr [ecx + 0x104]
// 008c392e  7d0f                 jge 0x8c393f
// 008c3930  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 008c3936  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008c3939  8b4040               mov eax, dword ptr [eax + 0x40]
// 008c393c  c20400               ret 4
// 008c393f  33c0                 xor eax, eax
// 008c3941  8b4040               mov eax, dword ptr [eax + 0x40]
// 008c3944  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?GetItemPane@CXTPDockingPaneTabbedContainer@@QBEPAVCXTPDockingPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
