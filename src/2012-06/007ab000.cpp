// roc 2012-06 007ab000  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007ab000
//
// 007ab000  51                   push ecx
// 007ab001  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007ab005  56                   push esi
// 007ab006  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007ab00a  83ec08               sub esp, 8
// 007ab00d  8bc4                 mov eax, esp
// 007ab00f  8908                 mov dword ptr [eax], ecx
// 007ab011  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ab015  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 007ab01d  8964240c             mov dword ptr [esp + 0xc], esp
// 007ab021  56                   push esi
// 007ab022  895004               mov dword ptr [eax + 4], edx
// 007ab025  e876fcffff           call 0x7aaca0
// 007ab02a  83c40c               add esp, 0xc
// 007ab02d  8bc6                 mov eax, esi
// 007ab02f  5e                   pop esi
// 007ab030  59                   pop ecx
// 007ab031  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
