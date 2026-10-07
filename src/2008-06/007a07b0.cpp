// roc 2008-06 007a07b0  unit: CInstanceRecord::CNameItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a07b0
//
// 007a07b0  83794400             cmp dword ptr [ecx + 0x44], 0
// 007a07b4  7503                 jne 0x7a07b9
// 007a07b6  33c0                 xor eax, eax
// 007a07b8  c3                   ret 
// 007a07b9  8b4140               mov eax, dword ptr [ecx + 0x40]
// 007a07bc  85c0                 test eax, eax
// 007a07be  7505                 jne 0x7a07c5
// 007a07c0  e97f01f0ff           jmp 0x6a0944
// 007a07c5  8b4008               mov eax, dword ptr [eax + 8]
// 007a07c8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetLastPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
