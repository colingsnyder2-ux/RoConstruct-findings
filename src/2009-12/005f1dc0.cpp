// roc 2009-12 005f1dc0  unit: seg_005f0000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1dc0
//
// 005f1dc0  6aff                 push -1
// 005f1dc2  6861f49300           push 0x93f461
// 005f1dc7  64a100000000         mov eax, dword ptr fs:[0]
// 005f1dcd  50                   push eax
// 005f1dce  64892500000000       mov dword ptr fs:[0], esp
// 005f1dd5  83ec68               sub esp, 0x68
// 005f1dd8  55                   push ebp
// 005f1dd9  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 005f1ddd  56                   push esi
// 005f1dde  57                   push edi
// 005f1ddf  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 005f1de6  6a01                 push 1
// 005f1de8  6a00                 push 0
// 005f1dea  6a01                 push 1
// 005f1dec  8bf1                 mov esi, ecx
// 005f1dee  57                   push edi
// 005f1def  55                   push ebp
// 005f1df0  8d4c243c             lea ecx, [esp + 0x3c]
// 005f1df4  c70698559b00         mov dword ptr [esi], 0x9b5598
// 005f1dfa  e8b1340000           call 0x5f52b0
// 005f1dff  6856fd9900           push 0x99fd56
// 005f1e04  8d4c2410             lea ecx, [esp + 0x10]
// 005f1e08  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 005f1e13  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f1e19  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 005f1e20  50                   push eax
// 005f1e21  57                   push edi
// 005f1e22  8d4c2414             lea ecx, [esp + 0x14]
// 005f1e26  55                   push ebp
// 005f1e27  51                   push ecx
// 005f1e28  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 005f1e30  e83bd8ffff           call 0x5ef670
// 005f1e35  83c410               add esp, 0x10
// 005f1e38  50                   push eax
// 005f1e39  8d54242c             lea edx, [esp + 0x2c]
// 005f1e3d  52                   push edx
// 005f1e3e  8bce                 mov ecx, esi
// 005f1e40  e89bfcffff           call 0x5f1ae0
// 005f1e45  8d4c240c             lea ecx, [esp + 0xc]
// 005f1e49  c644247c00           mov byte ptr [esp + 0x7c], 0
// 005f1e4e  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f1e54  8d4c2428             lea ecx, [esp + 0x28]
// 005f1e58  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005f1e60  e8cb370000           call 0x5f5630
// 005f1e65  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 005f1e69  5f                   pop edi
// 005f1e6a  8bc6                 mov eax, esi
// 005f1e6c  5e                   pop esi
// 005f1e6d  5d                   pop ebp
// 005f1e6e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1e75  83c474               add esp, 0x74
// 005f1e78  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
