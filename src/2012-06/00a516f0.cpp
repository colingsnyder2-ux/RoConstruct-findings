// roc 2012-06 00a516f0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a516f0
//
// 00a516f0  56                   push esi
// 00a516f1  8b742408             mov esi, dword ptr [esp + 8]
// 00a516f5  57                   push edi
// 00a516f6  8bf9                 mov edi, ecx
// 00a516f8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00a516fb  8b4840               mov ecx, dword ptr [eax + 0x40]
// 00a516fe  8b5044               mov edx, dword ptr [eax + 0x44]
// 00a51701  890e                 mov dword ptr [esi], ecx
// 00a51703  8b4848               mov ecx, dword ptr [eax + 0x48]
// 00a51706  895604               mov dword ptr [esi + 4], edx
// 00a51709  8b504c               mov edx, dword ptr [eax + 0x4c]
// 00a5170c  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00a51712  894e08               mov dword ptr [esi + 8], ecx
// 00a51715  89560c               mov dword ptr [esi + 0xc], edx
// 00a51718  8b10                 mov edx, dword ptr [eax]
// 00a5171a  8bc8                 mov ecx, eax
// 00a5171c  8b4228               mov eax, dword ptr [edx + 0x28]
// 00a5171f  ffd0                 call eax
// 00a51721  85c0                 test eax, eax
// 00a51723  7427                 je 0xa5174c
// 00a51725  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00a51728  83793800             cmp dword ptr [ecx + 0x38], 0
// 00a5172c  751e                 jne 0xa5174c
// 00a5172e  e81dc6ffff           call 0xa4dd50
// 00a51733  85c0                 test eax, eax
// 00a51735  740d                 je 0xa51744
// 00a51737  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00a5173a  e811c6ffff           call 0xa4dd50
// 00a5173f  83f801               cmp eax, 1
// 00a51742  7504                 jne 0xa51748
// 00a51744  83460c02             add dword ptr [esi + 0xc], 2
// 00a51748  83460802             add dword ptr [esi + 8], 2
// 00a5174c  5f                   pop edi
// 00a5174d  8bc6                 mov eax, esi
// 00a5174f  5e                   pop esi
// 00a51750  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
