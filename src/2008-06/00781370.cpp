// roc 2008-06 00781370  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00781370
//
// 00781370  8b442408             mov eax, dword ptr [esp + 8]
// 00781374  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00781377  56                   push esi
// 00781378  8b742408             mov esi, dword ptr [esp + 8]
// 0078137c  890e                 mov dword ptr [esi], ecx
// 0078137e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00781381  895604               mov dword ptr [esi + 4], edx
// 00781384  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00781387  6a02                 push 2
// 00781389  894e08               mov dword ptr [esi + 8], ecx
// 0078138c  8b5050               mov edx, dword ptr [eax + 0x50]
// 0078138f  6a02                 push 2
// 00781391  56                   push esi
// 00781392  89560c               mov dword ptr [esi + 0xc], edx
// 00781395  ff15282d8000         call dword ptr [0x802d28]
// 0078139b  8bc6                 mov eax, esi
// 0078139d  5e                   pop esi
// 0078139e  c20800               ret 8
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
