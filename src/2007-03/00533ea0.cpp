// roc 2007-03 00533ea0  unit: seg_00530000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533ea0
//
// 00533ea0  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00533ea6  8b5004               mov edx, dword ptr [eax + 4]
// 00533ea9  8b840af4000000       mov eax, dword ptr [edx + ecx + 0xf4]
// 00533eb0  8d8c0af4000000       lea ecx, [edx + ecx + 0xf4]
// 00533eb7  8b5004               mov edx, dword ptr [eax + 4]
// 00533eba  ffd2                 call edx
// 00533ebc  85c0                 test eax, eax
// 00533ebe  7407                 je 0x533ec7
// 00533ec0  8b80e0010000         mov eax, dword ptr [eax + 0x1e0]
// 00533ec6  c3                   ret 
// 00533ec7  33c0                 xor eax, eax
// 00533ec9  c3                   ret 
// library rbxgs/v8datamodel\ModelInstance.cpp (function ?getBiggestPrimitive@ModelInstance@RBX@@UBEPBVPrimitive@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/ModelInstance.cpp
