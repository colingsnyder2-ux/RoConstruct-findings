// roc 2008-06 005105b0  unit: seg_00510000  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005105b0
//
// 005105b0  6aff                 push -1
// 005105b2  6881c37c00           push 0x7cc381
// 005105b7  64a100000000         mov eax, dword ptr fs:[0]
// 005105bd  50                   push eax
// 005105be  64892500000000       mov dword ptr fs:[0], esp
// 005105c5  83ec68               sub esp, 0x68
// 005105c8  55                   push ebp
// 005105c9  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 005105cd  56                   push esi
// 005105ce  57                   push edi
// 005105cf  8bbc2488000000       mov edi, dword ptr [esp + 0x88]
// 005105d6  6a01                 push 1
// 005105d8  6a00                 push 0
// 005105da  6a01                 push 1
// 005105dc  8bf1                 mov esi, ecx
// 005105de  57                   push edi
// 005105df  55                   push ebp
// 005105e0  8d4c243c             lea ecx, [esp + 0x3c]
// 005105e4  c7065c978100         mov dword ptr [esi], 0x81975c
// 005105ea  e8d1520000           call 0x5158c0
// 005105ef  6816b78000           push 0x80b716
// 005105f4  8d4c2410             lea ecx, [esp + 0x10]
// 005105f8  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00510603  ff1558248000         call dword ptr [0x802458]
// 00510609  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00510610  50                   push eax
// 00510611  57                   push edi
// 00510612  8d4c2414             lea ecx, [esp + 0x14]
// 00510616  55                   push ebp
// 00510617  51                   push ecx
// 00510618  c684248c00000001     mov byte ptr [esp + 0x8c], 1
// 00510620  e89bd7ffff           call 0x50ddc0
// 00510625  83c410               add esp, 0x10
// 00510628  50                   push eax
// 00510629  8d54242c             lea edx, [esp + 0x2c]
// 0051062d  52                   push edx
// 0051062e  8bce                 mov ecx, esi
// 00510630  e89bfcffff           call 0x5102d0
// 00510635  8d4c240c             lea ecx, [esp + 0xc]
// 00510639  c644247c00           mov byte ptr [esp + 0x7c], 0
// 0051063e  ff1568248000         call dword ptr [0x802468]
// 00510644  8d4c2428             lea ecx, [esp + 0x28]
// 00510648  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00510650  e8cb550000           call 0x515c20
// 00510655  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00510659  5f                   pop edi
// 0051065a  8bc6                 mov eax, esi
// 0051065c  5e                   pop esi
// 0051065d  5d                   pop ebp
// 0051065e  64890d00000000       mov dword ptr fs:[0], ecx
// 00510665  83c474               add esp, 0x74
// 00510668  c20c00               ret 0xc
// library g3d-6.09/G3Dcpp\GImage.cpp (function ??0GImage@G3D@@QAE@PBEHW4Format@01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
