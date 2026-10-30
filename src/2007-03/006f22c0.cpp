// roc 2007-03 006f22c0  unit: seg_006f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f22c0
//
// 006f22c0  83ec10               sub esp, 0x10
// 006f22c3  56                   push esi
// 006f22c4  8bf1                 mov esi, ecx
// 006f22c6  8b46fc               mov eax, dword ptr [esi - 4]
// 006f22c9  50                   push eax
// 006f22ca  8d4c2408             lea ecx, [esp + 8]
// 006f22ce  e8f9c0f2ff           call 0x61e3cc
// 006f22d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f22d7  8b442408             mov eax, dword ptr [esp + 8]
// 006f22db  83c664               add esi, 0x64
// 006f22de  85c0                 test eax, eax
// 006f22e0  8931                 mov dword ptr [ecx], esi
// 006f22e2  5e                   pop esi
// 006f22e3  7406                 je 0x6f22eb
// 006f22e5  8b1424               mov edx, dword ptr [esp]
// 006f22e8  895004               mov dword ptr [eax + 4], edx
// 006f22eb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006f22f0  740c                 je 0x6f22fe
// 006f22f2  8b442408             mov eax, dword ptr [esp + 8]
// 006f22f6  50                   push eax
// 006f22f7  6a00                 push 0
// 006f22f9  e8c8c0f2ff           call 0x61e3c6
// 006f22fe  33c0                 xor eax, eax
// 006f2300  83c410               add esp, 0x10
// 006f2303  c20400               ret 4
// copied from an identical function in another client (function ?TxGetParaFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_paraformat@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Common/XTPRichRender.cpp