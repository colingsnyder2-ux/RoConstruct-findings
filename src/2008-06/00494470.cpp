// roc 2008-06 00494470  unit: RBX::Network::Player  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494470
//
// 00494470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00494474  83f803               cmp eax, 3
// 00494477  741e                 je 0x494497
// 00494479  8b542408             mov edx, dword ptr [esp + 8]
// 0049447d  c644240c00           mov byte ptr [esp + 0xc], 0
// 00494482  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00494486  51                   push ecx
// 00494487  50                   push eax
// 00494488  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049448c  52                   push edx
// 0049448d  50                   push eax
// 0049448e  e84df2ffff           call 0x4936e0
// 00494493  83c410               add esp, 0x10
// 00494496  c3                   ret 
// 00494497  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049449b  c701e8769300         mov dword ptr [ecx], 0x9376e8
// 004944a1  c3                   ret 
// library rbxgs-net/Player.cpp (function ?manage@?$functor_manager@U?$token_finderF@U?$is_any_ofF@D@detail@algorithm@boost@@@detail@algorithm@boost@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@SAXABTfunction_buffer@234@AAT5234@W4functor_manager_operation_type@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
