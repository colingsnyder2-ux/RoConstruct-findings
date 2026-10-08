// roc 2007-03 00730d00  unit: seg_00730000  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00730d00
//
// 00730d00  83ec60               sub esp, 0x60
// 00730d03  53                   push ebx
// 00730d04  55                   push ebp
// 00730d05  56                   push esi
// 00730d06  8b742474             mov esi, dword ptr [esp + 0x74]
// 00730d0a  57                   push edi
// 00730d0b  8bce                 mov ecx, esi
// 00730d0d  e8ce8ad4ff           call 0x4797e0
// 00730d12  bd01000000           mov ebp, 1
// 00730d17  016e78               add dword ptr [esi + 0x78], ebp
// 00730d1a  39ae4c040000         cmp dword ptr [esi + 0x44c], ebp
// 00730d20  7414                 je 0x730d36
// 00730d22  68011d0000           push 0x1d01
// 00730d27  89ae4c040000         mov dword ptr [esi + 0x44c], ebp
// 00730d2d  ff15b8eb7700         call dword ptr [0x77ebb8]
// 00730d33  016e70               add dword ptr [esi + 0x70], ebp
// 00730d36  d9ee                 fldz 
// 00730d38  8b7c247c             mov edi, dword ptr [esp + 0x7c]
// 00730d3c  d85f0c               fcomp dword ptr [edi + 0xc]
// 00730d3f  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 00730d43  dfe0                 fnstsw ax
// 00730d45  f6c405               test ah, 5
// 00730d48  0f8a3d020000         jp 0x730f8b
// 00730d4e  d9e8                 fld1 
// 00730d50  8bce                 mov ecx, esi
// 00730d52  d85f0c               fcomp dword ptr [edi + 0xc]
// 00730d55  dfe0                 fnstsw ax
// 00730d57  f6c441               test ah, 0x41
// 00730d5a  753e                 jne 0x730d9a
// 00730d5c  6a02                 push 2
// 00730d5e  6a01                 push 1
// 00730d60  6a00                 push 0
// 00730d62  e80935d4ff           call 0x474270
// 00730d67  6a00                 push 0
// 00730d69  8bce                 mov ecx, esi
// 00730d6b  bd02000000           mov ebp, 2
// 00730d70  e8fb2ad4ff           call 0x473870
// 00730d75  b801000000           mov eax, 1
// 00730d7a  014678               add dword ptr [esi + 0x78], eax
// 00730d7d  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 00730d84  741b                 je 0x730da1
// 00730d86  014670               add dword ptr [esi + 0x70], eax
// 00730d89  6a00                 push 0
// 00730d8b  ff15b4eb7700         call dword ptr [0x77ebb4]
// 00730d91  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 00730d98  eb07                 jmp 0x730da1
// 00730d9a  6a01                 push 1
// 00730d9c  e8cf2ad4ff           call 0x473870
// 00730da1  d907                 fld dword ptr [edi]
// 00730da3  8d86a8040000         lea eax, [esi + 0x4a8]
// 00730da9  d918                 fstp dword ptr [eax]
// 00730dab  50                   push eax
// 00730dac  d94704               fld dword ptr [edi + 4]
// 00730daf  d95804               fstp dword ptr [eax + 4]
// 00730db2  d94708               fld dword ptr [edi + 8]
// 00730db5  d95808               fstp dword ptr [eax + 8]
// 00730db8  d9470c               fld dword ptr [edi + 0xc]
// 00730dbb  d9580c               fstp dword ptr [eax + 0xc]
// 00730dbe  ff15b0eb7700         call dword ptr [0x77ebb0]
// 00730dc4  85ed                 test ebp, ebp
// 00730dc6  0f8eba010000         jle 0x730f86
// 00730dcc  8d642400             lea esp, [esp]
// 00730dd0  6a05                 push 5
// 00730dd2  8bce                 mov ecx, esi
// 00730dd4  e8c771d4ff           call 0x477fa0
// 00730dd9  33ff                 xor edi, edi
// 00730ddb  eb03                 jmp 0x730de0
// 00730ddd  8d4900               lea ecx, [ecx]
// 00730de0  d9ee                 fldz 
// 00730de2  8d442410             lea eax, [esp + 0x10]
// 00730de6  50                   push eax
// 00730de7  d9542438             fst dword ptr [esp + 0x38]
// 00730deb  d954243c             fst dword ptr [esp + 0x3c]
// 00730def  8d4c245c             lea ecx, [esp + 0x5c]
// 00730df3  d9542440             fst dword ptr [esp + 0x40]
// 00730df7  51                   push ecx
// 00730df8  d9542430             fst dword ptr [esp + 0x30]
// 00730dfc  8d542430             lea edx, [esp + 0x30]
// 00730e00  d9542434             fst dword ptr [esp + 0x34]
// 00730e04  52                   push edx
// 00730e05  d954243c             fst dword ptr [esp + 0x3c]
// 00730e09  8d442440             lea eax, [esp + 0x40]
// 00730e0d  d9542464             fst dword ptr [esp + 0x64]
// 00730e11  50                   push eax
// 00730e12  d954246c             fst dword ptr [esp + 0x6c]
// 00730e16  57                   push edi
// 00730e17  d9542474             fst dword ptr [esp + 0x74]
// 00730e1b  8bcb                 mov ecx, ebx
// 00730e1d  d9542424             fst dword ptr [esp + 0x24]
// 00730e21  d9542428             fst dword ptr [esp + 0x28]
// 00730e25  d95c242c             fstp dword ptr [esp + 0x2c]
// 00730e29  e8223bdeff           call 0x514950
// 00730e2e  d9442410             fld dword ptr [esp + 0x10]
// 00730e32  d9442434             fld dword ptr [esp + 0x34]
// 00730e36  d9c0                 fld st(0)
// 00730e38  deea                 fsubp st(2)
// 00730e3a  d9c9                 fxch st(1)
// 00730e3c  d95c2440             fstp dword ptr [esp + 0x40]
// 00730e40  d9442414             fld dword ptr [esp + 0x14]
// 00730e44  d9442438             fld dword ptr [esp + 0x38]
// 00730e48  d9c0                 fld st(0)
// 00730e4a  deea                 fsubp st(2)
// 00730e4c  d9c9                 fxch st(1)
// 00730e4e  d95c2444             fstp dword ptr [esp + 0x44]
// 00730e52  d9442418             fld dword ptr [esp + 0x18]
// 00730e56  d944243c             fld dword ptr [esp + 0x3c]
// 00730e5a  d9c0                 fld st(0)
// 00730e5c  deea                 fsubp st(2)
// 00730e5e  d9c9                 fxch st(1)
// 00730e60  d95c2448             fstp dword ptr [esp + 0x48]
// 00730e64  d9442428             fld dword ptr [esp + 0x28]
// 00730e68  dee3                 fsubrp st(3)
// 00730e6a  d9ca                 fxch st(2)
// 00730e6c  d95c244c             fstp dword ptr [esp + 0x4c]
// 00730e70  d86c242c             fsubr dword ptr [esp + 0x2c]
// 00730e74  d95c2450             fstp dword ptr [esp + 0x50]
// 00730e78  d86c2430             fsubr dword ptr [esp + 0x30]
// 00730e7c  d95c2454             fstp dword ptr [esp + 0x54]
// 00730e80  d9442450             fld dword ptr [esp + 0x50]
// 00730e84  d9c0                 fld st(0)
// 00730e86  d9442448             fld dword ptr [esp + 0x48]
// 00730e8a  d9c0                 fld st(0)
// 00730e8c  deca                 fmulp st(2)
// 00730e8e  d9442454             fld dword ptr [esp + 0x54]
// 00730e92  d9c0                 fld st(0)
// 00730e94  d9442444             fld dword ptr [esp + 0x44]
// 00730e98  d9c0                 fld st(0)
// 00730e9a  deca                 fmulp st(2)
// 00730e9c  d9cc                 fxch st(4)
// 00730e9e  dee1                 fsubrp st(1)
// 00730ea0  d95c241c             fstp dword ptr [esp + 0x1c]
// 00730ea4  d9442440             fld dword ptr [esp + 0x40]
// 00730ea8  d9c0                 fld st(0)
// 00730eaa  deca                 fmulp st(2)
// 00730eac  d944244c             fld dword ptr [esp + 0x4c]
// 00730eb0  d9c0                 fld st(0)
// 00730eb2  decc                 fmulp st(4)
// 00730eb4  d9ca                 fxch st(2)
// 00730eb6  dee3                 fsubrp st(3)
// 00730eb8  d9ca                 fxch st(2)
// 00730eba  d95c2420             fstp dword ptr [esp + 0x20]
// 00730ebe  deca                 fmulp st(2)
// 00730ec0  deca                 fmulp st(2)
// 00730ec2  dee1                 fsubrp st(1)
// 00730ec4  d95c2424             fstp dword ptr [esp + 0x24]
// 00730ec8  d944241c             fld dword ptr [esp + 0x1c]
// 00730ecc  d9442420             fld dword ptr [esp + 0x20]
// 00730ed0  d9442424             fld dword ptr [esp + 0x24]
// 00730ed4  d9c1                 fld st(1)
// 00730ed6  deca                 fmulp st(2)
// 00730ed8  d9c2                 fld st(2)
// 00730eda  decb                 fmulp st(3)
// 00730edc  d9c9                 fxch st(1)
// 00730ede  dec2                 faddp st(2)
// 00730ee0  dcc8                 fmul st(0), st(0)
// 00730ee2  dec1                 faddp st(1)
// 00730ee4  d95c2478             fstp dword ptr [esp + 0x78]
// 00730ee8  d9442478             fld dword ptr [esp + 0x78]
// 00730eec  e8bbe3eeff           call 0x61f2ac
// 00730ef1  d95c2478             fstp dword ptr [esp + 0x78]
// 00730ef5  d9442478             fld dword ptr [esp + 0x78]
// 00730ef9  8d4c2464             lea ecx, [esp + 0x64]
// 00730efd  d9e8                 fld1 
// 00730eff  51                   push ecx
// 00730f00  def1                 fdivrp st(1)
// 00730f02  8bce                 mov ecx, esi
// 00730f04  d95c247c             fstp dword ptr [esp + 0x7c]
// 00730f08  d9442420             fld dword ptr [esp + 0x20]
// 00730f0c  d944247c             fld dword ptr [esp + 0x7c]
// 00730f10  d9c0                 fld st(0)
// 00730f12  deca                 fmulp st(2)
// 00730f14  d9c9                 fxch st(1)
// 00730f16  d95c2468             fstp dword ptr [esp + 0x68]
// 00730f1a  d9442424             fld dword ptr [esp + 0x24]
// 00730f1e  d8c9                 fmul st(1)
// 00730f20  d95c246c             fstp dword ptr [esp + 0x6c]
// 00730f24  d84c2428             fmul dword ptr [esp + 0x28]
// 00730f28  d95c2470             fstp dword ptr [esp + 0x70]
// 00730f2c  e8af3cd4ff           call 0x474be0
// 00730f31  8d542434             lea edx, [esp + 0x34]
// 00730f35  52                   push edx
// 00730f36  8bce                 mov ecx, esi
// 00730f38  e8b33dd4ff           call 0x474cf0
// 00730f3d  8d442428             lea eax, [esp + 0x28]
// 00730f41  50                   push eax
// 00730f42  8bce                 mov ecx, esi
// 00730f44  e8a73dd4ff           call 0x474cf0
// 00730f49  8d4c2458             lea ecx, [esp + 0x58]
// 00730f4d  51                   push ecx
// 00730f4e  8bce                 mov ecx, esi
// 00730f50  e89b3dd4ff           call 0x474cf0
// 00730f55  8d542410             lea edx, [esp + 0x10]
// 00730f59  52                   push edx
// 00730f5a  8bce                 mov ecx, esi
// 00730f5c  e88f3dd4ff           call 0x474cf0
// 00730f61  83c701               add edi, 1
// 00730f64  83ff06               cmp edi, 6
// 00730f67  0f8c73feffff         jl 0x730de0
// 00730f6d  8bce                 mov ecx, esi
// 00730f6f  e89c49d4ff           call 0x475910
// 00730f74  6a01                 push 1
// 00730f76  8bce                 mov ecx, esi
// 00730f78  e8f328d4ff           call 0x473870
// 00730f7d  83ed01               sub ebp, 1
// 00730f80  0f854afeffff         jne 0x730dd0
// 00730f86  bd01000000           mov ebp, 1
// 00730f8b  d9ee                 fldz 
// 00730f8d  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 00730f94  d85f0c               fcomp dword ptr [edi + 0xc]
// 00730f97  dfe0                 fnstsw ax
// 00730f99  f6c405               test ah, 5
// 00730f9c  0f8a0c040000         jp 0x7313ae
// 00730fa2  016e78               add dword ptr [esi + 0x78], ebp
// 00730fa5  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 00730fac  7511                 jne 0x730fbf
// 00730fae  016e70               add dword ptr [esi + 0x70], ebp
// 00730fb1  55                   push ebp
// 00730fb2  ff15b4eb7700         call dword ptr [0x77ebb4]
// 00730fb8  c686e103000001       mov byte ptr [esi + 0x3e1], 1
// 00730fbf  6a02                 push 2
// 00730fc1  55                   push ebp
// 00730fc2  6a00                 push 0
// 00730fc4  8bce                 mov ecx, esi
// 00730fc6  e8a532d4ff           call 0x474270
// 00730fcb  d907                 fld dword ptr [edi]
// 00730fcd  8d86a8040000         lea eax, [esi + 0x4a8]
// 00730fd3  d918                 fstp dword ptr [eax]
// 00730fd5  50                   push eax
// 00730fd6  d94704               fld dword ptr [edi + 4]
// 00730fd9  d95804               fstp dword ptr [eax + 4]
// 00730fdc  d94708               fld dword ptr [edi + 8]
// 00730fdf  d95808               fstp dword ptr [eax + 8]
// 00730fe2  d9470c               fld dword ptr [edi + 0xc]
// 00730fe5  d9580c               fstp dword ptr [eax + 0xc]
// 00730fe8  ff15b0eb7700         call dword ptr [0x77ebb0]
// 00730fee  dd0518507900         fld qword ptr [0x795018]
// 00730ff4  83ec08               sub esp, 8
// 00730ff7  8bce                 mov ecx, esi
// 00730ff9  dd1c24               fstp qword ptr [esp]
// 00730ffc  e8cf33d4ff           call 0x4743d0
// 00731001  d98384000000         fld dword ptr [ebx + 0x84]
// 00731007  d95c241c             fstp dword ptr [esp + 0x1c]
// 0073100b  6a03                 push 3
// 0073100d  d98388000000         fld dword ptr [ebx + 0x88]
// 00731013  8bce                 mov ecx, esi
// 00731015  d95c2424             fstp dword ptr [esp + 0x24]
// 00731019  d9838c000000         fld dword ptr [ebx + 0x8c]
// 0073101f  d95c2428             fstp dword ptr [esp + 0x28]
// 00731023  d9ee                 fldz 
// 00731025  d9542414             fst dword ptr [esp + 0x14]
// 00731029  d9542418             fst dword ptr [esp + 0x18]
// 0073102d  d95c241c             fstp dword ptr [esp + 0x1c]
// 00731031  e89a2ad4ff           call 0x473ad0
// 00731036  6a00                 push 0
// 00731038  8bce                 mov ecx, esi
// 0073103a  e8616fd4ff           call 0x477fa0
// 0073103f  c744247800000000     mov dword ptr [esp + 0x78], 0
// 00731047  8d7b08               lea edi, [ebx + 8]
// 0073104a  8d9b00000000         lea ebx, [ebx]
// 00731050  33ed                 xor ebp, ebp
// 00731052  d947f8               fld dword ptr [edi - 8]
// 00731055  d95c244c             fstp dword ptr [esp + 0x4c]
// 00731059  d947fc               fld dword ptr [edi - 4]
// 0073105c  d95c2450             fstp dword ptr [esp + 0x50]
// 00731060  d907                 fld dword ptr [edi]
// 00731062  d95c2454             fstp dword ptr [esp + 0x54]
// 00731066  d944244c             fld dword ptr [esp + 0x4c]
// 0073106a  d9542410             fst dword ptr [esp + 0x10]
// 0073106e  d9442450             fld dword ptr [esp + 0x50]
// 00731072  d9542414             fst dword ptr [esp + 0x14]
// 00731076  d9442454             fld dword ptr [esp + 0x54]
// 0073107a  d9542418             fst dword ptr [esp + 0x18]
// 0073107e  d944241c             fld dword ptr [esp + 0x1c]
// 00731082  deeb                 fsubp st(3)
// 00731084  d9ca                 fxch st(2)
// 00731086  d95c2428             fstp dword ptr [esp + 0x28]
// 0073108a  d8642420             fsub dword ptr [esp + 0x20]
// 0073108e  d95c242c             fstp dword ptr [esp + 0x2c]
// 00731092  d8642424             fsub dword ptr [esp + 0x24]
// 00731096  d95c2430             fstp dword ptr [esp + 0x30]
// 0073109a  d9442428             fld dword ptr [esp + 0x28]
// 0073109e  d944242c             fld dword ptr [esp + 0x2c]
// 007310a2  d9442430             fld dword ptr [esp + 0x30]
// 007310a6  d9c1                 fld st(1)
// 007310a8  deca                 fmulp st(2)
// 007310aa  d9c2                 fld st(2)
// 007310ac  decb                 fmulp st(3)
// 007310ae  d9c9                 fxch st(1)
// 007310b0  dec2                 faddp st(2)
// 007310b2  dcc8                 fmul st(0), st(0)
// 007310b4  dec1                 faddp st(1)
// 007310b6  d95c247c             fstp dword ptr [esp + 0x7c]
// 007310ba  d944247c             fld dword ptr [esp + 0x7c]
// 007310be  e8e9e1eeff           call 0x61f2ac
// 007310c3  d95c247c             fstp dword ptr [esp + 0x7c]
// 007310c7  d944247c             fld dword ptr [esp + 0x7c]
// 007310cb  8d442464             lea eax, [esp + 0x64]
// 007310cf  d9e8                 fld1 
// 007310d1  50                   push eax
// 007310d2  def1                 fdivrp st(1)
// 007310d4  8bce                 mov ecx, esi
// 007310d6  d99c2480000000       fstp dword ptr [esp + 0x80]
// 007310dd  d944242c             fld dword ptr [esp + 0x2c]
// 007310e1  d9842480000000       fld dword ptr [esp + 0x80]
// 007310e8  d9c0                 fld st(0)
// 007310ea  deca                 fmulp st(2)
// 007310ec  d9c9                 fxch st(1)
// 007310ee  d95c2468             fstp dword ptr [esp + 0x68]
// 007310f2  d9442430             fld dword ptr [esp + 0x30]
// 007310f6  d8c9                 fmul st(1)
// 007310f8  d95c246c             fstp dword ptr [esp + 0x6c]
// 007310fc  d84c2434             fmul dword ptr [esp + 0x34]
// 00731100  d95c2470             fstp dword ptr [esp + 0x70]
// 00731104  e8d73ad4ff           call 0x474be0
// 00731109  8d4c2410             lea ecx, [esp + 0x10]
// 0073110d  51                   push ecx
// 0073110e  8bce                 mov ecx, esi
// 00731110  e8db3bd4ff           call 0x474cf0
// 00731115  83c501               add ebp, 1
// 00731118  8bc5                 mov eax, ebp
// 0073111a  2503000080           and eax, 0x80000003
// 0073111f  7905                 jns 0x731126
// 00731121  48                   dec eax
// 00731122  83c8fc               or eax, 0xfffffffc
// 00731125  40                   inc eax
// 00731126  03442478             add eax, dword ptr [esp + 0x78]
// 0073112a  8d1440               lea edx, [eax + eax*2]
// 0073112d  d90493               fld dword ptr [ebx + edx*4]
// 00731130  8d0493               lea eax, [ebx + edx*4]
// 00731133  d95c2440             fstp dword ptr [esp + 0x40]
// 00731137  d94004               fld dword ptr [eax + 4]
// 0073113a  d95c2444             fstp dword ptr [esp + 0x44]
// 0073113e  d94008               fld dword ptr [eax + 8]
// 00731141  d95c2448             fstp dword ptr [esp + 0x48]
// 00731145  d9442440             fld dword ptr [esp + 0x40]
// 00731149  d9542410             fst dword ptr [esp + 0x10]
// 0073114d  d9442444             fld dword ptr [esp + 0x44]
// 00731151  d9542414             fst dword ptr [esp + 0x14]
// 00731155  d9442448             fld dword ptr [esp + 0x48]
// 00731159  d9542418             fst dword ptr [esp + 0x18]
// 0073115d  d944241c             fld dword ptr [esp + 0x1c]
// 00731161  deeb                 fsubp st(3)
// 00731163  d9ca                 fxch st(2)
// 00731165  d95c2434             fstp dword ptr [esp + 0x34]
// 00731169  d8642420             fsub dword ptr [esp + 0x20]
// 0073116d  d95c2438             fstp dword ptr [esp + 0x38]
// 00731171  d8642424             fsub dword ptr [esp + 0x24]
// 00731175  d95c243c             fstp dword ptr [esp + 0x3c]
// 00731179  d9442434             fld dword ptr [esp + 0x34]
// 0073117d  d9442438             fld dword ptr [esp + 0x38]
// 00731181  d944243c             fld dword ptr [esp + 0x3c]
// 00731185  d9c1                 fld st(1)
// 00731187  deca                 fmulp st(2)
// 00731189  d9c2                 fld st(2)
// 0073118b  decb                 fmulp st(3)
// 0073118d  d9c9                 fxch st(1)
// 0073118f  dec2                 faddp st(2)
// 00731191  dcc8                 fmul st(0), st(0)
// 00731193  dec1                 faddp st(1)
// 00731195  d95c247c             fstp dword ptr [esp + 0x7c]
// 00731199  d944247c             fld dword ptr [esp + 0x7c]
// 0073119d  e80ae1eeff           call 0x61f2ac
// 007311a2  d95c247c             fstp dword ptr [esp + 0x7c]
// 007311a6  d944247c             fld dword ptr [esp + 0x7c]
// 007311aa  8d442458             lea eax, [esp + 0x58]
// 007311ae  d9e8                 fld1 
// 007311b0  50                   push eax
// 007311b1  def1                 fdivrp st(1)
// 007311b3  8bce                 mov ecx, esi
// 007311b5  d99c2480000000       fstp dword ptr [esp + 0x80]
// 007311bc  d9442438             fld dword ptr [esp + 0x38]
// 007311c0  d9842480000000       fld dword ptr [esp + 0x80]
// 007311c7  d9c0                 fld st(0)
// 007311c9  deca                 fmulp st(2)
// 007311cb  d9c9                 fxch st(1)
// 007311cd  d95c245c             fstp dword ptr [esp + 0x5c]
// 007311d1  d944243c             fld dword ptr [esp + 0x3c]
// 007311d5  d8c9                 fmul st(1)
// 007311d7  d95c2460             fstp dword ptr [esp + 0x60]
// 007311db  d84c2440             fmul dword ptr [esp + 0x40]
// 007311df  d95c2464             fstp dword ptr [esp + 0x64]
// 007311e3  e8f839d4ff           call 0x474be0
// 007311e8  8d4c2410             lea ecx, [esp + 0x10]
// 007311ec  51                   push ecx
// 007311ed  8bce                 mov ecx, esi
// 007311ef  e8fc3ad4ff           call 0x474cf0
// 007311f4  83c70c               add edi, 0xc
// 007311f7  83fd04               cmp ebp, 4
// 007311fa  0f8c52feffff         jl 0x731052
// 00731200  8b442478             mov eax, dword ptr [esp + 0x78]
// 00731204  83c004               add eax, 4
// 00731207  83f808               cmp eax, 8
// 0073120a  89442478             mov dword ptr [esp + 0x78], eax
// 0073120e  0f8c3cfeffff         jl 0x731050
// 00731214  8d7b38               lea edi, [ebx + 0x38]
// 00731217  bb04000000           mov ebx, 4
// 0073121c  8d642400             lea esp, [esp]
// 00731220  d947c8               fld dword ptr [edi - 0x38]
// 00731223  d95c244c             fstp dword ptr [esp + 0x4c]
// 00731227  d947cc               fld dword ptr [edi - 0x34]
// 0073122a  d95c2450             fstp dword ptr [esp + 0x50]
// 0073122e  d947d0               fld dword ptr [edi - 0x30]
// 00731231  d95c2454             fstp dword ptr [esp + 0x54]
// 00731235  d944244c             fld dword ptr [esp + 0x4c]
// 00731239  d9542410             fst dword ptr [esp + 0x10]
// 0073123d  d9442450             fld dword ptr [esp + 0x50]
// 00731241  d9542414             fst dword ptr [esp + 0x14]
// 00731245  d9442454             fld dword ptr [esp + 0x54]
// 00731249  d9542418             fst dword ptr [esp + 0x18]
// 0073124d  d944241c             fld dword ptr [esp + 0x1c]
// 00731251  deeb                 fsubp st(3)
// 00731253  d9ca                 fxch st(2)
// 00731255  d95c2434             fstp dword ptr [esp + 0x34]
// 00731259  d8642420             fsub dword ptr [esp + 0x20]
// 0073125d  d95c2438             fstp dword ptr [esp + 0x38]
// 00731261  d8642424             fsub dword ptr [esp + 0x24]
// 00731265  d95c243c             fstp dword ptr [esp + 0x3c]
// 00731269  d9442434             fld dword ptr [esp + 0x34]
// 0073126d  d9442438             fld dword ptr [esp + 0x38]
// 00731271  d944243c             fld dword ptr [esp + 0x3c]
// 00731275  d9c1                 fld st(1)
// 00731277  deca                 fmulp st(2)
// 00731279  d9c2                 fld st(2)
// 0073127b  decb                 fmulp st(3)
// 0073127d  d9c9                 fxch st(1)
// 0073127f  dec2                 faddp st(2)
// 00731281  dcc8                 fmul st(0), st(0)
// 00731283  dec1                 faddp st(1)
// 00731285  d95c2478             fstp dword ptr [esp + 0x78]
// 00731289  d9442478             fld dword ptr [esp + 0x78]
// 0073128d  e81ae0eeff           call 0x61f2ac
// 00731292  d95c2478             fstp dword ptr [esp + 0x78]
// 00731296  d9442478             fld dword ptr [esp + 0x78]
// 0073129a  8d542464             lea edx, [esp + 0x64]
// 0073129e  d9e8                 fld1 
// 007312a0  52                   push edx
// 007312a1  def1                 fdivrp st(1)
// 007312a3  8bce                 mov ecx, esi
// 007312a5  d95c247c             fstp dword ptr [esp + 0x7c]
// 007312a9  d9442438             fld dword ptr [esp + 0x38]
// 007312ad  d944247c             fld dword ptr [esp + 0x7c]
// 007312b1  d9c0                 fld st(0)
// 007312b3  deca                 fmulp st(2)
// 007312b5  d9c9                 fxch st(1)
// 007312b7  d95c2468             fstp dword ptr [esp + 0x68]
// 007312bb  d944243c             fld dword ptr [esp + 0x3c]
// 007312bf  d8c9                 fmul st(1)
// 007312c1  d95c246c             fstp dword ptr [esp + 0x6c]
// 007312c5  d84c2440             fmul dword ptr [esp + 0x40]
// 007312c9  d95c2470             fstp dword ptr [esp + 0x70]
// 007312cd  e80e39d4ff           call 0x474be0
// 007312d2  8d442410             lea eax, [esp + 0x10]
// 007312d6  50                   push eax
// 007312d7  8bce                 mov ecx, esi
// 007312d9  e8123ad4ff           call 0x474cf0
// 007312de  d947f8               fld dword ptr [edi - 8]
// 007312e1  d95c2440             fstp dword ptr [esp + 0x40]
// 007312e5  d947fc               fld dword ptr [edi - 4]
// 007312e8  d95c2444             fstp dword ptr [esp + 0x44]
// 007312ec  d907                 fld dword ptr [edi]
// 007312ee  d95c2448             fstp dword ptr [esp + 0x48]
// 007312f2  d9442440             fld dword ptr [esp + 0x40]
// 007312f6  d9542410             fst dword ptr [esp + 0x10]
// 007312fa  d9442444             fld dword ptr [esp + 0x44]
// 007312fe  d9542414             fst dword ptr [esp + 0x14]
// 00731302  d9442448             fld dword ptr [esp + 0x48]
// 00731306  d9542418             fst dword ptr [esp + 0x18]
// 0073130a  d944241c             fld dword ptr [esp + 0x1c]
// 0073130e  deeb                 fsubp st(3)
// 00731310  d9ca                 fxch st(2)
// 00731312  d95c2428             fstp dword ptr [esp + 0x28]
// 00731316  d8642420             fsub dword ptr [esp + 0x20]
// 0073131a  d95c242c             fstp dword ptr [esp + 0x2c]
// 0073131e  d8642424             fsub dword ptr [esp + 0x24]
// 00731322  d95c2430             fstp dword ptr [esp + 0x30]
// 00731326  d944242c             fld dword ptr [esp + 0x2c]
// 0073132a  d9442428             fld dword ptr [esp + 0x28]
// 0073132e  d9442430             fld dword ptr [esp + 0x30]
// 00731332  d9c1                 fld st(1)
// 00731334  deca                 fmulp st(2)
// 00731336  d9c2                 fld st(2)
// 00731338  decb                 fmulp st(3)
// 0073133a  d9c9                 fxch st(1)
// 0073133c  dec2                 faddp st(2)
// 0073133e  dcc8                 fmul st(0), st(0)
// 00731340  dec1                 faddp st(1)
// 00731342  d95c2478             fstp dword ptr [esp + 0x78]
// 00731346  d9442478             fld dword ptr [esp + 0x78]
// 0073134a  e85ddfeeff           call 0x61f2ac
// 0073134f  d95c2478             fstp dword ptr [esp + 0x78]
// 00731353  d9442478             fld dword ptr [esp + 0x78]
// 00731357  8d4c2458             lea ecx, [esp + 0x58]
// 0073135b  d9e8                 fld1 
// 0073135d  51                   push ecx
// 0073135e  def1                 fdivrp st(1)
// 00731360  8bce                 mov ecx, esi
// 00731362  d95c247c             fstp dword ptr [esp + 0x7c]
// 00731366  d944242c             fld dword ptr [esp + 0x2c]
// 0073136a  d944247c             fld dword ptr [esp + 0x7c]
// 0073136e  d9c0                 fld st(0)
// 00731370  deca                 fmulp st(2)
// 00731372  d9c9                 fxch st(1)
// 00731374  d95c245c             fstp dword ptr [esp + 0x5c]
// 00731378  d9442430             fld dword ptr [esp + 0x30]
// 0073137c  d8c9                 fmul st(1)
// 0073137e  d95c2460             fstp dword ptr [esp + 0x60]
// 00731382  d84c2434             fmul dword ptr [esp + 0x34]
// 00731386  d95c2464             fstp dword ptr [esp + 0x64]
// 0073138a  e85138d4ff           call 0x474be0
// 0073138f  8d542410             lea edx, [esp + 0x10]
// 00731393  52                   push edx
// 00731394  8bce                 mov ecx, esi
// 00731396  e85539d4ff           call 0x474cf0
// 0073139b  83c70c               add edi, 0xc
// 0073139e  83eb01               sub ebx, 1
// 007313a1  0f8579feffff         jne 0x731220
// 007313a7  8bce                 mov ecx, esi
// 007313a9  e86245d4ff           call 0x475910
// 007313ae  5f                   pop edi
// 007313af  8bce                 mov ecx, esi
// 007313b1  5e                   pop esi
// 007313b2  5d                   pop ebp
// 007313b3  5b                   pop ebx
// 007313b4  83c460               add esp, 0x60
// 007313b7  e96484d4ff           jmp 0x479820
// library rbxgs-g3d/GLG3Dcpp\Draw.cpp (function ?box@Draw@G3D@@SAXABVBox@2@PAVRenderDevice@2@ABVColor4@2@2@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Draw.cpp
