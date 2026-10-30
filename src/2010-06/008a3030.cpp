// roc 2010-06 008a3030  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a3030
//
// 008a3030  81c1a4fdffff         add ecx, 0xfffffda4
// 008a3036  83ec10               sub esp, 0x10
// 008a3039  51                   push ecx
// 008a303a  8d4c2404             lea ecx, [esp + 4]
// 008a303e  e8cdc2f5ff           call 0x7ff310
// 008a3043  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a3047  8b10                 mov edx, dword ptr [eax]
// 008a3049  8911                 mov dword ptr [ecx], edx
// 008a304b  8b5004               mov edx, dword ptr [eax + 4]
// 008a304e  895104               mov dword ptr [ecx + 4], edx
// 008a3051  8b5008               mov edx, dword ptr [eax + 8]
// 008a3054  8b400c               mov eax, dword ptr [eax + 0xc]
// 008a3057  895108               mov dword ptr [ecx + 8], edx
// 008a305a  89410c               mov dword ptr [ecx + 0xc], eax
// 008a305d  8bc1                 mov eax, ecx
// 008a305f  83c410               add esp, 0x10
// 008a3062  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
