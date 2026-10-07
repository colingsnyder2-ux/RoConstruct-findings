// roc 2009-06 005fed90  unit: RBX::VInstance::?$NonFactoryProduct  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fed90
//
// 005fed90  6aff                 push -1
// 005fed92  68a8688600           push 0x8668a8
// 005fed97  64a100000000         mov eax, dword ptr fs:[0]
// 005fed9d  50                   push eax
// 005fed9e  64892500000000       mov dword ptr fs:[0], esp
// 005feda5  51                   push ecx
// 005feda6  56                   push esi
// 005feda7  8bf1                 mov esi, ecx
// 005feda9  89742404             mov dword ptr [esp + 4], esi
// 005fedad  8b442418             mov eax, dword ptr [esp + 0x18]
// 005fedb1  50                   push eax
// 005fedb2  8d4e04               lea ecx, [esi + 4]
// 005fedb5  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005fedbd  c70618748d00         mov dword ptr [esi], 0x8d7418
// 005fedc3  e868b3fcff           call 0x5ca130
// 005fedc8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fedcc  8bc6                 mov eax, esi
// 005fedce  5e                   pop esi
// 005fedcf  64890d00000000       mov dword ptr fs:[0], ecx
// 005fedd6  83c410               add esp, 0x10
// 005fedd9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??0?$holder@VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
