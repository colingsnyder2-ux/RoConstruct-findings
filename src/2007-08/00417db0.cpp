// roc 2007-08 00417db0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::V?$function::?$holder  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417db0
//
// 00417db0  56                   push esi
// 00417db1  8b742408             mov esi, dword ptr [esp + 8]
// 00417db5  57                   push edi
// 00417db6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00417dba  3bf7                 cmp esi, edi
// 00417dbc  7417                 je 0x417dd5
// 00417dbe  8bff                 mov edi, edi
// 00417dc0  8b0e                 mov ecx, dword ptr [esi]
// 00417dc2  85c9                 test ecx, ecx
// 00417dc4  7408                 je 0x417dce
// 00417dc6  8b01                 mov eax, dword ptr [ecx]
// 00417dc8  8b10                 mov edx, dword ptr [eax]
// 00417dca  6a01                 push 1
// 00417dcc  ffd2                 call edx
// 00417dce  83c604               add esi, 4
// 00417dd1  3bf7                 cmp esi, edi
// 00417dd3  75eb                 jne 0x417dc0
// 00417dd5  5f                   pop edi
// 00417dd6  5e                   pop esi
// 00417dd7  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
