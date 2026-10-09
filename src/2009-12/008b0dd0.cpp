// roc 2009-12 008b0dd0  unit: CXTPDockingPaneTabbedContainer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0dd0
//
// 008b0dd0  8b442404             mov eax, dword ptr [esp + 4]
// 008b0dd4  898198010000         mov dword ptr [ecx + 0x198], eax
// 008b0dda  c781a001000001000000 mov dword ptr [ecx + 0x1a0], 1
// 008b0de4  83c154               add ecx, 0x54
// 008b0de7  6a01                 push 1
// 008b0de9  51                   push ecx
// 008b0dea  e851faffff           call 0x8b0840
// 008b0def  8bc8                 mov ecx, eax
// 008b0df1  e8da84f8ff           call 0x8392d0
// 008b0df6  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?ShowTitle@CXTPDockingPaneTabbedContainer@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
