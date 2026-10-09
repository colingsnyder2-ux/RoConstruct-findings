// roc 2008-06 0040b790  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b790
//
// 0040b790  64a100000000         mov eax, dword ptr fs:[0]
// 0040b796  6aff                 push -1
// 0040b798  68bed17b00           push 0x7bd1be
// 0040b79d  50                   push eax
// 0040b79e  b801000000           mov eax, 1
// 0040b7a3  64892500000000       mov dword ptr fs:[0], esp
// 0040b7aa  8405ccc69600         test byte ptr [0x96c6cc], al
// 0040b7b0  7530                 jne 0x40b7e2
// 0040b7b2  0905ccc69600         or dword ptr [0x96c6cc], eax
// 0040b7b8  6aff                 push -1
// 0040b7ba  6880009300           push 0x930080
// 0040b7bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0040b7c7  e8c4871400           call 0x553f90
// 0040b7cc  83c408               add esp, 8
// 0040b7cf  a3c8c69600           mov dword ptr [0x96c6c8], eax
// 0040b7d4  8b0c24               mov ecx, dword ptr [esp]
// 0040b7d7  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b7de  83c40c               add esp, 0xc
// 0040b7e1  c3                   ret 
// 0040b7e2  8b0c24               mov ecx, dword ptr [esp]
// 0040b7e5  a1c8c69600           mov eax, dword ptr [0x96c6c8]
// 0040b7ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0040b7f1  83c40c               add esp, 0xc
// 0040b7f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
