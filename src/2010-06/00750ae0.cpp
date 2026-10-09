// roc 2010-06 00750ae0  unit: RBX::Assembly  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750ae0
//
// 00750ae0  8b4104               mov eax, dword ptr [ecx + 4]
// 00750ae3  8b5004               mov edx, dword ptr [eax + 4]
// 00750ae6  895104               mov dword ptr [ecx + 4], edx
// 00750ae9  c3                   ret 
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromKernel@IPipelined@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
