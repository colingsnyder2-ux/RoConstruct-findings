// roc 2009-12 007b2f40  unit: RBX::Assembly  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b2f40
//
// 007b2f40  8b4104               mov eax, dword ptr [ecx + 4]
// 007b2f43  8b5004               mov edx, dword ptr [eax + 4]
// 007b2f46  895104               mov dword ptr [ecx + 4], edx
// 007b2f49  c20400               ret 4
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromStage@IPipelined@RBX@@QAEXPAVIStage@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
