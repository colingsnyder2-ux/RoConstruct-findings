// roc 2008-06 00476a10  unit: G3D::VARArea  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00476a10
//
// 00476a10  8b11                 mov edx, dword ptr [ecx]
// 00476a12  8b442404             mov eax, dword ptr [esp + 4]
// 00476a16  3b10                 cmp edx, dword ptr [eax]
// 00476a18  7548                 jne 0x476a62
// 00476a1a  8b5104               mov edx, dword ptr [ecx + 4]
// 00476a1d  3b5004               cmp edx, dword ptr [eax + 4]
// 00476a20  7540                 jne 0x476a62
// 00476a22  8b5108               mov edx, dword ptr [ecx + 8]
// 00476a25  3b5008               cmp edx, dword ptr [eax + 8]
// 00476a28  7538                 jne 0x476a62
// 00476a2a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00476a2d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00476a30  7530                 jne 0x476a62
// 00476a32  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00476a35  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00476a38  7528                 jne 0x476a62
// 00476a3a  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00476a3d  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00476a40  7520                 jne 0x476a62
// 00476a42  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00476a45  3b5018               cmp edx, dword ptr [eax + 0x18]
// 00476a48  7518                 jne 0x476a62
// 00476a4a  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 00476a4d  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 00476a50  7510                 jne 0x476a62
// 00476a52  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00476a55  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 00476a58  7508                 jne 0x476a62
// 00476a5a  b801000000           mov eax, 1
// 00476a5f  c20400               ret 4
// 00476a62  33c0                 xor eax, eax
// 00476a64  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
