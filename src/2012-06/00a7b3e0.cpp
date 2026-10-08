// from server: 100% by auto
// roc 2012-06 00a7b3e0  unit: CXTIconHandle  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7b3e0
//
// 00a7b3e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00a7b3e4  53                   push ebx
// 00a7b3e5  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a7b3e9  57                   push edi
// 00a7b3ea  8bf9                 mov edi, ecx
// 00a7b3ec  c1ef10               shr edi, 0x10
// 00a7b3ef  81e1ffff0000         and ecx, 0xffff
// 00a7b3f5  83fb01               cmp ebx, 1
// 00a7b3f8  7531                 jne 0xa7b42b
// 00a7b3fa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a7b3fe  0fb610               movzx edx, byte ptr [eax]
// 00a7b401  03ca                 add ecx, edx
// 00a7b403  81f9f1ff0000         cmp ecx, 0xfff1
// 00a7b409  7206                 jb 0xa7b411
// 00a7b40b  81e9f1ff0000         sub ecx, 0xfff1
// 00a7b411  03f9                 add edi, ecx
// 00a7b413  81fff1ff0000         cmp edi, 0xfff1
// 00a7b419  7206                 jb 0xa7b421
// 00a7b41b  81eff1ff0000         sub edi, 0xfff1
// 00a7b421  8bc7                 mov eax, edi
// 00a7b423  c1e010               shl eax, 0x10
// 00a7b426  5f                   pop edi
// 00a7b427  0bc1                 or eax, ecx
// 00a7b429  5b                   pop ebx
// 00a7b42a  c3                   ret 
// 00a7b42b  56                   push esi
// 00a7b42c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a7b430  85f6                 test esi, esi
// 00a7b432  7507                 jne 0xa7b43b
// 00a7b434  8d4601               lea eax, [esi + 1]
// 00a7b437  5e                   pop esi
// 00a7b438  5f                   pop edi
// 00a7b439  5b                   pop ebx
// 00a7b43a  c3                   ret 
// 00a7b43b  83fb10               cmp ebx, 0x10
// 00a7b43e  733b                 jae 0xa7b47b
// 00a7b440  85db                 test ebx, ebx
// 00a7b442  740d                 je 0xa7b451
// 00a7b444  0fb606               movzx eax, byte ptr [esi]
// 00a7b447  03c8                 add ecx, eax
// 00a7b449  4b                   dec ebx
// 00a7b44a  46                   inc esi
// 00a7b44b  03f9                 add edi, ecx
// 00a7b44d  85db                 test ebx, ebx
// 00a7b44f  75f3                 jne 0xa7b444
// 00a7b451  81f9f1ff0000         cmp ecx, 0xfff1
// 00a7b457  7206                 jb 0xa7b45f
// 00a7b459  81e9f1ff0000         sub ecx, 0xfff1
// 00a7b45f  b871800780           mov eax, 0x80078071
// 00a7b464  f7e7                 mul edi
// 00a7b466  c1ea0f               shr edx, 0xf
// 00a7b469  8bc2                 mov eax, edx
// 00a7b46b  c1e004               shl eax, 4
// 00a7b46e  2bc2                 sub eax, edx
// 00a7b470  03c7                 add eax, edi
// 00a7b472  5e                   pop esi
// 00a7b473  c1e010               shl eax, 0x10
// 00a7b476  5f                   pop edi
// 00a7b477  0bc1                 or eax, ecx
// 00a7b479  5b                   pop ebx
// 00a7b47a  c3                   ret 
// 00a7b47b  81fbb0150000         cmp ebx, 0x15b0
// 00a7b481  0f82e2000000         jb 0xa7b569
// 00a7b487  b8afa96e5e           mov eax, 0x5e6ea9af
// 00a7b48c  f7e3                 mul ebx
// 00a7b48e  55                   push ebp
// 00a7b48f  8bea                 mov ebp, edx
// 00a7b491  c1ed0b               shr ebp, 0xb
// 00a7b494  eb0a                 jmp 0xa7b4a0
// 00a7b496  8da42400000000       lea esp, [esp]
// 00a7b49d  8d4900               lea ecx, [ecx]
// 00a7b4a0  81ebb0150000         sub ebx, 0x15b0
// 00a7b4a6  b85b010000           mov eax, 0x15b
// 00a7b4ab  eb03                 jmp 0xa7b4b0
// 00a7b4ad  8d4900               lea ecx, [ecx]
// 00a7b4b0  0fb616               movzx edx, byte ptr [esi]
// 00a7b4b3  03ca                 add ecx, edx
// 00a7b4b5  0fb65601             movzx edx, byte ptr [esi + 1]
// 00a7b4b9  03f9                 add edi, ecx
// 00a7b4bb  03ca                 add ecx, edx
// 00a7b4bd  0fb65602             movzx edx, byte ptr [esi + 2]
// 00a7b4c1  03f9                 add edi, ecx
// 00a7b4c3  03ca                 add ecx, edx
// 00a7b4c5  0fb65603             movzx edx, byte ptr [esi + 3]
// 00a7b4c9  03f9                 add edi, ecx
// 00a7b4cb  03ca                 add ecx, edx
// 00a7b4cd  0fb65604             movzx edx, byte ptr [esi + 4]
// 00a7b4d1  03f9                 add edi, ecx
// 00a7b4d3  03ca                 add ecx, edx
// 00a7b4d5  0fb65605             movzx edx, byte ptr [esi + 5]
// 00a7b4d9  03f9                 add edi, ecx
// 00a7b4db  03ca                 add ecx, edx
// 00a7b4dd  0fb65606             movzx edx, byte ptr [esi + 6]
// 00a7b4e1  03f9                 add edi, ecx
// 00a7b4e3  03ca                 add ecx, edx
// 00a7b4e5  0fb65607             movzx edx, byte ptr [esi + 7]
// 00a7b4e9  03f9                 add edi, ecx
// 00a7b4eb  03ca                 add ecx, edx
// 00a7b4ed  0fb65608             movzx edx, byte ptr [esi + 8]
// 00a7b4f1  03f9                 add edi, ecx
// 00a7b4f3  03ca                 add ecx, edx
// 00a7b4f5  0fb65609             movzx edx, byte ptr [esi + 9]
// 00a7b4f9  03f9                 add edi, ecx
// 00a7b4fb  03ca                 add ecx, edx
// 00a7b4fd  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00a7b501  03f9                 add edi, ecx
// 00a7b503  03ca                 add ecx, edx
// 00a7b505  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00a7b509  03f9                 add edi, ecx
// 00a7b50b  03ca                 add ecx, edx
// 00a7b50d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00a7b511  03f9                 add edi, ecx
// 00a7b513  03ca                 add ecx, edx
// 00a7b515  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00a7b519  03f9                 add edi, ecx
// 00a7b51b  03ca                 add ecx, edx
// 00a7b51d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00a7b521  03f9                 add edi, ecx
// 00a7b523  03ca                 add ecx, edx
// 00a7b525  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00a7b529  03f9                 add edi, ecx
// 00a7b52b  03ca                 add ecx, edx
// 00a7b52d  03f9                 add edi, ecx
// 00a7b52f  83c610               add esi, 0x10
// 00a7b532  83e801               sub eax, 1
// 00a7b535  0f8575ffffff         jne 0xa7b4b0
// 00a7b53b  b871800780           mov eax, 0x80078071
// 00a7b540  f7e1                 mul ecx
// 00a7b542  c1ea0f               shr edx, 0xf
// 00a7b545  69d20f00ffff         imul edx, edx, 0xffff000f
// 00a7b54b  03ca                 add ecx, edx
// 00a7b54d  b871800780           mov eax, 0x80078071
// 00a7b552  f7e7                 mul edi
// 00a7b554  c1ea0f               shr edx, 0xf
// 00a7b557  69d20f00ffff         imul edx, edx, 0xffff000f
// 00a7b55d  03fa                 add edi, edx
// 00a7b55f  83ed01               sub ebp, 1
// 00a7b562  0f8538ffffff         jne 0xa7b4a0
// 00a7b568  5d                   pop ebp
// 00a7b569  85db                 test ebx, ebx
// 00a7b56b  0f84d2000000         je 0xa7b643
// 00a7b571  83fb10               cmp ebx, 0x10
// 00a7b574  0f8294000000         jb 0xa7b60e
// 00a7b57a  8bc3                 mov eax, ebx
// 00a7b57c  c1e804               shr eax, 4
// 00a7b57f  90                   nop 
// 00a7b580  0fb616               movzx edx, byte ptr [esi]
// 00a7b583  03ca                 add ecx, edx
// 00a7b585  0fb65601             movzx edx, byte ptr [esi + 1]
// 00a7b589  03f9                 add edi, ecx
// 00a7b58b  03ca                 add ecx, edx
// 00a7b58d  0fb65602             movzx edx, byte ptr [esi + 2]
// 00a7b591  03f9                 add edi, ecx
// 00a7b593  03ca                 add ecx, edx
// 00a7b595  0fb65603             movzx edx, byte ptr [esi + 3]
// 00a7b599  03f9                 add edi, ecx
// 00a7b59b  03ca                 add ecx, edx
// 00a7b59d  0fb65604             movzx edx, byte ptr [esi + 4]
// 00a7b5a1  03f9                 add edi, ecx
// 00a7b5a3  03ca                 add ecx, edx
// 00a7b5a5  0fb65605             movzx edx, byte ptr [esi + 5]
// 00a7b5a9  03f9                 add edi, ecx
// 00a7b5ab  03ca                 add ecx, edx
// 00a7b5ad  0fb65606             movzx edx, byte ptr [esi + 6]
// 00a7b5b1  03f9                 add edi, ecx
// 00a7b5b3  03ca                 add ecx, edx
// 00a7b5b5  0fb65607             movzx edx, byte ptr [esi + 7]
// 00a7b5b9  03f9                 add edi, ecx
// 00a7b5bb  03ca                 add ecx, edx
// 00a7b5bd  0fb65608             movzx edx, byte ptr [esi + 8]
// 00a7b5c1  03f9                 add edi, ecx
// 00a7b5c3  03ca                 add ecx, edx
// 00a7b5c5  0fb65609             movzx edx, byte ptr [esi + 9]
// 00a7b5c9  03f9                 add edi, ecx
// 00a7b5cb  03ca                 add ecx, edx
// 00a7b5cd  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 00a7b5d1  03f9                 add edi, ecx
// 00a7b5d3  03ca                 add ecx, edx
// 00a7b5d5  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 00a7b5d9  03f9                 add edi, ecx
// 00a7b5db  03ca                 add ecx, edx
// 00a7b5dd  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 00a7b5e1  03f9                 add edi, ecx
// 00a7b5e3  03ca                 add ecx, edx
// 00a7b5e5  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 00a7b5e9  03f9                 add edi, ecx
// 00a7b5eb  03ca                 add ecx, edx
// 00a7b5ed  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 00a7b5f1  03f9                 add edi, ecx
// 00a7b5f3  03ca                 add ecx, edx
// 00a7b5f5  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 00a7b5f9  03f9                 add edi, ecx
// 00a7b5fb  03ca                 add ecx, edx
// 00a7b5fd  83eb10               sub ebx, 0x10
// 00a7b600  03f9                 add edi, ecx
// 00a7b602  83c610               add esi, 0x10
// 00a7b605  83e801               sub eax, 1
// 00a7b608  0f8572ffffff         jne 0xa7b580
// 00a7b60e  85db                 test ebx, ebx
// 00a7b610  740d                 je 0xa7b61f
// 00a7b612  0fb606               movzx eax, byte ptr [esi]
// 00a7b615  03c8                 add ecx, eax
// 00a7b617  4b                   dec ebx
// 00a7b618  46                   inc esi
// 00a7b619  03f9                 add edi, ecx
// 00a7b61b  85db                 test ebx, ebx
// 00a7b61d  75f3                 jne 0xa7b612
// 00a7b61f  b871800780           mov eax, 0x80078071
// 00a7b624  f7e1                 mul ecx
// 00a7b626  c1ea0f               shr edx, 0xf
// 00a7b629  69d20f00ffff         imul edx, edx, 0xffff000f
// 00a7b62f  03ca                 add ecx, edx
// 00a7b631  b871800780           mov eax, 0x80078071
// 00a7b636  f7e7                 mul edi
// 00a7b638  c1ea0f               shr edx, 0xf
// 00a7b63b  69d20f00ffff         imul edx, edx, 0xffff000f
// 00a7b641  03fa                 add edi, edx
// 00a7b643  8bc7                 mov eax, edi
// 00a7b645  5e                   pop esi
// 00a7b646  c1e010               shl eax, 0x10
// 00a7b649  5f                   pop edi
// 00a7b64a  0bc1                 or eax, ecx
// 00a7b64c  5b                   pop ebx
// 00a7b64d  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
