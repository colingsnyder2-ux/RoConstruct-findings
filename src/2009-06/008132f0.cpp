// roc 2009-06 008132f0  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008132f0
//
// 008132f0  81c1a4fdffff         add ecx, 0xfffffda4
// 008132f6  83ec10               sub esp, 0x10
// 008132f9  51                   push ecx
// 008132fa  8d4c2404             lea ecx, [esp + 4]
// 008132fe  e8cdd1f5ff           call 0x7704d0
// 00813303  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00813307  8b10                 mov edx, dword ptr [eax]
// 00813309  8911                 mov dword ptr [ecx], edx
// 0081330b  8b5004               mov edx, dword ptr [eax + 4]
// 0081330e  895104               mov dword ptr [ecx + 4], edx
// 00813311  8b5008               mov edx, dword ptr [eax + 8]
// 00813314  8b400c               mov eax, dword ptr [eax + 0xc]
// 00813317  895108               mov dword ptr [ecx + 8], edx
// 0081331a  89410c               mov dword ptr [ecx + 0xc], eax
// 0081331d  8bc1                 mov eax, ecx
// 0081331f  83c410               add esp, 0x10
// 00813322  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
