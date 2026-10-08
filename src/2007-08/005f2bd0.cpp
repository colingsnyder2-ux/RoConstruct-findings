// roc 2007-08 005f2bd0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f2bd0
//
// 005f2bd0  6aff                 push -1
// 005f2bd2  6878837500           push 0x758378
// 005f2bd7  64a100000000         mov eax, dword ptr fs:[0]
// 005f2bdd  50                   push eax
// 005f2bde  64892500000000       mov dword ptr fs:[0], esp
// 005f2be5  51                   push ecx
// 005f2be6  56                   push esi
// 005f2be7  8bf1                 mov esi, ecx
// 005f2be9  89742404             mov dword ptr [esp + 4], esi
// 005f2bed  33c9                 xor ecx, ecx
// 005f2bef  3bf1                 cmp esi, ecx
// 005f2bf1  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f2bf5  7403                 je 0x5f2bfa
// 005f2bf7  8d4e10               lea ecx, [esi + 0x10]
// 005f2bfa  e8d1eeffff           call 0x5f1ad0
// 005f2bff  8bce                 mov ecx, esi
// 005f2c01  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005f2c09  e812d4f7ff           call 0x570020
// 005f2c0e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f2c12  5e                   pop esi
// 005f2c13  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2c1a  83c410               add esp, 0x10
// 005f2c1d  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
