// from server: 100% by auto
// roc 2012-06 00a52390  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a52390
//
// 00a52390  8b442408             mov eax, dword ptr [esp + 8]
// 00a52394  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00a52397  56                   push esi
// 00a52398  8b742408             mov esi, dword ptr [esp + 8]
// 00a5239c  890e                 mov dword ptr [esi], ecx
// 00a5239e  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a523a1  895604               mov dword ptr [esi + 4], edx
// 00a523a4  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 00a523a7  6a02                 push 2
// 00a523a9  894e08               mov dword ptr [esi + 8], ecx
// 00a523ac  8b5050               mov edx, dword ptr [eax + 0x50]
// 00a523af  6a02                 push 2
// 00a523b1  56                   push esi
// 00a523b2  89560c               mov dword ptr [esi + 0xc], edx
// 00a523b5  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a523bb  8bc6                 mov eax, esi
// 00a523bd  5e                   pop esi
// 00a523be  c20800               ret 8
// library xtp-15.2.1/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetButtonDrawRect@CXTPTabPaintManagerAppearanceSet@@UAE?AVCRect@@PBVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabPaintManagerAppearance.cpp
