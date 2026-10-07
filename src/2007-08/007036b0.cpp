// roc 2007-08 007036b0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007036b0
//
// 007036b0  56                   push esi
// 007036b1  8b742408             mov esi, dword ptr [esp + 8]
// 007036b5  57                   push edi
// 007036b6  8bf9                 mov edi, ecx
// 007036b8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007036bb  8b4840               mov ecx, dword ptr [eax + 0x40]
// 007036be  8b5044               mov edx, dword ptr [eax + 0x44]
// 007036c1  890e                 mov dword ptr [esi], ecx
// 007036c3  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007036c6  895604               mov dword ptr [esi + 4], edx
// 007036c9  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007036cc  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007036d2  894e08               mov dword ptr [esi + 8], ecx
// 007036d5  89560c               mov dword ptr [esi + 0xc], edx
// 007036d8  8b10                 mov edx, dword ptr [eax]
// 007036da  8bc8                 mov ecx, eax
// 007036dc  8b4228               mov eax, dword ptr [edx + 0x28]
// 007036df  ffd0                 call eax
// 007036e1  85c0                 test eax, eax
// 007036e3  7427                 je 0x70370c
// 007036e5  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007036e8  83793800             cmp dword ptr [ecx + 0x38], 0
// 007036ec  751e                 jne 0x70370c
// 007036ee  e8bd66edff           call 0x5d9db0
// 007036f3  85c0                 test eax, eax
// 007036f5  740d                 je 0x703704
// 007036f7  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007036fa  e8b166edff           call 0x5d9db0
// 007036ff  83f801               cmp eax, 1
// 00703702  7504                 jne 0x703708
// 00703704  83460c02             add dword ptr [esi + 0xc], 2
// 00703708  83460802             add dword ptr [esi + 8], 2
// 0070370c  5f                   pop edi
// 0070370d  8bc6                 mov eax, esi
// 0070370f  5e                   pop esi
// 00703710  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
