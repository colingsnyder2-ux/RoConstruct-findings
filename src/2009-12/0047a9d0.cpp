// roc 2009-12 0047a9d0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047a9d0
//
// 0047a9d0  83ec08               sub esp, 8
// 0047a9d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0047a9d7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0047a9db  53                   push ebx
// 0047a9dc  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0047a9e0  56                   push esi
// 0047a9e1  57                   push edi
// 0047a9e2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0047a9e6  8bd7                 mov edx, edi
// 0047a9e8  2bd3                 sub edx, ebx
// 0047a9ea  894c2410             mov dword ptr [esp + 0x10], ecx
// 0047a9ee  52                   push edx
// 0047a9ef  8d4c2410             lea ecx, [esp + 0x10]
// 0047a9f3  89442410             mov dword ptr [esp + 0x10], eax
// 0047a9f7  e8b4feffff           call 0x47a8b0
// 0047a9fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047aa00  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047aa04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047aa08  c644242000           mov byte ptr [esp + 0x20], 0
// 0047aa0d  8b542420             mov edx, dword ptr [esp + 0x20]
// 0047aa11  52                   push edx
// 0047aa12  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0047aa16  8906                 mov dword ptr [esi], eax
// 0047aa18  8b442424             mov eax, dword ptr [esp + 0x24]
// 0047aa1c  50                   push eax
// 0047aa1d  894e04               mov dword ptr [esi + 4], ecx
// 0047aa20  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0047aa24  51                   push ecx
// 0047aa25  52                   push edx
// 0047aa26  57                   push edi
// 0047aa27  53                   push ebx
// 0047aa28  e843feffff           call 0x47a870
// 0047aa2d  83c418               add esp, 0x18
// 0047aa30  5f                   pop edi
// 0047aa31  8bc6                 mov eax, esi
// 0047aa33  5e                   pop esi
// 0047aa34  5b                   pop ebx
// 0047aa35  83c408               add esp, 8
// 0047aa38  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
