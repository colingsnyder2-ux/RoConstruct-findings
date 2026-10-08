// from server: 100% by auto
// roc 2007-08 004694e0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004694e0
//
// 004694e0  53                   push ebx
// 004694e1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 004694e5  56                   push esi
// 004694e6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004694ea  3bf3                 cmp esi, ebx
// 004694ec  7426                 je 0x469514
// 004694ee  55                   push ebp
// 004694ef  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 004694f3  57                   push edi
// 004694f4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004694f8  0fbe06               movsx eax, byte ptr [esi]
// 004694fb  50                   push eax
// 004694fc  ffd5                 call ebp
// 004694fe  8807                 mov byte ptr [edi], al
// 00469500  83c601               add esi, 1
// 00469503  83c404               add esp, 4
// 00469506  83c701               add edi, 1
// 00469509  3bf3                 cmp esi, ebx
// 0046950b  75eb                 jne 0x4694f8
// 0046950d  8bc7                 mov eax, edi
// 0046950f  5f                   pop edi
// 00469510  5d                   pop ebp
// 00469511  5e                   pop esi
// 00469512  5b                   pop ebx
// 00469513  c3                   ret 
// 00469514  8b442414             mov eax, dword ptr [esp + 0x14]
// 00469518  5e                   pop esi
// 00469519  5b                   pop ebx
// 0046951a  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
