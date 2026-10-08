// roc 2007-08 00609160  unit: RBX::IPipelined  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00609160
//
// 00609160  8b4104               mov eax, dword ptr [ecx + 4]
// 00609163  8b5004               mov edx, dword ptr [eax + 4]
// 00609166  895104               mov dword ptr [ecx + 4], edx
// 00609169  c3                   ret 
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromKernel@IPipelined@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
