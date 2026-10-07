// roc 2008-06 00781090  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781090
//
// 00781090  56                   push esi
// 00781091  8b742408             mov esi, dword ptr [esp + 8]
// 00781095  57                   push edi
// 00781096  8bf9                 mov edi, ecx
// 00781098  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0078109b  8b4840               mov ecx, dword ptr [eax + 0x40]
// 0078109e  8b5044               mov edx, dword ptr [eax + 0x44]
// 007810a1  890e                 mov dword ptr [esi], ecx
// 007810a3  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007810a6  895604               mov dword ptr [esi + 4], edx
// 007810a9  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007810ac  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007810b2  894e08               mov dword ptr [esi + 8], ecx
// 007810b5  89560c               mov dword ptr [esi + 0xc], edx
// 007810b8  8b10                 mov edx, dword ptr [eax]
// 007810ba  8bc8                 mov ecx, eax
// 007810bc  8b4228               mov eax, dword ptr [edx + 0x28]
// 007810bf  ffd0                 call eax
// 007810c1  85c0                 test eax, eax
// 007810c3  7427                 je 0x7810ec
// 007810c5  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007810c8  83793800             cmp dword ptr [ecx + 0x38], 0
// 007810cc  751e                 jne 0x7810ec
// 007810ce  e8edc5ffff           call 0x77d6c0
// 007810d3  85c0                 test eax, eax
// 007810d5  740d                 je 0x7810e4
// 007810d7  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007810da  e8e1c5ffff           call 0x77d6c0
// 007810df  83f801               cmp eax, 1
// 007810e2  7504                 jne 0x7810e8
// 007810e4  83460c02             add dword ptr [esi + 0xc], 2
// 007810e8  83460802             add dword ptr [esi + 8], 2
// 007810ec  5f                   pop edi
// 007810ed  8bc6                 mov eax, esi
// 007810ef  5e                   pop esi
// 007810f0  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
