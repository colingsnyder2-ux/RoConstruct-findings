// roc 2009-12 00713c40  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00713c40
//
// 00713c40  51                   push ecx
// 00713c41  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00713c45  56                   push esi
// 00713c46  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00713c4a  83ec08               sub esp, 8
// 00713c4d  8bc4                 mov eax, esp
// 00713c4f  8908                 mov dword ptr [eax], ecx
// 00713c51  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00713c55  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00713c5d  8964240c             mov dword ptr [esp + 0xc], esp
// 00713c61  56                   push esi
// 00713c62  895004               mov dword ptr [eax + 4], edx
// 00713c65  e876fcffff           call 0x7138e0
// 00713c6a  83c40c               add esp, 0xc
// 00713c6d  8bc6                 mov eax, esi
// 00713c6f  5e                   pop esi
// 00713c70  59                   pop ecx
// 00713c71  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
