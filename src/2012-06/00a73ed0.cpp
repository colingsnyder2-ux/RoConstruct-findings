// roc 2012-06 00a73ed0  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73ed0
//
// 00a73ed0  81c1a4fdffff         add ecx, 0xfffffda4
// 00a73ed6  83ec10               sub esp, 0x10
// 00a73ed9  51                   push ecx
// 00a73eda  8d4c2404             lea ecx, [esp + 4]
// 00a73ede  e8bd12f6ff           call 0x9d51a0
// 00a73ee3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a73ee7  8b10                 mov edx, dword ptr [eax]
// 00a73ee9  8911                 mov dword ptr [ecx], edx
// 00a73eeb  8b5004               mov edx, dword ptr [eax + 4]
// 00a73eee  895104               mov dword ptr [ecx + 4], edx
// 00a73ef1  8b5008               mov edx, dword ptr [eax + 8]
// 00a73ef4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a73ef7  895108               mov dword ptr [ecx + 8], edx
// 00a73efa  89410c               mov dword ptr [ecx + 0xc], eax
// 00a73efd  8bc1                 mov eax, ecx
// 00a73eff  83c410               add esp, 0x10
// 00a73f02  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
