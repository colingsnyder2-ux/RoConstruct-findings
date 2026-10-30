// roc 2009-06 00765100  unit: CXTPCustomizeSheet  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765100
//
// 00765100  56                   push esi
// 00765101  6a01                 push 1
// 00765103  8bf1                 mov esi, ecx
// 00765105  e8b63bfbff           call 0x718cc0
// 0076510a  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 00765110  83faff               cmp edx, -1
// 00765113  740d                 je 0x765122
// 00765115  8bce                 mov ecx, esi
// 00765117  e884ffffff           call 0x7650a0
// 0076511c  8b4074               mov eax, dword ptr [eax + 0x74]
// 0076511f  895054               mov dword ptr [eax + 0x54], edx
// 00765122  5e                   pop esi
// 00765123  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
