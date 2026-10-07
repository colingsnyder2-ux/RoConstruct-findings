// roc 2011-06 008ec850  unit: CXTPRichRender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec850
//
// 008ec850  83792400             cmp dword ptr [ecx + 0x24], 0
// 008ec854  7431                 je 0x8ec887
// 008ec856  8b442404             mov eax, dword ptr [esp + 4]
// 008ec85a  85c0                 test eax, eax
// 008ec85c  7403                 je 0x8ec861
// 008ec85e  8b4004               mov eax, dword ptr [eax + 4]
// 008ec861  56                   push esi
// 008ec862  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008ec866  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 008ec869  8b11                 mov edx, dword ptr [ecx]
// 008ec86b  6a00                 push 0
// 008ec86d  6a00                 push 0
// 008ec86f  6a00                 push 0
// 008ec871  6a00                 push 0
// 008ec873  6a00                 push 0
// 008ec875  56                   push esi
// 008ec876  6a00                 push 0
// 008ec878  50                   push eax
// 008ec879  8b4210               mov eax, dword ptr [edx + 0x10]
// 008ec87c  6a00                 push 0
// 008ec87e  6a00                 push 0
// 008ec880  6a00                 push 0
// 008ec882  6a01                 push 1
// 008ec884  ffd0                 call eax
// 008ec886  5e                   pop esi
// 008ec887  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPRichRender.cpp (function ?DrawTextA@CXTPRichRender@@QAEXPAVCDC@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPRichRender.cpp
