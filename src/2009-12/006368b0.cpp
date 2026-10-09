// roc 2009-12 006368b0  unit: VAuthoringSettings::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006368b0
//
// 006368b0  51                   push ecx
// 006368b1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006368b5  56                   push esi
// 006368b6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006368ba  50                   push eax
// 006368bb  56                   push esi
// 006368bc  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 006368c4  e8773bdeff           call 0x41a440
// 006368c9  83c408               add esp, 8
// 006368cc  8bc6                 mov eax, esi
// 006368ce  5e                   pop esi
// 006368cf  59                   pop ecx
// 006368d0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
