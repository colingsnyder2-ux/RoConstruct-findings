// roc 2011-06 008eac70  unit: CXTColorLum  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eac70
//
// 008eac70  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008eac73  56                   push esi
// 008eac74  8b742408             mov esi, dword ptr [esp + 8]
// 008eac78  56                   push esi
// 008eac79  50                   push eax
// 008eac7a  ff157c1ca400         call dword ptr [0xa41c7c]
// 008eac80  6afc                 push -4
// 008eac82  6a00                 push 0
// 008eac84  56                   push esi
// 008eac85  ff15e41ba400         call dword ptr [0xa41be4]
// 008eac8b  8b0e                 mov ecx, dword ptr [esi]
// 008eac8d  83c10e               add ecx, 0xe
// 008eac90  894e08               mov dword ptr [esi + 8], ecx
// 008eac93  5e                   pop esi
// 008eac94  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?GetLumBarRect@CXTPColorLum@@QAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
