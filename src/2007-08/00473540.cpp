// roc 2007-08 00473540  unit: G3D::VARArea  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00473540
//
// 00473540  8b11                 mov edx, dword ptr [ecx]
// 00473542  8b442404             mov eax, dword ptr [esp + 4]
// 00473546  3b10                 cmp edx, dword ptr [eax]
// 00473548  7548                 jne 0x473592
// 0047354a  8b5104               mov edx, dword ptr [ecx + 4]
// 0047354d  3b5004               cmp edx, dword ptr [eax + 4]
// 00473550  7540                 jne 0x473592
// 00473552  8b5108               mov edx, dword ptr [ecx + 8]
// 00473555  3b5008               cmp edx, dword ptr [eax + 8]
// 00473558  7538                 jne 0x473592
// 0047355a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0047355d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00473560  7530                 jne 0x473592
// 00473562  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00473565  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00473568  7528                 jne 0x473592
// 0047356a  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0047356d  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00473570  7520                 jne 0x473592
// 00473572  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00473575  3b5018               cmp edx, dword ptr [eax + 0x18]
// 00473578  7518                 jne 0x473592
// 0047357a  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0047357d  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 00473580  7510                 jne 0x473592
// 00473582  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00473585  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 00473588  7508                 jne 0x473592
// 0047358a  b801000000           mov eax, 1
// 0047358f  c20400               ret 4
// 00473592  33c0                 xor eax, eax
// 00473594  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
