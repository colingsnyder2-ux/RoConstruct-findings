// roc 2007-03 006069b0  unit: seg_00600000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006069b0
//
// 006069b0  83ec08               sub esp, 8
// 006069b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006069b7  53                   push ebx
// 006069b8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006069bc  55                   push ebp
// 006069bd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006069c1  56                   push esi
// 006069c2  57                   push edi
// 006069c3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006069c7  8bcb                 mov ecx, ebx
// 006069c9  2bcd                 sub ecx, ebp
// 006069cb  51                   push ecx
// 006069cc  8d4c2414             lea ecx, [esp + 0x14]
// 006069d0  89442414             mov dword ptr [esp + 0x14], eax
// 006069d4  897c2418             mov dword ptr [esp + 0x18], edi
// 006069d8  e83328e6ff           call 0x469210
// 006069dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 006069e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006069e5  8b442414             mov eax, dword ptr [esp + 0x14]
// 006069e9  c644242400           mov byte ptr [esp + 0x24], 0
// 006069ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006069f2  51                   push ecx
// 006069f3  8916                 mov dword ptr [esi], edx
// 006069f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 006069f9  52                   push edx
// 006069fa  894604               mov dword ptr [esi + 4], eax
// 006069fd  8b442438             mov eax, dword ptr [esp + 0x38]
// 00606a01  50                   push eax
// 00606a02  57                   push edi
// 00606a03  53                   push ebx
// 00606a04  55                   push ebp
// 00606a05  e846ffffff           call 0x606950
// 00606a0a  83c418               add esp, 0x18
// 00606a0d  5f                   pop edi
// 00606a0e  8bc6                 mov eax, esi
// 00606a10  5e                   pop esi
// 00606a11  5d                   pop ebp
// 00606a12  5b                   pop ebx
// 00606a13  83c408               add esp, 8
// 00606a16  c3                   ret 
// library rbxgs-g3d/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/stringutils.cpp
