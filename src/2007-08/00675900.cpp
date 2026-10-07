// roc 2007-08 00675900  unit: CXTPCustomizeSheet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675900
//
// 00675900  56                   push esi
// 00675901  6a01                 push 1
// 00675903  8bf1                 mov esi, ecx
// 00675905  e8e0a5fbff           call 0x62feea
// 0067590a  8bce                 mov ecx, esi
// 0067590c  e86fffffff           call 0x675880
// 00675911  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00675917  8b4074               mov eax, dword ptr [eax + 0x74]
// 0067591a  894824               mov dword ptr [eax + 0x24], ecx
// 0067591d  5e                   pop esi
// 0067591e  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckAfterdelay@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeOptionsPage.cpp
