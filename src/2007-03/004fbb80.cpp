// roc 2007-03 004fbb80  unit: seg_004f0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fbb80
//
// 004fbb80  55                   push ebp
// 004fbb81  56                   push esi
// 004fbb82  57                   push edi
// 004fbb83  8bf9                 mov edi, ecx
// 004fbb85  8b4708               mov eax, dword ptr [edi + 8]
// 004fbb88  8b2f                 mov ebp, dword ptr [edi]
// 004fbb8a  c1e004               shl eax, 4
// 004fbb8d  6a10                 push 0x10
// 004fbb8f  50                   push eax
// 004fbb90  e83b80ffff           call 0x4f3bd0
// 004fbb95  8bf0                 mov esi, eax
// 004fbb97  8b442418             mov eax, dword ptr [esp + 0x18]
// 004fbb9b  8937                 mov dword ptr [edi], esi
// 004fbb9d  8b7f08               mov edi, dword ptr [edi + 8]
// 004fbba0  83c408               add esp, 8
// 004fbba3  3bc7                 cmp eax, edi
// 004fbba5  7c02                 jl 0x4fbba9
// 004fbba7  8bc7                 mov eax, edi
// 004fbba9  c1e004               shl eax, 4
// 004fbbac  03c6                 add eax, esi
// 004fbbae  8bf8                 mov edi, eax
// 004fbbb0  2bc6                 sub eax, esi
// 004fbbb2  83c00f               add eax, 0xf
// 004fbbb5  99                   cdq 
// 004fbbb6  83e20f               and edx, 0xf
// 004fbbb9  03c2                 add eax, edx
// 004fbbbb  c1f804               sar eax, 4
// 004fbbbe  83f804               cmp eax, 4
// 004fbbc1  8bcd                 mov ecx, ebp
// 004fbbc3  0f8c8d000000         jl 0x4fbc56
// 004fbbc9  53                   push ebx
// 004fbbca  8d5fd0               lea ebx, [edi - 0x30]
// 004fbbcd  8d4618               lea eax, [esi + 0x18]
// 004fbbd0  85f6                 test esi, esi
// 004fbbd2  7416                 je 0x4fbbea
// 004fbbd4  d901                 fld dword ptr [ecx]
// 004fbbd6  d91e                 fstp dword ptr [esi]
// 004fbbd8  d94104               fld dword ptr [ecx + 4]
// 004fbbdb  d958ec               fstp dword ptr [eax - 0x14]
// 004fbbde  d94108               fld dword ptr [ecx + 8]
// 004fbbe1  d958f0               fstp dword ptr [eax - 0x10]
// 004fbbe4  d9410c               fld dword ptr [ecx + 0xc]
// 004fbbe7  d958f4               fstp dword ptr [eax - 0xc]
// 004fbbea  8d50f8               lea edx, [eax - 8]
// 004fbbed  85d2                 test edx, edx
// 004fbbef  7417                 je 0x4fbc08
// 004fbbf1  d94110               fld dword ptr [ecx + 0x10]
// 004fbbf4  d958f8               fstp dword ptr [eax - 8]
// 004fbbf7  d94114               fld dword ptr [ecx + 0x14]
// 004fbbfa  d958fc               fstp dword ptr [eax - 4]
// 004fbbfd  d94118               fld dword ptr [ecx + 0x18]
// 004fbc00  d918                 fstp dword ptr [eax]
// 004fbc02  d9411c               fld dword ptr [ecx + 0x1c]
// 004fbc05  d95804               fstp dword ptr [eax + 4]
// 004fbc08  8d5008               lea edx, [eax + 8]
// 004fbc0b  85d2                 test edx, edx
// 004fbc0d  7417                 je 0x4fbc26
// 004fbc0f  d94120               fld dword ptr [ecx + 0x20]
// 004fbc12  d91a                 fstp dword ptr [edx]
// 004fbc14  d94124               fld dword ptr [ecx + 0x24]
// 004fbc17  d9580c               fstp dword ptr [eax + 0xc]
// 004fbc1a  d94128               fld dword ptr [ecx + 0x28]
// 004fbc1d  d95810               fstp dword ptr [eax + 0x10]
// 004fbc20  d9412c               fld dword ptr [ecx + 0x2c]
// 004fbc23  d95814               fstp dword ptr [eax + 0x14]
// 004fbc26  8d5018               lea edx, [eax + 0x18]
// 004fbc29  85d2                 test edx, edx
// 004fbc2b  7417                 je 0x4fbc44
// 004fbc2d  d94130               fld dword ptr [ecx + 0x30]
// 004fbc30  d91a                 fstp dword ptr [edx]
// 004fbc32  d94134               fld dword ptr [ecx + 0x34]
// 004fbc35  d9581c               fstp dword ptr [eax + 0x1c]
// 004fbc38  d94138               fld dword ptr [ecx + 0x38]
// 004fbc3b  d95820               fstp dword ptr [eax + 0x20]
// 004fbc3e  d9413c               fld dword ptr [ecx + 0x3c]
// 004fbc41  d95824               fstp dword ptr [eax + 0x24]
// 004fbc44  83c640               add esi, 0x40
// 004fbc47  83c140               add ecx, 0x40
// 004fbc4a  83c040               add eax, 0x40
// 004fbc4d  3bf3                 cmp esi, ebx
// 004fbc4f  0f8c7bffffff         jl 0x4fbbd0
// 004fbc55  5b                   pop ebx
// 004fbc56  3bf7                 cmp esi, edi
// 004fbc58  732a                 jae 0x4fbc84
// 004fbc5a  8d9b00000000         lea ebx, [ebx]
// 004fbc60  85f6                 test esi, esi
// 004fbc62  7416                 je 0x4fbc7a
// 004fbc64  d901                 fld dword ptr [ecx]
// 004fbc66  d91e                 fstp dword ptr [esi]
// 004fbc68  d94104               fld dword ptr [ecx + 4]
// 004fbc6b  d95e04               fstp dword ptr [esi + 4]
// 004fbc6e  d94108               fld dword ptr [ecx + 8]
// 004fbc71  d95e08               fstp dword ptr [esi + 8]
// 004fbc74  d9410c               fld dword ptr [ecx + 0xc]
// 004fbc77  d95e0c               fstp dword ptr [esi + 0xc]
// 004fbc7a  83c610               add esi, 0x10
// 004fbc7d  83c110               add ecx, 0x10
// 004fbc80  3bf7                 cmp esi, edi
// 004fbc82  72dc                 jb 0x4fbc60
// 004fbc84  55                   push ebp
// 004fbc85  e8f676ffff           call 0x4f3380
// 004fbc8a  83c404               add esp, 4
// 004fbc8d  5f                   pop edi
// 004fbc8e  5e                   pop esi
// 004fbc8f  5d                   pop ebp
// 004fbc90  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/GCamera.cpp
