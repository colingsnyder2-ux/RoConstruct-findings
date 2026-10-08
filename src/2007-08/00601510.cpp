// roc 2007-08 00601510  unit: RBX::ToolMouseCommand  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00601510
//
// 00601510  8b442404             mov eax, dword ptr [esp + 4]
// 00601514  56                   push esi
// 00601515  8bf1                 mov esi, ecx
// 00601517  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0060151a  50                   push eax
// 0060151b  e8109e0100           call 0x61b330
// 00601520  8bc6                 mov eax, esi
// 00601522  5e                   pop esi
// 00601523  c20400               ret 4
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?onMouseDown@ScriptMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
