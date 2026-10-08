// from server: 100% by auto
// roc 2012-06 009d32f0  unit: CXTPControlRecentFileList  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d32f0
//
// 009d32f0  e8ddf0faff           call 0x9823d2
// 009d32f5  8b4004               mov eax, dword ptr [eax + 4]
// 009d32f8  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 009d32fe  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ?GetRecentFileList@CXTPControlRecentFileList@@MAEPAVCRecentFileList@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
