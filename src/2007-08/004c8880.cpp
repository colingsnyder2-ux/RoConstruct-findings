// from server: 100% by auto
// roc 2007-08 004c8880  unit: seg_004c0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c8880
//
// 004c8880  6aff                 push -1
// 004c8882  68a8bd7400           push 0x74bda8
// 004c8887  64a100000000         mov eax, dword ptr fs:[0]
// 004c888d  50                   push eax
// 004c888e  51                   push ecx
// 004c888f  56                   push esi
// 004c8890  a188518b00           mov eax, dword ptr [0x8b5188]
// 004c8895  33c4                 xor eax, esp
// 004c8897  50                   push eax
// 004c8898  8d44240c             lea eax, [esp + 0xc]
// 004c889c  64a300000000         mov dword ptr fs:[0], eax
// 004c88a2  8bf1                 mov esi, ecx
// 004c88a4  89742408             mov dword ptr [esp + 8], esi
// 004c88a8  837e1400             cmp dword ptr [esi + 0x14], 0
// 004c88ac  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c88b4  7413                 je 0x4c88c9
// 004c88b6  e875e6ffff           call 0x4c6f30
// 004c88bb  c7461800000000       mov dword ptr [esi + 0x18], 0
// 004c88c2  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004c88c9  8bce                 mov ecx, esi
// 004c88cb  e840caffff           call 0x4c5310
// 004c88d0  8bce                 mov ecx, esi
// 004c88d2  e839caffff           call 0x4c5310
// 004c88d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c88db  64890d00000000       mov dword ptr fs:[0], ecx
// 004c88e2  59                   pop ecx
// 004c88e3  5e                   pop esi
// 004c88e4  83c410               add esp, 0x10
// 004c88e7  c3                   ret 

// from server: 53% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet RPCMap.cpp