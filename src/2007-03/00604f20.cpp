// roc 2007-03 00604f20  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00604f20
//
// 00604f20  56                   push esi
// 00604f21  57                   push edi
// 00604f22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00604f26  57                   push edi
// 00604f27  8bf1                 mov esi, ecx
// 00604f29  e8d2feffff           call 0x604e00
// 00604f2e  57                   push edi
// 00604f2f  8bce                 mov ecx, esi
// 00604f31  e82a41feff           call 0x5e9060
// 00604f36  5f                   pop edi
// 00604f37  5e                   pop esi
// 00604f38  c20400               ret 4
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ?onMouseHover@ToolMouseCommand@RBX@@UAEXABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
