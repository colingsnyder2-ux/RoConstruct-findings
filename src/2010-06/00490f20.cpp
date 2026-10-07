// roc 2010-06 00490f20  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490f20
//
// 00490f20  8b11                 mov edx, dword ptr [ecx]
// 00490f22  8b442404             mov eax, dword ptr [esp + 4]
// 00490f26  3b10                 cmp edx, dword ptr [eax]
// 00490f28  7548                 jne 0x490f72
// 00490f2a  8b5104               mov edx, dword ptr [ecx + 4]
// 00490f2d  3b5004               cmp edx, dword ptr [eax + 4]
// 00490f30  7540                 jne 0x490f72
// 00490f32  8b5108               mov edx, dword ptr [ecx + 8]
// 00490f35  3b5008               cmp edx, dword ptr [eax + 8]
// 00490f38  7538                 jne 0x490f72
// 00490f3a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00490f3d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00490f40  7530                 jne 0x490f72
// 00490f42  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00490f45  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00490f48  7528                 jne 0x490f72
// 00490f4a  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00490f4d  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00490f50  7520                 jne 0x490f72
// 00490f52  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00490f55  3b5018               cmp edx, dword ptr [eax + 0x18]
// 00490f58  7518                 jne 0x490f72
// 00490f5a  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00490f5d  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 00490f60  7510                 jne 0x490f72
// 00490f62  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00490f65  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 00490f68  7508                 jne 0x490f72
// 00490f6a  b801000000           mov eax, 1
// 00490f6f  c20400               ret 4
// 00490f72  33c0                 xor eax, eax
// 00490f74  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
