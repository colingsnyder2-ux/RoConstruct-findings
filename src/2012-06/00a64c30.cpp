// roc 2012-06 00a64c30  unit: CXTPRichRender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a64c30
//
// 00a64c30  83792400             cmp dword ptr [ecx + 0x24], 0
// 00a64c34  7431                 je 0xa64c67
// 00a64c36  8b442404             mov eax, dword ptr [esp + 4]
// 00a64c3a  85c0                 test eax, eax
// 00a64c3c  7403                 je 0xa64c41
// 00a64c3e  8b4004               mov eax, dword ptr [eax + 4]
// 00a64c41  56                   push esi
// 00a64c42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a64c46  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 00a64c49  8b11                 mov edx, dword ptr [ecx]
// 00a64c4b  6a00                 push 0
// 00a64c4d  6a00                 push 0
// 00a64c4f  6a00                 push 0
// 00a64c51  6a00                 push 0
// 00a64c53  6a00                 push 0
// 00a64c55  56                   push esi
// 00a64c56  6a00                 push 0
// 00a64c58  50                   push eax
// 00a64c59  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a64c5c  6a00                 push 0
// 00a64c5e  6a00                 push 0
// 00a64c60  6a00                 push 0
// 00a64c62  6a01                 push 1
// 00a64c64  ffd0                 call eax
// 00a64c66  5e                   pop esi
// 00a64c67  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?DrawTextA@CXTPRichRender@@QAEXPAVCDC@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
