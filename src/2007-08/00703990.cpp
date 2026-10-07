// roc 2007-08 00703990  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703990
//
// 00703990  8b442408             mov eax, dword ptr [esp + 8]
// 00703994  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00703997  56                   push esi
// 00703998  8b742408             mov esi, dword ptr [esp + 8]
// 0070399c  890e                 mov dword ptr [esi], ecx
// 0070399e  8b5048               mov edx, dword ptr [eax + 0x48]
// 007039a1  895604               mov dword ptr [esi + 4], edx
// 007039a4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 007039a7  6a02                 push 2
// 007039a9  894e08               mov dword ptr [esi + 8], ecx
// 007039ac  8b5050               mov edx, dword ptr [eax + 0x50]
// 007039af  6a02                 push 2
// 007039b1  56                   push esi
// 007039b2  89560c               mov dword ptr [esi + 0xc], edx
// 007039b5  ff1590ed7700         call dword ptr [0x77ed90]
// 007039bb  8bc6                 mov eax, esi
// 007039bd  5e                   pop esi
// 007039be  c20800               ret 8
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
