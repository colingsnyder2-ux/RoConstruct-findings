// roc 2007-03 00451b60  unit: seg_00450000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00451b60
//
// 00451b60  51                   push ecx
// 00451b61  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00451b65  56                   push esi
// 00451b66  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00451b6a  50                   push eax
// 00451b6b  56                   push esi
// 00451b6c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00451b74  e8c7460300           call 0x486240
// 00451b79  83c408               add esp, 8
// 00451b7c  8bc6                 mov eax, esi
// 00451b7e  5e                   pop esi
// 00451b7f  59                   pop ecx
// 00451b80  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ??$shared_polymorphic_downcast@VItem@Stats@RBX@@VInstance@3@@boost@@YA?AV?$shared_ptr@VItem@Stats@RBX@@@0@ABV?$shared_ptr@VInstance@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
