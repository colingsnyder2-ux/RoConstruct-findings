// roc 2011-06 00810040  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810040
//
// 00810040  8b01                 mov eax, dword ptr [ecx]
// 00810042  56                   push esi
// 00810043  8b742408             mov esi, dword ptr [esp + 8]
// 00810047  8906                 mov dword ptr [esi], eax
// 00810049  8b5104               mov edx, dword ptr [ecx + 4]
// 0081004c  895604               mov dword ptr [esi + 4], edx
// 0081004f  8b4108               mov eax, dword ptr [ecx + 8]
// 00810052  8b542410             mov edx, dword ptr [esp + 0x10]
// 00810056  894608               mov dword ptr [esi + 8], eax
// 00810059  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0081005d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00810060  52                   push edx
// 00810061  50                   push eax
// 00810062  56                   push esi
// 00810063  894e0c               mov dword ptr [esi + 0xc], ecx
// 00810066  ff15601ca400         call dword ptr [0xa41c60]
// 0081006c  8bc6                 mov eax, esi
// 0081006e  5e                   pop esi
// 0081006f  c20c00               ret 0xc
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ??HCRect@@QBE?AV0@UtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
