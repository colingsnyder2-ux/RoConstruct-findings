// from server: 100% by auto
// roc 2008-06 007a0790  unit: CInstanceRecord::CNameItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0790
//
// 007a0790  83794400             cmp dword ptr [ecx + 0x44], 0
// 007a0794  7503                 jne 0x7a0799
// 007a0796  33c0                 xor eax, eax
// 007a0798  c3                   ret 
// 007a0799  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 007a079c  85c0                 test eax, eax
// 007a079e  7505                 jne 0x7a07a5
// 007a07a0  e99f01f0ff           jmp 0x6a0944
// 007a07a5  8b4008               mov eax, dword ptr [eax + 8]
// 007a07a8  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?GetFirstPane@CXTPDockingPaneBaseContainer@@QBEPAVCXTPDockingPaneBase@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
