// roc 2010-06 006211a0  unit: RBX::DropperTool  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006211a0
//
// 006211a0  6aff                 push -1
// 006211a2  6889009a00           push 0x9a0089
// 006211a7  64a100000000         mov eax, dword ptr fs:[0]
// 006211ad  50                   push eax
// 006211ae  64892500000000       mov dword ptr fs:[0], esp
// 006211b5  51                   push ecx
// 006211b6  8b442414             mov eax, dword ptr [esp + 0x14]
// 006211ba  56                   push esi
// 006211bb  8bf1                 mov esi, ecx
// 006211bd  50                   push eax
// 006211be  89742408             mov dword ptr [esp + 8], esi
// 006211c2  ff150ca49e00         call dword ptr [0x9ea40c]
// 006211c8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006211d0  e81b32f7ff           call 0x5943f0
// 006211d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006211d9  89461c               mov dword ptr [esi + 0x1c], eax
// 006211dc  8bc6                 mov eax, esi
// 006211de  5e                   pop esi
// 006211df  64890d00000000       mov dword ptr fs:[0], ecx
// 006211e6  83c410               add esp, 0x10
// 006211e9  c20400               ret 4
// library openrbx-client/App\v8xml\XmlElement.cpp (function ??0ContentId@RBX@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlElement.cpp
