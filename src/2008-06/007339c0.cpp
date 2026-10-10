// roc 2008-06 007339c0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007339c0
//
// 007339c0  83ec08               sub esp, 8
// 007339c3  56                   push esi
// 007339c4  8bf1                 mov esi, ecx
// 007339c6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007339ca  8b01                 mov eax, dword ptr [ecx]
// 007339cc  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 007339d2  8d542404             lea edx, [esp + 4]
// 007339d6  52                   push edx
// 007339d7  ffd0                 call eax
// 007339d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007339dd  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 007339e3  83c104               add ecx, 4
// 007339e6  3bc8                 cmp ecx, eax
// 007339e8  5e                   pop esi
// 007339e9  7f02                 jg 0x7339ed
// 007339eb  8bc8                 mov ecx, eax
// 007339ed  8b1424               mov edx, dword ptr [esp]
// 007339f0  83c204               add edx, 4
// 007339f3  3bd0                 cmp edx, eax
// 007339f5  7f02                 jg 0x7339f9
// 007339f7  8bd0                 mov edx, eax
// 007339f9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007339fd  8910                 mov dword ptr [eax], edx
// 007339ff  894804               mov dword ptr [eax + 4], ecx
// 00733a02  83c408               add esp, 8
// 00733a05  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetPopupBarImageSize@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
