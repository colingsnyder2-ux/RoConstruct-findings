// roc 2009-12 004ca680  unit: G3D::VARArea  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ca680
//
// 004ca680  8b11                 mov edx, dword ptr [ecx]
// 004ca682  8b442404             mov eax, dword ptr [esp + 4]
// 004ca686  3b10                 cmp edx, dword ptr [eax]
// 004ca688  7548                 jne 0x4ca6d2
// 004ca68a  8b5104               mov edx, dword ptr [ecx + 4]
// 004ca68d  3b5004               cmp edx, dword ptr [eax + 4]
// 004ca690  7540                 jne 0x4ca6d2
// 004ca692  8b5108               mov edx, dword ptr [ecx + 8]
// 004ca695  3b5008               cmp edx, dword ptr [eax + 8]
// 004ca698  7538                 jne 0x4ca6d2
// 004ca69a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004ca69d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 004ca6a0  7530                 jne 0x4ca6d2
// 004ca6a2  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004ca6a5  3b5010               cmp edx, dword ptr [eax + 0x10]
// 004ca6a8  7528                 jne 0x4ca6d2
// 004ca6aa  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004ca6ad  3b5014               cmp edx, dword ptr [eax + 0x14]
// 004ca6b0  7520                 jne 0x4ca6d2
// 004ca6b2  8b5118               mov edx, dword ptr [ecx + 0x18]
// 004ca6b5  3b5018               cmp edx, dword ptr [eax + 0x18]
// 004ca6b8  7518                 jne 0x4ca6d2
// 004ca6ba  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 004ca6bd  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 004ca6c0  7510                 jne 0x4ca6d2
// 004ca6c2  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 004ca6c5  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 004ca6c8  7508                 jne 0x4ca6d2
// 004ca6ca  b801000000           mov eax, 1
// 004ca6cf  c20400               ret 4
// 004ca6d2  33c0                 xor eax, eax
// 004ca6d4  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
