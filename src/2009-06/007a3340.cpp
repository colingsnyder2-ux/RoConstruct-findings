// roc 2009-06 007a3340  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a3340
//
// 007a3340  8b442408             mov eax, dword ptr [esp + 8]
// 007a3344  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007a334b  7517                 jne 0x7a3364
// 007a334d  8b442404             mov eax, dword ptr [esp + 4]
// 007a3351  b903000000           mov ecx, 3
// 007a3356  8908                 mov dword ptr [eax], ecx
// 007a3358  894804               mov dword ptr [eax + 4], ecx
// 007a335b  894808               mov dword ptr [eax + 8], ecx
// 007a335e  89480c               mov dword ptr [eax + 0xc], ecx
// 007a3361  c20800               ret 8
// 007a3364  56                   push esi
// 007a3365  8b742408             mov esi, dword ptr [esp + 8]
// 007a3369  50                   push eax
// 007a336a  56                   push esi
// 007a336b  e88048f8ff           call 0x727bf0
// 007a3370  8bc6                 mov eax, esi
// 007a3372  5e                   pop esi
// 007a3373  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
