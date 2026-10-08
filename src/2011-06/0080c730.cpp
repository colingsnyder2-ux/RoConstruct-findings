// roc 2011-06 0080c730  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080c730
//
// 0080c730  8bc1                 mov eax, ecx
// 0080c732  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 0080c738  85c9                 test ecx, ecx
// 0080c73a  7405                 je 0x80c741
// 0080c73c  e98fe40000           jmp 0x81abd0
// 0080c741  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0080c747  85c9                 test ecx, ecx
// 0080c749  7410                 je 0x80c75b
// 0080c74b  e880a30400           call 0x856ad0
// 0080c750  85c0                 test eax, eax
// 0080c752  7407                 je 0x80c75b
// 0080c754  8bc8                 mov ecx, eax
// 0080c756  e9f5da0100           jmp 0x82a250
// 0080c75b  e9b0990100           jmp 0x826110
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
