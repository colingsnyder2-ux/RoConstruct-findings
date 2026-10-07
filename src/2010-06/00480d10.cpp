// roc 2010-06 00480d10  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00480d10
//
// 00480d10  53                   push ebx
// 00480d11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00480d15  56                   push esi
// 00480d16  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00480d1a  3bf3                 cmp esi, ebx
// 00480d1c  7422                 je 0x480d40
// 00480d1e  55                   push ebp
// 00480d1f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00480d23  57                   push edi
// 00480d24  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00480d28  0fbe06               movsx eax, byte ptr [esi]
// 00480d2b  50                   push eax
// 00480d2c  ffd5                 call ebp
// 00480d2e  8807                 mov byte ptr [edi], al
// 00480d30  46                   inc esi
// 00480d31  83c404               add esp, 4
// 00480d34  47                   inc edi
// 00480d35  3bf3                 cmp esi, ebx
// 00480d37  75ef                 jne 0x480d28
// 00480d39  8bc7                 mov eax, edi
// 00480d3b  5f                   pop edi
// 00480d3c  5d                   pop ebp
// 00480d3d  5e                   pop esi
// 00480d3e  5b                   pop ebx
// 00480d3f  c3                   ret 
// 00480d40  8b442414             mov eax, dword ptr [esp + 0x14]
// 00480d44  5e                   pop esi
// 00480d45  5b                   pop ebx
// 00480d46  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
