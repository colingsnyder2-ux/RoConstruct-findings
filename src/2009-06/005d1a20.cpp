// roc 2009-06 005d1a20  unit: VAuthoringSettings::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d1a20
//
// 005d1a20  51                   push ecx
// 005d1a21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005d1a25  56                   push esi
// 005d1a26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d1a2a  50                   push eax
// 005d1a2b  56                   push esi
// 005d1a2c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005d1a34  e8e785e4ff           call 0x41a020
// 005d1a39  83c408               add esp, 8
// 005d1a3c  8bc6                 mov eax, esi
// 005d1a3e  5e                   pop esi
// 005d1a3f  59                   pop ecx
// 005d1a40  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
