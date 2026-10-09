// roc 2009-06 004be110  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be110
//
// 004be110  56                   push esi
// 004be111  8b742408             mov esi, dword ptr [esp + 8]
// 004be115  57                   push edi
// 004be116  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004be11a  3bf7                 cmp esi, edi
// 004be11c  7417                 je 0x4be135
// 004be11e  8bff                 mov edi, edi
// 004be120  8b0e                 mov ecx, dword ptr [esi]
// 004be122  85c9                 test ecx, ecx
// 004be124  7408                 je 0x4be12e
// 004be126  8b01                 mov eax, dword ptr [ecx]
// 004be128  8b10                 mov edx, dword ptr [eax]
// 004be12a  6a01                 push 1
// 004be12c  ffd2                 call edx
// 004be12e  83c604               add esi, 4
// 004be131  3bf7                 cmp esi, edi
// 004be133  75eb                 jne 0x4be120
// 004be135  5f                   pop edi
// 004be136  5e                   pop esi
// 004be137  c20800               ret 8
// library openrbx-client/App\util\RunStateOwner.cpp (function ?_Destroy@?$vector@Vany@boost@@V?$allocator@Vany@boost@@@std@@@std@@IAEXPAVany@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
