// roc 2011-06 00881500  unit: CXTPMouseManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881500
//
// 00881500  51                   push ecx
// 00881501  56                   push esi
// 00881502  8d442404             lea eax, [esp + 4]
// 00881506  50                   push eax
// 00881507  6a04                 push 4
// 00881509  6a00                 push 0
// 0088150b  6890148800           push 0x881490
// 00881510  8bf1                 mov esi, ecx
// 00881512  6a00                 push 0
// 00881514  6a00                 push 0
// 00881516  c70600000000         mov dword ptr [esi], 0
// 0088151c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00881523  ff15d401a400         call dword ptr [0xa401d4]
// 00881529  894608               mov dword ptr [esi + 8], eax
// 0088152c  85c0                 test eax, eax
// 0088152e  7413                 je 0x881543
// 00881530  6aff                 push -1
// 00881532  50                   push eax
// 00881533  ff156002a400         call dword ptr [0xa40260]
// 00881539  8b4e08               mov ecx, dword ptr [esi + 8]
// 0088153c  51                   push ecx
// 0088153d  ff15b003a400         call dword ptr [0xa403b0]
// 00881543  5e                   pop esi
// 00881544  59                   pop ecx
// 00881545  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
