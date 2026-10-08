// roc 2007-08 00535a00  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535a00
//
// 00535a00  8b542404             mov edx, dword ptr [esp + 4]
// 00535a04  8bc1                 mov eax, ecx
// 00535a06  8b0a                 mov ecx, dword ptr [edx]
// 00535a08  85c9                 test ecx, ecx
// 00535a0a  7405                 je 0x535a11
// 00535a0c  83c104               add ecx, 4
// 00535a0f  eb02                 jmp 0x535a13
// 00535a11  33c9                 xor ecx, ecx
// 00535a13  8908                 mov dword ptr [eax], ecx
// 00535a15  8b5204               mov edx, dword ptr [edx + 4]
// 00535a18  85d2                 test edx, edx
// 00535a1a  895004               mov dword ptr [eax + 4], edx
// 00535a1d  740c                 je 0x535a2b
// 00535a1f  83c204               add edx, 4
// 00535a22  b901000000           mov ecx, 1
// 00535a27  f00fc10a             lock xadd dword ptr [edx], ecx
// 00535a2b  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VInstance@RBX@@@?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@QAE@ABV?$shared_ptr@VInstance@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
