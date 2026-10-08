// roc 2009-06 006ca880  unit: RBX::NullTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ca880
//
// 006ca880  56                   push esi
// 006ca881  8bf1                 mov esi, ecx
// 006ca883  8b06                 mov eax, dword ptr [esi]
// 006ca885  8b5028               mov edx, dword ptr [eax + 0x28]
// 006ca888  ffd2                 call edx
// 006ca88a  8bc6                 mov eax, esi
// 006ca88c  5e                   pop esi
// 006ca88d  c20400               ret 4
// library rbxgs/tool\NullTool.cpp (function ?onMouseUp@NewNullTool@RBX@@EAEPAVMouseCommand@2@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/NullTool.cpp
