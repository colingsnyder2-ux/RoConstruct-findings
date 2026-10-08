// from server: 100% by auto
// roc 2010-06 00483f60  unit: G3D::ReferenceCountedObject  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00483f60
//
// 00483f60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00483f64  83ec10               sub esp, 0x10
// 00483f67  56                   push esi
// 00483f68  8b742424             mov esi, dword ptr [esp + 0x24]
// 00483f6c  57                   push edi
// 00483f6d  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00483f71  81f9e10d0000         cmp ecx, 0xde1
// 00483f77  7418                 je 0x483f91
// 00483f79  81f914850000         cmp ecx, 0x8514
// 00483f7f  0f863c010000         jbe 0x4840c1
// 00483f85  81f91a850000         cmp ecx, 0x851a
// 00483f8b  0f8730010000         ja 0x4840c1
// 00483f91  f30f10442438         movss xmm0, dword ptr [esp + 0x38]
// 00483f97  53                   push ebx
// 00483f98  32db                 xor bl, bl
// 00483f9a  0f2e0524f6a100       ucomiss xmm0, dword ptr [0xa1f624]
// 00483fa1  9f                   lahf 
// 00483fa2  55                   push ebp
// 00483fa3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00483fa7  f6c444               test ah, 0x44
// 00483faa  0f8bea000000         jnp 0x48409a
// 00483fb0  db442430             fild dword ptr [esp + 0x30]
// 00483fb4  8bde                 mov ebx, esi
// 00483fb6  d9442440             fld dword ptr [esp + 0x40]
// 00483fba  897c241c             mov dword ptr [esp + 0x1c], edi
// 00483fbe  d97c2412             fnstcw word ptr [esp + 0x12]
// 00483fc2  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00483fc7  dcc9                 fmul st(1), st(0)
// 00483fc9  0d000c0000           or eax, 0xc00
// 00483fce  d9c9                 fxch st(1)
// 00483fd0  89442414             mov dword ptr [esp + 0x14], eax
// 00483fd4  d96c2414             fldcw word ptr [esp + 0x14]
// 00483fd8  df7c2414             fistp qword ptr [esp + 0x14]
// 00483fdc  8b442414             mov eax, dword ptr [esp + 0x14]
// 00483fe0  48                   dec eax
// 00483fe1  8bc8                 mov ecx, eax
// 00483fe3  d96c2412             fldcw word ptr [esp + 0x12]
// 00483fe7  c1e910               shr ecx, 0x10
// 00483fea  0bc1                 or eax, ecx
// 00483fec  8bd0                 mov edx, eax
// 00483fee  c1ea08               shr edx, 8
// 00483ff1  0bc2                 or eax, edx
// 00483ff3  8bc8                 mov ecx, eax
// 00483ff5  c1e904               shr ecx, 4
// 00483ff8  0bc1                 or eax, ecx
// 00483ffa  da4c2434             fimul dword ptr [esp + 0x34]
// 00483ffe  8bd0                 mov edx, eax
// 00484000  c1ea02               shr edx, 2
// 00484003  0bc2                 or eax, edx
// 00484005  8bc8                 mov ecx, eax
// 00484007  d97c2412             fnstcw word ptr [esp + 0x12]
// 0048400b  d1e9                 shr ecx, 1
// 0048400d  0bc8                 or ecx, eax
// 0048400f  0fb7442412           movzx eax, word ptr [esp + 0x12]
// 00484014  0d000c0000           or eax, 0xc00
// 00484019  89442414             mov dword ptr [esp + 0x14], eax
// 0048401d  41                   inc ecx
// 0048401e  8bf1                 mov esi, ecx
// 00484020  d96c2414             fldcw word ptr [esp + 0x14]
// 00484024  df7c2414             fistp qword ptr [esp + 0x14]
// 00484028  8b442414             mov eax, dword ptr [esp + 0x14]
// 0048402c  48                   dec eax
// 0048402d  8bd0                 mov edx, eax
// 0048402f  c1ea10               shr edx, 0x10
// 00484032  d96c2412             fldcw word ptr [esp + 0x12]
// 00484036  0bc2                 or eax, edx
// 00484038  8bc8                 mov ecx, eax
// 0048403a  c1e908               shr ecx, 8
// 0048403d  0bc1                 or eax, ecx
// 0048403f  8bd0                 mov edx, eax
// 00484041  c1ea04               shr edx, 4
// 00484044  0bc2                 or eax, edx
// 00484046  8bc8                 mov ecx, eax
// 00484048  c1e902               shr ecx, 2
// 0048404b  0bc1                 or eax, ecx
// 0048404d  8bd0                 mov edx, eax
// 0048404f  d1ea                 shr edx, 1
// 00484051  0bd0                 or edx, eax
// 00484053  42                   inc edx
// 00484054  8bfa                 mov edi, edx
// 00484056  8bc6                 mov eax, esi
// 00484058  0fafc7               imul eax, edi
// 0048405b  0faf44243c           imul eax, dword ptr [esp + 0x3c]
// 00484060  50                   push eax
// 00484061  e81c3c3200           call 0x7a7c82
// 00484066  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0048406a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0048406e  83c404               add esp, 4
// 00484071  8be8                 mov ebp, eax
// 00484073  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00484077  55                   push ebp
// 00484078  6801140000           push 0x1401
// 0048407d  57                   push edi
// 0048407e  56                   push esi
// 0048407f  51                   push ecx
// 00484080  6801140000           push 0x1401
// 00484085  52                   push edx
// 00484086  53                   push ebx
// 00484087  50                   push eax
// 00484088  c644243601           mov byte ptr [esp + 0x36], 1
// 0048408d  e83cf14300           call 0x8c31ce
// 00484092  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00484096  8a5c2412             mov bl, byte ptr [esp + 0x12]
// 0048409a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048409e  8b442438             mov eax, dword ptr [esp + 0x38]
// 004840a2  55                   push ebp
// 004840a3  6801140000           push 0x1401
// 004840a8  52                   push edx
// 004840a9  57                   push edi
// 004840aa  56                   push esi
// 004840ab  50                   push eax
// 004840ac  51                   push ecx
// 004840ad  e822f14300           call 0x8c31d4
// 004840b2  84db                 test bl, bl
// 004840b4  7409                 je 0x4840bf
// 004840b6  55                   push ebp
// 004840b7  e88a3b3200           call 0x7a7c46
// 004840bc  83c404               add esp, 4
// 004840bf  5d                   pop ebp
// 004840c0  5b                   pop ebx
// 004840c1  5f                   pop edi
// 004840c2  5e                   pop esi
// 004840c3  83c410               add esp, 0x10
// 004840c6  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createMipMapTexture@G3D@@YAXIPBEHHHIIM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
