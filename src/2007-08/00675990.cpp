// roc 2007-08 00675990  unit: CXTPCustomizeSheet  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00675990
//
// 00675990  56                   push esi
// 00675991  6a01                 push 1
// 00675993  8bf1                 mov esi, ecx
// 00675995  e850a5fbff           call 0x62feea
// 0067599a  8bce                 mov ecx, esi
// 0067599c  e8dffeffff           call 0x675880
// 006759a1  8b8e98000000         mov ecx, dword ptr [esi + 0x98]
// 006759a7  8b4074               mov eax, dword ptr [eax + 0x74]
// 006759aa  89482c               mov dword ptr [eax + 0x2c], ecx
// 006759ad  5e                   pop esi
// 006759ae  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnCheckShortcuts@CXTPCustomizeOptionsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCustomizeOptionsPage.cpp
