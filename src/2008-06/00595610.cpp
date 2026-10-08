// from server: 100% by auto
// roc 2008-06 00595610  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00595610
//
// 00595610  57                   push edi
// 00595611  8b7c2408             mov edi, dword ptr [esp + 8]
// 00595615  85ff                 test edi, edi
// 00595617  741d                 je 0x595636
// 00595619  56                   push esi
// 0059561a  8d7710               lea esi, [edi + 0x10]
// 0059561d  8bce                 mov ecx, esi
// 0059561f  e81cd50e00           call 0x682b40
// 00595624  8b06                 mov eax, dword ptr [esi]
// 00595626  50                   push eax
// 00595627  e84eb01000           call 0x6a067a
// 0059562c  57                   push edi
// 0059562d  e848b01000           call 0x6a067a
// 00595632  83c408               add esp, 8
// 00595635  5e                   pop esi
// 00595636  5f                   pop edi
// 00595637  c3                   ret 
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??$checked_delete@Ubasic_connection@detail@signals@boost@@@boost@@YAXPAUbasic_connection@detail@signals@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
