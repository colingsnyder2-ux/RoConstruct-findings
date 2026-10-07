// roc 2009-06 00470650  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00470650
//
// 00470650  53                   push ebx
// 00470651  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00470655  56                   push esi
// 00470656  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047065a  3bf3                 cmp esi, ebx
// 0047065c  7422                 je 0x470680
// 0047065e  55                   push ebp
// 0047065f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00470663  57                   push edi
// 00470664  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00470668  0fbe06               movsx eax, byte ptr [esi]
// 0047066b  50                   push eax
// 0047066c  ffd5                 call ebp
// 0047066e  8807                 mov byte ptr [edi], al
// 00470670  46                   inc esi
// 00470671  83c404               add esp, 4
// 00470674  47                   inc edi
// 00470675  3bf3                 cmp esi, ebx
// 00470677  75ef                 jne 0x470668
// 00470679  8bc7                 mov eax, edi
// 0047067b  5f                   pop edi
// 0047067c  5d                   pop ebp
// 0047067d  5e                   pop esi
// 0047067e  5b                   pop ebx
// 0047067f  c3                   ret 
// 00470680  8b442414             mov eax, dword ptr [esp + 0x14]
// 00470684  5e                   pop esi
// 00470685  5b                   pop ebx
// 00470686  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
