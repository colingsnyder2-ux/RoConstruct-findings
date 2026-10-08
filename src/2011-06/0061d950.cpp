// roc 2011-06 0061d950  unit: boost::Vbad_lexical_cast::U?$error_info_injector::?$clone_impl  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0061d950
//
// 0061d950  8b442404             mov eax, dword ptr [esp + 4]
// 0061d954  8b4808               mov ecx, dword ptr [eax + 8]
// 0061d957  034804               add ecx, dword ptr [eax + 4]
// 0061d95a  8b00                 mov eax, dword ptr [eax]
// 0061d95c  ffe0                 jmp eax
// library rbxgs-net/Player.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf0@XVPlayer@Network@RBX@@@_mfi@boost@@V?$list1@V?$value@V?$shared_ptr@VPlayer@Network@RBX@@@boost@@@_bi@boost@@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
