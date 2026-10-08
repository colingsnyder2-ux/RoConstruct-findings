// roc 2007-03 005abc80  unit: seg_005a0000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005abc80
//
// 005abc80  56                   push esi
// 005abc81  57                   push edi
// 005abc82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005abc86  57                   push edi
// 005abc87  8bf1                 mov esi, ecx
// 005abc89  e882e8efff           call 0x4aa510
// 005abc8e  8b4e08               mov ecx, dword ptr [esi + 8]
// 005abc91  57                   push edi
// 005abc92  e8d90f0400           call 0x5ecc70
// 005abc97  5f                   pop edi
// 005abc98  5e                   pop esi
// 005abc99  c20400               ret 4
// library rbxgs/v8world\Assembly.cpp (function ?putInKernel@Assembly@RBX@@UAEXPAVKernel@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
