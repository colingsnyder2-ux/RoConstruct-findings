// from server: 100% by auto
// roc 2010-06 00480db0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480db0
//
// 00480db0  83ec08               sub esp, 8
// 00480db3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00480db7  8b442418             mov eax, dword ptr [esp + 0x18]
// 00480dbb  53                   push ebx
// 00480dbc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00480dc0  56                   push esi
// 00480dc1  57                   push edi
// 00480dc2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00480dc6  8bd7                 mov edx, edi
// 00480dc8  2bd3                 sub edx, ebx
// 00480dca  894c2410             mov dword ptr [esp + 0x10], ecx
// 00480dce  52                   push edx
// 00480dcf  8d4c2410             lea ecx, [esp + 0x10]
// 00480dd3  89442410             mov dword ptr [esp + 0x10], eax
// 00480dd7  e874ffffff           call 0x480d50
// 00480ddc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00480de0  8b742418             mov esi, dword ptr [esp + 0x18]
// 00480de4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00480de8  c644242000           mov byte ptr [esp + 0x20], 0
// 00480ded  8b542420             mov edx, dword ptr [esp + 0x20]
// 00480df1  52                   push edx
// 00480df2  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00480df6  8906                 mov dword ptr [esi], eax
// 00480df8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00480dfc  50                   push eax
// 00480dfd  894e04               mov dword ptr [esi + 4], ecx
// 00480e00  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00480e04  51                   push ecx
// 00480e05  52                   push edx
// 00480e06  57                   push edi
// 00480e07  53                   push ebx
// 00480e08  e803ffffff           call 0x480d10
// 00480e0d  83c418               add esp, 0x18
// 00480e10  5f                   pop edi
// 00480e11  8bc6                 mov eax, esi
// 00480e13  5e                   pop esi
// 00480e14  5b                   pop ebx
// 00480e15  83c408               add esp, 8
// 00480e18  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
