// roc 2009-12 008eee30  unit: CXTPRibbonGroupPopupToolBar  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eee30
//
// 008eee30  81c1a4fdffff         add ecx, 0xfffffda4
// 008eee36  83ec10               sub esp, 0x10
// 008eee39  51                   push ecx
// 008eee3a  8d4c2404             lea ecx, [esp + 4]
// 008eee3e  e88dc4f5ff           call 0x84b2d0
// 008eee43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008eee47  8b10                 mov edx, dword ptr [eax]
// 008eee49  8911                 mov dword ptr [ecx], edx
// 008eee4b  8b5004               mov edx, dword ptr [eax + 4]
// 008eee4e  895104               mov dword ptr [ecx + 4], edx
// 008eee51  8b5008               mov edx, dword ptr [eax + 8]
// 008eee54  8b400c               mov eax, dword ptr [eax + 0xc]
// 008eee57  895108               mov dword ptr [ecx + 8], edx
// 008eee5a  89410c               mov dword ptr [ecx + 0xc], eax
// 008eee5d  8bc1                 mov eax, ecx
// 008eee5f  83c410               add esp, 0x10
// 008eee62  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonPopups.cpp (function ?GetGroupsRect@CXTPRibbonGroupPopupToolBar@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonPopups.cpp
