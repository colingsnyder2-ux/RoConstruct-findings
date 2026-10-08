// from server: 100% by auto
// roc 2008-06 006ab210  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ab210
//
// 006ab210  8bc1                 mov eax, ecx
// 006ab212  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 006ab218  85c9                 test ecx, ecx
// 006ab21a  7405                 je 0x6ab221
// 006ab21c  e92f9d0000           jmp 0x6b4f50
// 006ab221  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 006ab227  85c9                 test ecx, ecx
// 006ab229  7410                 je 0x6ab23b
// 006ab22b  e8b0670400           call 0x6f19e0
// 006ab230  85c0                 test eax, eax
// 006ab232  7407                 je 0x6ab23b
// 006ab234  8bc8                 mov ecx, eax
// 006ab236  e9457dffff           jmp 0x6a2f80
// 006ab23b  e9405c0100           jmp 0x6c0e80
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
