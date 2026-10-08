// from server: 100% by auto
// roc 2008-06 0064fad0  unit: RBX::ImageKeyButton  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064fad0
//
// 0064fad0  83ec08               sub esp, 8
// 0064fad3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064fad7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0064fadb  53                   push ebx
// 0064fadc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0064fae0  56                   push esi
// 0064fae1  57                   push edi
// 0064fae2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0064fae6  8bd7                 mov edx, edi
// 0064fae8  2bd3                 sub edx, ebx
// 0064faea  894c2410             mov dword ptr [esp + 0x10], ecx
// 0064faee  52                   push edx
// 0064faef  8d4c2410             lea ecx, [esp + 0x10]
// 0064faf3  89442410             mov dword ptr [esp + 0x10], eax
// 0064faf7  e844d4e1ff           call 0x46cf40
// 0064fafc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0064fb00  8b742418             mov esi, dword ptr [esp + 0x18]
// 0064fb04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0064fb08  c644242000           mov byte ptr [esp + 0x20], 0
// 0064fb0d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0064fb11  52                   push edx
// 0064fb12  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0064fb16  8906                 mov dword ptr [esi], eax
// 0064fb18  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064fb1c  50                   push eax
// 0064fb1d  894e04               mov dword ptr [esi + 4], ecx
// 0064fb20  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0064fb24  51                   push ecx
// 0064fb25  52                   push edx
// 0064fb26  57                   push edi
// 0064fb27  53                   push ebx
// 0064fb28  e853ffffff           call 0x64fa80
// 0064fb2d  83c418               add esp, 0x18
// 0064fb30  5f                   pop edi
// 0064fb31  8bc6                 mov eax, esi
// 0064fb33  5e                   pop esi
// 0064fb34  5b                   pop ebx
// 0064fb35  83c408               add esp, 8
// 0064fb38  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
