// roc 2010-06 00659c40  unit: RBX::VKeyframeSequence::?$BoundFuncDesc  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00659c40
//
// 00659c40  8b442404             mov eax, dword ptr [esp + 4]
// 00659c44  398104010000         cmp dword ptr [ecx + 0x104], eax
// 00659c4a  7413                 je 0x659c5f
// 00659c4c  898104010000         mov dword ptr [ecx + 0x104], eax
// 00659c52  c7442404b4c4c100     mov dword ptr [esp + 4], 0xc1c4b4
// 00659c5a  e91128dbff           jmp 0x40c470
// 00659c5f  c20400               ret 4
// library rbxgs/v8datamodel\Feature.cpp (function ?setTopBottom@Feature@RBX@@QAEXW4TopBottom@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Feature.cpp
