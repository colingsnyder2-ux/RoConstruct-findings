// roc 2007-03 00505360  unit: seg_00500000  size: 918 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505360
//
// 00505360  83ec18               sub esp, 0x18
// 00505363  56                   push esi
// 00505364  6880764e00           push 0x4e7680
// 00505369  6880c34700           push 0x47c380
// 0050536e  6800800000           push 0x8000
// 00505373  8bf1                 mov esi, ecx
// 00505375  6a0c                 push 0xc
// 00505377  56                   push esi
// 00505378  e8ef9c1100           call 0x61f06c
// 0050537d  dd442430             fld qword ptr [esp + 0x30]
// 00505381  8b442420             mov eax, dword ptr [esp + 0x20]
// 00505385  dd9e10000600         fstp qword ptr [esi + 0x60010]
// 0050538b  d9ee                 fldz 
// 0050538d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00505391  8b542428             mov edx, dword ptr [esp + 0x28]
// 00505395  898600000600         mov dword ptr [esi + 0x60000], eax
// 0050539b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0050539f  898e04000600         mov dword ptr [esi + 0x60004], ecx
// 005053a5  899608000600         mov dword ptr [esi + 0x60008], edx
// 005053ab  89860c000600         mov dword ptr [esi + 0x6000c], eax
// 005053b1  d99618000600         fst dword ptr [esi + 0x60018]
// 005053b7  d9961c000600         fst dword ptr [esi + 0x6001c]
// 005053bd  d99620000600         fst dword ptr [esi + 0x60020]
// 005053c3  d99624000600         fst dword ptr [esi + 0x60024]
// 005053c9  d99628000600         fst dword ptr [esi + 0x60028]
// 005053cf  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 005053d5  e8f625feff           call 0x4e79d0
// 005053da  d900                 fld dword ptr [eax]
// 005053dc  d95c2404             fstp dword ptr [esp + 4]
// 005053e0  d94004               fld dword ptr [eax + 4]
// 005053e3  d95c2408             fstp dword ptr [esp + 8]
// 005053e7  d94008               fld dword ptr [eax + 8]
// 005053ea  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 005053f0  83780400             cmp dword ptr [eax + 4], 0
// 005053f4  d95c240c             fstp dword ptr [esp + 0xc]
// 005053f8  d9442404             fld dword ptr [esp + 4]
// 005053fc  d9c0                 fld st(0)
// 005053fe  d9e0                 fchs 
// 00505400  d95c2410             fstp dword ptr [esp + 0x10]
// 00505404  d9442408             fld dword ptr [esp + 8]
// 00505408  d9c0                 fld st(0)
// 0050540a  d9e0                 fchs 
// 0050540c  d95c2414             fstp dword ptr [esp + 0x14]
// 00505410  d944240c             fld dword ptr [esp + 0xc]
// 00505414  d9c0                 fld st(0)
// 00505416  d9e0                 fchs 
// 00505418  d95c2418             fstp dword ptr [esp + 0x18]
// 0050541c  0f8ee7000000         jle 0x505509
// 00505422  8b10                 mov edx, dword ptr [eax]
// 00505424  53                   push ebx
// 00505425  8b5804               mov ebx, dword ptr [eax + 4]
// 00505428  57                   push edi
// 00505429  8d4a04               lea ecx, [edx + 4]
// 0050542c  8d642400             lea esp, [esp]
// 00505430  d94104               fld dword ptr [ecx + 4]
// 00505433  8d7904               lea edi, [ecx + 4]
// 00505436  d8d1                 fcom st(1)
// 00505438  dfe0                 fnstsw ax
// 0050543a  ddd9                 fstp st(1)
// 0050543c  f6c441               test ah, 0x41
// 0050543f  8d442414             lea eax, [esp + 0x14]
// 00505443  7402                 je 0x505447
// 00505445  8bc7                 mov eax, edi
// 00505447  d900                 fld dword ptr [eax]
// 00505449  d95c242c             fstp dword ptr [esp + 0x2c]
// 0050544d  d901                 fld dword ptr [ecx]
// 0050544f  d8d2                 fcom st(2)
// 00505451  dfe0                 fnstsw ax
// 00505453  ddda                 fstp st(2)
// 00505455  f6c441               test ah, 0x41
// 00505458  8d442410             lea eax, [esp + 0x10]
// 0050545c  7402                 je 0x505460
// 0050545e  8bc1                 mov eax, ecx
// 00505460  d900                 fld dword ptr [eax]
// 00505462  d95c2428             fstp dword ptr [esp + 0x28]
// 00505466  d902                 fld dword ptr [edx]
// 00505468  d8d3                 fcom st(3)
// 0050546a  dfe0                 fnstsw ax
// 0050546c  dddb                 fstp st(3)
// 0050546e  f6c441               test ah, 0x41
// 00505471  8d44240c             lea eax, [esp + 0xc]
// 00505475  7402                 je 0x505479
// 00505477  8bc2                 mov eax, edx
// 00505479  d900                 fld dword ptr [eax]
// 0050547b  d95c240c             fstp dword ptr [esp + 0xc]
// 0050547f  d9442428             fld dword ptr [esp + 0x28]
// 00505483  d95c2410             fstp dword ptr [esp + 0x10]
// 00505487  d944242c             fld dword ptr [esp + 0x2c]
// 0050548b  d95c2414             fstp dword ptr [esp + 0x14]
// 0050548f  d9442420             fld dword ptr [esp + 0x20]
// 00505493  ded9                 fcompp 
// 00505495  dfe0                 fnstsw ax
// 00505497  f6c441               test ah, 0x41
// 0050549a  8d442420             lea eax, [esp + 0x20]
// 0050549e  7402                 je 0x5054a2
// 005054a0  8bc7                 mov eax, edi
// 005054a2  d900                 fld dword ptr [eax]
// 005054a4  d95c242c             fstp dword ptr [esp + 0x2c]
// 005054a8  d944241c             fld dword ptr [esp + 0x1c]
// 005054ac  ded9                 fcompp 
// 005054ae  dfe0                 fnstsw ax
// 005054b0  f6c441               test ah, 0x41
// 005054b3  8d44241c             lea eax, [esp + 0x1c]
// 005054b7  7402                 je 0x5054bb
// 005054b9  8bc1                 mov eax, ecx
// 005054bb  d900                 fld dword ptr [eax]
// 005054bd  d95c2428             fstp dword ptr [esp + 0x28]
// 005054c1  d9442418             fld dword ptr [esp + 0x18]
// 005054c5  ded9                 fcompp 
// 005054c7  dfe0                 fnstsw ax
// 005054c9  f6c441               test ah, 0x41
// 005054cc  8d442418             lea eax, [esp + 0x18]
// 005054d0  7402                 je 0x5054d4
// 005054d2  8bc2                 mov eax, edx
// 005054d4  d900                 fld dword ptr [eax]
// 005054d6  83c20c               add edx, 0xc
// 005054d9  d95c2418             fstp dword ptr [esp + 0x18]
// 005054dd  83c10c               add ecx, 0xc
// 005054e0  83eb01               sub ebx, 1
// 005054e3  d9442428             fld dword ptr [esp + 0x28]
// 005054e7  d95c241c             fstp dword ptr [esp + 0x1c]
// 005054eb  d944242c             fld dword ptr [esp + 0x2c]
// 005054ef  d95c2420             fstp dword ptr [esp + 0x20]
// 005054f3  d9442414             fld dword ptr [esp + 0x14]
// 005054f7  d9442410             fld dword ptr [esp + 0x10]
// 005054fb  d944240c             fld dword ptr [esp + 0xc]
// 005054ff  d9ca                 fxch st(2)
// 00505501  0f8529ffffff         jne 0x505430
// 00505507  5f                   pop edi
// 00505508  5b                   pop ebx
// 00505509  d9ca                 fxch st(2)
// 0050550b  d99618000600         fst dword ptr [esi + 0x60018]
// 00505511  d9c9                 fxch st(1)
// 00505513  d9961c000600         fst dword ptr [esi + 0x6001c]
// 00505519  d9ca                 fxch st(2)
// 0050551b  d99620000600         fst dword ptr [esi + 0x60020]
// 00505521  d9442410             fld dword ptr [esp + 0x10]
// 00505525  dee2                 fsubrp st(2)
// 00505527  d9c9                 fxch st(1)
// 00505529  d95c2404             fstp dword ptr [esp + 4]
// 0050552d  d9442414             fld dword ptr [esp + 0x14]
// 00505531  dee2                 fsubrp st(2)
// 00505533  d9c9                 fxch st(1)
// 00505535  d95c2408             fstp dword ptr [esp + 8]
// 00505539  d86c2418             fsubr dword ptr [esp + 0x18]
// 0050553d  d95c240c             fstp dword ptr [esp + 0xc]
// 00505541  d9442404             fld dword ptr [esp + 4]
// 00505545  d99e24000600         fstp dword ptr [esi + 0x60024]
// 0050554b  d9442408             fld dword ptr [esp + 8]
// 0050554f  d99e28000600         fstp dword ptr [esi + 0x60028]
// 00505555  d944240c             fld dword ptr [esp + 0xc]
// 00505559  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 0050555f  d98624000600         fld dword ptr [esi + 0x60024]
// 00505565  d9ee                 fldz 
// 00505567  d9c0                 fld st(0)
// 00505569  ddea                 fucomp st(2)
// 0050556b  dfe0                 fnstsw ax
// 0050556d  d9e8                 fld1 
// 0050556f  f6c444               test ah, 0x44
// 00505572  dd0580067a00         fld qword ptr [0x7a0680]
// 00505578  d9e8                 fld1 
// 0050557a  7b5c                 jnp 0x5055d8
// 0050557c  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 00505583  d9c4                 fld st(4)
// 00505585  d8e4                 fsub st(4)
// 00505587  d9e1                 fabs 
// 00505589  d9cd                 fxch st(5)
// 0050558b  d9e1                 fabs 
// 0050558d  d8c1                 fadd st(1)
// 0050558f  7515                 jne 0x5055a6
// 00505591  8b0d28e67700         mov ecx, dword ptr [0x77e628]
// 00505597  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 0050559e  dd01                 fld qword ptr [ecx]
// 005055a0  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 005055a6  dd05c8778b00         fld qword ptr [0x8b77c8]
// 005055ac  dde9                 fucomp st(1)
// 005055ae  dfe0                 fnstsw ax
// 005055b0  f6c444               test ah, 0x44
// 005055b3  7a06                 jp 0x5055bb
// 005055b5  ddd8                 fstp st(0)
// 005055b7  d9c1                 fld st(1)
// 005055b9  eb02                 jmp 0x5055bd
// 005055bb  d8ca                 fmul st(2)
// 005055bd  d8dd                 fcomp st(5)
// 005055bf  dfe0                 fnstsw ax
// 005055c1  dddc                 fstp st(4)
// 005055c3  f6c401               test ah, 1
// 005055c6  7412                 je 0x5055da
// 005055c8  d98624000600         fld dword ptr [esi + 0x60024]
// 005055ce  d8fc                 fdivr st(4)
// 005055d0  d99e24000600         fstp dword ptr [esi + 0x60024]
// 005055d6  eb0c                 jmp 0x5055e4
// 005055d8  dddc                 fstp st(4)
// 005055da  d9c9                 fxch st(1)
// 005055dc  d99624000600         fst dword ptr [esi + 0x60024]
// 005055e2  d9c9                 fxch st(1)
// 005055e4  d98628000600         fld dword ptr [esi + 0x60028]
// 005055ea  d9c3                 fld st(3)
// 005055ec  dde9                 fucomp st(1)
// 005055ee  dfe0                 fnstsw ax
// 005055f0  f6c444               test ah, 0x44
// 005055f3  7b5a                 jnp 0x50564f
// 005055f5  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 005055fc  d9c0                 fld st(0)
// 005055fe  d8e4                 fsub st(4)
// 00505600  d9e1                 fabs 
// 00505602  d9c9                 fxch st(1)
// 00505604  d9e1                 fabs 
// 00505606  d8c5                 fadd st(5)
// 00505608  7515                 jne 0x50561f
// 0050560a  8b1528e67700         mov edx, dword ptr [0x77e628]
// 00505610  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 00505617  dd02                 fld qword ptr [edx]
// 00505619  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 0050561f  dd05c8778b00         fld qword ptr [0x8b77c8]
// 00505625  dde9                 fucomp st(1)
// 00505627  dfe0                 fnstsw ax
// 00505629  f6c444               test ah, 0x44
// 0050562c  7a06                 jp 0x505634
// 0050562e  ddd8                 fstp st(0)
// 00505630  d9c1                 fld st(1)
// 00505632  eb02                 jmp 0x505636
// 00505634  d8ca                 fmul st(2)
// 00505636  ded9                 fcompp 
// 00505638  dfe0                 fnstsw ax
// 0050563a  f6c401               test ah, 1
// 0050563d  7412                 je 0x505651
// 0050563f  d98628000600         fld dword ptr [esi + 0x60028]
// 00505645  d8fc                 fdivr st(4)
// 00505647  d99e28000600         fstp dword ptr [esi + 0x60028]
// 0050564d  eb0c                 jmp 0x50565b
// 0050564f  ddd8                 fstp st(0)
// 00505651  d9c9                 fxch st(1)
// 00505653  d99628000600         fst dword ptr [esi + 0x60028]
// 00505659  d9c9                 fxch st(1)
// 0050565b  d9862c000600         fld dword ptr [esi + 0x6002c]
// 00505661  d9c3                 fld st(3)
// 00505663  dde9                 fucomp st(1)
// 00505665  dfe0                 fnstsw ax
// 00505667  f6c444               test ah, 0x44
// 0050566a  7b5c                 jnp 0x5056c8
// 0050566c  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 00505673  d9c0                 fld st(0)
// 00505675  dee4                 fsubrp st(4)
// 00505677  d9cb                 fxch st(3)
// 00505679  d9e1                 fabs 
// 0050567b  d9cb                 fxch st(3)
// 0050567d  d9e1                 fabs 
// 0050567f  d8c4                 fadd st(4)
// 00505681  7514                 jne 0x505697
// 00505683  a128e67700           mov eax, dword ptr [0x77e628]
// 00505688  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 0050568f  dd00                 fld qword ptr [eax]
// 00505691  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00505697  dd05c8778b00         fld qword ptr [0x8b77c8]
// 0050569d  dde9                 fucomp st(1)
// 0050569f  dfe0                 fnstsw ax
// 005056a1  f6c444               test ah, 0x44
// 005056a4  7a04                 jp 0x5056aa
// 005056a6  ddd8                 fstp st(0)
// 005056a8  eb02                 jmp 0x5056ac
// 005056aa  dec9                 fmulp st(1)
// 005056ac  d8da                 fcomp st(2)
// 005056ae  dfe0                 fnstsw ax
// 005056b0  ddd9                 fstp st(1)
// 005056b2  f6c401               test ah, 1
// 005056b5  7528                 jne 0x5056df
// 005056b7  ddd9                 fstp st(1)
// 005056b9  8bc6                 mov eax, esi
// 005056bb  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 005056c1  5e                   pop esi
// 005056c2  83c418               add esp, 0x18
// 005056c5  c21800               ret 0x18
// 005056c8  ddd8                 fstp st(0)
// 005056ca  8bc6                 mov eax, esi
// 005056cc  ddda                 fstp st(2)
// 005056ce  ddda                 fstp st(2)
// 005056d0  ddd8                 fstp st(0)
// 005056d2  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 005056d8  5e                   pop esi
// 005056d9  83c418               add esp, 0x18
// 005056dc  c21800               ret 0x18
// 005056df  ddd8                 fstp st(0)
// 005056e1  8bc6                 mov eax, esi
// 005056e3  d8b62c000600         fdiv dword ptr [esi + 0x6002c]
// 005056e9  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 005056ef  5e                   pop esi
// 005056f0  83c418               add esp, 0x18
// 005056f3  c21800               ret 0x18
// library rbxgs-g3d/G3Dcpp\MeshAlgWeld.cpp (function ??0Welder@_internal@G3D@@QAE@ABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgWeld.cpp
