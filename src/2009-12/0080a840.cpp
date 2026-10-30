// roc 2009-12 0080a840  unit: CXTPImageManagerResource::CBitmapDC  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a840
//
// 0080a840  83ec08               sub esp, 8
// 0080a843  56                   push esi
// 0080a844  8bf1                 mov esi, ecx
// 0080a846  e8b5ffffff           call 0x80a800
// 0080a84b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0080a84f  8b01                 mov eax, dword ptr [ecx]
// 0080a851  8906                 mov dword ptr [esi], eax
// 0080a853  8b5104               mov edx, dword ptr [ecx + 4]
// 0080a856  895604               mov dword ptr [esi + 4], edx
// 0080a859  8b4108               mov eax, dword ptr [ecx + 8]
// 0080a85c  894608               mov dword ptr [esi + 8], eax
// 0080a85f  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0080a862  895614               mov dword ptr [esi + 0x14], edx
// 0080a865  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0080a868  894610               mov dword ptr [esi + 0x10], eax
// 0080a86b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0080a86e  8d442404             lea eax, [esp + 4]
// 0080a872  50                   push eax
// 0080a873  895620               mov dword ptr [esi + 0x20], edx
// 0080a876  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0080a87d  e88ee8ffff           call 0x809110
// 0080a882  8b08                 mov ecx, dword ptr [eax]
// 0080a884  894e18               mov dword ptr [esi + 0x18], ecx
// 0080a887  8b5004               mov edx, dword ptr [eax + 4]
// 0080a88a  89561c               mov dword ptr [esi + 0x1c], edx
// 0080a88d  8bc6                 mov eax, esi
// 0080a88f  5e                   pop esi
// 0080a890  83c408               add esp, 8
// 0080a893  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPImageManagerIconHandle@@QAE@ABV0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp