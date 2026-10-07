// roc 2010-06 0055aec0  unit: G3D::Plane  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055aec0
//
// 0055aec0  55                   push ebp
// 0055aec1  56                   push esi
// 0055aec2  57                   push edi
// 0055aec3  8bf9                 mov edi, ecx
// 0055aec5  8b4708               mov eax, dword ptr [edi + 8]
// 0055aec8  8b2f                 mov ebp, dword ptr [edi]
// 0055aeca  c1e004               shl eax, 4
// 0055aecd  6a10                 push 0x10
// 0055aecf  50                   push eax
// 0055aed0  e8cb29ffff           call 0x54d8a0
// 0055aed5  8bf0                 mov esi, eax
// 0055aed7  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055aedb  8937                 mov dword ptr [edi], esi
// 0055aedd  8b7f08               mov edi, dword ptr [edi + 8]
// 0055aee0  83c408               add esp, 8
// 0055aee3  3bc7                 cmp eax, edi
// 0055aee5  7c02                 jl 0x55aee9
// 0055aee7  8bc7                 mov eax, edi
// 0055aee9  c1e004               shl eax, 4
// 0055aeec  03c6                 add eax, esi
// 0055aeee  8bf8                 mov edi, eax
// 0055aef0  8bcd                 mov ecx, ebp
// 0055aef2  3bf7                 cmp esi, edi
// 0055aef4  0f83cc000000         jae 0x55afc6
// 0055aefa  2bc6                 sub eax, esi
// 0055aefc  83c00f               add eax, 0xf
// 0055aeff  99                   cdq 
// 0055af00  83e20f               and edx, 0xf
// 0055af03  03c2                 add eax, edx
// 0055af05  c1f804               sar eax, 4
// 0055af08  83f804               cmp eax, 4
// 0055af0b  0f8c8d000000         jl 0x55af9e
// 0055af11  53                   push ebx
// 0055af12  8d5fd0               lea ebx, [edi - 0x30]
// 0055af15  8d4618               lea eax, [esi + 0x18]
// 0055af18  85f6                 test esi, esi
// 0055af1a  7416                 je 0x55af32
// 0055af1c  d901                 fld dword ptr [ecx]
// 0055af1e  d91e                 fstp dword ptr [esi]
// 0055af20  d94104               fld dword ptr [ecx + 4]
// 0055af23  d958ec               fstp dword ptr [eax - 0x14]
// 0055af26  d94108               fld dword ptr [ecx + 8]
// 0055af29  d958f0               fstp dword ptr [eax - 0x10]
// 0055af2c  d9410c               fld dword ptr [ecx + 0xc]
// 0055af2f  d958f4               fstp dword ptr [eax - 0xc]
// 0055af32  8d50f8               lea edx, [eax - 8]
// 0055af35  85d2                 test edx, edx
// 0055af37  7417                 je 0x55af50
// 0055af39  d94110               fld dword ptr [ecx + 0x10]
// 0055af3c  d958f8               fstp dword ptr [eax - 8]
// 0055af3f  d94114               fld dword ptr [ecx + 0x14]
// 0055af42  d958fc               fstp dword ptr [eax - 4]
// 0055af45  d94118               fld dword ptr [ecx + 0x18]
// 0055af48  d918                 fstp dword ptr [eax]
// 0055af4a  d9411c               fld dword ptr [ecx + 0x1c]
// 0055af4d  d95804               fstp dword ptr [eax + 4]
// 0055af50  8d5008               lea edx, [eax + 8]
// 0055af53  85d2                 test edx, edx
// 0055af55  7417                 je 0x55af6e
// 0055af57  d94120               fld dword ptr [ecx + 0x20]
// 0055af5a  d91a                 fstp dword ptr [edx]
// 0055af5c  d94124               fld dword ptr [ecx + 0x24]
// 0055af5f  d9580c               fstp dword ptr [eax + 0xc]
// 0055af62  d94128               fld dword ptr [ecx + 0x28]
// 0055af65  d95810               fstp dword ptr [eax + 0x10]
// 0055af68  d9412c               fld dword ptr [ecx + 0x2c]
// 0055af6b  d95814               fstp dword ptr [eax + 0x14]
// 0055af6e  8d5018               lea edx, [eax + 0x18]
// 0055af71  85d2                 test edx, edx
// 0055af73  7417                 je 0x55af8c
// 0055af75  d94130               fld dword ptr [ecx + 0x30]
// 0055af78  d91a                 fstp dword ptr [edx]
// 0055af7a  d94134               fld dword ptr [ecx + 0x34]
// 0055af7d  d9581c               fstp dword ptr [eax + 0x1c]
// 0055af80  d94138               fld dword ptr [ecx + 0x38]
// 0055af83  d95820               fstp dword ptr [eax + 0x20]
// 0055af86  d9413c               fld dword ptr [ecx + 0x3c]
// 0055af89  d95824               fstp dword ptr [eax + 0x24]
// 0055af8c  83c640               add esi, 0x40
// 0055af8f  83c140               add ecx, 0x40
// 0055af92  83c040               add eax, 0x40
// 0055af95  3bf3                 cmp esi, ebx
// 0055af97  0f8c7bffffff         jl 0x55af18
// 0055af9d  5b                   pop ebx
// 0055af9e  3bf7                 cmp esi, edi
// 0055afa0  7324                 jae 0x55afc6
// 0055afa2  85f6                 test esi, esi
// 0055afa4  7416                 je 0x55afbc
// 0055afa6  d901                 fld dword ptr [ecx]
// 0055afa8  d91e                 fstp dword ptr [esi]
// 0055afaa  d94104               fld dword ptr [ecx + 4]
// 0055afad  d95e04               fstp dword ptr [esi + 4]
// 0055afb0  d94108               fld dword ptr [ecx + 8]
// 0055afb3  d95e08               fstp dword ptr [esi + 8]
// 0055afb6  d9410c               fld dword ptr [ecx + 0xc]
// 0055afb9  d95e0c               fstp dword ptr [esi + 0xc]
// 0055afbc  83c610               add esi, 0x10
// 0055afbf  83c110               add ecx, 0x10
// 0055afc2  3bf7                 cmp esi, edi
// 0055afc4  72dc                 jb 0x55afa2
// 0055afc6  55                   push ebp
// 0055afc7  e8f429ffff           call 0x54d9c0
// 0055afcc  83c404               add esp, 4
// 0055afcf  5f                   pop edi
// 0055afd0  5e                   pop esi
// 0055afd1  5d                   pop ebp
// 0055afd2  c20400               ret 4
// library g3d-6.09/G3Dcpp\GCamera.cpp (function ?realloc@?$Array@VVector4@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GCamera.cpp
