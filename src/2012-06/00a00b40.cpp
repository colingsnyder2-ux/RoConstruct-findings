// roc 2012-06 00a00b40  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a00b40
//
// 00a00b40  8b442408             mov eax, dword ptr [esp + 8]
// 00a00b44  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 00a00b4b  7517                 jne 0xa00b64
// 00a00b4d  8b442404             mov eax, dword ptr [esp + 4]
// 00a00b51  b903000000           mov ecx, 3
// 00a00b56  8908                 mov dword ptr [eax], ecx
// 00a00b58  894804               mov dword ptr [eax + 4], ecx
// 00a00b5b  894808               mov dword ptr [eax + 8], ecx
// 00a00b5e  89480c               mov dword ptr [eax + 0xc], ecx
// 00a00b61  c20800               ret 8
// 00a00b64  56                   push esi
// 00a00b65  8b742408             mov esi, dword ptr [esp + 8]
// 00a00b69  50                   push eax
// 00a00b6a  56                   push esi
// 00a00b6b  e800c2f8ff           call 0x98cd70
// 00a00b70  8bc6                 mov eax, esi
// 00a00b72  5e                   pop esi
// 00a00b73  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
