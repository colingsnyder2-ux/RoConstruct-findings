// roc 2009-12 0087e280  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087e280
//
// 0087e280  8b442408             mov eax, dword ptr [esp + 8]
// 0087e284  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0087e28b  7517                 jne 0x87e2a4
// 0087e28d  8b442404             mov eax, dword ptr [esp + 4]
// 0087e291  b903000000           mov ecx, 3
// 0087e296  8908                 mov dword ptr [eax], ecx
// 0087e298  894804               mov dword ptr [eax + 4], ecx
// 0087e29b  894808               mov dword ptr [eax + 8], ecx
// 0087e29e  89480c               mov dword ptr [eax + 0xc], ecx
// 0087e2a1  c20800               ret 8
// 0087e2a4  56                   push esi
// 0087e2a5  8b742408             mov esi, dword ptr [esp + 8]
// 0087e2a9  50                   push eax
// 0087e2aa  56                   push esi
// 0087e2ab  e8b048f8ff           call 0x802b60
// 0087e2b0  8bc6                 mov eax, esi
// 0087e2b2  5e                   pop esi
// 0087e2b3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
