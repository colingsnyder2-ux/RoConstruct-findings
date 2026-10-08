// roc 2007-08 00416a60  unit: VCLuaFunction::?$CComObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00416a60
//
// 00416a60  8b442404             mov eax, dword ptr [esp + 4]
// 00416a64  8b4808               mov ecx, dword ptr [eax + 8]
// 00416a67  034804               add ecx, dword ptr [eax + 4]
// 00416a6a  8b00                 mov eax, dword ptr [eax]
// 00416a6c  ffe0                 jmp eax
// library rbxgs-net/Player.cpp (function ?invoke@?$void_function_obj_invoker0@V?$bind_t@XV?$mf0@XVPlayer@Network@RBX@@@_mfi@boost@@V?$list1@V?$value@V?$shared_ptr@VPlayer@Network@RBX@@@boost@@@_bi@boost@@@_bi@3@@_bi@boost@@X@function@detail@boost@@SAXAATfunction_buffer@234@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
