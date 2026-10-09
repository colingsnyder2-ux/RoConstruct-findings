// roc 2008-06 00645860  unit: RBX::Primitive  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00645860
//
// 00645860  8b4104               mov eax, dword ptr [ecx + 4]
// 00645863  8b5004               mov edx, dword ptr [eax + 4]
// 00645866  895104               mov dword ptr [ecx + 4], edx
// 00645869  c3                   ret 
// library openrbx-client/App\v8world\IPipelined.cpp (function ?removeFromKernel@IPipelined@RBX@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/IPipelined.cpp
