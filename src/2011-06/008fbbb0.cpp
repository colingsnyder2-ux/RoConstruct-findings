// roc 2011-06 008fbbb0  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fbbb0
//
// 008fbbb0  81c1a4fdffff         add ecx, 0xfffffda4
// 008fbbb6  83ec10               sub esp, 0x10
// 008fbbb9  51                   push ecx
// 008fbbba  8d4c2404             lea ecx, [esp + 4]
// 008fbbbe  e8cd11f6ff           call 0x85cd90
// 008fbbc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008fbbc7  8b10                 mov edx, dword ptr [eax]
// 008fbbc9  8911                 mov dword ptr [ecx], edx
// 008fbbcb  8b5004               mov edx, dword ptr [eax + 4]
// 008fbbce  895104               mov dword ptr [ecx + 4], edx
// 008fbbd1  8b5008               mov edx, dword ptr [eax + 8]
// 008fbbd4  8b400c               mov eax, dword ptr [eax + 0xc]
// 008fbbd7  895108               mov dword ptr [ecx + 8], edx
// 008fbbda  89410c               mov dword ptr [ecx + 0xc], eax
// 008fbbdd  8bc1                 mov eax, ecx
// 008fbbdf  83c410               add esp, 0x10
// 008fbbe2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
