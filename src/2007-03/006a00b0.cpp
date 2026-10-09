// roc 2007-03 006a00b0  unit: seg_006a0000  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006a00b0
//
// 006a00b0  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006a00b6  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 006a00bc  83ec10               sub esp, 0x10
// 006a00bf  56                   push esi
// 006a00c0  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a00c4  8906                 mov dword ptr [esi], eax
// 006a00c6  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 006a00cc  895604               mov dword ptr [esi + 4], edx
// 006a00cf  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 006a00d5  894608               mov dword ptr [esi + 8], eax
// 006a00d8  8b01                 mov eax, dword ptr [ecx]
// 006a00da  8b8048010000         mov eax, dword ptr [eax + 0x148]
// 006a00e0  89560c               mov dword ptr [esi + 0xc], edx
// 006a00e3  8d542404             lea edx, [esp + 4]
// 006a00e7  52                   push edx
// 006a00e8  ffd0                 call eax
// 006a00ea  8b08                 mov ecx, dword ptr [eax]
// 006a00ec  8b5004               mov edx, dword ptr [eax + 4]
// 006a00ef  010e                 add dword ptr [esi], ecx
// 006a00f1  015604               add dword ptr [esi + 4], edx
// 006a00f4  8b4808               mov ecx, dword ptr [eax + 8]
// 006a00f7  8b500c               mov edx, dword ptr [eax + 0xc]
// 006a00fa  294e08               sub dword ptr [esi + 8], ecx
// 006a00fd  29560c               sub dword ptr [esi + 0xc], edx
// 006a0100  8bc6                 mov eax, esi
// 006a0102  5e                   pop esi
// 006a0103  83c410               add esp, 0x10
// 006a0106  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemsRect@CXTPControlGallery@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
