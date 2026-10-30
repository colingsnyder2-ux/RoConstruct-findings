// roc 2007-03 00679100  unit: seg_00670000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00679100
//
// 00679100  56                   push esi
// 00679101  8bf1                 mov esi, ecx
// 00679103  8d4e20               lea ecx, [esi + 0x20]
// 00679106  e815040500           call 0x6c9520
// 0067910b  8b8014010000         mov eax, dword ptr [eax + 0x114]
// 00679111  0b86c4000000         or eax, dword ptr [esi + 0xc4]
// 00679117  5e                   pop esi
// 00679118  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPane.cpp (function ?GetOptions@CXTPDockingPane@@QBEKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPane.cpp
