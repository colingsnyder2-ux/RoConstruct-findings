// roc 2008-06 0072ee40  unit: CXTPControlGallery  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072ee40
//
// 0072ee40  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 0072ee46  8b91c4000000         mov edx, dword ptr [ecx + 0xc4]
// 0072ee4c  83ec10               sub esp, 0x10
// 0072ee4f  56                   push esi
// 0072ee50  8b742418             mov esi, dword ptr [esp + 0x18]
// 0072ee54  8906                 mov dword ptr [esi], eax
// 0072ee56  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0072ee5c  895604               mov dword ptr [esi + 4], edx
// 0072ee5f  8b91cc000000         mov edx, dword ptr [ecx + 0xcc]
// 0072ee65  894608               mov dword ptr [esi + 8], eax
// 0072ee68  8b01                 mov eax, dword ptr [ecx]
// 0072ee6a  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 0072ee70  89560c               mov dword ptr [esi + 0xc], edx
// 0072ee73  8d542404             lea edx, [esp + 4]
// 0072ee77  52                   push edx
// 0072ee78  ffd0                 call eax
// 0072ee7a  8b08                 mov ecx, dword ptr [eax]
// 0072ee7c  8b5004               mov edx, dword ptr [eax + 4]
// 0072ee7f  010e                 add dword ptr [esi], ecx
// 0072ee81  015604               add dword ptr [esi + 4], edx
// 0072ee84  8b4808               mov ecx, dword ptr [eax + 8]
// 0072ee87  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072ee8a  294e08               sub dword ptr [esi + 8], ecx
// 0072ee8d  29560c               sub dword ptr [esi + 0xc], edx
// 0072ee90  8bc6                 mov eax, esi
// 0072ee92  5e                   pop esi
// 0072ee93  83c410               add esp, 0x10
// 0072ee96  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?GetItemsRect@CXTPControlGallery@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp
