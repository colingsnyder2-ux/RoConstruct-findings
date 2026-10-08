// roc 2007-03 00473630  unit: seg_00470000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00473630
//
// 00473630  8b11                 mov edx, dword ptr [ecx]
// 00473632  8b442404             mov eax, dword ptr [esp + 4]
// 00473636  3b10                 cmp edx, dword ptr [eax]
// 00473638  7548                 jne 0x473682
// 0047363a  8b5104               mov edx, dword ptr [ecx + 4]
// 0047363d  3b5004               cmp edx, dword ptr [eax + 4]
// 00473640  7540                 jne 0x473682
// 00473642  8b5108               mov edx, dword ptr [ecx + 8]
// 00473645  3b5008               cmp edx, dword ptr [eax + 8]
// 00473648  7538                 jne 0x473682
// 0047364a  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0047364d  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00473650  7530                 jne 0x473682
// 00473652  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00473655  3b5010               cmp edx, dword ptr [eax + 0x10]
// 00473658  7528                 jne 0x473682
// 0047365a  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0047365d  3b5014               cmp edx, dword ptr [eax + 0x14]
// 00473660  7520                 jne 0x473682
// 00473662  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00473665  3b5018               cmp edx, dword ptr [eax + 0x18]
// 00473668  7518                 jne 0x473682
// 0047366a  8b511c               mov edx, dword ptr [ecx + 0x1c]
// 0047366d  3b501c               cmp edx, dword ptr [eax + 0x1c]
// 00473670  7510                 jne 0x473682
// 00473672  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00473675  3b4820               cmp ecx, dword ptr [eax + 0x20]
// 00473678  7508                 jne 0x473682
// 0047367a  b801000000           mov eax, 1
// 0047367f  c20400               ret 4
// 00473682  33c0                 xor eax, eax
// 00473684  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??8Stencil@RenderState@RenderDevice@G3D@@QBE_NABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
