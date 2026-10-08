// from server: 100% by auto
// roc 2007-08 0070d210  unit: CXTColorWnd  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d210
//
// 0070d210  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0070d213  56                   push esi
// 0070d214  8b742408             mov esi, dword ptr [esp + 8]
// 0070d218  56                   push esi
// 0070d219  50                   push eax
// 0070d21a  ff15f4ed7700         call dword ptr [0x77edf4]
// 0070d220  6afc                 push -4
// 0070d222  6a00                 push 0
// 0070d224  56                   push esi
// 0070d225  ff1590ed7700         call dword ptr [0x77ed90]
// 0070d22b  8b0e                 mov ecx, dword ptr [esi]
// 0070d22d  83c10e               add ecx, 0xe
// 0070d230  894e08               mov dword ptr [esi + 8], ecx
// 0070d233  5e                   pop esi
// 0070d234  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTColorPageCustom.cpp (function ?GetLumBarRect@CXTColorLum@@QAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorPageCustom.cpp
