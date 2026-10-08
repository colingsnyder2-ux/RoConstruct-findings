// roc 2007-08 006014f0  unit: RBX::ToolMouseCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006014f0
//
// 006014f0  51                   push ecx
// 006014f1  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 006014f4  56                   push esi
// 006014f5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006014f9  56                   push esi
// 006014fa  c744240800000000     mov dword ptr [esp + 8], 0
// 00601502  e8f9feffff           call 0x601400
// 00601507  8bc6                 mov eax, esi
// 00601509  5e                   pop esi
// 0060150a  59                   pop ecx
// 0060150b  c20400               ret 4
// library rbxgs/v8datamodel\ScriptMouseCommand.cpp (function ?getCursorId@ScriptMouseCommand@RBX@@UBE?AVTextureId@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ScriptMouseCommand.cpp
