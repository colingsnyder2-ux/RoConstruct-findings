// roc 2007-03 005e9060  unit: seg_005e0000  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e9060
//
// 005e9060  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 005e9063  e918c70100           jmp 0x605780
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?onMouseIdle@ScriptMouseCommand@RBX@@UAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
