// roc 2009-12 00868d70  unit: CXTPPropertyGridView  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00868d70
//
// 00868d70  57                   push edi
// 00868d71  8bf9                 mov edi, ecx
// 00868d73  83bfb400000000       cmp dword ptr [edi + 0xb4], 0
// 00868d7a  0f855a010000         jne 0x868eda
// 00868d80  83bf5401000000       cmp dword ptr [edi + 0x154], 0
// 00868d87  53                   push ebx
// 00868d88  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00868d8c  7409                 je 0x868d97
// 00868d8e  83fb09               cmp ebx, 9
// 00868d91  0f8542010000         jne 0x868ed9
// 00868d97  ff15eccb9800         call dword ptr [0x98cbec]
// 00868d9d  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00868da0  0f8533010000         jne 0x868ed9
// 00868da6  56                   push esi
// 00868da7  8bcf                 mov ecx, edi
// 00868da9  e892ffffff           call 0x868d40
// 00868dae  8bf0                 mov esi, eax
// 00868db0  83fb2b               cmp ebx, 0x2b
// 00868db3  753f                 jne 0x868df4
// 00868db5  85f6                 test esi, esi
// 00868db7  0f8414010000         je 0x868ed1
// 00868dbd  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00868dc3  83782800             cmp dword ptr [eax + 0x28], 0
// 00868dc7  0f84de000000         je 0x868eab
// 00868dcd  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00868dd4  0f84d1000000         je 0x868eab
// 00868dda  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00868de1  0f85c4000000         jne 0x868eab
// 00868de7  8bce                 mov ecx, esi
// 00868de9  e8f2c1ffff           call 0x864fe0
// 00868dee  5e                   pop esi
// 00868def  5b                   pop ebx
// 00868df0  5f                   pop edi
// 00868df1  c20c00               ret 0xc
// 00868df4  83fb2d               cmp ebx, 0x2d
// 00868df7  753f                 jne 0x868e38
// 00868df9  85f6                 test esi, esi
// 00868dfb  0f84d0000000         je 0x868ed1
// 00868e01  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00868e07  83792800             cmp dword ptr [ecx + 0x28], 0
// 00868e0b  0f849a000000         je 0x868eab
// 00868e11  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00868e18  0f848d000000         je 0x868eab
// 00868e1e  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00868e25  0f8480000000         je 0x868eab
// 00868e2b  8bce                 mov ecx, esi
// 00868e2d  e84ec1ffff           call 0x864f80
// 00868e32  5e                   pop esi
// 00868e33  5b                   pop ebx
// 00868e34  5f                   pop edi
// 00868e35  c20c00               ret 0xc
// 00868e38  83fb09               cmp ebx, 9
// 00868e3b  756e                 jne 0x868eab
// 00868e3d  83bf5401000000       cmp dword ptr [edi + 0x154], 0
// 00868e44  7435                 je 0x868e7b
// 00868e46  6a10                 push 0x10
// 00868e48  ff1530cc9800         call dword ptr [0x98cc30]
// 00868e4e  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00868e54  33d2                 xor edx, edx
// 00868e56  6685c0               test ax, ax
// 00868e59  0f9dc2               setge dl
// 00868e5c  56                   push esi
// 00868e5d  8bc2                 mov eax, edx
// 00868e5f  8b11                 mov edx, dword ptr [ecx]
// 00868e61  50                   push eax
// 00868e62  f7d8                 neg eax
// 00868e64  1bc0                 sbb eax, eax
// 00868e66  83e0fd               and eax, 0xfffffffd
// 00868e69  83c004               add eax, 4
// 00868e6c  50                   push eax
// 00868e6d  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00868e73  ffd0                 call eax
// 00868e75  5e                   pop esi
// 00868e76  5b                   pop ebx
// 00868e77  5f                   pop edi
// 00868e78  c20c00               ret 0xc
// 00868e7b  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00868e81  8b19                 mov ebx, dword ptr [ecx]
// 00868e83  56                   push esi
// 00868e84  6a10                 push 0x10
// 00868e86  ff1530cc9800         call dword ptr [0x98cc30]
// 00868e8c  8b8fb0000000         mov ecx, dword ptr [edi + 0xb0]
// 00868e92  33d2                 xor edx, edx
// 00868e94  6685c0               test ax, ax
// 00868e97  8b8350010000         mov eax, dword ptr [ebx + 0x150]
// 00868e9d  0f9dc2               setge dl
// 00868ea0  52                   push edx
// 00868ea1  6a00                 push 0
// 00868ea3  ffd0                 call eax
// 00868ea5  5e                   pop esi
// 00868ea6  5b                   pop ebx
// 00868ea7  5f                   pop edi
// 00868ea8  c20c00               ret 0xc
// 00868eab  85f6                 test esi, esi
// 00868ead  7422                 je 0x868ed1
// 00868eaf  83fb0d               cmp ebx, 0xd
// 00868eb2  750c                 jne 0x868ec0
// 00868eb4  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00868eba  83792800             cmp dword ptr [ecx + 0x28], 0
// 00868ebe  7511                 jne 0x868ed1
// 00868ec0  8b16                 mov edx, dword ptr [esi]
// 00868ec2  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00868ec8  53                   push ebx
// 00868ec9  8bce                 mov ecx, esi
// 00868ecb  ffd0                 call eax
// 00868ecd  85c0                 test eax, eax
// 00868ecf  7507                 jne 0x868ed8
// 00868ed1  8bcf                 mov ecx, edi
// 00868ed3  e858aff8ff           call 0x7f3e30
// 00868ed8  5e                   pop esi
// 00868ed9  5b                   pop ebx
// 00868eda  5f                   pop edi
// 00868edb  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridView@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGridView.cpp