// from server: 100% by auto
// roc 2008-06 0078aa80  unit: CXTColorLum  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078aa80
//
// 0078aa80  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078aa83  56                   push esi
// 0078aa84  8b742408             mov esi, dword ptr [esp + 8]
// 0078aa88  56                   push esi
// 0078aa89  50                   push eax
// 0078aa8a  ff15842d8000         call dword ptr [0x802d84]
// 0078aa90  6afc                 push -4
// 0078aa92  6a00                 push 0
// 0078aa94  56                   push esi
// 0078aa95  ff15282d8000         call dword ptr [0x802d28]
// 0078aa9b  8b0e                 mov ecx, dword ptr [esi]
// 0078aa9d  83c10e               add ecx, 0xe
// 0078aaa0  894e08               mov dword ptr [esi + 8], ecx
// 0078aaa3  5e                   pop esi
// 0078aaa4  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?GetLumBarRect@CXTColorLum@@QAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
