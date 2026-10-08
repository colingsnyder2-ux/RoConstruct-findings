// roc 2010-06 00598890  unit: VAuthoringSettings::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00598890
//
// 00598890  51                   push ecx
// 00598891  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00598895  56                   push esi
// 00598896  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0059889a  50                   push eax
// 0059889b  56                   push esi
// 0059889c  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005988a4  e8671ce8ff           call 0x41a510
// 005988a9  83c408               add esp, 8
// 005988ac  8bc6                 mov eax, esi
// 005988ae  5e                   pop esi
// 005988af  59                   pop ecx
// 005988b0  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?createChild@Instance@RBX@@UAE?AV?$shared_ptr@VInstance@RBX@@@boost@@ABVName@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
