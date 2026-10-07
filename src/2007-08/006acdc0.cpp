// roc 2007-08 006acdc0  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006acdc0
//
// 006acdc0  51                   push ecx
// 006acdc1  56                   push esi
// 006acdc2  8d442404             lea eax, [esp + 4]
// 006acdc6  50                   push eax
// 006acdc7  6a04                 push 4
// 006acdc9  6a00                 push 0
// 006acdcb  6850cd6a00           push 0x6acd50
// 006acdd0  8bf1                 mov esi, ecx
// 006acdd2  6a00                 push 0
// 006acdd4  6a00                 push 0
// 006acdd6  c70600000000         mov dword ptr [esi], 0
// 006acddc  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006acde3  ff1588d17700         call dword ptr [0x77d188]
// 006acde9  85c0                 test eax, eax
// 006acdeb  894608               mov dword ptr [esi + 8], eax
// 006acdee  7413                 je 0x6ace03
// 006acdf0  6aff                 push -1
// 006acdf2  50                   push eax
// 006acdf3  ff1504d27700         call dword ptr [0x77d204]
// 006acdf9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006acdfc  51                   push ecx
// 006acdfd  ff158cd17700         call dword ptr [0x77d18c]
// 006ace03  5e                   pop esi
// 006ace04  59                   pop ecx
// 006ace05  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
