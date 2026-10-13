// roc 2008-06 00473fc0  unit: G3D::Texture  size: 852 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00473fc0
//
// 00473fc0  83ec1c               sub esp, 0x1c
// 00473fc3  8b442428             mov eax, dword ptr [esp + 0x28]
// 00473fc7  53                   push ebx
// 00473fc8  55                   push ebp
// 00473fc9  56                   push esi
// 00473fca  57                   push edi
// 00473fcb  8b7804               mov edi, dword ptr [eax + 4]
// 00473fce  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00473fd6  897c2424             mov dword ptr [esp + 0x24], edi
// 00473fda  e831f5ffff           call 0x473510
// 00473fdf  8bd8                 mov ebx, eax
// 00473fe1  8b442458             mov eax, dword ptr [esp + 0x58]
// 00473fe5  83c0fe               add eax, -2
// 00473fe8  895c2428             mov dword ptr [esp + 0x28], ebx
// 00473fec  83f805               cmp eax, 5
// 00473fef  771b                 ja 0x47400c
// 00473ff1  ff2485fc424700       jmp dword ptr [eax*4 + 0x4742fc]
// 00473ff8  c744241013850000     mov dword ptr [esp + 0x10], 0x8513
// 00474000  eb12                 jmp 0x474014
// 00474002  c7442410f5840000     mov dword ptr [esp + 0x10], 0x84f5
// 0047400a  eb08                 jmp 0x474014
// 0047400c  c7442410e10d0000     mov dword ptr [esp + 0x10], 0xde1
// 00474014  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00474018  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0047401c  3b2d38fa9600         cmp ebp, dword ptr [0x96fa38]
// 00474022  7406                 je 0x47402a
// 00474024  807e0400             cmp byte ptr [esi + 4], 0
// 00474028  7402                 je 0x47402c
// 0047402a  8bee                 mov ebp, esi
// 0047402c  e8ffbcffff           call 0x46fd30
// 00474031  84c0                 test al, al
// 00474033  740e                 je 0x474043
// 00474035  3b2db0fa9600         cmp ebp, dword ptr [0x96fab0]
// 0047403b  7506                 jne 0x474043
// 0047403d  8b2da8fa9600         mov ebp, dword ptr [0x96faa8]
// 00474043  68ffff0f00           push 0xfffff
// 00474048  ff1564298000         call dword ptr [0x802964]
// 0047404e  6aff                 push -1
// 00474050  ff15b82a8000         call dword ptr [0x802ab8]
// 00474056  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 0047405d  740b                 je 0x47406a
// 0047405f  68c0840000           push 0x84c0
// 00474064  ff1504f89600         call dword ptr [0x96f804]
// 0047406a  6a01                 push 1
// 0047406c  68f50c0000           push 0xcf5
// 00474071  ff15fc298000         call dword ptr [0x8029fc]
// 00474077  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047407b  51                   push ecx
// 0047407c  ff1550298000         call dword ptr [0x802950]
// 00474082  8b542410             mov edx, dword ptr [esp + 0x10]
// 00474086  53                   push ebx
// 00474087  52                   push edx
// 00474088  ff15d8298000         call dword ptr [0x8029d8]
// 0047408e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00474092  50                   push eax
// 00474093  e8b8f1ffff           call 0x473250
// 00474098  83c404               add esp, 4
// 0047409b  84c0                 test al, al
// 0047409d  741f                 je 0x4740be
// 0047409f  e82ce9ffff           call 0x4729d0
// 004740a4  84c0                 test al, al
// 004740a6  7416                 je 0x4740be
// 004740a8  83ff01               cmp edi, 1
// 004740ab  7511                 jne 0x4740be
// 004740ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004740b1  57                   push edi
// 004740b2  6891810000           push 0x8191
// 004740b7  51                   push ecx
// 004740b8  ff1578298000         call dword ptr [0x802978]
// 004740be  8b542440             mov edx, dword ptr [esp + 0x40]
// 004740c2  8b442444             mov eax, dword ptr [esp + 0x44]
// 004740c6  8954244c             mov dword ptr [esp + 0x4c], edx
// 004740ca  89442414             mov dword ptr [esp + 0x14], eax
// 004740ce  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004740d6  85ff                 test edi, edi
// 004740d8  0f8e5d010000         jle 0x47423b
// 004740de  33db                 xor ebx, ebx
// 004740e0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004740e4  8b11                 mov edx, dword ptr [ecx]
// 004740e6  8b441304             mov eax, dword ptr [ebx + edx + 4]
// 004740ea  33ff                 xor edi, edi
// 004740ec  89442420             mov dword ptr [esp + 0x20], eax
// 004740f0  85c0                 test eax, eax
// 004740f2  0f8ef9000000         jle 0x4741f1
// 004740f8  eb0a                 jmp 0x474104
// 004740fa  8d9b00000000         lea ebx, [ebx]
// 00474100  8b442420             mov eax, dword ptr [esp + 0x20]
// 00474104  83f806               cmp eax, 6
// 00474107  750b                 jne 0x474114
// 00474109  8b04bdb8e18100       mov eax, dword ptr [edi*4 + 0x81e1b8]
// 00474110  89442410             mov dword ptr [esp + 0x10], eax
// 00474114  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00474118  51                   push ecx
// 00474119  e832f1ffff           call 0x473250
// 0047411e  83c404               add esp, 4
// 00474121  84c0                 test al, al
// 00474123  7453                 je 0x474178
// 00474125  e8a6e8ffff           call 0x4729d0
// 0047412a  84c0                 test al, al
// 0047412c  754a                 jne 0x474178
// 0047412e  837c242401           cmp dword ptr [esp + 0x24], 1
// 00474133  7543                 jne 0x474178
// 00474135  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00474138  d9442464             fld dword ptr [esp + 0x64]
// 0047413c  99                   cdq 
// 0047413d  51                   push ecx
// 0047413e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00474142  83e207               and edx, 7
// 00474145  d91c24               fstp dword ptr [esp]
// 00474148  03c2                 add eax, edx
// 0047414a  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0047414d  c1f803               sar eax, 3
// 00474150  50                   push eax
// 00474151  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00474155  52                   push edx
// 00474156  8b5618               mov edx, dword ptr [esi + 0x18]
// 00474159  50                   push eax
// 0047415a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0047415e  51                   push ecx
// 0047415f  8b08                 mov ecx, dword ptr [eax]
// 00474161  52                   push edx
// 00474162  8b140b               mov edx, dword ptr [ebx + ecx]
// 00474165  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00474168  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0047416c  50                   push eax
// 0047416d  51                   push ecx
// 0047416e  e82decffff           call 0x472da0
// 00474173  83c420               add esp, 0x20
// 00474176  eb6e                 jmp 0x4741e6
// 00474178  8b442458             mov eax, dword ptr [esp + 0x58]
// 0047417c  83f806               cmp eax, 6
// 0047417f  7507                 jne 0x474188
// 00474181  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00474186  eb0a                 jmp 0x474192
// 00474188  83f807               cmp eax, 7
// 0047418b  0f94c2               sete dl
// 0047418e  8854241c             mov byte ptr [esp + 0x1c], dl
// 00474192  d9442464             fld dword ptr [esp + 0x64]
// 00474196  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0047419a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0047419e  51                   push ecx
// 0047419f  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 004741a3  d91c24               fstp dword ptr [esp]
// 004741a6  50                   push eax
// 004741a7  8b4638               mov eax, dword ptr [esi + 0x38]
// 004741aa  51                   push ecx
// 004741ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004741af  52                   push edx
// 004741b0  99                   cdq 
// 004741b1  83e207               and edx, 7
// 004741b4  03c2                 add eax, edx
// 004741b6  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004741ba  c1f803               sar eax, 3
// 004741bd  50                   push eax
// 004741be  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004741c1  50                   push eax
// 004741c2  8b4614               mov eax, dword ptr [esi + 0x14]
// 004741c5  51                   push ecx
// 004741c6  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 004741c9  52                   push edx
// 004741ca  8b542458             mov edx, dword ptr [esp + 0x58]
// 004741ce  50                   push eax
// 004741cf  8b02                 mov eax, dword ptr [edx]
// 004741d1  51                   push ecx
// 004741d2  8b0c03               mov ecx, dword ptr [ebx + eax]
// 004741d5  8b14b9               mov edx, dword ptr [ecx + edi*4]
// 004741d8  8b442438             mov eax, dword ptr [esp + 0x38]
// 004741dc  52                   push edx
// 004741dd  50                   push eax
// 004741de  e8cde9ffff           call 0x472bb0
// 004741e3  83c430               add esp, 0x30
// 004741e6  47                   inc edi
// 004741e7  3b7c2420             cmp edi, dword ptr [esp + 0x20]
// 004741eb  0f8c0fffffff         jl 0x474100
// 004741f1  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004741f5  99                   cdq 
// 004741f6  2bc2                 sub eax, edx
// 004741f8  b901000000           mov ecx, 1
// 004741fd  d1f8                 sar eax, 1
// 004741ff  3bc1                 cmp eax, ecx
// 00474201  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00474205  7e04                 jle 0x47420b
// 00474207  8944244c             mov dword ptr [esp + 0x4c], eax
// 0047420b  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047420f  99                   cdq 
// 00474210  2bc2                 sub eax, edx
// 00474212  d1f8                 sar eax, 1
// 00474214  3bc1                 cmp eax, ecx
// 00474216  894c2414             mov dword ptr [esp + 0x14], ecx
// 0047421a  7e04                 jle 0x474220
// 0047421c  89442414             mov dword ptr [esp + 0x14], eax
// 00474220  8b442418             mov eax, dword ptr [esp + 0x18]
// 00474224  03c1                 add eax, ecx
// 00474226  83c30c               add ebx, 0xc
// 00474229  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0047422d  89442418             mov dword ptr [esp + 0x18], eax
// 00474231  0f8ca9feffff         jl 0x4740e0
// 00474237  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0047423b  ff15bc2a8000         call dword ptr [0x802abc]
// 00474241  ff15b4298000         call dword ptr [0x8029b4]
// 00474247  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0047424b  83f904               cmp ecx, 4
// 0047424e  7462                 je 0x4742b2
// 00474250  83f906               cmp ecx, 6
// 00474253  745d                 je 0x4742b2
// 00474255  83f907               cmp ecx, 7
// 00474258  7458                 je 0x4742b2
// 0047425a  8b442440             mov eax, dword ptr [esp + 0x40]
// 0047425e  48                   dec eax
// 0047425f  8bd0                 mov edx, eax
// 00474261  c1ea10               shr edx, 0x10
// 00474264  0bc2                 or eax, edx
// 00474266  8bd0                 mov edx, eax
// 00474268  c1ea08               shr edx, 8
// 0047426b  0bc2                 or eax, edx
// 0047426d  8bd0                 mov edx, eax
// 0047426f  c1ea04               shr edx, 4
// 00474272  0bc2                 or eax, edx
// 00474274  8bd0                 mov edx, eax
// 00474276  c1ea02               shr edx, 2
// 00474279  0bc2                 or eax, edx
// 0047427b  8bd0                 mov edx, eax
// 0047427d  d1ea                 shr edx, 1
// 0047427f  0bc2                 or eax, edx
// 00474281  40                   inc eax
// 00474282  89442440             mov dword ptr [esp + 0x40], eax
// 00474286  8b442444             mov eax, dword ptr [esp + 0x44]
// 0047428a  48                   dec eax
// 0047428b  8bd0                 mov edx, eax
// 0047428d  c1ea10               shr edx, 0x10
// 00474290  0bc2                 or eax, edx
// 00474292  8bd0                 mov edx, eax
// 00474294  c1ea08               shr edx, 8
// 00474297  0bc2                 or eax, edx
// 00474299  8bd0                 mov edx, eax
// 0047429b  c1ea04               shr edx, 4
// 0047429e  0bc2                 or eax, edx
// 004742a0  8bd0                 mov edx, eax
// 004742a2  c1ea02               shr edx, 2
// 004742a5  0bc2                 or eax, edx
// 004742a7  8bd0                 mov edx, eax
// 004742a9  d1ea                 shr edx, 1
// 004742ab  0bc2                 or eax, edx
// 004742ad  40                   inc eax
// 004742ae  89442444             mov dword ptr [esp + 0x44], eax
// 004742b2  d9442460             fld dword ptr [esp + 0x60]
// 004742b6  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004742ba  8b542450             mov edx, dword ptr [esp + 0x50]
// 004742be  8b742430             mov esi, dword ptr [esp + 0x30]
// 004742c2  51                   push ecx
// 004742c3  d91c24               fstp dword ptr [esp]
// 004742c6  50                   push eax
// 004742c7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 004742cb  51                   push ecx
// 004742cc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004742d0  51                   push ecx
// 004742d1  52                   push edx
// 004742d2  55                   push ebp
// 004742d3  53                   push ebx
// 004742d4  50                   push eax
// 004742d5  56                   push esi
// 004742d6  e815fcffff           call 0x473ef0
// 004742db  8b06                 mov eax, dword ptr [esi]
// 004742dd  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004742e1  8b542468             mov edx, dword ptr [esp + 0x68]
// 004742e5  83c424               add esp, 0x24
// 004742e8  894864               mov dword ptr [eax + 0x64], ecx
// 004742eb  8b06                 mov eax, dword ptr [esi]
// 004742ed  5f                   pop edi
// 004742ee  895068               mov dword ptr [eax + 0x68], edx
// 004742f1  8bc6                 mov eax, esi
// 004742f3  5e                   pop esi
// 004742f4  5d                   pop ebp
// 004742f5  5b                   pop ebx
// 004742f6  83c41c               add esp, 0x1c
// 004742f9  c3                   ret 
// 004742fa  8bff                 mov edi, edi
// 004742fc  0c40                 or al, 0x40
// 004742fe  47                   inc edi
// 004742ff  000c40               add byte ptr [eax + eax*2], cl
// 00474302  47                   inc edi
// 00474303  0002                 add byte ptr [edx], al
// 00474305  40                   inc eax
// 00474306  47                   inc edi
// 00474307  00f8                 add al, bh
// 00474309  3f                   aas 
// 0047430a  47                   inc edi
// 0047430b  000c40               add byte ptr [eax + eax*2], cl
// 0047430e  47                   inc edi
// 0047430f  00f8                 add al, bh
// 00474311  3f                   aas 
// 00474312  47                   inc edi
// library g3d-6.09-rbx2008/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV?$Array@V?$Array@PBX@G3D@@@2@PBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/Texture.cpp
