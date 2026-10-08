// roc 2007-03 005e9040  unit: seg_005e0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9040
//
// 005e9040  8b442404             mov eax, dword ptr [esp + 4]
// 005e9044  56                   push esi
// 005e9045  8bf1                 mov esi, ecx
// 005e9047  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005e904a  50                   push eax
// 005e904b  e830c70100           call 0x605780
// 005e9050  8bc6                 mov eax, esi
// 005e9052  5e                   pop esi
// 005e9053  c20400               ret 4
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?onMouseDown@ScriptMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
