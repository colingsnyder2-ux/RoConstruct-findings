// roc 2009-06 007f9750  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f9750
//
// 007f9750  56                   push esi
// 007f9751  8b742408             mov esi, dword ptr [esp + 8]
// 007f9755  57                   push edi
// 007f9756  8bf9                 mov edi, ecx
// 007f9758  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007f975b  8b4840               mov ecx, dword ptr [eax + 0x40]
// 007f975e  8b5044               mov edx, dword ptr [eax + 0x44]
// 007f9761  890e                 mov dword ptr [esi], ecx
// 007f9763  8b4848               mov ecx, dword ptr [eax + 0x48]
// 007f9766  895604               mov dword ptr [esi + 4], edx
// 007f9769  8b504c               mov edx, dword ptr [eax + 0x4c]
// 007f976c  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007f9772  894e08               mov dword ptr [esi + 8], ecx
// 007f9775  89560c               mov dword ptr [esi + 0xc], edx
// 007f9778  8b10                 mov edx, dword ptr [eax]
// 007f977a  8bc8                 mov ecx, eax
// 007f977c  8b4228               mov eax, dword ptr [edx + 0x28]
// 007f977f  ffd0                 call eax
// 007f9781  85c0                 test eax, eax
// 007f9783  7427                 je 0x7f97ac
// 007f9785  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007f9788  83793800             cmp dword ptr [ecx + 0x38], 0
// 007f978c  751e                 jne 0x7f97ac
// 007f978e  e8ddc5ffff           call 0x7f5d70
// 007f9793  85c0                 test eax, eax
// 007f9795  740d                 je 0x7f97a4
// 007f9797  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 007f979a  e8d1c5ffff           call 0x7f5d70
// 007f979f  83f801               cmp eax, 1
// 007f97a2  7504                 jne 0x7f97a8
// 007f97a4  83460c02             add dword ptr [esi + 0xc], 2
// 007f97a8  83460802             add dword ptr [esi + 8], 2
// 007f97ac  5f                   pop edi
// 007f97ad  8bc6                 mov eax, esi
// 007f97af  5e                   pop esi
// 007f97b0  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
