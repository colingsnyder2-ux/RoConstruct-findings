// roc 2011-06 00888580  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888580
//
// 00888580  8b442408             mov eax, dword ptr [esp + 8]
// 00888584  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 0088858b  7517                 jne 0x8885a4
// 0088858d  8b442404             mov eax, dword ptr [esp + 4]
// 00888591  b903000000           mov ecx, 3
// 00888596  8908                 mov dword ptr [eax], ecx
// 00888598  894804               mov dword ptr [eax + 4], ecx
// 0088859b  894808               mov dword ptr [eax + 8], ecx
// 0088859e  89480c               mov dword ptr [eax + 0xc], ecx
// 008885a1  c20800               ret 8
// 008885a4  56                   push esi
// 008885a5  8b742408             mov esi, dword ptr [esp + 8]
// 008885a9  50                   push eax
// 008885aa  56                   push esi
// 008885ab  e8d0c4f8ff           call 0x814a80
// 008885b0  8bc6                 mov eax, esi
// 008885b2  5e                   pop esi
// 008885b3  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetCommandBarBorders@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCRect@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
