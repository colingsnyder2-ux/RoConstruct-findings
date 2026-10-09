// roc 2009-12 0083fed0  unit: CXTPCustomizeSheet  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083fed0
//
// 0083fed0  56                   push esi
// 0083fed1  6a01                 push 1
// 0083fed3  8bf1                 mov esi, ecx
// 0083fed5  e80e3cfbff           call 0x7f3ae8
// 0083feda  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 0083fee0  83faff               cmp edx, -1
// 0083fee3  740d                 je 0x83fef2
// 0083fee5  8bce                 mov ecx, esi
// 0083fee7  e884ffffff           call 0x83fe70
// 0083feec  8b4074               mov eax, dword ptr [eax + 0x74]
// 0083feef  895054               mov dword ptr [eax + 0x54], edx
// 0083fef2  5e                   pop esi
// 0083fef3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
