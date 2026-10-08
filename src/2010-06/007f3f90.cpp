// roc 2010-06 007f3f90  unit: CXTPCustomizeSheet  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f3f90
//
// 007f3f90  56                   push esi
// 007f3f91  6a01                 push 1
// 007f3f93  8bf1                 mov esi, ecx
// 007f3f95  e88e3cfbff           call 0x7a7c28
// 007f3f9a  8b96f0000000         mov edx, dword ptr [esi + 0xf0]
// 007f3fa0  83faff               cmp edx, -1
// 007f3fa3  740d                 je 0x7f3fb2
// 007f3fa5  8bce                 mov ecx, esi
// 007f3fa7  e884ffffff           call 0x7f3f30
// 007f3fac  8b4074               mov eax, dword ptr [eax + 0x74]
// 007f3faf  895054               mov dword ptr [eax + 0x54], edx
// 007f3fb2  5e                   pop esi
// 007f3fb3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnAnimationChanged@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
