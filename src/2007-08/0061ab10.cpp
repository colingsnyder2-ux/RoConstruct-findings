// roc 2007-08 0061ab10  unit: RBX::ToolMouseCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061ab10
//
// 0061ab10  56                   push esi
// 0061ab11  57                   push edi
// 0061ab12  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061ab16  57                   push edi
// 0061ab17  8bf1                 mov esi, ecx
// 0061ab19  e802ffffff           call 0x61aa20
// 0061ab1e  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 0061ab21  e8ba9efbff           call 0x5d49e0
// 0061ab26  57                   push edi
// 0061ab27  8bce                 mov ecx, esi
// 0061ab29  e8e269feff           call 0x601510
// 0061ab2e  5f                   pop edi
// 0061ab2f  5e                   pop esi
// 0061ab30  c20400               ret 4
// library rbxgs/v8datamodel\ToolMouseCommand.cpp (function ?onMouseDown@ToolMouseCommand@RBX@@UAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ToolMouseCommand.cpp
