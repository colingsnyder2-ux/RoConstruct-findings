// roc 2007-03 004692b0  unit: seg_00460000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004692b0
//
// 004692b0  83ec08               sub esp, 8
// 004692b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 004692b7  53                   push ebx
// 004692b8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004692bc  55                   push ebp
// 004692bd  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004692c1  56                   push esi
// 004692c2  57                   push edi
// 004692c3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004692c7  8bcb                 mov ecx, ebx
// 004692c9  2bcd                 sub ecx, ebp
// 004692cb  51                   push ecx
// 004692cc  8d4c2414             lea ecx, [esp + 0x14]
// 004692d0  89442414             mov dword ptr [esp + 0x14], eax
// 004692d4  897c2418             mov dword ptr [esp + 0x18], edi
// 004692d8  e833ffffff           call 0x469210
// 004692dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 004692e1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004692e5  8b442414             mov eax, dword ptr [esp + 0x14]
// 004692e9  c644242400           mov byte ptr [esp + 0x24], 0
// 004692ee  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004692f2  51                   push ecx
// 004692f3  8916                 mov dword ptr [esi], edx
// 004692f5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004692f9  52                   push edx
// 004692fa  894604               mov dword ptr [esi + 4], eax
// 004692fd  8b442438             mov eax, dword ptr [esp + 0x38]
// 00469301  50                   push eax
// 00469302  57                   push edi
// 00469303  53                   push ebx
// 00469304  55                   push ebp
// 00469305  e866ffffff           call 0x469270
// 0046930a  83c418               add esp, 0x18
// 0046930d  5f                   pop edi
// 0046930e  8bc6                 mov eax, esi
// 00469310  5e                   pop esi
// 00469311  5d                   pop ebp
// 00469312  5b                   pop ebx
// 00469313  83c408               add esp, 8
// 00469316  c3                   ret 
// library rbxgs-g3d/G3Dcpp\stringutils.cpp (function ??$_Transform@PADV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6AHH@Z@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PAD0V10@P6AHH@ZUrandom_access_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/stringutils.cpp
