// roc 2007-03 006f2270  unit: seg_006f0000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f2270
//
// 006f2270  83ec10               sub esp, 0x10
// 006f2273  56                   push esi
// 006f2274  8bf1                 mov esi, ecx
// 006f2276  8b46fc               mov eax, dword ptr [esi - 4]
// 006f2279  50                   push eax
// 006f227a  8d4c2408             lea ecx, [esp + 8]
// 006f227e  e849c1f2ff           call 0x61e3cc
// 006f2283  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f2287  8b442408             mov eax, dword ptr [esp + 8]
// 006f228b  83c608               add esi, 8
// 006f228e  85c0                 test eax, eax
// 006f2290  8931                 mov dword ptr [ecx], esi
// 006f2292  5e                   pop esi
// 006f2293  7406                 je 0x6f229b
// 006f2295  8b1424               mov edx, dword ptr [esp]
// 006f2298  895004               mov dword ptr [eax + 4], edx
// 006f229b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006f22a0  740c                 je 0x6f22ae
// 006f22a2  8b442408             mov eax, dword ptr [esp + 8]
// 006f22a6  50                   push eax
// 006f22a7  6a00                 push 0
// 006f22a9  e818c1f2ff           call 0x61e3c6
// 006f22ae  33c0                 xor eax, eax
// 006f22b0  83c410               add esp, 0x10
// 006f22b3  c20400               ret 4
// copied from an identical function in another client (function ?TxGetCharFormat@XTextHost@CXTPRichRender@@UAEJPAPBU_charformatw@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/Common/XTPRichRender.cpp