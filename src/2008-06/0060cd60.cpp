// roc 2008-06 0060cd60  unit: RBX::BallBlockContact  size: 618 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cd60
//
// 0060cd60  83ec28               sub esp, 0x28
// 0060cd63  8b542448             mov edx, dword ptr [esp + 0x48]
// 0060cd67  d9442440             fld dword ptr [esp + 0x40]
// 0060cd6b  8b442444             mov eax, dword ptr [esp + 0x44]
// 0060cd6f  d9542408             fst dword ptr [esp + 8]
// 0060cd73  33c9                 xor ecx, ecx
// 0060cd75  d95c2404             fstp dword ptr [esp + 4]
// 0060cd79  880a                 mov byte ptr [edx], cl
// 0060cd7b  8808                 mov byte ptr [eax], cl
// 0060cd7d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060cd81  394804               cmp dword ptr [eax + 4], ecx
// 0060cd84  894c240c             mov dword ptr [esp + 0xc], ecx
// 0060cd88  890c24               mov dword ptr [esp], ecx
// 0060cd8b  0f8e0e020000         jle 0x60cf9f
// 0060cd91  53                   push ebx
// 0060cd92  55                   push ebp
// 0060cd93  56                   push esi
// 0060cd94  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0060cd98  57                   push edi
// 0060cd99  8da42400000000       lea esp, [esp]
// 0060cda0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0060cda4  8b11                 mov edx, dword ptr [ecx]
// 0060cda6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060cdaa  8b2c82               mov ebp, dword ptr [edx + eax*4]
// 0060cdad  8b542444             mov edx, dword ptr [esp + 0x44]
// 0060cdb1  85d2                 test edx, edx
// 0060cdb3  7439                 je 0x60cdee
// 0060cdb5  8b4a04               mov ecx, dword ptr [edx + 4]
// 0060cdb8  33c0                 xor eax, eax
// 0060cdba  85c9                 test ecx, ecx
// 0060cdbc  7e14                 jle 0x60cdd2
// 0060cdbe  8b3a                 mov edi, dword ptr [edx]
// 0060cdc0  8bd7                 mov edx, edi
// 0060cdc2  392a                 cmp dword ptr [edx], ebp
// 0060cdc4  741b                 je 0x60cde1
// 0060cdc6  40                   inc eax
// 0060cdc7  83c204               add edx, 4
// 0060cdca  3bc1                 cmp eax, ecx
// 0060cdcc  7cf4                 jl 0x60cdc2
// 0060cdce  8b542444             mov edx, dword ptr [esp + 0x44]
// 0060cdd2  8b3a                 mov edi, dword ptr [edx]
// 0060cdd4  8d048f               lea eax, [edi + ecx*4]
// 0060cdd7  8d0c8f               lea ecx, [edi + ecx*4]
// 0060cdda  3bc1                 cmp eax, ecx
// 0060cddc  0f94c3               sete bl
// 0060cddf  eb0f                 jmp 0x60cdf0
// 0060cde1  8d0487               lea eax, [edi + eax*4]
// 0060cde4  8d0c8f               lea ecx, [edi + ecx*4]
// 0060cde7  3bc1                 cmp eax, ecx
// 0060cde9  0f94c3               sete bl
// 0060cdec  eb02                 jmp 0x60cdf0
// 0060cdee  b301                 mov bl, 1
// 0060cdf0  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0060cdf4  85c9                 test ecx, ecx
// 0060cdf6  740b                 je 0x60ce03
// 0060cdf8  8b11                 mov edx, dword ptr [ecx]
// 0060cdfa  8b02                 mov eax, dword ptr [edx]
// 0060cdfc  55                   push ebp
// 0060cdfd  ffd0                 call eax
// 0060cdff  8bf8                 mov edi, eax
// 0060ce01  eb05                 jmp 0x60ce08
// 0060ce03  bf02000000           mov edi, 2
// 0060ce08  84db                 test bl, bl
// 0060ce0a  0f846d010000         je 0x60cf7d
// 0060ce10  83ff01               cmp edi, 1
// 0060ce13  0f8464010000         je 0x60cf7d
// 0060ce19  8bcd                 mov ecx, ebp
// 0060ce1b  e8a0b4fdff           call 0x5e82c0
// 0060ce20  d94024               fld dword ptr [eax + 0x24]
// 0060ce23  8b5500               mov edx, dword ptr [ebp]
// 0060ce26  d95c242c             fstp dword ptr [esp + 0x2c]
// 0060ce2a  d94028               fld dword ptr [eax + 0x28]
// 0060ce2d  83c024               add eax, 0x24
// 0060ce30  d95c2430             fstp dword ptr [esp + 0x30]
// 0060ce34  8bcd                 mov ecx, ebp
// 0060ce36  d94008               fld dword ptr [eax + 8]
// 0060ce39  8b420c               mov eax, dword ptr [edx + 0xc]
// 0060ce3c  d95c2434             fstp dword ptr [esp + 0x34]
// 0060ce40  ffd0                 call eax
// 0060ce42  d944242c             fld dword ptr [esp + 0x2c]
// 0060ce46  d9c0                 fld st(0)
// 0060ce48  d86604               fsub dword ptr [esi + 4]
// 0060ce4b  d9442430             fld dword ptr [esp + 0x30]
// 0060ce4f  d9c0                 fld st(0)
// 0060ce51  d86608               fsub dword ptr [esi + 8]
// 0060ce54  d9442434             fld dword ptr [esp + 0x34]
// 0060ce58  d9c0                 fld st(0)
// 0060ce5a  d8660c               fsub dword ptr [esi + 0xc]
// 0060ce5d  d84e18               fmul dword ptr [esi + 0x18]
// 0060ce60  d94614               fld dword ptr [esi + 0x14]
// 0060ce63  decb                 fmulp st(3)
// 0060ce65  dec2                 faddp st(2)
// 0060ce67  d94610               fld dword ptr [esi + 0x10]
// 0060ce6a  decc                 fmulp st(4)
// 0060ce6c  d9c9                 fxch st(1)
// 0060ce6e  dec3                 faddp st(3)
// 0060ce70  d94610               fld dword ptr [esi + 0x10]
// 0060ce73  d8cb                 fmul st(3)
// 0060ce75  d94614               fld dword ptr [esi + 0x14]
// 0060ce78  d8cc                 fmul st(4)
// 0060ce7a  d94618               fld dword ptr [esi + 0x18]
// 0060ce7d  decd                 fmulp st(5)
// 0060ce7f  d94604               fld dword ptr [esi + 4]
// 0060ce82  dec2                 faddp st(2)
// 0060ce84  d84608               fadd dword ptr [esi + 8]
// 0060ce87  d9460c               fld dword ptr [esi + 0xc]
// 0060ce8a  dec5                 faddp st(5)
// 0060ce8c  d9cd                 fxch st(5)
// 0060ce8e  dee1                 fsubrp st(1)
// 0060ce90  d9ca                 fxch st(2)
// 0060ce92  dee4                 fsubrp st(4)
// 0060ce94  dee2                 fsubrp st(2)
// 0060ce96  d9c1                 fld st(1)
// 0060ce98  deca                 fmulp st(2)
// 0060ce9a  d9c2                 fld st(2)
// 0060ce9c  decb                 fmulp st(3)
// 0060ce9e  d9c9                 fxch st(1)
// 0060cea0  dec2                 faddp st(2)
// 0060cea2  dcc8                 fmul st(0), st(0)
// 0060cea4  dec1                 faddp st(1)
// 0060cea6  d9fa                 fsqrt 
// 0060cea8  ded9                 fcompp 
// 0060ceaa  dfe0                 fnstsw ax
// 0060ceac  f6c441               test ah, 0x41
// 0060ceaf  0f8ac8000000         jp 0x60cf7d
// 0060ceb5  d9ee                 fldz 
// 0060ceb7  8d4c2450             lea ecx, [esp + 0x50]
// 0060cebb  51                   push ecx
// 0060cebc  d9542424             fst dword ptr [esp + 0x24]
// 0060cec0  8d542424             lea edx, [esp + 0x24]
// 0060cec4  d9542428             fst dword ptr [esp + 0x28]
// 0060cec8  52                   push edx
// 0060cec9  d95c2430             fstp dword ptr [esp + 0x30]
// 0060cecd  56                   push esi
// 0060cece  8bcd                 mov ecx, ebp
// 0060ced0  e84bb0fdff           call 0x5e7f20
// 0060ced5  84c0                 test al, al
// 0060ced7  0f84a0000000         je 0x60cf7d
// 0060cedd  d9442420             fld dword ptr [esp + 0x20]
// 0060cee1  d9c0                 fld st(0)
// 0060cee3  d86604               fsub dword ptr [esi + 4]
// 0060cee6  d9442424             fld dword ptr [esp + 0x24]
// 0060ceea  d9c0                 fld st(0)
// 0060ceec  d86608               fsub dword ptr [esi + 8]
// 0060ceef  d9442428             fld dword ptr [esp + 0x28]
// 0060cef3  d9c0                 fld st(0)
// 0060cef5  d8660c               fsub dword ptr [esi + 0xc]
// 0060cef8  d84e18               fmul dword ptr [esi + 0x18]
// 0060cefb  d94614               fld dword ptr [esi + 0x14]
// 0060cefe  decb                 fmulp st(3)
// 0060cf00  dec2                 faddp st(2)
// 0060cf02  d94610               fld dword ptr [esi + 0x10]
// 0060cf05  decc                 fmulp st(4)
// 0060cf07  d9c9                 fxch st(1)
// 0060cf09  dec3                 faddp st(3)
// 0060cf0b  d9ee                 fldz 
// 0060cf0d  d8db                 fcomp st(3)
// 0060cf0f  dfe0                 fnstsw ax
// 0060cf11  f6c405               test ah, 5
// 0060cf14  7a5f                 jp 0x60cf75
// 0060cf16  8bc7                 mov eax, edi
// 0060cf18  83e800               sub eax, 0
// 0060cf1b  7438                 je 0x60cf55
// 0060cf1d  83e802               sub eax, 2
// 0060cf20  7553                 jne 0x60cf75
// 0060cf22  d9442418             fld dword ptr [esp + 0x18]
// 0060cf26  d8db                 fcomp st(3)
// 0060cf28  dfe0                 fnstsw ax
// 0060cf2a  f6c441               test ah, 0x41
// 0060cf2d  7546                 jne 0x60cf75
// 0060cf2f  8a442450             mov al, byte ptr [esp + 0x50]
// 0060cf33  d9ca                 fxch st(2)
// 0060cf35  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0060cf39  d95c2418             fstp dword ptr [esp + 0x18]
// 0060cf3d  8801                 mov byte ptr [ecx], al
// 0060cf3f  d9ca                 fxch st(2)
// 0060cf41  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0060cf45  d918                 fstp dword ptr [eax]
// 0060cf47  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0060cf4b  d9c9                 fxch st(1)
// 0060cf4d  d95804               fstp dword ptr [eax + 4]
// 0060cf50  d95808               fstp dword ptr [eax + 8]
// 0060cf53  eb28                 jmp 0x60cf7d
// 0060cf55  dddb                 fstp st(3)
// 0060cf57  ddd8                 fstp st(0)
// 0060cf59  ddd9                 fstp st(1)
// 0060cf5b  d9442414             fld dword ptr [esp + 0x14]
// 0060cf5f  d8d9                 fcomp st(1)
// 0060cf61  dfe0                 fnstsw ax
// 0060cf63  f6c441               test ah, 0x41
// 0060cf66  7513                 jne 0x60cf7b
// 0060cf68  8b542458             mov edx, dword ptr [esp + 0x58]
// 0060cf6c  d95c2414             fstp dword ptr [esp + 0x14]
// 0060cf70  c60201               mov byte ptr [edx], 1
// 0060cf73  eb08                 jmp 0x60cf7d
// 0060cf75  ddda                 fstp st(2)
// 0060cf77  ddda                 fstp st(2)
// 0060cf79  ddd9                 fstp st(1)
// 0060cf7b  ddd8                 fstp st(0)
// 0060cf7d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060cf81  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0060cf85  40                   inc eax
// 0060cf86  3b4104               cmp eax, dword ptr [ecx + 4]
// 0060cf89  89442410             mov dword ptr [esp + 0x10], eax
// 0060cf8d  0f8c0dfeffff         jl 0x60cda0
// 0060cf93  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060cf97  8b542458             mov edx, dword ptr [esp + 0x58]
// 0060cf9b  5f                   pop edi
// 0060cf9c  5e                   pop esi
// 0060cf9d  5d                   pop ebp
// 0060cf9e  5b                   pop ebx
// 0060cf9f  803a00               cmp byte ptr [edx], 0
// 0060cfa2  741e                 je 0x60cfc2
// 0060cfa4  85c9                 test ecx, ecx
// 0060cfa6  741a                 je 0x60cfc2
// 0060cfa8  d9442404             fld dword ptr [esp + 4]
// 0060cfac  d85c2408             fcomp dword ptr [esp + 8]
// 0060cfb0  dfe0                 fnstsw ax
// 0060cfb2  f6c441               test ah, 0x41
// 0060cfb5  8bc1                 mov eax, ecx
// 0060cfb7  750b                 jne 0x60cfc4
// 0060cfb9  c60200               mov byte ptr [edx], 0
// 0060cfbc  83c428               add esp, 0x28
// 0060cfbf  c22000               ret 0x20
// 0060cfc2  8bc1                 mov eax, ecx
// 0060cfc4  83c428               add esp, 0x28
// 0060cfc7  c22000               ret 0x20
// library openrbx-client/App\v8world\ContactManager.cpp (function ?getSlowHit@ContactManager@RBX@@ABEPAVPrimitive@2@ABV?$Array@PAVPrimitive@RBX@@@G3D@@ABVRay@5@PBV?$Array@PBVPrimitive@RBX@@@5@PBVHitTestFilter@2@AAVVector3@5@MAA_N5@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
