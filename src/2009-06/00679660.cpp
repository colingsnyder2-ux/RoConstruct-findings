// roc 2009-06 00679660  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00679660
//
// 00679660  51                   push ecx
// 00679661  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679665  56                   push esi
// 00679666  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067966a  83ec08               sub esp, 8
// 0067966d  8bc4                 mov eax, esp
// 0067966f  8908                 mov dword ptr [eax], ecx
// 00679671  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00679675  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0067967d  8964240c             mov dword ptr [esp + 0xc], esp
// 00679681  56                   push esi
// 00679682  895004               mov dword ptr [eax + 4], edx
// 00679685  e876fcffff           call 0x679300
// 0067968a  83c40c               add esp, 0xc
// 0067968d  8bc6                 mov eax, esi
// 0067968f  5e                   pop esi
// 00679690  59                   pop ecx
// 00679691  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
