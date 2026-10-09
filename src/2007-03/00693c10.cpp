// roc 2007-03 00693c10  unit: seg_00690000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00693c10
//
// 00693c10  51                   push ecx
// 00693c11  56                   push esi
// 00693c12  8d442404             lea eax, [esp + 4]
// 00693c16  50                   push eax
// 00693c17  6a04                 push 4
// 00693c19  6a00                 push 0
// 00693c1b  68a03b6900           push 0x693ba0
// 00693c20  8bf1                 mov esi, ecx
// 00693c22  6a00                 push 0
// 00693c24  6a00                 push 0
// 00693c26  c70600000000         mov dword ptr [esi], 0
// 00693c2c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00693c33  ff1504d37700         call dword ptr [0x77d304]
// 00693c39  85c0                 test eax, eax
// 00693c3b  894608               mov dword ptr [esi + 8], eax
// 00693c3e  7413                 je 0x693c53
// 00693c40  6aff                 push -1
// 00693c42  50                   push eax
// 00693c43  ff15c8d17700         call dword ptr [0x77d1c8]
// 00693c49  8b4e08               mov ecx, dword ptr [esi + 8]
// 00693c4c  51                   push ecx
// 00693c4d  ff1500d37700         call dword ptr [0x77d300]
// 00693c53  5e                   pop esi
// 00693c54  59                   pop ecx
// 00693c55  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPSoundManager.cpp
