// roc 2011-06 00784a40  unit: RBX::ScriptMouseCommand  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00784a40
//
// 00784a40  8b442404             mov eax, dword ptr [esp + 4]
// 00784a44  56                   push esi
// 00784a45  8bf1                 mov esi, ecx
// 00784a47  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00784a4a  50                   push eax
// 00784a4b  e8a0d7faff           call 0x7321f0
// 00784a50  8bc6                 mov eax, esi
// 00784a52  5e                   pop esi
// 00784a53  c20400               ret 4
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?onMouseDown@ScriptMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
