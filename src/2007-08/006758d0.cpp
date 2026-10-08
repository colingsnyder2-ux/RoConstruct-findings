// from server: 100% by auto
// roc 2007-08 006758d0  unit: CXTPCustomizeSheet  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006758d0
//
// 006758d0  56                   push esi
// 006758d1  6a01                 push 1
// 006758d3  8bf1                 mov esi, ecx
// 006758d5  e810a6fbff           call 0x62feea
// 006758da  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 006758e0  83faff               cmp edx, -1
// 006758e3  740d                 je 0x6758f2
// 006758e5  8bce                 mov ecx, esi
// 006758e7  e894ffffff           call 0x675880
// 006758ec  8b4074               mov eax, dword ptr [eax + 0x74]
// 006758ef  895054               mov dword ptr [eax + 0x54], edx
// 006758f2  5e                   pop esi
// 006758f3  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeOptionsPage.cpp
