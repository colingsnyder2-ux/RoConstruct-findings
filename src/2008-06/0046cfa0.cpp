// roc 2008-06 0046cfa0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cfa0
//
// 0046cfa0  83ec08               sub esp, 8
// 0046cfa3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0046cfa7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046cfab  53                   push ebx
// 0046cfac  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0046cfb0  56                   push esi
// 0046cfb1  57                   push edi
// 0046cfb2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0046cfb6  8bd7                 mov edx, edi
// 0046cfb8  2bd3                 sub edx, ebx
// 0046cfba  894c2410             mov dword ptr [esp + 0x10], ecx
// 0046cfbe  52                   push edx
// 0046cfbf  8d4c2410             lea ecx, [esp + 0x10]
// 0046cfc3  89442410             mov dword ptr [esp + 0x10], eax
// 0046cfc7  e874ffffff           call 0x46cf40
// 0046cfcc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0046cfd0  8b742418             mov esi, dword ptr [esp + 0x18]
// 0046cfd4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046cfd8  c644242000           mov byte ptr [esp + 0x20], 0
// 0046cfdd  8b542420             mov edx, dword ptr [esp + 0x20]
// 0046cfe1  52                   push edx
// 0046cfe2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0046cfe6  8906                 mov dword ptr [esi], eax
// 0046cfe8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0046cfec  50                   push eax
// 0046cfed  894e04               mov dword ptr [esi + 4], ecx
// 0046cff0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0046cff4  51                   push ecx
// 0046cff5  52                   push edx
// 0046cff6  57                   push edi
// 0046cff7  53                   push ebx
// 0046cff8  e803ffffff           call 0x46cf00
// 0046cffd  83c418               add esp, 0x18
// 0046d000  5f                   pop edi
// 0046d001  8bc6                 mov eax, esi
// 0046d003  5e                   pop esi
// 0046d004  5b                   pop ebx
// 0046d005  83c408               add esp, 8
// 0046d008  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
