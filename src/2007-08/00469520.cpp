// from server: 100% by auto
// roc 2007-08 00469520  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00469520
//
// 00469520  83ec08               sub esp, 8
// 00469523  8b442418             mov eax, dword ptr [esp + 0x18]
// 00469527  53                   push ebx
// 00469528  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0046952c  55                   push ebp
// 0046952d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00469531  56                   push esi
// 00469532  57                   push edi
// 00469533  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00469537  8bcb                 mov ecx, ebx
// 00469539  2bcd                 sub ecx, ebp
// 0046953b  51                   push ecx
// 0046953c  8d4c2414             lea ecx, [esp + 0x14]
// 00469540  89442414             mov dword ptr [esp + 0x14], eax
// 00469544  897c2418             mov dword ptr [esp + 0x18], edi
// 00469548  e833ffffff           call 0x469480
// 0046954d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00469551  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00469555  8b442414             mov eax, dword ptr [esp + 0x14]
// 00469559  c644242400           mov byte ptr [esp + 0x24], 0
// 0046955e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00469562  51                   push ecx
// 00469563  8916                 mov dword ptr [esi], edx
// 00469565  8b542428             mov edx, dword ptr [esp + 0x28]
// 00469569  52                   push edx
// 0046956a  894604               mov dword ptr [esi + 4], eax
// 0046956d  8b442438             mov eax, dword ptr [esp + 0x38]
// 00469571  50                   push eax
// 00469572  57                   push edi
// 00469573  53                   push ebx
// 00469574  55                   push ebp
// 00469575  e866ffffff           call 0x4694e0
// 0046957a  83c418               add esp, 0x18
// 0046957d  5f                   pop edi
// 0046957e  8bc6                 mov eax, esi
// 00469580  5e                   pop esi
// 00469581  5d                   pop ebp
// 00469582  5b                   pop ebx
// 00469583  83c408               add esp, 8
// 00469586  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
