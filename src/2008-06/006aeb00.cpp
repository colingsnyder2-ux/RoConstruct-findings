// from server: 100% by auto
// roc 2008-06 006aeb00  unit: CXTPPaintManager  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006aeb00
//
// 006aeb00  8b01                 mov eax, dword ptr [ecx]
// 006aeb02  56                   push esi
// 006aeb03  8b742408             mov esi, dword ptr [esp + 8]
// 006aeb07  8906                 mov dword ptr [esi], eax
// 006aeb09  8b5104               mov edx, dword ptr [ecx + 4]
// 006aeb0c  895604               mov dword ptr [esi + 4], edx
// 006aeb0f  8b4108               mov eax, dword ptr [ecx + 8]
// 006aeb12  8b542410             mov edx, dword ptr [esp + 0x10]
// 006aeb16  894608               mov dword ptr [esi + 8], eax
// 006aeb19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006aeb1d  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 006aeb20  52                   push edx
// 006aeb21  50                   push eax
// 006aeb22  56                   push esi
// 006aeb23  894e0c               mov dword ptr [esi + 0xc], ecx
// 006aeb26  ff15682d8000         call dword ptr [0x802d68]
// 006aeb2c  8bc6                 mov eax, esi
// 006aeb2e  5e                   pop esi
// 006aeb2f  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ??HCRect@@QBE?AV0@UtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
