// roc 2009-06 00573d10  unit: G3D::GCamera  size: 1895 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00573d10
//
// 00573d10  55                   push ebp
// 00573d11  8bec                 mov ebp, esp
// 00573d13  83e4c0               and esp, 0xffffffc0
// 00573d16  6aff                 push -1
// 00573d18  68ab058600           push 0x8605ab
// 00573d1d  64a100000000         mov eax, dword ptr fs:[0]
// 00573d23  50                   push eax
// 00573d24  64892500000000       mov dword ptr fs:[0], esp
// 00573d2b  81ece8000000         sub esp, 0xe8
// 00573d31  d9e8                 fld1 
// 00573d33  53                   push ebx
// 00573d34  d9c0                 fld st(0)
// 00573d36  56                   push esi
// 00573d37  57                   push edi
// 00573d38  8bf9                 mov edi, ecx
// 00573d3a  d87708               fdiv dword ptr [edi + 8]
// 00573d3d  8b4508               mov eax, dword ptr [ebp + 8]
// 00573d40  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00573d43  8d4c2474             lea ecx, [esp + 0x74]
// 00573d47  8d942484000000       lea edx, [esp + 0x84]
// 00573d4e  d94008               fld dword ptr [eax + 8]
// 00573d51  d820                 fsub dword ptr [eax]
// 00573d53  d8c9                 fmul st(1)
// 00573d55  d84f0c               fmul dword ptr [edi + 0xc]
// 00573d58  d9400c               fld dword ptr [eax + 0xc]
// 00573d5b  d86004               fsub dword ptr [eax + 4]
// 00573d5e  8d442464             lea eax, [esp + 0x64]
// 00573d62  50                   push eax
// 00573d63  51                   push ecx
// 00573d64  def9                 fdivp st(1)
// 00573d66  52                   push edx
// 00573d67  8d44245c             lea eax, [esp + 0x5c]
// 00573d6b  50                   push eax
// 00573d6c  8bcb                 mov ecx, ebx
// 00573d6e  d9054cad8b00         fld dword ptr [0x8bad4c]
// 00573d74  dcc9                 fmul st(1), st(0)
// 00573d76  d9c9                 fxch st(1)
// 00573d78  d954242c             fst dword ptr [esp + 0x2c]
// 00573d7c  d9ca                 fxch st(2)
// 00573d7e  d84f0c               fmul dword ptr [edi + 0xc]
// 00573d81  dec9                 fmulp st(1)
// 00573d83  d99424b0000000       fst dword ptr [esp + 0xb0]
// 00573d8a  d9470c               fld dword ptr [edi + 0xc]
// 00573d8d  d9e0                 fchs 
// 00573d8f  d99424ac000000       fst dword ptr [esp + 0xac]
// 00573d96  d90594758b00         fld dword ptr [0x8b7594]
// 00573d9c  d87710               fdiv dword ptr [edi + 0x10]
// 00573d9f  d8c9                 fmul st(1)
// 00573da1  d99c24b4000000       fstp dword ptr [esp + 0xb4]
// 00573da8  d94704               fld dword ptr [edi + 4]
// 00573dab  d8f2                 fdiv st(2)
// 00573dad  d8cb                 fmul st(3)
// 00573daf  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 00573db6  d9ca                 fxch st(2)
// 00573db8  d9542474             fst dword ptr [esp + 0x74]
// 00573dbc  d9c1                 fld st(1)
// 00573dbe  d9e0                 fchs 
// 00573dc0  d99424a8000000       fst dword ptr [esp + 0xa8]
// 00573dc7  d9542478             fst dword ptr [esp + 0x78]
// 00573dcb  d9cb                 fxch st(3)
// 00573dcd  d954247c             fst dword ptr [esp + 0x7c]
// 00573dd1  d9cc                 fxch st(4)
// 00573dd3  d9942480000000       fst dword ptr [esp + 0x80]
// 00573dda  d9c1                 fld st(1)
// 00573ddc  d9e0                 fchs 
// 00573dde  d99424b8000000       fst dword ptr [esp + 0xb8]
// 00573de5  d9942484000000       fst dword ptr [esp + 0x84]
// 00573dec  d99c2494000000       fstp dword ptr [esp + 0x94]
// 00573df3  d9cb                 fxch st(3)
// 00573df5  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00573dfc  d9cb                 fxch st(3)
// 00573dfe  d994248c000000       fst dword ptr [esp + 0x8c]
// 00573e05  d994249c000000       fst dword ptr [esp + 0x9c]
// 00573e0c  d95c2468             fstp dword ptr [esp + 0x68]
// 00573e10  d9c9                 fxch st(1)
// 00573e12  d9942490000000       fst dword ptr [esp + 0x90]
// 00573e19  d99424a0000000       fst dword ptr [esp + 0xa0]
// 00573e20  d95c246c             fstp dword ptr [esp + 0x6c]
// 00573e24  d9942498000000       fst dword ptr [esp + 0x98]
// 00573e2b  d95c2464             fstp dword ptr [esp + 0x64]
// 00573e2f  d95c2460             fstp dword ptr [esp + 0x60]
// 00573e33  e838faffff           call 0x573870
// 00573e38  d944241c             fld dword ptr [esp + 0x1c]
// 00573e3c  d9542450             fst dword ptr [esp + 0x50]
// 00573e40  d9842498000000       fld dword ptr [esp + 0x98]
// 00573e47  d9542454             fst dword ptr [esp + 0x54]
// 00573e4b  d984249c000000       fld dword ptr [esp + 0x9c]
// 00573e52  d9542458             fst dword ptr [esp + 0x58]
// 00573e56  d98424a4000000       fld dword ptr [esp + 0xa4]
// 00573e5d  d954245c             fst dword ptr [esp + 0x5c]
// 00573e61  d98424a8000000       fld dword ptr [esp + 0xa8]
// 00573e68  8d4c2450             lea ecx, [esp + 0x50]
// 00573e6c  d9942484000000       fst dword ptr [esp + 0x84]
// 00573e73  51                   push ecx
// 00573e74  d95c2478             fstp dword ptr [esp + 0x78]
// 00573e78  8d942488000000       lea edx, [esp + 0x88]
// 00573e7f  d9ca                 fxch st(2)
// 00573e81  52                   push edx
// 00573e82  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00573e89  8d44247c             lea eax, [esp + 0x7c]
// 00573e8d  50                   push eax
// 00573e8e  d9942498000000       fst dword ptr [esp + 0x98]
// 00573e95  8d4c2470             lea ecx, [esp + 0x70]
// 00573e99  d9c9                 fxch st(1)
// 00573e9b  51                   push ecx
// 00573e9c  d99424a0000000       fst dword ptr [esp + 0xa0]
// 00573ea3  8bcb                 mov ecx, ebx
// 00573ea5  d98424b0000000       fld dword ptr [esp + 0xb0]
// 00573eac  d9942488000000       fst dword ptr [esp + 0x88]
// 00573eb3  d95c2478             fstp dword ptr [esp + 0x78]
// 00573eb7  d9c9                 fxch st(1)
// 00573eb9  d994248c000000       fst dword ptr [esp + 0x8c]
// 00573ec0  d95c247c             fstp dword ptr [esp + 0x7c]
// 00573ec4  d9942490000000       fst dword ptr [esp + 0x90]
// 00573ecb  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00573ed2  d95c2474             fstp dword ptr [esp + 0x74]
// 00573ed6  e895f9ffff           call 0x573870
// 00573edb  8d4c2430             lea ecx, [esp + 0x30]
// 00573edf  e8fcf1ffff           call 0x5730e0
// 00573ee4  d9ee                 fldz 
// 00573ee6  d954240c             fst dword ptr [esp + 0xc]
// 00573eea  8d54240c             lea edx, [esp + 0xc]
// 00573eee  d9542410             fst dword ptr [esp + 0x10]
// 00573ef2  52                   push edx
// 00573ef3  d9470c               fld dword ptr [edi + 0xc]
// 00573ef6  8d442448             lea eax, [esp + 0x48]
// 00573efa  d9e0                 fchs 
// 00573efc  33f6                 xor esi, esi
// 00573efe  d95c2418             fstp dword ptr [esp + 0x18]
// 00573f02  50                   push eax
// 00573f03  8d4c2458             lea ecx, [esp + 0x58]
// 00573f07  89b42404010000       mov dword ptr [esp + 0x104], esi
// 00573f0e  d954244c             fst dword ptr [esp + 0x4c]
// 00573f12  d95c2450             fstp dword ptr [esp + 0x50]
// 00573f16  d90594758b00         fld dword ptr [0x8b7594]
// 00573f1c  d95c2454             fstp dword ptr [esp + 0x54]
// 00573f20  e81b5d0100           call 0x589c40
// 00573f25  d94004               fld dword ptr [eax + 4]
// 00573f28  8974242c             mov dword ptr [esp + 0x2c], esi
// 00573f2c  d95c2434             fstp dword ptr [esp + 0x34]
// 00573f30  8d4c2420             lea ecx, [esp + 0x20]
// 00573f34  d94008               fld dword ptr [eax + 8]
// 00573f37  8d730c               lea esi, [ebx + 0xc]
// 00573f3a  d95c2438             fstp dword ptr [esp + 0x38]
// 00573f3e  51                   push ecx
// 00573f3f  d9400c               fld dword ptr [eax + 0xc]
// 00573f42  8bce                 mov ecx, esi
// 00573f44  d95c2440             fstp dword ptr [esp + 0x40]
// 00573f48  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00573f50  d94010               fld dword ptr [eax + 0x10]
// 00573f53  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00573f5b  d95c2444             fstp dword ptr [esp + 0x44]
// 00573f5f  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00573f67  e854fcffff           call 0x573bc0
// 00573f6c  d9ee                 fldz 
// 00573f6e  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 00573f75  7519                 jne 0x573f90
// 00573f77  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 00573f7e  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 00573f84  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 00573f8a  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 00573f90  d9842494000000       fld dword ptr [esp + 0x94]
// 00573f97  68ecc6a300           push 0xa3c6ec
// 00573f9c  d80d4cad8b00         fmul dword ptr [0x8bad4c]
// 00573fa2  8d542410             lea edx, [esp + 0x10]
// 00573fa6  52                   push edx
// 00573fa7  8d4c2458             lea ecx, [esp + 0x58]
// 00573fab  d9c0                 fld st(0)
// 00573fad  d9ff                 fcos 
// 00573faf  d9e0                 fchs 
// 00573fb1  d95c2414             fstp dword ptr [esp + 0x14]
// 00573fb5  d9c9                 fxch st(1)
// 00573fb7  d95c2418             fstp dword ptr [esp + 0x18]
// 00573fbb  d9fe                 fsin 
// 00573fbd  d9e0                 fchs 
// 00573fbf  d95c241c             fstp dword ptr [esp + 0x1c]
// 00573fc3  e8785c0100           call 0x589c40
// 00573fc8  d94004               fld dword ptr [eax + 4]
// 00573fcb  d95c2434             fstp dword ptr [esp + 0x34]
// 00573fcf  8bce                 mov ecx, esi
// 00573fd1  d94008               fld dword ptr [eax + 8]
// 00573fd4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00573fdc  d95c2438             fstp dword ptr [esp + 0x38]
// 00573fe0  c744242404000000     mov dword ptr [esp + 0x24], 4
// 00573fe8  d9400c               fld dword ptr [eax + 0xc]
// 00573feb  c744242807000000     mov dword ptr [esp + 0x28], 7
// 00573ff3  d95c243c             fstp dword ptr [esp + 0x3c]
// 00573ff7  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 00573fff  d94010               fld dword ptr [eax + 0x10]
// 00574002  8d442420             lea eax, [esp + 0x20]
// 00574006  d95c2440             fstp dword ptr [esp + 0x40]
// 0057400a  50                   push eax
// 0057400b  e8b0fbffff           call 0x573bc0
// 00574010  d9ee                 fldz 
// 00574012  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 00574019  7519                 jne 0x574034
// 0057401b  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 00574022  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 00574028  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0057402e  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 00574034  8b4604               mov eax, dword ptr [esi + 4]
// 00574037  8b16                 mov edx, dword ptr [esi]
// 00574039  8d0cc0               lea ecx, [eax + eax*8]
// 0057403c  d9448af8             fld dword ptr [edx + ecx*4 - 8]
// 00574040  8bca                 mov ecx, edx
// 00574042  8d04c0               lea eax, [eax + eax*8]
// 00574045  d94481f0             fld dword ptr [ecx + eax*4 - 0x10]
// 00574049  68ecc6a300           push 0xa3c6ec
// 0057404e  d9e0                 fchs 
// 00574050  8d542410             lea edx, [esp + 0x10]
// 00574054  d95c2410             fstp dword ptr [esp + 0x10]
// 00574058  52                   push edx
// 00574059  d9c9                 fxch st(1)
// 0057405b  8d4c2458             lea ecx, [esp + 0x58]
// 0057405f  d95c2418             fstp dword ptr [esp + 0x18]
// 00574063  d95c241c             fstp dword ptr [esp + 0x1c]
// 00574067  e8d45b0100           call 0x589c40
// 0057406c  d94004               fld dword ptr [eax + 4]
// 0057406f  8bce                 mov ecx, esi
// 00574071  d95c2434             fstp dword ptr [esp + 0x34]
// 00574075  c744242005000000     mov dword ptr [esp + 0x20], 5
// 0057407d  d94008               fld dword ptr [eax + 8]
// 00574080  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00574088  d95c2438             fstp dword ptr [esp + 0x38]
// 0057408c  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00574094  d9400c               fld dword ptr [eax + 0xc]
// 00574097  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0057409f  d95c243c             fstp dword ptr [esp + 0x3c]
// 005740a3  d94010               fld dword ptr [eax + 0x10]
// 005740a6  8d442420             lea eax, [esp + 0x20]
// 005740aa  50                   push eax
// 005740ab  d95c2444             fstp dword ptr [esp + 0x44]
// 005740af  e80cfbffff           call 0x573bc0
// 005740b4  d9ee                 fldz 
// 005740b6  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 005740bd  7519                 jne 0x5740d8
// 005740bf  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 005740c6  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 005740cc  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 005740d2  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 005740d8  d95c240c             fstp dword ptr [esp + 0xc]
// 005740dc  68ecc6a300           push 0xa3c6ec
// 005740e1  d94704               fld dword ptr [edi + 4]
// 005740e4  8d4c2410             lea ecx, [esp + 0x10]
// 005740e8  d80d4cad8b00         fmul dword ptr [0x8bad4c]
// 005740ee  51                   push ecx
// 005740ef  8d4c2458             lea ecx, [esp + 0x58]
// 005740f3  d9c0                 fld st(0)
// 005740f5  d9ff                 fcos 
// 005740f7  d9e0                 fchs 
// 005740f9  d95c2418             fstp dword ptr [esp + 0x18]
// 005740fd  d9fe                 fsin 
// 005740ff  d9e0                 fchs 
// 00574101  d95c241c             fstp dword ptr [esp + 0x1c]
// 00574105  e8365b0100           call 0x589c40
// 0057410a  d94004               fld dword ptr [eax + 4]
// 0057410d  d95c2434             fstp dword ptr [esp + 0x34]
// 00574111  8d542420             lea edx, [esp + 0x20]
// 00574115  d94008               fld dword ptr [eax + 8]
// 00574118  52                   push edx
// 00574119  d95c243c             fstp dword ptr [esp + 0x3c]
// 0057411d  8bce                 mov ecx, esi
// 0057411f  d9400c               fld dword ptr [eax + 0xc]
// 00574122  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0057412a  d95c2440             fstp dword ptr [esp + 0x40]
// 0057412e  c744242805000000     mov dword ptr [esp + 0x28], 5
// 00574136  d94010               fld dword ptr [eax + 0x10]
// 00574139  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00574141  d95c2444             fstp dword ptr [esp + 0x44]
// 00574145  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0057414d  e86efaffff           call 0x573bc0
// 00574152  d9ee                 fldz 
// 00574154  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 0057415b  7519                 jne 0x574176
// 0057415d  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 00574164  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 0057416a  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 00574170  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 00574176  8b4604               mov eax, dword ptr [esi + 4]
// 00574179  8b0e                 mov ecx, dword ptr [esi]
// 0057417b  8d04c0               lea eax, [eax + eax*8]
// 0057417e  d94481f4             fld dword ptr [ecx + eax*4 - 0xc]
// 00574182  8b4604               mov eax, dword ptr [esi + 4]
// 00574185  d9e0                 fchs 
// 00574187  8d14c0               lea edx, [eax + eax*8]
// 0057418a  8bc1                 mov eax, ecx
// 0057418c  d94490f8             fld dword ptr [eax + edx*4 - 8]
// 00574190  68ecc6a300           push 0xa3c6ec
// 00574195  d9ca                 fxch st(2)
// 00574197  8d4c2410             lea ecx, [esp + 0x10]
// 0057419b  d95c2410             fstp dword ptr [esp + 0x10]
// 0057419f  51                   push ecx
// 005741a0  8d4c2458             lea ecx, [esp + 0x58]
// 005741a4  d95c2418             fstp dword ptr [esp + 0x18]
// 005741a8  d95c241c             fstp dword ptr [esp + 0x1c]
// 005741ac  e88f5a0100           call 0x589c40
// 005741b1  d94004               fld dword ptr [eax + 4]
// 005741b4  8d542420             lea edx, [esp + 0x20]
// 005741b8  d95c2434             fstp dword ptr [esp + 0x34]
// 005741bc  52                   push edx
// 005741bd  d94008               fld dword ptr [eax + 8]
// 005741c0  8bce                 mov ecx, esi
// 005741c2  d95c243c             fstp dword ptr [esp + 0x3c]
// 005741c6  c744242402000000     mov dword ptr [esp + 0x24], 2
// 005741ce  d9400c               fld dword ptr [eax + 0xc]
// 005741d1  c744242803000000     mov dword ptr [esp + 0x28], 3
// 005741d9  d95c2440             fstp dword ptr [esp + 0x40]
// 005741dd  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 005741e5  d94010               fld dword ptr [eax + 0x10]
// 005741e8  c744243006000000     mov dword ptr [esp + 0x30], 6
// 005741f0  d95c2444             fstp dword ptr [esp + 0x44]
// 005741f4  e8c7f9ffff           call 0x573bc0
// 005741f9  f605b8c8a30001       test byte ptr [0xa3c8b8], 1
// 00574200  7514                 jne 0x574216
// 00574202  a144e58900           mov eax, dword ptr [0x89e544]
// 00574207  830db8c8a30001       or dword ptr [0xa3c8b8], 1
// 0057420e  dd00                 fld qword ptr [eax]
// 00574210  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 00574216  d94710               fld dword ptr [edi + 0x10]
// 00574219  dc1db0c8a300         fcomp qword ptr [0xa3c8b0]
// 0057421f  dfe0                 fnstsw ax
// 00574221  f6c405               test ah, 5
// 00574224  7a7c                 jp 0x5742a2
// 00574226  d9ee                 fldz 
// 00574228  8d4c240c             lea ecx, [esp + 0xc]
// 0057422c  d954240c             fst dword ptr [esp + 0xc]
// 00574230  51                   push ecx
// 00574231  d9542414             fst dword ptr [esp + 0x14]
// 00574235  8d542448             lea edx, [esp + 0x48]
// 00574239  d94710               fld dword ptr [edi + 0x10]
// 0057423c  52                   push edx
// 0057423d  d9e0                 fchs 
// 0057423f  8d4c2458             lea ecx, [esp + 0x58]
// 00574243  d95c241c             fstp dword ptr [esp + 0x1c]
// 00574247  d954244c             fst dword ptr [esp + 0x4c]
// 0057424b  d95c2450             fstp dword ptr [esp + 0x50]
// 0057424f  d9e8                 fld1 
// 00574251  d95c2454             fstp dword ptr [esp + 0x54]
// 00574255  e8e6590100           call 0x589c40
// 0057425a  d94004               fld dword ptr [eax + 4]
// 0057425d  d95c2434             fstp dword ptr [esp + 0x34]
// 00574261  8bce                 mov ecx, esi
// 00574263  d94008               fld dword ptr [eax + 8]
// 00574266  c744242004000000     mov dword ptr [esp + 0x20], 4
// 0057426e  d95c2438             fstp dword ptr [esp + 0x38]
// 00574272  c744242405000000     mov dword ptr [esp + 0x24], 5
// 0057427a  d9400c               fld dword ptr [eax + 0xc]
// 0057427d  c744242806000000     mov dword ptr [esp + 0x28], 6
// 00574285  d95c243c             fstp dword ptr [esp + 0x3c]
// 00574289  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 00574291  d94010               fld dword ptr [eax + 0x10]
// 00574294  8d442420             lea eax, [esp + 0x20]
// 00574298  d95c2440             fstp dword ptr [esp + 0x40]
// 0057429c  50                   push eax
// 0057429d  e81ef9ffff           call 0x573bc0
// 005742a2  33c0                 xor eax, eax
// 005742a4  394304               cmp dword ptr [ebx + 4], eax
// 005742a7  8944241c             mov dword ptr [esp + 0x1c], eax
// 005742ab  7e4b                 jle 0x5742f8
// 005742ad  89442418             mov dword ptr [esp + 0x18], eax
// 005742b1  8b0b                 mov ecx, dword ptr [ebx]
// 005742b3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005742b7  8d1c0a               lea ebx, [edx + ecx]
// 005742ba  53                   push ebx
// 005742bb  8d442454             lea eax, [esp + 0x54]
// 005742bf  50                   push eax
// 005742c0  8d4f14               lea ecx, [edi + 0x14]
// 005742c3  e8b8aff3ff           call 0x4af280
// 005742c8  d900                 fld dword ptr [eax]
// 005742ca  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005742cd  d91b                 fstp dword ptr [ebx]
// 005742cf  d94004               fld dword ptr [eax + 4]
// 005742d2  8344241810           add dword ptr [esp + 0x18], 0x10
// 005742d7  d95b04               fstp dword ptr [ebx + 4]
// 005742da  d94008               fld dword ptr [eax + 8]
// 005742dd  d95b08               fstp dword ptr [ebx + 8]
// 005742e0  d9400c               fld dword ptr [eax + 0xc]
// 005742e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005742e7  40                   inc eax
// 005742e8  d95b0c               fstp dword ptr [ebx + 0xc]
// 005742eb  3b4104               cmp eax, dword ptr [ecx + 4]
// 005742ee  8944241c             mov dword ptr [esp + 0x1c], eax
// 005742f2  8bd9                 mov ebx, ecx
// 005742f4  7cbb                 jl 0x5742b1
// 005742f6  33c0                 xor eax, eax
// 005742f8  394310               cmp dword ptr [ebx + 0x10], eax
// 005742fb  8944241c             mov dword ptr [esp + 0x1c], eax
// 005742ff  0f8e5b010000         jle 0x574460
// 00574305  33db                 xor ebx, ebx
// 00574307  d9ee                 fldz 
// 00574309  8b0e                 mov ecx, dword ptr [esi]
// 0057430b  8d542418             lea edx, [esp + 0x18]
// 0057430f  d954240c             fst dword ptr [esp + 0xc]
// 00574313  52                   push edx
// 00574314  d9542414             fst dword ptr [esp + 0x14]
// 00574318  8d442410             lea eax, [esp + 0x10]
// 0057431c  d95c2418             fstp dword ptr [esp + 0x18]
// 00574320  50                   push eax
// 00574321  8d4c0b10             lea ecx, [ebx + ecx + 0x10]
// 00574325  e8065a0100           call 0x589d30
// 0057432a  d94714               fld dword ptr [edi + 0x14]
// 0057432d  d944240c             fld dword ptr [esp + 0xc]
// 00574331  83ec08               sub esp, 8
// 00574334  dcc9                 fmul st(1), st(0)
// 00574336  d944241c             fld dword ptr [esp + 0x1c]
// 0057433a  d9c0                 fld st(0)
// 0057433c  d84f1c               fmul dword ptr [edi + 0x1c]
// 0057433f  dec3                 faddp st(3)
// 00574341  d9442418             fld dword ptr [esp + 0x18]
// 00574345  d9c0                 fld st(0)
// 00574347  d84f18               fmul dword ptr [edi + 0x18]
// 0057434a  dec4                 faddp st(4)
// 0057434c  d9cb                 fxch st(3)
// 0057434e  d95c244c             fstp dword ptr [esp + 0x4c]
// 00574352  d94728               fld dword ptr [edi + 0x28]
// 00574355  d8c9                 fmul st(1)
// 00574357  d94720               fld dword ptr [edi + 0x20]
// 0057435a  d8cb                 fmul st(3)
// 0057435c  dec1                 faddp st(1)
// 0057435e  d94724               fld dword ptr [edi + 0x24]
// 00574361  d8cc                 fmul st(4)
// 00574363  dec1                 faddp st(1)
// 00574365  d95c2450             fstp dword ptr [esp + 0x50]
// 00574369  d84f34               fmul dword ptr [edi + 0x34]
// 0057436c  d9ca                 fxch st(2)
// 0057436e  d84f30               fmul dword ptr [edi + 0x30]
// 00574371  dec2                 faddp st(2)
// 00574373  d84f2c               fmul dword ptr [edi + 0x2c]
// 00574376  dec1                 faddp st(1)
// 00574378  d95c2454             fstp dword ptr [esp + 0x54]
// 0057437c  d9442420             fld dword ptr [esp + 0x20]
// 00574380  dd1c24               fstp qword ptr [esp]
// 00574383  e8e881f6ff           call 0x4dc570
// 00574388  d9442420             fld dword ptr [esp + 0x20]
// 0057438c  83c408               add esp, 8
// 0057438f  84c0                 test al, al
// 00574391  7468                 je 0x5743fb
// 00574393  d9e0                 fchs 
// 00574395  8d542464             lea edx, [esp + 0x64]
// 00574399  d9c0                 fld st(0)
// 0057439b  52                   push edx
// 0057439c  d9442448             fld dword ptr [esp + 0x48]
// 005743a0  8d442448             lea eax, [esp + 0x48]
// 005743a4  dcc9                 fmul st(1), st(0)
// 005743a6  50                   push eax
// 005743a7  d9c2                 fld st(2)
// 005743a9  8d4c2458             lea ecx, [esp + 0x58]
// 005743ad  d9442450             fld dword ptr [esp + 0x50]
// 005743b1  dcc9                 fmul st(1), st(0)
// 005743b3  d9442454             fld dword ptr [esp + 0x54]
// 005743b7  dccd                 fmul st(5), st(0)
// 005743b9  d9cc                 fxch st(4)
// 005743bb  d84738               fadd dword ptr [edi + 0x38]
// 005743be  d9473c               fld dword ptr [edi + 0x3c]
// 005743c1  dec3                 faddp st(3)
// 005743c3  d94740               fld dword ptr [edi + 0x40]
// 005743c6  dec6                 faddp st(6)
// 005743c8  d9ca                 fxch st(2)
// 005743ca  d8c9                 fmul st(1)
// 005743cc  d9cd                 fxch st(5)
// 005743ce  d8cc                 fmul st(4)
// 005743d0  dec5                 faddp st(5)
// 005743d2  d9c9                 fxch st(1)
// 005743d4  d8ca                 fmul st(2)
// 005743d6  dec4                 faddp st(4)
// 005743d8  d9cb                 fxch st(3)
// 005743da  d9542420             fst dword ptr [esp + 0x20]
// 005743de  dcc9                 fmul st(1), st(0)
// 005743e0  d9c9                 fxch st(1)
// 005743e2  d95c246c             fstp dword ptr [esp + 0x6c]
// 005743e6  dcca                 fmul st(2), st(0)
// 005743e8  d9ca                 fxch st(2)
// 005743ea  d95c2470             fstp dword ptr [esp + 0x70]
// 005743ee  dec9                 fmulp st(1)
// 005743f0  d95c2474             fstp dword ptr [esp + 0x74]
// 005743f4  e847580100           call 0x589c40
// 005743f9  eb2e                 jmp 0x574429
// 005743fb  83ec10               sub esp, 0x10
// 005743fe  d95c240c             fstp dword ptr [esp + 0xc]
// 00574402  8d9424bc000000       lea edx, [esp + 0xbc]
// 00574409  d944245c             fld dword ptr [esp + 0x5c]
// 0057440d  d95c2408             fstp dword ptr [esp + 8]
// 00574411  d9442458             fld dword ptr [esp + 0x58]
// 00574415  d95c2404             fstp dword ptr [esp + 4]
// 00574419  d9442454             fld dword ptr [esp + 0x54]
// 0057441d  d91c24               fstp dword ptr [esp]
// 00574420  52                   push edx
// 00574421  e88a580100           call 0x589cb0
// 00574426  83c414               add esp, 0x14
// 00574429  8b0e                 mov ecx, dword ptr [esi]
// 0057442b  d94004               fld dword ptr [eax + 4]
// 0057442e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00574431  d95c0b14             fstp dword ptr [ebx + ecx + 0x14]
// 00574435  d94008               fld dword ptr [eax + 8]
// 00574438  8d4c0b10             lea ecx, [ebx + ecx + 0x10]
// 0057443c  d95908               fstp dword ptr [ecx + 8]
// 0057443f  83c324               add ebx, 0x24
// 00574442  d9400c               fld dword ptr [eax + 0xc]
// 00574445  d9590c               fstp dword ptr [ecx + 0xc]
// 00574448  d94010               fld dword ptr [eax + 0x10]
// 0057444b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057444f  40                   inc eax
// 00574450  d95910               fstp dword ptr [ecx + 0x10]
// 00574453  3b4210               cmp eax, dword ptr [edx + 0x10]
// 00574456  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057445a  0f8ca7feffff         jl 0x574307
// 00574460  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 00574467  5f                   pop edi
// 00574468  5e                   pop esi
// 00574469  64890d00000000       mov dword ptr fs:[0], ecx
// 00574470  5b                   pop ebx
// 00574471  8be5                 mov esp, ebp
// 00574473  5d                   pop ebp
// 00574474  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?getFrustum@GCamera@G3D@@QBEXABVRect2D@2@AAVFrustum@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
