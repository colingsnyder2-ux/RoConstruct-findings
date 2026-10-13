// from server: 100% by colin
// roc 2008-06 005270a0  unit: G3D::Line  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005270a0
//
// 005270a0  83ec40               sub esp, 0x40
// 005270a3  dd44244c             fld qword ptr [esp + 0x4c]
// 005270a7  8a442448             mov al, byte ptr [esp + 0x48]
// 005270ab  56                   push esi
// 005270ac  8b3530288000         mov esi, dword ptr [0x802830]
// 005270b2  57                   push edi
// 005270b3  83ec08               sub esp, 8
// 005270b6  dd1c24               fstp qword ptr [esp]
// 005270b9  8d4c2410             lea ecx, [esp + 0x10]
// 005270bd  68e4b58200           push 0x82b5e4
// 005270c2  51                   push ecx
// 005270c3  88442460             mov byte ptr [esp + 0x60], al
// 005270c7  ffd6                 call esi
// 005270c9  dd44246c             fld qword ptr [esp + 0x6c]
// 005270cd  83c408               add esp, 8
// 005270d0  dd1c24               fstp qword ptr [esp]
// 005270d3  8d542430             lea edx, [esp + 0x30]
// 005270d7  68e4b58200           push 0x82b5e4
// 005270dc  52                   push edx
// 005270dd  ffd6                 call esi
// 005270df  8d442418             lea eax, [esp + 0x18]
// 005270e3  83c410               add esp, 0x10
// 005270e6  8d5001               lea edx, [eax + 1]
// 005270e9  8da42400000000       lea esp, [esp]
// 005270f0  8a08                 mov cl, byte ptr [eax]
// 005270f2  40                   inc eax
// 005270f3  84c9                 test cl, cl
// 005270f5  75f9                 jne 0x5270f0
// 005270f7  2bc2                 sub eax, edx
// 005270f9  8bd0                 mov edx, eax
// 005270fb  8d442428             lea eax, [esp + 0x28]
// 005270ff  8d7001               lea esi, [eax + 1]
// 00527102  8a08                 mov cl, byte ptr [eax]
// 00527104  40                   inc eax
// 00527105  84c9                 test cl, cl
// 00527107  75f9                 jne 0x527102
// 00527109  2bc6                 sub eax, esi
// 0052710b  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0052710f  8d441002             lea eax, [eax + edx + 2]
// 00527113  50                   push eax
// 00527114  68a4948200           push 0x8294a4
// 00527119  56                   push esi
// 0052711a  e801f3ffff           call 0x526420
// 0052711f  6a01                 push 1
// 00527121  8d4c2460             lea ecx, [esp + 0x60]
// 00527125  51                   push ecx
// 00527126  56                   push esi
// 00527127  e8546cffff           call 0x51dd80
// 0052712c  6a01                 push 1
// 0052712e  8d54246c             lea edx, [esp + 0x6c]
// 00527132  52                   push edx
// 00527133  56                   push esi
// 00527134  e87769ffff           call 0x51dab0
// 00527139  8d44242c             lea eax, [esp + 0x2c]
// 0052713d  83c424               add esp, 0x24
// 00527140  8d5001               lea edx, [eax + 1]
// 00527143  8a08                 mov cl, byte ptr [eax]
// 00527145  40                   inc eax
// 00527146  84c9                 test cl, cl
// 00527148  75f9                 jne 0x527143
// 0052714a  2bc2                 sub eax, edx
// 0052714c  8d7801               lea edi, [eax + 1]
// 0052714f  85ff                 test edi, edi
// 00527151  761b                 jbe 0x52716e
// 00527153  57                   push edi
// 00527154  8d44240c             lea eax, [esp + 0xc]
// 00527158  50                   push eax
// 00527159  56                   push esi
// 0052715a  e8216cffff           call 0x51dd80
// 0052715f  57                   push edi
// 00527160  8d4c2418             lea ecx, [esp + 0x18]
// 00527164  51                   push ecx
// 00527165  56                   push esi
// 00527166  e84569ffff           call 0x51dab0
// 0052716b  83c418               add esp, 0x18
// 0052716e  8d442428             lea eax, [esp + 0x28]
// 00527172  8d5001               lea edx, [eax + 1]
// 00527175  8a08                 mov cl, byte ptr [eax]
// 00527177  40                   inc eax
// 00527178  84c9                 test cl, cl
// 0052717a  75f9                 jne 0x527175
// 0052717c  2bc2                 sub eax, edx
// 0052717e  8bf8                 mov edi, eax
// 00527180  741b                 je 0x52719d
// 00527182  57                   push edi
// 00527183  8d54242c             lea edx, [esp + 0x2c]
// 00527187  52                   push edx
// 00527188  56                   push esi
// 00527189  e8f26bffff           call 0x51dd80
// 0052718e  57                   push edi
// 0052718f  8d442438             lea eax, [esp + 0x38]
// 00527193  50                   push eax
// 00527194  56                   push esi
// 00527195  e81669ffff           call 0x51dab0
// 0052719a  83c418               add esp, 0x18
// 0052719d  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005271a3  8bd0                 mov edx, eax
// 005271a5  8bc8                 mov ecx, eax
// 005271a7  c1e918               shr ecx, 0x18
// 005271aa  c1ea10               shr edx, 0x10
// 005271ad  884c244c             mov byte ptr [esp + 0x4c], cl
// 005271b1  8854244d             mov byte ptr [esp + 0x4d], dl
// 005271b5  6a04                 push 4
// 005271b7  8d542450             lea edx, [esp + 0x50]
// 005271bb  8bc8                 mov ecx, eax
// 005271bd  52                   push edx
// 005271be  c1e908               shr ecx, 8
// 005271c1  56                   push esi
// 005271c2  884c245a             mov byte ptr [esp + 0x5a], cl
// 005271c6  8844245b             mov byte ptr [esp + 0x5b], al
// 005271ca  e8e168ffff           call 0x51dab0
// 005271cf  83c40c               add esp, 0xc
// 005271d2  5f                   pop edi
// 005271d3  5e                   pop esi
// 005271d4  83c440               add esp, 0x40
// 005271d7  c3                   ret 
// library g3d-6.09-png-dll/pngwutil.c (function _png_write_sCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngwutil.c
