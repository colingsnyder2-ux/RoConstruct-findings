// roc 2007-03 00604ef0  unit: seg_00600000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604ef0
//
// 00604ef0  56                   push esi
// 00604ef1  57                   push edi
// 00604ef2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00604ef6  57                   push edi
// 00604ef7  8bf1                 mov esi, ecx
// 00604ef9  e802ffffff           call 0x604e00
// 00604efe  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00604f01  e8dadcfcff           call 0x5d2be0
// 00604f06  57                   push edi
// 00604f07  8bce                 mov ecx, esi
// 00604f09  e83241feff           call 0x5e9040
// 00604f0e  5f                   pop edi
// 00604f0f  5e                   pop esi
// 00604f10  c20400               ret 4
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ?onMouseDown@ToolMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
