// roc 2007-03 005ea1b0  unit: seg_005e0000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ea1b0
//
// 005ea1b0  8b4104               mov eax, dword ptr [ecx + 4]
// 005ea1b3  8b5004               mov edx, dword ptr [eax + 4]
// 005ea1b6  895104               mov dword ptr [ecx + 4], edx
// 005ea1b9  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromStage@IPipelined@RBX@@QAEXPAVIStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
