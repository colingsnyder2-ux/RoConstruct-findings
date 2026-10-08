// from server: 100% by auto
// roc 2007-08 0061c6e0  unit: RBX::Network::VPlayers::?$Listener  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061c6e0
//
// 0061c6e0  83ec08               sub esp, 8
// 0061c6e3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061c6e7  53                   push ebx
// 0061c6e8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0061c6ec  55                   push ebp
// 0061c6ed  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0061c6f1  56                   push esi
// 0061c6f2  57                   push edi
// 0061c6f3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0061c6f7  8bcb                 mov ecx, ebx
// 0061c6f9  2bcd                 sub ecx, ebp
// 0061c6fb  51                   push ecx
// 0061c6fc  8d4c2414             lea ecx, [esp + 0x14]
// 0061c700  89442414             mov dword ptr [esp + 0x14], eax
// 0061c704  897c2418             mov dword ptr [esp + 0x18], edi
// 0061c708  e873cde4ff           call 0x469480
// 0061c70d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061c711  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0061c715  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061c719  c644242400           mov byte ptr [esp + 0x24], 0
// 0061c71e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061c722  51                   push ecx
// 0061c723  8916                 mov dword ptr [esi], edx
// 0061c725  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061c729  52                   push edx
// 0061c72a  894604               mov dword ptr [esi + 4], eax
// 0061c72d  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061c731  50                   push eax
// 0061c732  57                   push edi
// 0061c733  53                   push ebx
// 0061c734  55                   push ebp
// 0061c735  e846ffffff           call 0x61c680
// 0061c73a  83c418               add esp, 0x18
// 0061c73d  5f                   pop edi
// 0061c73e  8bc6                 mov eax, esi
// 0061c740  5e                   pop esi
// 0061c741  5d                   pop ebp
// 0061c742  5b                   pop ebx
// 0061c743  83c408               add esp, 8
// 0061c746  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
