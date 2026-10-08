// roc 2009-12 0061a450  unit: seg_00610000  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a450
//
// 0061a450  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061a454  53                   push ebx
// 0061a455  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061a459  57                   push edi
// 0061a45a  8bf9                 mov edi, ecx
// 0061a45c  c1ef10               shr edi, 0x10
// 0061a45f  81e1ffff0000         and ecx, 0xffff
// 0061a465  83fb01               cmp ebx, 1
// 0061a468  7531                 jne 0x61a49b
// 0061a46a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061a46e  0fb610               movzx edx, byte ptr [eax]
// 0061a471  03ca                 add ecx, edx
// 0061a473  81f9f1ff0000         cmp ecx, 0xfff1
// 0061a479  7206                 jb 0x61a481
// 0061a47b  81e9f1ff0000         sub ecx, 0xfff1
// 0061a481  03f9                 add edi, ecx
// 0061a483  81fff1ff0000         cmp edi, 0xfff1
// 0061a489  7206                 jb 0x61a491
// 0061a48b  81eff1ff0000         sub edi, 0xfff1
// 0061a491  8bc7                 mov eax, edi
// 0061a493  c1e010               shl eax, 0x10
// 0061a496  5f                   pop edi
// 0061a497  0bc1                 or eax, ecx
// 0061a499  5b                   pop ebx
// 0061a49a  c3                   ret 
// 0061a49b  56                   push esi
// 0061a49c  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061a4a0  85f6                 test esi, esi
// 0061a4a2  7507                 jne 0x61a4ab
// 0061a4a4  8d4601               lea eax, [esi + 1]
// 0061a4a7  5e                   pop esi
// 0061a4a8  5f                   pop edi
// 0061a4a9  5b                   pop ebx
// 0061a4aa  c3                   ret 
// 0061a4ab  83fb10               cmp ebx, 0x10
// 0061a4ae  733b                 jae 0x61a4eb
// 0061a4b0  85db                 test ebx, ebx
// 0061a4b2  740d                 je 0x61a4c1
// 0061a4b4  0fb606               movzx eax, byte ptr [esi]
// 0061a4b7  03c8                 add ecx, eax
// 0061a4b9  4b                   dec ebx
// 0061a4ba  46                   inc esi
// 0061a4bb  03f9                 add edi, ecx
// 0061a4bd  85db                 test ebx, ebx
// 0061a4bf  75f3                 jne 0x61a4b4
// 0061a4c1  81f9f1ff0000         cmp ecx, 0xfff1
// 0061a4c7  7206                 jb 0x61a4cf
// 0061a4c9  81e9f1ff0000         sub ecx, 0xfff1
// 0061a4cf  b871800780           mov eax, 0x80078071
// 0061a4d4  f7e7                 mul edi
// 0061a4d6  c1ea0f               shr edx, 0xf
// 0061a4d9  8bc2                 mov eax, edx
// 0061a4db  c1e004               shl eax, 4
// 0061a4de  2bc2                 sub eax, edx
// 0061a4e0  03c7                 add eax, edi
// 0061a4e2  5e                   pop esi
// 0061a4e3  c1e010               shl eax, 0x10
// 0061a4e6  5f                   pop edi
// 0061a4e7  0bc1                 or eax, ecx
// 0061a4e9  5b                   pop ebx
// 0061a4ea  c3                   ret 
// 0061a4eb  81fbb0150000         cmp ebx, 0x15b0
// 0061a4f1  0f82e2000000         jb 0x61a5d9
// 0061a4f7  b8afa96e5e           mov eax, 0x5e6ea9af
// 0061a4fc  f7e3                 mul ebx
// 0061a4fe  55                   push ebp
// 0061a4ff  8bea                 mov ebp, edx
// 0061a501  c1ed0b               shr ebp, 0xb
// 0061a504  eb0a                 jmp 0x61a510
// 0061a506  8da42400000000       lea esp, [esp]
// 0061a50d  8d4900               lea ecx, [ecx]
// 0061a510  81ebb0150000         sub ebx, 0x15b0
// 0061a516  b85b010000           mov eax, 0x15b
// 0061a51b  eb03                 jmp 0x61a520
// 0061a51d  8d4900               lea ecx, [ecx]
// 0061a520  0fb616               movzx edx, byte ptr [esi]
// 0061a523  03ca                 add ecx, edx
// 0061a525  0fb65601             movzx edx, byte ptr [esi + 1]
// 0061a529  03f9                 add edi, ecx
// 0061a52b  03ca                 add ecx, edx
// 0061a52d  0fb65602             movzx edx, byte ptr [esi + 2]
// 0061a531  03f9                 add edi, ecx
// 0061a533  03ca                 add ecx, edx
// 0061a535  0fb65603             movzx edx, byte ptr [esi + 3]
// 0061a539  03f9                 add edi, ecx
// 0061a53b  03ca                 add ecx, edx
// 0061a53d  0fb65604             movzx edx, byte ptr [esi + 4]
// 0061a541  03f9                 add edi, ecx
// 0061a543  03ca                 add ecx, edx
// 0061a545  0fb65605             movzx edx, byte ptr [esi + 5]
// 0061a549  03f9                 add edi, ecx
// 0061a54b  03ca                 add ecx, edx
// 0061a54d  0fb65606             movzx edx, byte ptr [esi + 6]
// 0061a551  03f9                 add edi, ecx
// 0061a553  03ca                 add ecx, edx
// 0061a555  0fb65607             movzx edx, byte ptr [esi + 7]
// 0061a559  03f9                 add edi, ecx
// 0061a55b  03ca                 add ecx, edx
// 0061a55d  0fb65608             movzx edx, byte ptr [esi + 8]
// 0061a561  03f9                 add edi, ecx
// 0061a563  03ca                 add ecx, edx
// 0061a565  0fb65609             movzx edx, byte ptr [esi + 9]
// 0061a569  03f9                 add edi, ecx
// 0061a56b  03ca                 add ecx, edx
// 0061a56d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0061a571  03f9                 add edi, ecx
// 0061a573  03ca                 add ecx, edx
// 0061a575  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 0061a579  03f9                 add edi, ecx
// 0061a57b  03ca                 add ecx, edx
// 0061a57d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 0061a581  03f9                 add edi, ecx
// 0061a583  03ca                 add ecx, edx
// 0061a585  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 0061a589  03f9                 add edi, ecx
// 0061a58b  03ca                 add ecx, edx
// 0061a58d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 0061a591  03f9                 add edi, ecx
// 0061a593  03ca                 add ecx, edx
// 0061a595  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 0061a599  03f9                 add edi, ecx
// 0061a59b  03ca                 add ecx, edx
// 0061a59d  03f9                 add edi, ecx
// 0061a59f  83c610               add esi, 0x10
// 0061a5a2  83e801               sub eax, 1
// 0061a5a5  0f8575ffffff         jne 0x61a520
// 0061a5ab  b871800780           mov eax, 0x80078071
// 0061a5b0  f7e1                 mul ecx
// 0061a5b2  c1ea0f               shr edx, 0xf
// 0061a5b5  69d20f00ffff         imul edx, edx, 0xffff000f
// 0061a5bb  03ca                 add ecx, edx
// 0061a5bd  b871800780           mov eax, 0x80078071
// 0061a5c2  f7e7                 mul edi
// 0061a5c4  c1ea0f               shr edx, 0xf
// 0061a5c7  69d20f00ffff         imul edx, edx, 0xffff000f
// 0061a5cd  03fa                 add edi, edx
// 0061a5cf  83ed01               sub ebp, 1
// 0061a5d2  0f8538ffffff         jne 0x61a510
// 0061a5d8  5d                   pop ebp
// 0061a5d9  85db                 test ebx, ebx
// 0061a5db  0f84d2000000         je 0x61a6b3
// 0061a5e1  83fb10               cmp ebx, 0x10
// 0061a5e4  0f8294000000         jb 0x61a67e
// 0061a5ea  8bc3                 mov eax, ebx
// 0061a5ec  c1e804               shr eax, 4
// 0061a5ef  90                   nop 
// 0061a5f0  0fb616               movzx edx, byte ptr [esi]
// 0061a5f3  03ca                 add ecx, edx
// 0061a5f5  0fb65601             movzx edx, byte ptr [esi + 1]
// 0061a5f9  03f9                 add edi, ecx
// 0061a5fb  03ca                 add ecx, edx
// 0061a5fd  0fb65602             movzx edx, byte ptr [esi + 2]
// 0061a601  03f9                 add edi, ecx
// 0061a603  03ca                 add ecx, edx
// 0061a605  0fb65603             movzx edx, byte ptr [esi + 3]
// 0061a609  03f9                 add edi, ecx
// 0061a60b  03ca                 add ecx, edx
// 0061a60d  0fb65604             movzx edx, byte ptr [esi + 4]
// 0061a611  03f9                 add edi, ecx
// 0061a613  03ca                 add ecx, edx
// 0061a615  0fb65605             movzx edx, byte ptr [esi + 5]
// 0061a619  03f9                 add edi, ecx
// 0061a61b  03ca                 add ecx, edx
// 0061a61d  0fb65606             movzx edx, byte ptr [esi + 6]
// 0061a621  03f9                 add edi, ecx
// 0061a623  03ca                 add ecx, edx
// 0061a625  0fb65607             movzx edx, byte ptr [esi + 7]
// 0061a629  03f9                 add edi, ecx
// 0061a62b  03ca                 add ecx, edx
// 0061a62d  0fb65608             movzx edx, byte ptr [esi + 8]
// 0061a631  03f9                 add edi, ecx
// 0061a633  03ca                 add ecx, edx
// 0061a635  0fb65609             movzx edx, byte ptr [esi + 9]
// 0061a639  03f9                 add edi, ecx
// 0061a63b  03ca                 add ecx, edx
// 0061a63d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 0061a641  03f9                 add edi, ecx
// 0061a643  03ca                 add ecx, edx
// 0061a645  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 0061a649  03f9                 add edi, ecx
// 0061a64b  03ca                 add ecx, edx
// 0061a64d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 0061a651  03f9                 add edi, ecx
// 0061a653  03ca                 add ecx, edx
// 0061a655  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 0061a659  03f9                 add edi, ecx
// 0061a65b  03ca                 add ecx, edx
// 0061a65d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 0061a661  03f9                 add edi, ecx
// 0061a663  03ca                 add ecx, edx
// 0061a665  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 0061a669  03f9                 add edi, ecx
// 0061a66b  03ca                 add ecx, edx
// 0061a66d  83eb10               sub ebx, 0x10
// 0061a670  03f9                 add edi, ecx
// 0061a672  83c610               add esi, 0x10
// 0061a675  83e801               sub eax, 1
// 0061a678  0f8572ffffff         jne 0x61a5f0
// 0061a67e  85db                 test ebx, ebx
// 0061a680  740d                 je 0x61a68f
// 0061a682  0fb606               movzx eax, byte ptr [esi]
// 0061a685  03c8                 add ecx, eax
// 0061a687  4b                   dec ebx
// 0061a688  46                   inc esi
// 0061a689  03f9                 add edi, ecx
// 0061a68b  85db                 test ebx, ebx
// 0061a68d  75f3                 jne 0x61a682
// 0061a68f  b871800780           mov eax, 0x80078071
// 0061a694  f7e1                 mul ecx
// 0061a696  c1ea0f               shr edx, 0xf
// 0061a699  69d20f00ffff         imul edx, edx, 0xffff000f
// 0061a69f  03ca                 add ecx, edx
// 0061a6a1  b871800780           mov eax, 0x80078071
// 0061a6a6  f7e7                 mul edi
// 0061a6a8  c1ea0f               shr edx, 0xf
// 0061a6ab  69d20f00ffff         imul edx, edx, 0xffff000f
// 0061a6b1  03fa                 add edi, edx
// 0061a6b3  8bc7                 mov eax, edi
// 0061a6b5  5e                   pop esi
// 0061a6b6  c1e010               shl eax, 0x10
// 0061a6b9  5f                   pop edi
// 0061a6ba  0bc1                 or eax, ecx
// 0061a6bc  5b                   pop ebx
// 0061a6bd  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
