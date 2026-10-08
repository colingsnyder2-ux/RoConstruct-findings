// roc 2009-06 004d0d40  unit: RBX::Network::VClient::?$FactoryProduct  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d0d40
//
// 004d0d40  8b442404             mov eax, dword ptr [esp + 4]
// 004d0d44  8b4808               mov ecx, dword ptr [eax + 8]
// 004d0d47  034804               add ecx, dword ptr [eax + 4]
// 004d0d4a  8b00                 mov eax, dword ptr [eax]
// 004d0d4c  ffe0                 jmp eax
// library rbxgs-net/Player.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf0@XVPlayer@Network@RBX@@@_mfi@boost@@V?$list1@V?$value@V?$shared_ptr@VPlayer@Network@RBX@@@boost@@@_bi@boost@@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
