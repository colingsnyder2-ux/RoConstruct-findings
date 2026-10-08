// roc 2011-06 00784a20  unit: RBX::ScriptMouseCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00784a20
//
// 00784a20  51                   push ecx
// 00784a21  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00784a24  56                   push esi
// 00784a25  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00784a29  56                   push esi
// 00784a2a  c744240800000000     mov dword ptr [esp + 8], 0
// 00784a32  e889c5faff           call 0x730fc0
// 00784a37  8bc6                 mov eax, esi
// 00784a39  5e                   pop esi
// 00784a3a  59                   pop ecx
// 00784a3b  c20400               ret 4
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?getCursorId@ScriptMouseCommand@RBX@@UBE?AVTextureId@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
