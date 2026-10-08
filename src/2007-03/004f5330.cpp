// roc 2007-03 004f5330  unit: seg_004f0000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f5330
//
// 004f5330  51                   push ecx
// 004f5331  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004f5335  56                   push esi
// 004f5336  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004f533a  8d442414             lea eax, [esp + 0x14]
// 004f533e  50                   push eax
// 004f533f  51                   push ecx
// 004f5340  56                   push esi
// 004f5341  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004f5349  e8a2feffff           call 0x4f51f0
// 004f534e  83c40c               add esp, 0xc
// 004f5351  8bc6                 mov eax, esi
// 004f5353  5e                   pop esi
// 004f5354  59                   pop ecx
// 004f5355  c3                   ret 
// library rbxgs-g3d/G3Dcpp\format.cpp (function ?format@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBDZZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/format.cpp
