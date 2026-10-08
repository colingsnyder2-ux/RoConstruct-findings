// roc 2007-03 005e0fe0  unit: seg_005e0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0fe0
//
// 005e0fe0  6aff                 push -1
// 005e0fe2  68f8bc7500           push 0x75bcf8
// 005e0fe7  64a100000000         mov eax, dword ptr fs:[0]
// 005e0fed  50                   push eax
// 005e0fee  64892500000000       mov dword ptr fs:[0], esp
// 005e0ff5  51                   push ecx
// 005e0ff6  56                   push esi
// 005e0ff7  8bf1                 mov esi, ecx
// 005e0ff9  89742404             mov dword ptr [esp + 4], esi
// 005e0ffd  33c9                 xor ecx, ecx
// 005e0fff  3bf1                 cmp esi, ecx
// 005e1001  894c2410             mov dword ptr [esp + 0x10], ecx
// 005e1005  7403                 je 0x5e100a
// 005e1007  8d4e10               lea ecx, [esi + 0x10]
// 005e100a  e8e1eeffff           call 0x5dfef0
// 005e100f  8bce                 mov ecx, esi
// 005e1011  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005e1019  e872eaf8ff           call 0x56fa90
// 005e101e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e1022  5e                   pop esi
// 005e1023  64890d00000000       mov dword ptr fs:[0], ecx
// 005e102a  83c410               add esp, 0x10
// 005e102d  c3                   ret 
// library rbxgs/util\RunStateOwner.cpp (function ??1TSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
