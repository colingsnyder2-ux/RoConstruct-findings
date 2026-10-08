// roc 2007-03 00534ef0  unit: seg_00530000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00534ef0
//
// 00534ef0  56                   push esi
// 00534ef1  8b742408             mov esi, dword ptr [esp + 8]
// 00534ef5  6a00                 push 0
// 00534ef7  68e03b8800           push 0x883be0
// 00534efc  6864108800           push 0x881064
// 00534f01  6a00                 push 0
// 00534f03  56                   push esi
// 00534f04  e8bda20e00           call 0x61f1c6
// 00534f09  83c414               add esp, 0x14
// 00534f0c  85c0                 test eax, eax
// 00534f0e  7408                 je 0x534f18
// 00534f10  8bc8                 mov ecx, eax
// 00534f12  5e                   pop esi
// 00534f13  e978d80300           jmp 0x572790
// 00534f18  6a00                 push 0
// 00534f1a  6848b68800           push 0x88b648
// 00534f1f  6864108800           push 0x881064
// 00534f24  6a00                 push 0
// 00534f26  56                   push esi
// 00534f27  e89aa20e00           call 0x61f1c6
// 00534f2c  83c414               add esp, 0x14
// 00534f2f  85c0                 test eax, eax
// 00534f31  740c                 je 0x534f3f
// 00534f33  68f04e5300           push 0x534ef0
// 00534f38  8bc8                 mov ecx, eax
// 00534f3a  e8110ff5ff           call 0x485e50
// 00534f3f  5e                   pop esi
// 00534f40  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?makeJ@RBX@@YAXPAVInstance@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
