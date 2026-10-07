// roc 2007-08 00482410  unit: G3D::Shader  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00482410
//
// 00482410  8b442404             mov eax, dword ptr [esp + 4]
// 00482414  3d5d8b0000           cmp eax, 0x8b5d
// 00482419  7434                 je 0x48244f
// 0048241b  3d5e8b0000           cmp eax, 0x8b5e
// 00482420  742d                 je 0x48244f
// 00482422  3d638b0000           cmp eax, 0x8b63
// 00482427  7426                 je 0x48244f
// 00482429  3d5f8b0000           cmp eax, 0x8b5f
// 0048242e  741f                 je 0x48244f
// 00482430  3d608b0000           cmp eax, 0x8b60
// 00482435  7418                 je 0x48244f
// 00482437  3d618b0000           cmp eax, 0x8b61
// 0048243c  7411                 je 0x48244f
// 0048243e  3d628b0000           cmp eax, 0x8b62
// 00482443  740a                 je 0x48244f
// 00482445  3d648b0000           cmp eax, 0x8b64
// 0048244a  7403                 je 0x48244f
// 0048244c  33c0                 xor eax, eax
// 0048244e  c3                   ret 
// 0048244f  b801000000           mov eax, 1
// 00482454  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?isSamplerType@VertexAndPixelShader@G3D@@KA_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
