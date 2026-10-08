// roc 2010-06 0082b4e0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082b4e0
//
// 0082b4e0  8b442408             mov eax, dword ptr [esp + 8]
// 0082b4e4  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0082b4eb  7517                 jne 0x82b504
// 0082b4ed  8b442404             mov eax, dword ptr [esp + 4]
// 0082b4f1  b903000000           mov ecx, 3
// 0082b4f6  8908                 mov dword ptr [eax], ecx
// 0082b4f8  894804               mov dword ptr [eax + 4], ecx
// 0082b4fb  894808               mov dword ptr [eax + 8], ecx
// 0082b4fe  89480c               mov dword ptr [eax + 0xc], ecx
// 0082b501  c20800               ret 8
// 0082b504  56                   push esi
// 0082b505  8b742408             mov esi, dword ptr [esp + 8]
// 0082b509  50                   push eax
// 0082b50a  56                   push esi
// 0082b50b  e86071f8ff           call 0x7b2670
// 0082b510  8bc6                 mov eax, esi
// 0082b512  5e                   pop esi
// 0082b513  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
