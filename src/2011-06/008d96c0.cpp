// roc 2011-06 008d96c0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d96c0
//
// 008d96c0  8b442408             mov eax, dword ptr [esp + 8]
// 008d96c4  8b4844               mov ecx, dword ptr [eax + 0x44]
// 008d96c7  56                   push esi
// 008d96c8  8b742408             mov esi, dword ptr [esp + 8]
// 008d96cc  890e                 mov dword ptr [esi], ecx
// 008d96ce  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d96d1  895604               mov dword ptr [esi + 4], edx
// 008d96d4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 008d96d7  6a02                 push 2
// 008d96d9  894e08               mov dword ptr [esi + 8], ecx
// 008d96dc  8b5050               mov edx, dword ptr [eax + 0x50]
// 008d96df  6a02                 push 2
// 008d96e1  56                   push esi
// 008d96e2  89560c               mov dword ptr [esi + 0xc], edx
// 008d96e5  ff15e41ba400         call dword ptr [0xa41be4]
// 008d96eb  8bc6                 mov eax, esi
// 008d96ed  5e                   pop esi
// 008d96ee  c20800               ret 8
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CXTPTabPaintManagerAppearanceSet@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
