// roc 2009-12 0047a870  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047a870
//
// 0047a870  53                   push ebx
// 0047a871  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047a875  56                   push esi
// 0047a876  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0047a87a  3bf3                 cmp esi, ebx
// 0047a87c  7422                 je 0x47a8a0
// 0047a87e  55                   push ebp
// 0047a87f  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0047a883  57                   push edi
// 0047a884  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0047a888  0fbe06               movsx eax, byte ptr [esi]
// 0047a88b  50                   push eax
// 0047a88c  ffd5                 call ebp
// 0047a88e  8807                 mov byte ptr [edi], al
// 0047a890  46                   inc esi
// 0047a891  83c404               add esp, 4
// 0047a894  47                   inc edi
// 0047a895  3bf3                 cmp esi, ebx
// 0047a897  75ef                 jne 0x47a888
// 0047a899  8bc7                 mov eax, edi
// 0047a89b  5f                   pop edi
// 0047a89c  5d                   pop ebp
// 0047a89d  5e                   pop esi
// 0047a89e  5b                   pop ebx
// 0047a89f  c3                   ret 
// 0047a8a0  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047a8a4  5e                   pop esi
// 0047a8a5  5b                   pop ebx
// 0047a8a6  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ??$_Transform@PADPADP6AHH@ZUforward_iterator_tag@std@@@std@@YAPADPAD00P6AHH@ZUforward_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
