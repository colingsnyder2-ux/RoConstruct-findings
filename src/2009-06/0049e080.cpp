// from server: 100% by auto
// roc 2009-06 0049e080  unit: G3D::VARArea  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049e080
//
// 0049e080  8b11                 mov edx, dword ptr [ecx]
// 0049e082  8b442404             mov eax, dword ptr [esp + 4]
// 0049e086  3b10                 cmp edx, dword ptr [eax]
// 0049e088  7548                 jne 0x49e0d2
// 0049e08a  8b5104               mov edx, dword ptr [ecx + 4]
// 0049e08d  3b5004               cmp edx, dword ptr [eax + 4]
// 0049e090  7540                 jne 0x49e0d2
// 0049e092  8b5108               mov edx, dword ptr [ecx + 8]
// 0049e095  3b5008               cmp edx, dword ptr [eax + 8]
// 0049e098  7538                 jne 0x49e0d2
// 0049e09a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0049e09d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 0049e0a0  7530                 jne 0x49e0d2
// 0049e0a2  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0049e0a5  3b5010               cmp edx, dword ptr [eax + 0x10]
// 0049e0a8  7528                 jne 0x49e0d2
// 0049e0aa  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0049e0ad  3b5014               cmp edx, dword ptr [eax + 0x14]
// 0049e0b0  7520                 jne 0x49e0d2
// 0049e0b2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 0049e0b5  3b5018               cmp edx, dword ptr [eax + 0x18]
// 0049e0b8  7518                 jne 0x49e0d2
// 0049e0ba  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0049e0bd  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 0049e0c0  7510                 jne 0x49e0d2
// 0049e0c2  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0049e0c5  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 0049e0c8  7508                 jne 0x49e0d2
// 0049e0ca  b801000000           mov eax, 1
// 0049e0cf  c20400               ret 4
// 0049e0d2  33c0                 xor eax, eax
// 0049e0d4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
