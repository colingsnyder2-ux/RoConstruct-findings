// roc 2012-06 00a63050  unit: CXTColorLum  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a63050
//
// 00a63050  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a63053  56                   push esi
// 00a63054  8b742408             mov esi, dword ptr [esp + 8]
// 00a63058  56                   push esi
// 00a63059  50                   push eax
// 00a6305a  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a63060  6afc                 push -4
// 00a63062  6a00                 push 0
// 00a63064  56                   push esi
// 00a63065  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a6306b  8b0e                 mov ecx, dword ptr [esi]
// 00a6306d  83c10e               add ecx, 0xe
// 00a63070  894e08               mov dword ptr [esi + 8], ecx
// 00a63073  5e                   pop esi
// 00a63074  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?GetLumBarRect@CXTPColorLum@@QAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
