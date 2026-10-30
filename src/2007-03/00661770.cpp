// roc 2007-03 00661770  unit: seg_00660000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00661770
//
// 00661770  56                   push esi
// 00661771  6a01                 push 1
// 00661773  8bf1                 mov esi, ecx
// 00661775  e804ccfbff           call 0x61e37e
// 0066177a  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 00661780  83faff               cmp edx, -1
// 00661783  740d                 je 0x661792
// 00661785  8bce                 mov ecx, esi
// 00661787  e894ffffff           call 0x661720
// 0066178c  8b4074               mov eax, dword ptr [eax + 0x74]
// 0066178f  895054               mov dword ptr [eax + 0x54], edx
// 00661792  5e                   pop esi
// 00661793  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
