// roc 2011-06 006d1380  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d1380
//
// 006d1380  51                   push ecx
// 006d1381  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d1385  56                   push esi
// 006d1386  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d138a  83ec08               sub esp, 8
// 006d138d  8bc4                 mov eax, esp
// 006d138f  8908                 mov dword ptr [eax], ecx
// 006d1391  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d1395  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006d139d  8964240c             mov dword ptr [esp + 0xc], esp
// 006d13a1  56                   push esi
// 006d13a2  895004               mov dword ptr [eax + 4], edx
// 006d13a5  e876fcffff           call 0x6d1020
// 006d13aa  83c40c               add esp, 0xc
// 006d13ad  8bc6                 mov eax, esi
// 006d13af  5e                   pop esi
// 006d13b0  59                   pop ecx
// 006d13b1  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
