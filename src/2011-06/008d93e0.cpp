// roc 2011-06 008d93e0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d93e0
//
// 008d93e0  56                   push esi
// 008d93e1  8b742408             mov esi, dword ptr [esp + 8]
// 008d93e5  57                   push edi
// 008d93e6  8bf9                 mov edi, ecx
// 008d93e8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 008d93eb  8b4840               mov ecx, dword ptr [eax + 0x40]
// 008d93ee  8b5044               mov edx, dword ptr [eax + 0x44]
// 008d93f1  890e                 mov dword ptr [esi], ecx
// 008d93f3  8b4848               mov ecx, dword ptr [eax + 0x48]
// 008d93f6  895604               mov dword ptr [esi + 4], edx
// 008d93f9  8b504c               mov edx, dword ptr [eax + 0x4c]
// 008d93fc  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 008d9402  894e08               mov dword ptr [esi + 8], ecx
// 008d9405  89560c               mov dword ptr [esi + 0xc], edx
// 008d9408  8b10                 mov edx, dword ptr [eax]
// 008d940a  8bc8                 mov ecx, eax
// 008d940c  8b4228               mov eax, dword ptr [edx + 0x28]
// 008d940f  ffd0                 call eax
// 008d9411  85c0                 test eax, eax
// 008d9413  7427                 je 0x8d943c
// 008d9415  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d9418  83793800             cmp dword ptr [ecx + 0x38], 0
// 008d941c  751e                 jne 0x8d943c
// 008d941e  e8edc5ffff           call 0x8d5a10
// 008d9423  85c0                 test eax, eax
// 008d9425  740d                 je 0x8d9434
// 008d9427  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 008d942a  e8e1c5ffff           call 0x8d5a10
// 008d942f  83f801               cmp eax, 1
// 008d9432  7504                 jne 0x8d9438
// 008d9434  83460c02             add dword ptr [esi + 0xc], 2
// 008d9438  83460802             add dword ptr [esi + 8], 2
// 008d943c  5f                   pop edi
// 008d943d  8bc6                 mov eax, esi
// 008d943f  5e                   pop esi
// 008d9440  c20400               ret 4
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientMargin@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
