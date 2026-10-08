// from server: 100% by auto
// roc 2008-06 00513e80  unit: G3D::GCamera  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513e80
//
// 00513e80  85f6                 test esi, esi
// 00513e82  0f84c4000000         je 0x513f4c
// 00513e88  57                   push edi
// 00513e89  8b3d74278000         mov edi, dword ptr [0x802774]
// 00513e8f  53                   push ebx
// 00513e90  687cb08000           push 0x80b07c
// 00513e95  56                   push esi
// 00513e96  ffd7                 call edi
// 00513e98  83c40c               add esp, 0xc
// 00513e9b  85c0                 test eax, eax
// 00513e9d  7507                 jne 0x513ea6
// 00513e9f  b800000080           mov eax, 0x80000000
// 00513ea4  5f                   pop edi
// 00513ea5  c3                   ret 
// 00513ea6  53                   push ebx
// 00513ea7  68ecb08000           push 0x80b0ec
// 00513eac  56                   push esi
// 00513ead  ffd7                 call edi
// 00513eaf  83c40c               add esp, 0xc
// 00513eb2  85c0                 test eax, eax
// 00513eb4  7507                 jne 0x513ebd
// 00513eb6  b805000080           mov eax, 0x80000005
// 00513ebb  5f                   pop edi
// 00513ebc  c3                   ret 
// 00513ebd  53                   push ebx
// 00513ebe  6890b08000           push 0x80b090
// 00513ec3  56                   push esi
// 00513ec4  ffd7                 call edi
// 00513ec6  83c40c               add esp, 0xc
// 00513ec9  85c0                 test eax, eax
// 00513ecb  7507                 jne 0x513ed4
// 00513ecd  b801000080           mov eax, 0x80000001
// 00513ed2  5f                   pop edi
// 00513ed3  c3                   ret 
// 00513ed4  53                   push ebx
// 00513ed5  68a4b08000           push 0x80b0a4
// 00513eda  56                   push esi
// 00513edb  ffd7                 call edi
// 00513edd  83c40c               add esp, 0xc
// 00513ee0  85c0                 test eax, eax
// 00513ee2  7507                 jne 0x513eeb
// 00513ee4  b802000080           mov eax, 0x80000002
// 00513ee9  5f                   pop edi
// 00513eea  c3                   ret 
// 00513eeb  53                   push ebx
// 00513eec  68c4b08000           push 0x80b0c4
// 00513ef1  56                   push esi
// 00513ef2  ffd7                 call edi
// 00513ef4  83c40c               add esp, 0xc
// 00513ef7  85c0                 test eax, eax
// 00513ef9  7507                 jne 0x513f02
// 00513efb  b804000080           mov eax, 0x80000004
// 00513f00  5f                   pop edi
// 00513f01  c3                   ret 
// 00513f02  53                   push ebx
// 00513f03  6870888200           push 0x828870
// 00513f08  56                   push esi
// 00513f09  ffd7                 call edi
// 00513f0b  83c40c               add esp, 0xc
// 00513f0e  85c0                 test eax, eax
// 00513f10  7507                 jne 0x513f19
// 00513f12  b860000080           mov eax, 0x80000060
// 00513f17  5f                   pop edi
// 00513f18  c3                   ret 
// 00513f19  53                   push ebx
// 00513f1a  6858888200           push 0x828858
// 00513f1f  56                   push esi
// 00513f20  ffd7                 call edi
// 00513f22  83c40c               add esp, 0xc
// 00513f25  85c0                 test eax, eax
// 00513f27  7507                 jne 0x513f30
// 00513f29  b850000080           mov eax, 0x80000050
// 00513f2e  5f                   pop edi
// 00513f2f  c3                   ret 
// 00513f30  53                   push ebx
// 00513f31  687cb08000           push 0x80b07c
// 00513f36  56                   push esi
// 00513f37  ffd7                 call edi
// 00513f39  83c40c               add esp, 0xc
// 00513f3c  f7d8                 neg eax
// 00513f3e  1bc0                 sbb eax, eax
// 00513f40  2500000080           and eax, 0x80000000
// 00513f45  0500000080           add eax, 0x80000000
// 00513f4a  5f                   pop edi
// 00513f4b  c3                   ret 
// 00513f4c  33c0                 xor eax, eax
// 00513f4e  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?getKeyFromString@G3D@@YAPAUHKEY__@@PBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
