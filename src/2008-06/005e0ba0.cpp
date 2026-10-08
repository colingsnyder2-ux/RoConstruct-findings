// roc 2008-06 005e0ba0  unit: RBX::VLighting::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0ba0
//
// 005e0ba0  51                   push ecx
// 005e0ba1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e0ba5  56                   push esi
// 005e0ba6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e0baa  83ec08               sub esp, 8
// 005e0bad  8bc4                 mov eax, esp
// 005e0baf  8908                 mov dword ptr [eax], ecx
// 005e0bb1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005e0bb5  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005e0bbd  8964240c             mov dword ptr [esp + 0xc], esp
// 005e0bc1  56                   push esi
// 005e0bc2  895004               mov dword ptr [eax + 4], edx
// 005e0bc5  e8e6faffff           call 0x5e06b0
// 005e0bca  83c40c               add esp, 0xc
// 005e0bcd  8bc6                 mov eax, esi
// 005e0bcf  5e                   pop esi
// 005e0bd0  59                   pop ecx
// 005e0bd1  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?to_simple_string@posix_time@boost@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@Vtime_duration@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
