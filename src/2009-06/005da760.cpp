// roc 2009-06 005da760  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005da760
//
// 005da760  83ec08               sub esp, 8
// 005da763  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005da767  8b442418             mov eax, dword ptr [esp + 0x18]
// 005da76b  53                   push ebx
// 005da76c  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005da770  56                   push esi
// 005da771  57                   push edi
// 005da772  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005da776  8bd7                 mov edx, edi
// 005da778  2bd3                 sub edx, ebx
// 005da77a  894c2410             mov dword ptr [esp + 0x10], ecx
// 005da77e  52                   push edx
// 005da77f  8d4c2410             lea ecx, [esp + 0x10]
// 005da783  89442410             mov dword ptr [esp + 0x10], eax
// 005da787  e8045fe9ff           call 0x470690
// 005da78c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005da790  8b742418             mov esi, dword ptr [esp + 0x18]
// 005da794  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005da798  c644242000           mov byte ptr [esp + 0x20], 0
// 005da79d  8b542420             mov edx, dword ptr [esp + 0x20]
// 005da7a1  52                   push edx
// 005da7a2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005da7a6  8906                 mov dword ptr [esi], eax
// 005da7a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005da7ac  50                   push eax
// 005da7ad  894e04               mov dword ptr [esi + 4], ecx
// 005da7b0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005da7b4  51                   push ecx
// 005da7b5  52                   push edx
// 005da7b6  57                   push edi
// 005da7b7  53                   push ebx
// 005da7b8  e873f6ffff           call 0x5d9e30
// 005da7bd  83c418               add esp, 0x18
// 005da7c0  5f                   pop edi
// 005da7c1  8bc6                 mov eax, esi
// 005da7c3  5e                   pop esi
// 005da7c4  5b                   pop ebx
// 005da7c5  83c408               add esp, 8
// 005da7c8  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
