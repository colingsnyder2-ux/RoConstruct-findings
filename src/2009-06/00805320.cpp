// roc 2009-06 00805320  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00805320
//
// 00805320  56                   push esi
// 00805321  8bf1                 mov esi, ecx
// 00805323  8b4620               mov eax, dword ptr [esi + 0x20]
// 00805326  c70654b99000         mov dword ptr [esi], 0x90b954
// 0080532c  85c0                 test eax, eax
// 0080532e  7407                 je 0x805337
// 00805330  50                   push eax
// 00805331  ff1560e18900         call dword ptr [0x89e160]
// 00805337  8bce                 mov ecx, esi
// 00805339  5e                   pop esi
// 0080533a  e97542f1ff           jmp 0x7195b4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ??1CXTPOffice2007Image@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
