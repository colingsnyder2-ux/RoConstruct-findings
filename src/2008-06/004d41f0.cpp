// roc 2008-06 004d41f0  unit: seg_004d0000  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d41f0
//
// 004d41f0  6aff                 push -1
// 004d41f2  6878927c00           push 0x7c9278
// 004d41f7  64a100000000         mov eax, dword ptr fs:[0]
// 004d41fd  50                   push eax
// 004d41fe  64892500000000       mov dword ptr fs:[0], esp
// 004d4205  51                   push ecx
// 004d4206  56                   push esi
// 004d4207  57                   push edi
// 004d4208  8bf9                 mov edi, ecx
// 004d420a  897c2408             mov dword ptr [esp + 8], edi
// 004d420e  33f6                 xor esi, esi
// 004d4210  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004d4218  397704               cmp dword ptr [edi + 4], esi
// 004d421b  7620                 jbe 0x4d423d
// 004d421d  8d4900               lea ecx, [ecx]
// 004d4220  8b07                 mov eax, dword ptr [edi]
// 004d4222  807cf00400           cmp byte ptr [eax + esi*8 + 4], 0
// 004d4227  8d04f0               lea eax, [eax + esi*8]
// 004d422a  740b                 je 0x4d4237
// 004d422c  8b00                 mov eax, dword ptr [eax]
// 004d422e  50                   push eax
// 004d422f  e846c41c00           call 0x6a067a
// 004d4234  83c404               add esp, 4
// 004d4237  46                   inc esi
// 004d4238  3b7704               cmp esi, dword ptr [edi + 4]
// 004d423b  72e3                 jb 0x4d4220
// 004d423d  8bcf                 mov ecx, edi
// 004d423f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d4247  e8b461feff           call 0x4ba400
// 004d424c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d4250  5f                   pop edi
// 004d4251  5e                   pop esi
// 004d4252  64890d00000000       mov dword ptr fs:[0], ecx
// 004d4259  83c410               add esp, 0x10
// 004d425c  c3                   ret 
// library rbxgs-raknet/StringTable.cpp (function ??1StringTable@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringTable.cpp
