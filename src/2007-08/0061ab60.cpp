// roc 2007-08 0061ab60  unit: RBX::ToolMouseCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ab60
//
// 0061ab60  56                   push esi
// 0061ab61  57                   push edi
// 0061ab62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061ab66  57                   push edi
// 0061ab67  8bf1                 mov esi, ecx
// 0061ab69  e8b2feffff           call 0x61aa20
// 0061ab6e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0061ab71  e88a9efbff           call 0x5d4a00
// 0061ab76  57                   push edi
// 0061ab77  8bce                 mov ecx, esi
// 0061ab79  e89269feff           call 0x601510
// 0061ab7e  5f                   pop edi
// 0061ab7f  5e                   pop esi
// 0061ab80  c20400               ret 4
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ?onMouseDown@ToolMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
