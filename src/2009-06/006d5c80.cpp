// roc 2009-06 006d5c80  unit: RBX::Mechanism  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d5c80
//
// 006d5c80  8b4104               mov eax, dword ptr [ecx + 4]
// 006d5c83  8b5004               mov edx, dword ptr [eax + 4]
// 006d5c86  895104               mov dword ptr [ecx + 4], edx
// 006d5c89  c3                   ret 
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromKernel@IPipelined@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
