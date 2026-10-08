// from server: 100% by auto
// roc 2009-06 004706f0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004706f0
//
// 004706f0  83ec08               sub esp, 8
// 004706f3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004706f7  8b442418             mov eax, dword ptr [esp + 0x18]
// 004706fb  53                   push ebx
// 004706fc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00470700  56                   push esi
// 00470701  57                   push edi
// 00470702  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00470706  8bd7                 mov edx, edi
// 00470708  2bd3                 sub edx, ebx
// 0047070a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047070e  52                   push edx
// 0047070f  8d4c2410             lea ecx, [esp + 0x10]
// 00470713  89442410             mov dword ptr [esp + 0x10], eax
// 00470717  e874ffffff           call 0x470690
// 0047071c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00470720  8b742418             mov esi, dword ptr [esp + 0x18]
// 00470724  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00470728  c644242000           mov byte ptr [esp + 0x20], 0
// 0047072d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00470731  52                   push edx
// 00470732  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00470736  8906                 mov dword ptr [esi], eax
// 00470738  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047073c  50                   push eax
// 0047073d  894e04               mov dword ptr [esi + 4], ecx
// 00470740  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00470744  51                   push ecx
// 00470745  52                   push edx
// 00470746  57                   push edi
// 00470747  53                   push ebx
// 00470748  e803ffffff           call 0x470650
// 0047074d  83c418               add esp, 0x18
// 00470750  5f                   pop edi
// 00470751  8bc6                 mov eax, esi
// 00470753  5e                   pop esi
// 00470754  5b                   pop ebx
// 00470755  83c408               add esp, 8
// 00470758  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
