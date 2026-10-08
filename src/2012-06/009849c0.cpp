// roc 2012-06 009849c0  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009849c0
//
// 009849c0  8bc1                 mov eax, ecx
// 009849c2  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 009849c8  85c9                 test ecx, ecx
// 009849ca  7405                 je 0x9849d1
// 009849cc  e95fe40000           jmp 0x992e30
// 009849d1  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 009849d7  85c9                 test ecx, ecx
// 009849d9  7410                 je 0x9849eb
// 009849db  e8d0a50400           call 0x9cefb0
// 009849e0  85c0                 test eax, eax
// 009849e2  7407                 je 0x9849eb
// 009849e4  8bc8                 mov ecx, eax
// 009849e6  e995de0100           jmp 0x9a2880
// 009849eb  e9509d0100           jmp 0x99e740
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetImageManager@CXTPControl@@QBEPAVCXTPImageManager@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
