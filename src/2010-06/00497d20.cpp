// roc 2010-06 00497d20  unit: seg_00490000  size: 563 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497d20
//
// 00497d20  83ec40               sub esp, 0x40
// 00497d23  53                   push ebx
// 00497d24  56                   push esi
// 00497d25  8bf1                 mov esi, ecx
// 00497d27  57                   push edi
// 00497d28  8d8620010000         lea eax, [esi + 0x120]
// 00497d2e  50                   push eax
// 00497d2f  8d8e80080000         lea ecx, [esi + 0x880]
// 00497d35  e866ebffff           call 0x4968a0
// 00497d3a  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00497d3e  51                   push ecx
// 00497d3f  bb01000000           mov ebx, 1
// 00497d44  015e7c               add dword ptr [esi + 0x7c], ebx
// 00497d47  8bce                 mov ecx, esi
// 00497d49  c686bd03000000       mov byte ptr [esi + 0x3bd], 0
// 00497d50  c6867808000000       mov byte ptr [esi + 0x878], 0
// 00497d57  c786c4040000ffffffff mov dword ptr [esi + 0x4c4], 0xffffffff
// 00497d61  e83ab9ffff           call 0x4936a0
// 00497d66  015e78               add dword ptr [esi + 0x78], ebx
// 00497d69  83beec03000006       cmp dword ptr [esi + 0x3ec], 6
// 00497d70  8b3de0aa9e00         mov edi, dword ptr [0x9eaae0]
// 00497d76  7414                 je 0x497d8c
// 00497d78  015e70               add dword ptr [esi + 0x70], ebx
// 00497d7b  68710b0000           push 0xb71
// 00497d80  ffd7                 call edi
// 00497d82  c786ec03000006000000 mov dword ptr [esi + 0x3ec], 6
// 00497d8c  015e78               add dword ptr [esi + 0x78], ebx
// 00497d8f  80bebc03000000       cmp byte ptr [esi + 0x3bc], 0
// 00497d96  7417                 je 0x497daf
// 00497d98  68500b0000           push 0xb50
// 00497d9d  ffd7                 call edi
// 00497d9f  015e70               add dword ptr [esi + 0x70], ebx
// 00497da2  c686bc03000000       mov byte ptr [esi + 0x3bc], 0
// 00497da9  889ebd030000         mov byte ptr [esi + 0x3bd], bl
// 00497daf  015e78               add dword ptr [esi + 0x78], ebx
// 00497db2  83be1804000002       cmp dword ptr [esi + 0x418], 2
// 00497db9  7414                 je 0x497dcf
// 00497dbb  015e70               add dword ptr [esi + 0x70], ebx
// 00497dbe  68440b0000           push 0xb44
// 00497dc3  ffd7                 call edi
// 00497dc5  c7861804000002000000 mov dword ptr [esi + 0x418], 2
// 00497dcf  015e78               add dword ptr [esi + 0x78], ebx
// 00497dd2  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 00497dd9  7412                 je 0x497ded
// 00497ddb  015e70               add dword ptr [esi + 0x70], ebx
// 00497dde  6a00                 push 0
// 00497de0  ff1564ab9e00         call dword ptr [0x9eab64]
// 00497de6  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 00497ded  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00497df1  57                   push edi
// 00497df2  8bce                 mov ecx, esi
// 00497df4  e8f7b1ffff           call 0x492ff0
// 00497df9  e822f50b00           call 0x557320
// 00497dfe  50                   push eax
// 00497dff  8d4c2410             lea ecx, [esp + 0x10]
// 00497e03  e868e20b00           call 0x556070
// 00497e08  0f57c0               xorps xmm0, xmm0
// 00497e0b  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00497e11  751e                 jne 0x497e31
// 00497e13  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00497e19  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00497e21  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00497e29  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00497e31  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00497e39  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00497e3f  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00497e47  8d54240c             lea edx, [esp + 0xc]
// 00497e4b  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00497e51  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00497e59  52                   push edx
// 00497e5a  8bce                 mov ecx, esi
// 00497e5c  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00497e62  e8f99effff           call 0x491d60
// 00497e67  e8b4f40b00           call 0x557320
// 00497e6c  50                   push eax
// 00497e6d  8d4c2410             lea ecx, [esp + 0x10]
// 00497e71  e8fae10b00           call 0x556070
// 00497e76  841dd03cc000         test byte ptr [0xc03cd0], bl
// 00497e7c  7521                 jne 0x497e9f
// 00497e7e  0f57c0               xorps xmm0, xmm0
// 00497e81  091dd03cc000         or dword ptr [0xc03cd0], ebx
// 00497e87  f30f1105c43cc000     movss dword ptr [0xc03cc4], xmm0
// 00497e8f  f30f1105c83cc000     movss dword ptr [0xc03cc8], xmm0
// 00497e97  f30f1105cc3cc000     movss dword ptr [0xc03ccc], xmm0
// 00497e9f  f30f1005c43cc000     movss xmm0, dword ptr [0xc03cc4]
// 00497ea7  f30f11442430         movss dword ptr [esp + 0x30], xmm0
// 00497ead  f30f1005c83cc000     movss xmm0, dword ptr [0xc03cc8]
// 00497eb5  8d44240c             lea eax, [esp + 0xc]
// 00497eb9  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 00497ebf  f30f1005cc3cc000     movss xmm0, dword ptr [0xc03ccc]
// 00497ec7  50                   push eax
// 00497ec8  8bce                 mov ecx, esi
// 00497eca  f30f1144243c         movss dword ptr [esp + 0x3c], xmm0
// 00497ed0  e83bb9ffff           call 0x493810
// 00497ed5  d9e8                 fld1 
// 00497ed7  f30f104704           movss xmm0, dword ptr [edi + 4]
// 00497edc  f30f101f             movss xmm3, dword ptr [edi]
// 00497ee0  f30f10570c           movss xmm2, dword ptr [edi + 0xc]
// 00497ee5  83ec18               sub esp, 0x18
// 00497ee8  d95c2414             fstp dword ptr [esp + 0x14]
// 00497eec  f30f11442468         movss dword ptr [esp + 0x68], xmm0
// 00497ef2  d90510c6a000         fld dword ptr [0xa0c610]
// 00497ef8  0f28c8               movaps xmm1, xmm0
// 00497efb  d95c2410             fstp dword ptr [esp + 0x10]
// 00497eff  f30f5cd0             subss xmm2, xmm0
// 00497f03  f30f104708           movss xmm0, dword ptr [edi + 8]
// 00497f08  d9442468             fld dword ptr [esp + 0x68]
// 00497f0c  d95c240c             fstp dword ptr [esp + 0xc]
// 00497f10  f30f115c246c         movss dword ptr [esp + 0x6c], xmm3
// 00497f16  d944246c             fld dword ptr [esp + 0x6c]
// 00497f1a  f30f5cc3             subss xmm0, xmm3
// 00497f1e  f30f58ca             addss xmm1, xmm2
// 00497f22  f30f114c2408         movss dword ptr [esp + 8], xmm1
// 00497f28  f30f58c3             addss xmm0, xmm3
// 00497f2c  f30f11442404         movss dword ptr [esp + 4], xmm0
// 00497f32  d91c24               fstp dword ptr [esp]
// 00497f35  8d4c2424             lea ecx, [esp + 0x24]
// 00497f39  51                   push ecx
// 00497f3a  e8d1060c00           call 0x558610
// 00497f3f  83c41c               add esp, 0x1c
// 00497f42  50                   push eax
// 00497f43  8bce                 mov ecx, esi
// 00497f45  e8c69effff           call 0x491e10
// 00497f4a  5f                   pop edi
// 00497f4b  5e                   pop esi
// 00497f4c  5b                   pop ebx
// 00497f4d  83c440               add esp, 0x40
// 00497f50  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@AAEXABV?$ReferenceCountedPointer@VFramebuffer@G3D@@@2@ABVRect2D@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
