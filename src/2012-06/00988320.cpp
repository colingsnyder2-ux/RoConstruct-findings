// roc 2012-06 00988320  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988320
//
// 00988320  8b01                 mov eax, dword ptr [ecx]
// 00988322  56                   push esi
// 00988323  8b742408             mov esi, dword ptr [esp + 8]
// 00988327  8906                 mov dword ptr [esi], eax
// 00988329  8b5104               mov edx, dword ptr [ecx + 4]
// 0098832c  895604               mov dword ptr [esi + 4], edx
// 0098832f  8b4108               mov eax, dword ptr [ecx + 8]
// 00988332  8b542410             mov edx, dword ptr [esp + 0x10]
// 00988336  894608               mov dword ptr [esi + 8], eax
// 00988339  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0098833d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00988340  52                   push edx
// 00988341  50                   push eax
// 00988342  56                   push esi
// 00988343  894e0c               mov dword ptr [esi + 0xc], ecx
// 00988346  ff15f43ab200         call dword ptr [0xb23af4]
// 0098834c  8bc6                 mov eax, esi
// 0098834e  5e                   pop esi
// 0098834f  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ??HCRect@@QBE?AV0@UtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
