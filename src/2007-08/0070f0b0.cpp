// from server: 100% by auto
// roc 2007-08 0070f0b0  unit: CXTPRichRender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f0b0
//
// 0070f0b0  83792400             cmp dword ptr [ecx + 0x24], 0
// 0070f0b4  7431                 je 0x70f0e7
// 0070f0b6  8b442404             mov eax, dword ptr [esp + 4]
// 0070f0ba  85c0                 test eax, eax
// 0070f0bc  7403                 je 0x70f0c1
// 0070f0be  8b4004               mov eax, dword ptr [eax + 4]
// 0070f0c1  56                   push esi
// 0070f0c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0070f0c6  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0070f0c9  8b11                 mov edx, dword ptr [ecx]
// 0070f0cb  6a00                 push 0
// 0070f0cd  6a00                 push 0
// 0070f0cf  6a00                 push 0
// 0070f0d1  6a00                 push 0
// 0070f0d3  6a00                 push 0
// 0070f0d5  56                   push esi
// 0070f0d6  6a00                 push 0
// 0070f0d8  50                   push eax
// 0070f0d9  8b4210               mov eax, dword ptr [edx + 0x10]
// 0070f0dc  6a00                 push 0
// 0070f0de  6a00                 push 0
// 0070f0e0  6a00                 push 0
// 0070f0e2  6a01                 push 1
// 0070f0e4  ffd0                 call eax
// 0070f0e6  5e                   pop esi
// 0070f0e7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPRichRender.cpp (function ?DrawTextA@CXTPRichRender@@QAEXPAVCDC@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPRichRender.cpp
