// from server: 100% by auto
// roc 2008-06 006ec710  unit: CXTPCustomizeSheet  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ec710
//
// 006ec710  56                   push esi
// 006ec711  6a01                 push 1
// 006ec713  8bf1                 mov esi, ecx
// 006ec715  e8f441fbff           call 0x6a090e
// 006ec71a  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 006ec720  83faff               cmp edx, -1
// 006ec723  740d                 je 0x6ec732
// 006ec725  8bce                 mov ecx, esi
// 006ec727  e884ffffff           call 0x6ec6b0
// 006ec72c  8b4074               mov eax, dword ptr [eax + 0x74]
// 006ec72f  895054               mov dword ptr [eax + 0x54], edx
// 006ec732  5e                   pop esi
// 006ec733  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
