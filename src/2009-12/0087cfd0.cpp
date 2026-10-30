// roc 2009-12 0087cfd0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087cfd0
//
// 0087cfd0  83ec08               sub esp, 8
// 0087cfd3  56                   push esi
// 0087cfd4  8bf1                 mov esi, ecx
// 0087cfd6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087cfda  8b01                 mov eax, dword ptr [ecx]
// 0087cfdc  8b8058010000         mov eax, dword ptr [eax + 0x158]
// 0087cfe2  8d542404             lea edx, [esp + 4]
// 0087cfe6  52                   push edx
// 0087cfe7  ffd0                 call eax
// 0087cfe9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0087cfed  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0087cff3  83c104               add ecx, 4
// 0087cff6  3bc8                 cmp ecx, eax
// 0087cff8  5e                   pop esi
// 0087cff9  7f02                 jg 0x87cffd
// 0087cffb  8bc8                 mov ecx, eax
// 0087cffd  8b1424               mov edx, dword ptr [esp]
// 0087d000  83c204               add edx, 4
// 0087d003  3bd0                 cmp edx, eax
// 0087d005  7f02                 jg 0x87d009
// 0087d007  8bd0                 mov edx, eax
// 0087d009  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0087d00d  8910                 mov dword ptr [eax], edx
// 0087d00f  894804               mov dword ptr [eax + 4], ecx
// 0087d012  83c408               add esp, 8
// 0087d015  c20800               ret 8
// copied from an identical function in another client (function ?GetPopupBarImageSize@CXTPDefaultTheme@XTPPaintThemes@@MAE?AVCSize@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp