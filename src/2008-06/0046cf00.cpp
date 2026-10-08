// from server: 100% by auto
// roc 2008-06 0046cf00  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046cf00
//
// 0046cf00  53                   push ebx
// 0046cf01  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0046cf05  56                   push esi
// 0046cf06  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0046cf0a  3bf3                 cmp esi, ebx
// 0046cf0c  7422                 je 0x46cf30
// 0046cf0e  55                   push ebp
// 0046cf0f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0046cf13  57                   push edi
// 0046cf14  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0046cf18  0fbe06               movsx eax, byte ptr [esi]
// 0046cf1b  50                   push eax
// 0046cf1c  ffd5                 call ebp
// 0046cf1e  8807                 mov byte ptr [edi], al
// 0046cf20  46                   inc esi
// 0046cf21  83c404               add esp, 4
// 0046cf24  47                   inc edi
// 0046cf25  3bf3                 cmp esi, ebx
// 0046cf27  75ef                 jne 0x46cf18
// 0046cf29  8bc7                 mov eax, edi
// 0046cf2b  5f                   pop edi
// 0046cf2c  5d                   pop ebp
// 0046cf2d  5e                   pop esi
// 0046cf2e  5b                   pop ebx
// 0046cf2f  c3                   ret 
// 0046cf30  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046cf34  5e                   pop esi
// 0046cf35  5b                   pop ebx
// 0046cf36  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
