// roc 2010-06 008884a0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008884a0
//
// 008884a0  56                   push esi
// 008884a1  8b742408             mov esi, dword ptr [esp + 8]
// 008884a5  57                   push edi
// 008884a6  8bf9                 mov edi, ecx
// 008884a8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008884ab  8b4840               mov ecx, dword ptr [eax + 0x40]
// 008884ae  8b5044               mov edx, dword ptr [eax + 0x44]
// 008884b1  890e                 mov dword ptr [esi], ecx
// 008884b3  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008884b6  895604               mov dword ptr [esi + 4], edx
// 008884b9  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008884bc  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008884c2  894e08               mov dword ptr [esi + 8], ecx
// 008884c5  89560c               mov dword ptr [esi + 0xc], edx
// 008884c8  8b10                 mov edx, dword ptr [eax]
// 008884ca  8bc8                 mov ecx, eax
// 008884cc  8b4228               mov eax, dword ptr [edx + 0x28]
// 008884cf  ffd0                 call eax
// 008884d1  85c0                 test eax, eax
// 008884d3  7427                 je 0x8884fc
// 008884d5  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008884d8  83793800             cmp dword ptr [ecx + 0x38], 0
// 008884dc  751e                 jne 0x8884fc
// 008884de  e80dc6ffff           call 0x884af0
// 008884e3  85c0                 test eax, eax
// 008884e5  740d                 je 0x8884f4
// 008884e7  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008884ea  e801c6ffff           call 0x884af0
// 008884ef  83f801               cmp eax, 1
// 008884f2  7504                 jne 0x8884f8
// 008884f4  83460c02             add dword ptr [esi + 0xc], 2
// 008884f8  83460802             add dword ptr [esi + 8], 2
// 008884fc  5f                   pop edi
// 008884fd  8bc6                 mov eax, esi
// 008884ff  5e                   pop esi
// 00888500  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
