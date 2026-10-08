// roc 2007-08 005ae1e0  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ae1e0
//
// 005ae1e0  51                   push ecx
// 005ae1e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ae1e5  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ae1e9  56                   push esi
// 005ae1ea  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ae1ee  83ec08               sub esp, 8
// 005ae1f1  8bc4                 mov eax, esp
// 005ae1f3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005ae1fb  8964240c             mov dword ptr [esp + 0xc], esp
// 005ae1ff  56                   push esi
// 005ae200  8908                 mov dword ptr [eax], ecx
// 005ae202  895004               mov dword ptr [eax + 4], edx
// 005ae205  e816fbffff           call 0x5add20
// 005ae20a  83c40c               add esp, 0xc
// 005ae20d  8bc6                 mov eax, esi
// 005ae20f  5e                   pop esi
// 005ae210  59                   pop ecx
// 005ae211  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
