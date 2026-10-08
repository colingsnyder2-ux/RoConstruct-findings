// from server: 100% by auto
// roc 2008-06 007a3c20  unit: CXTIconHandle  size: 622 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a3c20
//
// 007a3c20  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007a3c24  53                   push ebx
// 007a3c25  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007a3c29  57                   push edi
// 007a3c2a  8bf9                 mov edi, ecx
// 007a3c2c  c1ef10               shr edi, 0x10
// 007a3c2f  81e1ffff0000         and ecx, 0xffff
// 007a3c35  83fb01               cmp ebx, 1
// 007a3c38  7531                 jne 0x7a3c6b
// 007a3c3a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007a3c3e  0fb610               movzx edx, byte ptr [eax]
// 007a3c41  03ca                 add ecx, edx
// 007a3c43  81f9f1ff0000         cmp ecx, 0xfff1
// 007a3c49  7206                 jb 0x7a3c51
// 007a3c4b  81e9f1ff0000         sub ecx, 0xfff1
// 007a3c51  03f9                 add edi, ecx
// 007a3c53  81fff1ff0000         cmp edi, 0xfff1
// 007a3c59  7206                 jb 0x7a3c61
// 007a3c5b  81eff1ff0000         sub edi, 0xfff1
// 007a3c61  8bc7                 mov eax, edi
// 007a3c63  c1e010               shl eax, 0x10
// 007a3c66  5f                   pop edi
// 007a3c67  0bc1                 or eax, ecx
// 007a3c69  5b                   pop ebx
// 007a3c6a  c3                   ret 
// 007a3c6b  56                   push esi
// 007a3c6c  8b742414             mov esi, dword ptr [esp + 0x14]
// 007a3c70  85f6                 test esi, esi
// 007a3c72  7507                 jne 0x7a3c7b
// 007a3c74  8d4601               lea eax, [esi + 1]
// 007a3c77  5e                   pop esi
// 007a3c78  5f                   pop edi
// 007a3c79  5b                   pop ebx
// 007a3c7a  c3                   ret 
// 007a3c7b  83fb10               cmp ebx, 0x10
// 007a3c7e  733b                 jae 0x7a3cbb
// 007a3c80  85db                 test ebx, ebx
// 007a3c82  740d                 je 0x7a3c91
// 007a3c84  0fb606               movzx eax, byte ptr [esi]
// 007a3c87  03c8                 add ecx, eax
// 007a3c89  4b                   dec ebx
// 007a3c8a  46                   inc esi
// 007a3c8b  03f9                 add edi, ecx
// 007a3c8d  85db                 test ebx, ebx
// 007a3c8f  75f3                 jne 0x7a3c84
// 007a3c91  81f9f1ff0000         cmp ecx, 0xfff1
// 007a3c97  7206                 jb 0x7a3c9f
// 007a3c99  81e9f1ff0000         sub ecx, 0xfff1
// 007a3c9f  b871800780           mov eax, 0x80078071
// 007a3ca4  f7e7                 mul edi
// 007a3ca6  c1ea0f               shr edx, 0xf
// 007a3ca9  8bc2                 mov eax, edx
// 007a3cab  c1e004               shl eax, 4
// 007a3cae  2bc2                 sub eax, edx
// 007a3cb0  03c7                 add eax, edi
// 007a3cb2  5e                   pop esi
// 007a3cb3  c1e010               shl eax, 0x10
// 007a3cb6  5f                   pop edi
// 007a3cb7  0bc1                 or eax, ecx
// 007a3cb9  5b                   pop ebx
// 007a3cba  c3                   ret 
// 007a3cbb  81fbb0150000         cmp ebx, 0x15b0
// 007a3cc1  0f82e2000000         jb 0x7a3da9
// 007a3cc7  b8afa96e5e           mov eax, 0x5e6ea9af
// 007a3ccc  f7e3                 mul ebx
// 007a3cce  55                   push ebp
// 007a3ccf  8bea                 mov ebp, edx
// 007a3cd1  c1ed0b               shr ebp, 0xb
// 007a3cd4  eb0a                 jmp 0x7a3ce0
// 007a3cd6  8da42400000000       lea esp, [esp]
// 007a3cdd  8d4900               lea ecx, [ecx]
// 007a3ce0  81ebb0150000         sub ebx, 0x15b0
// 007a3ce6  b85b010000           mov eax, 0x15b
// 007a3ceb  eb03                 jmp 0x7a3cf0
// 007a3ced  8d4900               lea ecx, [ecx]
// 007a3cf0  0fb616               movzx edx, byte ptr [esi]
// 007a3cf3  03ca                 add ecx, edx
// 007a3cf5  0fb65601             movzx edx, byte ptr [esi + 1]
// 007a3cf9  03f9                 add edi, ecx
// 007a3cfb  03ca                 add ecx, edx
// 007a3cfd  0fb65602             movzx edx, byte ptr [esi + 2]
// 007a3d01  03f9                 add edi, ecx
// 007a3d03  03ca                 add ecx, edx
// 007a3d05  0fb65603             movzx edx, byte ptr [esi + 3]
// 007a3d09  03f9                 add edi, ecx
// 007a3d0b  03ca                 add ecx, edx
// 007a3d0d  0fb65604             movzx edx, byte ptr [esi + 4]
// 007a3d11  03f9                 add edi, ecx
// 007a3d13  03ca                 add ecx, edx
// 007a3d15  0fb65605             movzx edx, byte ptr [esi + 5]
// 007a3d19  03f9                 add edi, ecx
// 007a3d1b  03ca                 add ecx, edx
// 007a3d1d  0fb65606             movzx edx, byte ptr [esi + 6]
// 007a3d21  03f9                 add edi, ecx
// 007a3d23  03ca                 add ecx, edx
// 007a3d25  0fb65607             movzx edx, byte ptr [esi + 7]
// 007a3d29  03f9                 add edi, ecx
// 007a3d2b  03ca                 add ecx, edx
// 007a3d2d  0fb65608             movzx edx, byte ptr [esi + 8]
// 007a3d31  03f9                 add edi, ecx
// 007a3d33  03ca                 add ecx, edx
// 007a3d35  0fb65609             movzx edx, byte ptr [esi + 9]
// 007a3d39  03f9                 add edi, ecx
// 007a3d3b  03ca                 add ecx, edx
// 007a3d3d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 007a3d41  03f9                 add edi, ecx
// 007a3d43  03ca                 add ecx, edx
// 007a3d45  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 007a3d49  03f9                 add edi, ecx
// 007a3d4b  03ca                 add ecx, edx
// 007a3d4d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 007a3d51  03f9                 add edi, ecx
// 007a3d53  03ca                 add ecx, edx
// 007a3d55  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 007a3d59  03f9                 add edi, ecx
// 007a3d5b  03ca                 add ecx, edx
// 007a3d5d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 007a3d61  03f9                 add edi, ecx
// 007a3d63  03ca                 add ecx, edx
// 007a3d65  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 007a3d69  03f9                 add edi, ecx
// 007a3d6b  03ca                 add ecx, edx
// 007a3d6d  03f9                 add edi, ecx
// 007a3d6f  83c610               add esi, 0x10
// 007a3d72  83e801               sub eax, 1
// 007a3d75  0f8575ffffff         jne 0x7a3cf0
// 007a3d7b  b871800780           mov eax, 0x80078071
// 007a3d80  f7e1                 mul ecx
// 007a3d82  c1ea0f               shr edx, 0xf
// 007a3d85  69d20f00ffff         imul edx, edx, 0xffff000f
// 007a3d8b  03ca                 add ecx, edx
// 007a3d8d  b871800780           mov eax, 0x80078071
// 007a3d92  f7e7                 mul edi
// 007a3d94  c1ea0f               shr edx, 0xf
// 007a3d97  69d20f00ffff         imul edx, edx, 0xffff000f
// 007a3d9d  03fa                 add edi, edx
// 007a3d9f  83ed01               sub ebp, 1
// 007a3da2  0f8538ffffff         jne 0x7a3ce0
// 007a3da8  5d                   pop ebp
// 007a3da9  85db                 test ebx, ebx
// 007a3dab  0f84d2000000         je 0x7a3e83
// 007a3db1  83fb10               cmp ebx, 0x10
// 007a3db4  0f8294000000         jb 0x7a3e4e
// 007a3dba  8bc3                 mov eax, ebx
// 007a3dbc  c1e804               shr eax, 4
// 007a3dbf  90                   nop 
// 007a3dc0  0fb616               movzx edx, byte ptr [esi]
// 007a3dc3  03ca                 add ecx, edx
// 007a3dc5  0fb65601             movzx edx, byte ptr [esi + 1]
// 007a3dc9  03f9                 add edi, ecx
// 007a3dcb  03ca                 add ecx, edx
// 007a3dcd  0fb65602             movzx edx, byte ptr [esi + 2]
// 007a3dd1  03f9                 add edi, ecx
// 007a3dd3  03ca                 add ecx, edx
// 007a3dd5  0fb65603             movzx edx, byte ptr [esi + 3]
// 007a3dd9  03f9                 add edi, ecx
// 007a3ddb  03ca                 add ecx, edx
// 007a3ddd  0fb65604             movzx edx, byte ptr [esi + 4]
// 007a3de1  03f9                 add edi, ecx
// 007a3de3  03ca                 add ecx, edx
// 007a3de5  0fb65605             movzx edx, byte ptr [esi + 5]
// 007a3de9  03f9                 add edi, ecx
// 007a3deb  03ca                 add ecx, edx
// 007a3ded  0fb65606             movzx edx, byte ptr [esi + 6]
// 007a3df1  03f9                 add edi, ecx
// 007a3df3  03ca                 add ecx, edx
// 007a3df5  0fb65607             movzx edx, byte ptr [esi + 7]
// 007a3df9  03f9                 add edi, ecx
// 007a3dfb  03ca                 add ecx, edx
// 007a3dfd  0fb65608             movzx edx, byte ptr [esi + 8]
// 007a3e01  03f9                 add edi, ecx
// 007a3e03  03ca                 add ecx, edx
// 007a3e05  0fb65609             movzx edx, byte ptr [esi + 9]
// 007a3e09  03f9                 add edi, ecx
// 007a3e0b  03ca                 add ecx, edx
// 007a3e0d  0fb6560a             movzx edx, byte ptr [esi + 0xa]
// 007a3e11  03f9                 add edi, ecx
// 007a3e13  03ca                 add ecx, edx
// 007a3e15  0fb6560b             movzx edx, byte ptr [esi + 0xb]
// 007a3e19  03f9                 add edi, ecx
// 007a3e1b  03ca                 add ecx, edx
// 007a3e1d  0fb6560c             movzx edx, byte ptr [esi + 0xc]
// 007a3e21  03f9                 add edi, ecx
// 007a3e23  03ca                 add ecx, edx
// 007a3e25  0fb6560d             movzx edx, byte ptr [esi + 0xd]
// 007a3e29  03f9                 add edi, ecx
// 007a3e2b  03ca                 add ecx, edx
// 007a3e2d  0fb6560e             movzx edx, byte ptr [esi + 0xe]
// 007a3e31  03f9                 add edi, ecx
// 007a3e33  03ca                 add ecx, edx
// 007a3e35  0fb6560f             movzx edx, byte ptr [esi + 0xf]
// 007a3e39  03f9                 add edi, ecx
// 007a3e3b  03ca                 add ecx, edx
// 007a3e3d  83eb10               sub ebx, 0x10
// 007a3e40  03f9                 add edi, ecx
// 007a3e42  83c610               add esi, 0x10
// 007a3e45  83e801               sub eax, 1
// 007a3e48  0f8572ffffff         jne 0x7a3dc0
// 007a3e4e  85db                 test ebx, ebx
// 007a3e50  740d                 je 0x7a3e5f
// 007a3e52  0fb606               movzx eax, byte ptr [esi]
// 007a3e55  03c8                 add ecx, eax
// 007a3e57  4b                   dec ebx
// 007a3e58  46                   inc esi
// 007a3e59  03f9                 add edi, ecx
// 007a3e5b  85db                 test ebx, ebx
// 007a3e5d  75f3                 jne 0x7a3e52
// 007a3e5f  b871800780           mov eax, 0x80078071
// 007a3e64  f7e1                 mul ecx
// 007a3e66  c1ea0f               shr edx, 0xf
// 007a3e69  69d20f00ffff         imul edx, edx, 0xffff000f
// 007a3e6f  03ca                 add ecx, edx
// 007a3e71  b871800780           mov eax, 0x80078071
// 007a3e76  f7e7                 mul edi
// 007a3e78  c1ea0f               shr edx, 0xf
// 007a3e7b  69d20f00ffff         imul edx, edx, 0xffff000f
// 007a3e81  03fa                 add edi, edx
// 007a3e83  8bc7                 mov eax, edi
// 007a3e85  5e                   pop esi
// 007a3e86  c1e010               shl eax, 0x10
// 007a3e89  5f                   pop edi
// 007a3e8a  0bc1                 or eax, ecx
// 007a3e8c  5b                   pop ebx
// 007a3e8d  c3                   ret 
// library zlib-1.2.3/adler32.c (function _adler32)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 adler32.c
