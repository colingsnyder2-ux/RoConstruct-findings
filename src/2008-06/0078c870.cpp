// roc 2008-06 0078c870  unit: CXTPRichRender  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c870
//
// 0078c870  83792400             cmp dword ptr [ecx + 0x24], 0
// 0078c874  7431                 je 0x78c8a7
// 0078c876  8b442404             mov eax, dword ptr [esp + 4]
// 0078c87a  85c0                 test eax, eax
// 0078c87c  7403                 je 0x78c881
// 0078c87e  8b4004               mov eax, dword ptr [eax + 4]
// 0078c881  56                   push esi
// 0078c882  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0078c886  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0078c889  8b11                 mov edx, dword ptr [ecx]
// 0078c88b  6a00                 push 0
// 0078c88d  6a00                 push 0
// 0078c88f  6a00                 push 0
// 0078c891  6a00                 push 0
// 0078c893  6a00                 push 0
// 0078c895  56                   push esi
// 0078c896  6a00                 push 0
// 0078c898  50                   push eax
// 0078c899  8b4210               mov eax, dword ptr [edx + 0x10]
// 0078c89c  6a00                 push 0
// 0078c89e  6a00                 push 0
// 0078c8a0  6a00                 push 0
// 0078c8a2  6a01                 push 1
// 0078c8a4  ffd0                 call eax
// 0078c8a6  5e                   pop esi
// 0078c8a7  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPRichRender.cpp (function ?DrawTextA@CXTPRichRender@@QAEXPAVCDC@@PBUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPRichRender.cpp
