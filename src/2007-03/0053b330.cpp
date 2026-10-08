// roc 2007-03 0053b330  unit: seg_00530000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053b330
//
// 0053b330  51                   push ecx
// 0053b331  56                   push esi
// 0053b332  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053b336  83c104               add ecx, 4
// 0053b339  51                   push ecx
// 0053b33a  56                   push esi
// 0053b33b  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0053b343  e8c8faffff           call 0x53ae10
// 0053b348  83c408               add esp, 8
// 0053b34b  8bc6                 mov eax, esi
// 0053b34d  5e                   pop esi
// 0053b34e  59                   pop ecx
// 0053b34f  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$cast@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@Value@Reflection@RBX@@QBE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
