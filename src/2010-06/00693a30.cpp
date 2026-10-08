// roc 2010-06 00693a30  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00693a30
//
// 00693a30  51                   push ecx
// 00693a31  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693a35  56                   push esi
// 00693a36  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00693a3a  83ec08               sub esp, 8
// 00693a3d  8bc4                 mov eax, esp
// 00693a3f  8908                 mov dword ptr [eax], ecx
// 00693a41  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00693a45  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00693a4d  8964240c             mov dword ptr [esp + 0xc], esp
// 00693a51  56                   push esi
// 00693a52  895004               mov dword ptr [eax + 4], edx
// 00693a55  e876fcffff           call 0x6936d0
// 00693a5a  83c40c               add esp, 0xc
// 00693a5d  8bc6                 mov eax, esi
// 00693a5f  5e                   pop esi
// 00693a60  59                   pop ecx
// 00693a61  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
