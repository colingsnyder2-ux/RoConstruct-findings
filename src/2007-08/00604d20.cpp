// roc 2007-08 00604d20  unit: RBX::SleepStage  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00604d20
//
// 00604d20  83ec10               sub esp, 0x10
// 00604d23  56                   push esi
// 00604d24  8b742418             mov esi, dword ptr [esp + 0x18]
// 00604d28  57                   push edi
// 00604d29  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00604d2d  3bf7                 cmp esi, edi
// 00604d2f  7508                 jne 0x604d39
// 00604d31  5f                   pop edi
// 00604d32  32c0                 xor al, al
// 00604d34  5e                   pop esi
// 00604d35  83c410               add esp, 0x10
// 00604d38  c3                   ret 
// 00604d39  8d442408             lea eax, [esp + 8]
// 00604d3d  56                   push esi
// 00604d3e  50                   push eax
// 00604d3f  e86cfcffff           call 0x6049b0
// 00604d44  8d4c2418             lea ecx, [esp + 0x18]
// 00604d48  57                   push edi
// 00604d49  51                   push ecx
// 00604d4a  e861fcffff           call 0x6049b0
// 00604d4f  8a442420             mov al, byte ptr [esp + 0x20]
// 00604d53  83c410               add esp, 0x10
// 00604d56  38442408             cmp byte ptr [esp + 8], al
// 00604d5a  7518                 jne 0x604d74
// 00604d5c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00604d60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00604d64  3bc1                 cmp eax, ecx
// 00604d66  7518                 jne 0x604d80
// 00604d68  3bf7                 cmp esi, edi
// 00604d6a  1bc0                 sbb eax, eax
// 00604d6c  5f                   pop edi
// 00604d6d  f7d8                 neg eax
// 00604d6f  5e                   pop esi
// 00604d70  83c410               add esp, 0x10
// 00604d73  c3                   ret 
// 00604d74  0fb6c0               movzx eax, al
// 00604d77  5f                   pop edi
// 00604d78  0fb6c0               movzx eax, al
// 00604d7b  5e                   pop esi
// 00604d7c  83c410               add esp, 0x10
// 00604d7f  c3                   ret 
// 00604d80  1bc0                 sbb eax, eax
// 00604d82  f7d8                 neg eax
// 00604d84  5f                   pop edi
// 00604d85  0fb6c0               movzx eax, al
// 00604d88  5e                   pop esi
// 00604d89  83c410               add esp, 0x10
// 00604d8c  c3                   ret 
// library rbxgs/v8world\ClumpStage.cpp (function ?lessMotor@RBX@@YA_NPBVMotorJoint@1@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
