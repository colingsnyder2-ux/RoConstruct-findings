// roc 2009-12 006be0b0  unit: CPropGrid::UpdateItemsJob  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006be0b0
//
// 006be0b0  83ec08               sub esp, 8
// 006be0b3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006be0b7  8b442418             mov eax, dword ptr [esp + 0x18]
// 006be0bb  53                   push ebx
// 006be0bc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006be0c0  56                   push esi
// 006be0c1  57                   push edi
// 006be0c2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 006be0c6  8bd7                 mov edx, edi
// 006be0c8  2bd3                 sub edx, ebx
// 006be0ca  894c2410             mov dword ptr [esp + 0x10], ecx
// 006be0ce  52                   push edx
// 006be0cf  8d4c2410             lea ecx, [esp + 0x10]
// 006be0d3  89442410             mov dword ptr [esp + 0x10], eax
// 006be0d7  e8d4c7dbff           call 0x47a8b0
// 006be0dc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006be0e0  8b742418             mov esi, dword ptr [esp + 0x18]
// 006be0e4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006be0e8  c644242000           mov byte ptr [esp + 0x20], 0
// 006be0ed  8b542420             mov edx, dword ptr [esp + 0x20]
// 006be0f1  52                   push edx
// 006be0f2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006be0f6  8906                 mov dword ptr [esi], eax
// 006be0f8  8b442424             mov eax, dword ptr [esp + 0x24]
// 006be0fc  50                   push eax
// 006be0fd  894e04               mov dword ptr [esi + 4], ecx
// 006be100  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006be104  51                   push ecx
// 006be105  52                   push edx
// 006be106  57                   push edi
// 006be107  53                   push ebx
// 006be108  e813f7ffff           call 0x6bd820
// 006be10d  83c418               add esp, 0x18
// 006be110  5f                   pop edi
// 006be111  8bc6                 mov eax, esi
// 006be113  5e                   pop esi
// 006be114  5b                   pop ebx
// 006be115  83c408               add esp, 8
// 006be118  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
