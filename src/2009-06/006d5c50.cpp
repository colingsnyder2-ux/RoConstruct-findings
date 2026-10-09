// roc 2009-06 006d5c50  unit: RBX::Body  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5c50
//
// 006d5c50  8b4104               mov eax, dword ptr [ecx + 4]
// 006d5c53  8b5004               mov edx, dword ptr [eax + 4]
// 006d5c56  895104               mov dword ptr [ecx + 4], edx
// 006d5c59  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromStage@IPipelined@RBX@@QAEXPAVIStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
