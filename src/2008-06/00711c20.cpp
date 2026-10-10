// roc 2008-06 00711c20  unit: CXTPPropertyGridItem  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711c20
//
// 00711c20  55                   push ebp
// 00711c21  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00711c25  57                   push edi
// 00711c26  8bf9                 mov edi, ecx
// 00711c28  f6878c00000001       test byte ptr [edi + 0x8c], 1
// 00711c2f  0f8493000000         je 0x711cc8
// 00711c35  83fd1b               cmp ebp, 0x1b
// 00711c38  0f848a000000         je 0x711cc8
// 00711c3e  8b07                 mov eax, dword ptr [edi]
// 00711c40  8b90ac000000         mov edx, dword ptr [eax + 0xac]
// 00711c46  56                   push esi
// 00711c47  ffd2                 call edx
// 00711c49  8b07                 mov eax, dword ptr [edi]
// 00711c4b  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 00711c51  8bcf                 mov ecx, edi
// 00711c53  ffd2                 call edx
// 00711c55  8bf0                 mov esi, eax
// 00711c57  85f6                 test esi, esi
// 00711c59  7462                 je 0x711cbd
// 00711c5b  8b4620               mov eax, dword ptr [esi + 0x20]
// 00711c5e  85c0                 test eax, eax
// 00711c60  745b                 je 0x711cbd
// 00711c62  50                   push eax
// 00711c63  ff153c2d8000         call dword ptr [0x802d3c]
// 00711c69  85c0                 test eax, eax
// 00711c6b  7450                 je 0x711cbd
// 00711c6d  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00711c73  7548                 jne 0x711cbd
// 00711c75  53                   push ebx
// 00711c76  8bce                 mov ecx, esi
// 00711c78  e8abedf8ff           call 0x6a0a28
// 00711c7d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00711c80  8b1d142e8000         mov ebx, dword ptr [0x802e14]
// 00711c86  6aff                 push -1
// 00711c88  6a00                 push 0
// 00711c8a  68b1000000           push 0xb1
// 00711c8f  50                   push eax
// 00711c90  ffd3                 call ebx
// 00711c92  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00711c95  6a00                 push 0
// 00711c97  6a00                 push 0
// 00711c99  68b7000000           push 0xb7
// 00711c9e  51                   push ecx
// 00711c9f  ffd3                 call ebx
// 00711ca1  83fd09               cmp ebp, 9
// 00711ca4  7416                 je 0x711cbc
// 00711ca6  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00711cac  750e                 jne 0x711cbc
// 00711cae  8b5620               mov edx, dword ptr [esi + 0x20]
// 00711cb1  6a00                 push 0
// 00711cb3  55                   push ebp
// 00711cb4  6802010000           push 0x102
// 00711cb9  52                   push edx
// 00711cba  ffd3                 call ebx
// 00711cbc  5b                   pop ebx
// 00711cbd  5e                   pop esi
// 00711cbe  5f                   pop edi
// 00711cbf  b801000000           mov eax, 1
// 00711cc4  5d                   pop ebp
// 00711cc5  c20400               ret 4
// 00711cc8  83fd09               cmp ebp, 9
// 00711ccb  7527                 jne 0x711cf4
// 00711ccd  8b87d4000000         mov eax, dword ptr [edi + 0xd4]
// 00711cd3  83782800             cmp dword ptr [eax + 0x28], 0
// 00711cd7  7e1b                 jle 0x711cf4
// 00711cd9  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 00711cdf  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00711ce5  8b11                 mov edx, dword ptr [ecx]
// 00711ce7  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 00711ced  57                   push edi
// 00711cee  6a01                 push 1
// 00711cf0  6a01                 push 1
// 00711cf2  ffd0                 call eax
// 00711cf4  5f                   pop edi
// 00711cf5  33c0                 xor eax, eax
// 00711cf7  5d                   pop ebp
// 00711cf8  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?OnChar@CXTPPropertyGridItem@@MAEHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
