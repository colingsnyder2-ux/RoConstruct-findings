// from server: 100% by auto
// roc 2008-06 00734c70  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00734c70
//
// 00734c70  8b442408             mov eax, dword ptr [esp + 8]
// 00734c74  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00734c7b  7517                 jne 0x734c94
// 00734c7d  8b442404             mov eax, dword ptr [esp + 4]
// 00734c81  b903000000           mov ecx, 3
// 00734c86  8908                 mov dword ptr [eax], ecx
// 00734c88  894804               mov dword ptr [eax + 4], ecx
// 00734c8b  894808               mov dword ptr [eax + 8], ecx
// 00734c8e  89480c               mov dword ptr [eax + 0xc], ecx
// 00734c91  c20800               ret 8
// 00734c94  56                   push esi
// 00734c95  8b742408             mov esi, dword ptr [esp + 8]
// 00734c99  50                   push eax
// 00734c9a  56                   push esi
// 00734c9b  e830e8f7ff           call 0x6b34d0
// 00734ca0  8bc6                 mov eax, esi
// 00734ca2  5e                   pop esi
// 00734ca3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
