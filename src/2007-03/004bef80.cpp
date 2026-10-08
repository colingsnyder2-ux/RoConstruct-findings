// roc 2007-03 004bef80  unit: seg_004b0000  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bef80
//
// 004bef80  6aff                 push -1
// 004bef82  68c8c67400           push 0x74c6c8
// 004bef87  64a100000000         mov eax, dword ptr fs:[0]
// 004bef8d  50                   push eax
// 004bef8e  64892500000000       mov dword ptr fs:[0], esp
// 004bef95  51                   push ecx
// 004bef96  56                   push esi
// 004bef97  57                   push edi
// 004bef98  8bf9                 mov edi, ecx
// 004bef9a  897c2408             mov dword ptr [esp + 8], edi
// 004bef9e  33f6                 xor esi, esi
// 004befa0  397704               cmp dword ptr [edi + 4], esi
// 004befa3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004befab  7622                 jbe 0x4befcf
// 004befad  8d4900               lea ecx, [ecx]
// 004befb0  8b07                 mov eax, dword ptr [edi]
// 004befb2  807cf00400           cmp byte ptr [eax + esi*8 + 4], 0
// 004befb7  8d04f0               lea eax, [eax + esi*8]
// 004befba  740b                 je 0x4befc7
// 004befbc  8b00                 mov eax, dword ptr [eax]
// 004befbe  50                   push eax
// 004befbf  e82cf11500           call 0x61e0f0
// 004befc4  83c404               add esp, 4
// 004befc7  83c601               add esi, 1
// 004befca  3b7704               cmp esi, dword ptr [edi + 4]
// 004befcd  72e1                 jb 0x4befb0
// 004befcf  8bcf                 mov ecx, edi
// 004befd1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004befd9  e8c234ffff           call 0x4b24a0
// 004befde  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004befe2  5f                   pop edi
// 004befe3  5e                   pop esi
// 004befe4  64890d00000000       mov dword ptr fs:[0], ecx
// 004befeb  83c410               add esp, 0x10
// 004befee  c3                   ret 
// library rbxgs-raknet/StringTable.cpp (function ??1StringTable@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringTable.cpp
