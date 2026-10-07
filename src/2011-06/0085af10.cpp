// roc 2011-06 0085af10  unit: CXTPControlRecentFileList  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085af10
//
// 0085af10  e807f4faff           call 0x80a31c
// 0085af15  8b4004               mov eax, dword ptr [eax + 4]
// 0085af18  8b8088000000         mov eax, dword ptr [eax + 0x88]
// 0085af1e  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPControlExt.cpp (function ?GetRecentFileList@CXTPControlRecentFileList@@MAEPAVCRecentFileList@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlExt.cpp
