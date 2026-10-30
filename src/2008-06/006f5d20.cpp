// from server: 100% by auto
// roc 2008-06 006f5d20  unit: CXTPControlRecentFileList  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f5d20
//
// 006f5d20  e801acfaff           call 0x6a0926
// 006f5d25  8b4004               mov eax, dword ptr [eax + 4]
// 006f5d28  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 006f5d2e  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?GetRecentFileList@CXTPControlRecentFileList@@MAEPAVCRecentFileList@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
