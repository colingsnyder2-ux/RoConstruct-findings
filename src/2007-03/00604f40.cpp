// roc 2007-03 00604f40  unit: seg_00600000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604f40
//
// 00604f40  56                   push esi
// 00604f41  57                   push edi
// 00604f42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00604f46  57                   push edi
// 00604f47  8bf1                 mov esi, ecx
// 00604f49  e8b2feffff           call 0x604e00
// 00604f4e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00604f51  e8aadcfcff           call 0x5d2c00
// 00604f56  57                   push edi
// 00604f57  8bce                 mov ecx, esi
// 00604f59  e8e240feff           call 0x5e9040
// 00604f5e  5f                   pop edi
// 00604f5f  5e                   pop esi
// 00604f60  c20400               ret 4
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ?onMouseDown@ToolMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
