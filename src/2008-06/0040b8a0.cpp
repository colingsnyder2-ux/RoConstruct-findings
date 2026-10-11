// roc 2008-06 0040b8a0  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b8a0
//
// 0040b8a0  6aff                 push -1
// 0040b8a2  68c8d37b00           push 0x7bd3c8
// 0040b8a7  64a100000000         mov eax, dword ptr fs:[0]
// 0040b8ad  50                   push eax
// 0040b8ae  64892500000000       mov dword ptr fs:[0], esp
// 0040b8b5  51                   push ecx
// 0040b8b6  56                   push esi
// 0040b8b7  8bf1                 mov esi, ecx
// 0040b8b9  89742404             mov dword ptr [esp + 4], esi
// 0040b8bd  8d8e34010000         lea ecx, [esi + 0x134]
// 0040b8c3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040b8cb  ff1568248000         call dword ptr [0x802468]
// 0040b8d1  8bce                 mov ecx, esi
// 0040b8d3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0040b8db  e860ec1400           call 0x55a540
// 0040b8e0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040b8e4  5e                   pop esi
// 0040b8e5  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b8ec  83c410               add esp, 0x10
// 0040b8ef  c3                   ret 
// library openrbx-client/App\v8datamodel\Decal.cpp (function ??1Decal@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
