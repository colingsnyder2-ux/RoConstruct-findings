// roc 2010-06 00555cc0  unit: seg_00550000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00555cc0
//
// 00555cc0  6aff                 push -1
// 00555cc2  68c1129900           push 0x9912c1
// 00555cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00555ccd  50                   push eax
// 00555cce  64892500000000       mov dword ptr fs:[0], esp
// 00555cd5  83ec68               sub esp, 0x68
// 00555cd8  55                   push ebp
// 00555cd9  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 00555cdd  56                   push esi
// 00555cde  57                   push edi
// 00555cdf  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 00555ce6  6a01                 push 1
// 00555ce8  6a00                 push 0
// 00555cea  6a01                 push 1
// 00555cec  8bf1                 mov esi, ecx
// 00555cee  57                   push edi
// 00555cef  55                   push ebp
// 00555cf0  8d4c243c             lea ecx, [esp + 0x3c]
// 00555cf4  c7064832a100         mov dword ptr [esi], 0xa13248
// 00555cfa  e8412c0000           call 0x558940
// 00555cff  68fe08a000           push 0xa008fe
// 00555d04  8d4c2410             lea ecx, [esp + 0x10]
// 00555d08  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00555d13  ff1510a49e00         call dword ptr [0x9ea410]
// 00555d19  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00555d20  50                   push eax
// 00555d21  57                   push edi
// 00555d22  8d4c2414             lea ecx, [esp + 0x14]
// 00555d26  55                   push ebp
// 00555d27  51                   push ecx
// 00555d28  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00555d30  e83bd8ffff           call 0x553570
// 00555d35  83c410               add esp, 0x10
// 00555d38  50                   push eax
// 00555d39  8d54242c             lea edx, [esp + 0x2c]
// 00555d3d  52                   push edx
// 00555d3e  8bce                 mov ecx, esi
// 00555d40  e89bfcffff           call 0x5559e0
// 00555d45  8d4c240c             lea ecx, [esp + 0xc]
// 00555d49  c644247c00           mov byte ptr [esp + 0x7c], 0
// 00555d4e  ff1500a49e00         call dword ptr [0x9ea400]
// 00555d54  8d4c2428             lea ecx, [esp + 0x28]
// 00555d58  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00555d60  e85b2f0000           call 0x558cc0
// 00555d65  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00555d69  5f                   pop edi
// 00555d6a  8bc6                 mov eax, esi
// 00555d6c  5e                   pop esi
// 00555d6d  5d                   pop ebp
// 00555d6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00555d75  83c474               add esp, 0x74
// 00555d78  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
