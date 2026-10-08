// roc 2012-06 00a65050  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65050
//
// 00a65050  56                   push esi
// 00a65051  8bf1                 mov esi, ecx
// 00a65053  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a65056  c7067c52c200         mov dword ptr [esi], 0xc2527c
// 00a6505c  85c0                 test eax, eax
// 00a6505e  7407                 je 0xa65067
// 00a65060  50                   push eax
// 00a65061  ff157021b200         call dword ptr [0xb22170]
// 00a65067  8bce                 mov ecx, esi
// 00a65069  5e                   pop esi
// 00a6506a  e9fddbf1ff           jmp 0x982c6c
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
