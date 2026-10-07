// roc 2007-08 0067e5b0  unit: CXTPControlRecentFileList  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067e5b0
//
// 0067e5b0  e84d19fbff           call 0x62ff02
// 0067e5b5  8b4004               mov eax, dword ptr [eax + 4]
// 0067e5b8  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 0067e5be  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ?GetRecentFileList@CXTPControlRecentFileList@@MAEPAVCRecentFileList@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
