// roc 2008-06 00617e70  unit: RBX::NullTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00617e70
//
// 00617e70  56                   push esi
// 00617e71  8bf1                 mov esi, ecx
// 00617e73  8b06                 mov eax, dword ptr [esi]
// 00617e75  8b5028               mov edx, dword ptr [eax + 0x28]
// 00617e78  ffd2                 call edx
// 00617e7a  8bc6                 mov eax, esi
// 00617e7c  5e                   pop esi
// 00617e7d  c20400               ret 4
// library rbxgs/tool\NullTool.cpp (function ?onMouseUp@NewNullTool@RBX@@EAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/NullTool.cpp
