// roc 2007-03 00534f60  unit: seg_00530000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534f60
//
// 00534f60  56                   push esi
// 00534f61  8b742408             mov esi, dword ptr [esp + 8]
// 00534f65  6a00                 push 0
// 00534f67  68e03b8800           push 0x883be0
// 00534f6c  6864108800           push 0x881064
// 00534f71  6a00                 push 0
// 00534f73  56                   push esi
// 00534f74  e84da20e00           call 0x61f1c6
// 00534f79  83c414               add esp, 0x14
// 00534f7c  85c0                 test eax, eax
// 00534f7e  7408                 je 0x534f88
// 00534f80  8bc8                 mov ecx, eax
// 00534f82  5e                   pop esi
// 00534f83  e9e8d70300           jmp 0x572770
// 00534f88  6a00                 push 0
// 00534f8a  6848b68800           push 0x88b648
// 00534f8f  6864108800           push 0x881064
// 00534f94  6a00                 push 0
// 00534f96  56                   push esi
// 00534f97  e82aa20e00           call 0x61f1c6
// 00534f9c  83c414               add esp, 0x14
// 00534f9f  85c0                 test eax, eax
// 00534fa1  740c                 je 0x534faf
// 00534fa3  68604f5300           push 0x534f60
// 00534fa8  8bc8                 mov ecx, eax
// 00534faa  e8a10ef5ff           call 0x485e50
// 00534faf  5e                   pop esi
// 00534fb0  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
