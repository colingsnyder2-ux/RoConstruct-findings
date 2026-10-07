// roc 2008-06 00634500  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634500
//
// 00634500  6aff                 push -1
// 00634502  683bf47b00           push 0x7bf43b
// 00634507  64a100000000         mov eax, dword ptr fs:[0]
// 0063450d  50                   push eax
// 0063450e  64892500000000       mov dword ptr fs:[0], esp
// 00634515  51                   push ecx
// 00634516  56                   push esi
// 00634517  6a28                 push 0x28
// 00634519  8bf1                 mov esi, ecx
// 0063451b  e800c40600           call 0x6a0920
// 00634520  83c404               add esp, 4
// 00634523  89442404             mov dword ptr [esp + 4], eax
// 00634527  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0063452f  85c0                 test eax, eax
// 00634531  740e                 je 0x634541
// 00634533  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00634537  51                   push ecx
// 00634538  8bc8                 mov ecx, eax
// 0063453a  e861feffff           call 0x6343a0
// 0063453f  eb02                 jmp 0x634543
// 00634541  33c0                 xor eax, eax
// 00634543  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00634547  8906                 mov dword ptr [esi], eax
// 00634549  8bc6                 mov eax, esi
// 0063454b  5e                   pop esi
// 0063454c  64890d00000000       mov dword ptr fs:[0], ecx
// 00634553  83c410               add esp, 0x10
// 00634556  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VFunctionRef@Lua@RBX@@@any@boost@@QAE@ABVFunctionRef@Lua@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
