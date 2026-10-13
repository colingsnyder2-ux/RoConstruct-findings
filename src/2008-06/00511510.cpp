// roc 2008-06 00511510  unit: G3D::GCamera  size: 1895 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00511510
//
// 00511510  55                   push ebp
// 00511511  8bec                 mov ebp, esp
// 00511513  83e4c0               and esp, 0xffffffc0
// 00511516  6aff                 push -1
// 00511518  68ebc37c00           push 0x7cc3eb
// 0051151d  64a100000000         mov eax, dword ptr fs:[0]
// 00511523  50                   push eax
// 00511524  64892500000000       mov dword ptr fs:[0], esp
// 0051152b  81ece8000000         sub esp, 0xe8
// 00511531  d9e8                 fld1 
// 00511533  53                   push ebx
// 00511534  d9c0                 fld st(0)
// 00511536  56                   push esi
// 00511537  57                   push edi
// 00511538  8bf9                 mov edi, ecx
// 0051153a  d87708               fdiv dword ptr [edi + 8]
// 0051153d  8b4508               mov eax, dword ptr [ebp + 8]
// 00511540  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 00511543  8d4c2474             lea ecx, [esp + 0x74]
// 00511547  8d942484000000       lea edx, [esp + 0x84]
// 0051154e  d94008               fld dword ptr [eax + 8]
// 00511551  d820                 fsub dword ptr [eax]
// 00511553  d8c9                 fmul st(1)
// 00511555  d84f0c               fmul dword ptr [edi + 0xc]
// 00511558  d9400c               fld dword ptr [eax + 0xc]
// 0051155b  d86004               fsub dword ptr [eax + 4]
// 0051155e  8d442464             lea eax, [esp + 0x64]
// 00511562  50                   push eax
// 00511563  51                   push ecx
// 00511564  def9                 fdivp st(1)
// 00511566  52                   push edx
// 00511567  8d44245c             lea eax, [esp + 0x5c]
// 0051156b  50                   push eax
// 0051156c  8bcb                 mov ecx, ebx
// 0051156e  d905ac9b8100         fld dword ptr [0x819bac]
// 00511574  dcc9                 fmul st(1), st(0)
// 00511576  d9c9                 fxch st(1)
// 00511578  d954242c             fst dword ptr [esp + 0x2c]
// 0051157c  d9ca                 fxch st(2)
// 0051157e  d84f0c               fmul dword ptr [edi + 0xc]
// 00511581  dec9                 fmulp st(1)
// 00511583  d99424b0000000       fst dword ptr [esp + 0xb0]
// 0051158a  d9470c               fld dword ptr [edi + 0xc]
// 0051158d  d9e0                 fchs 
// 0051158f  d99424ac000000       fst dword ptr [esp + 0xac]
// 00511596  d905b8c38100         fld dword ptr [0x81c3b8]
// 0051159c  d87710               fdiv dword ptr [edi + 0x10]
// 0051159f  d8c9                 fmul st(1)
// 005115a1  d99c24b4000000       fstp dword ptr [esp + 0xb4]
// 005115a8  d94704               fld dword ptr [edi + 4]
// 005115ab  d8f2                 fdiv st(2)
// 005115ad  d8cb                 fmul st(3)
// 005115af  d99c24a4000000       fstp dword ptr [esp + 0xa4]
// 005115b6  d9ca                 fxch st(2)
// 005115b8  d9542474             fst dword ptr [esp + 0x74]
// 005115bc  d9c1                 fld st(1)
// 005115be  d9e0                 fchs 
// 005115c0  d99424a8000000       fst dword ptr [esp + 0xa8]
// 005115c7  d9542478             fst dword ptr [esp + 0x78]
// 005115cb  d9cb                 fxch st(3)
// 005115cd  d954247c             fst dword ptr [esp + 0x7c]
// 005115d1  d9cc                 fxch st(4)
// 005115d3  d9942480000000       fst dword ptr [esp + 0x80]
// 005115da  d9c1                 fld st(1)
// 005115dc  d9e0                 fchs 
// 005115de  d99424b8000000       fst dword ptr [esp + 0xb8]
// 005115e5  d9942484000000       fst dword ptr [esp + 0x84]
// 005115ec  d99c2494000000       fstp dword ptr [esp + 0x94]
// 005115f3  d9cb                 fxch st(3)
// 005115f5  d99c2488000000       fstp dword ptr [esp + 0x88]
// 005115fc  d9cb                 fxch st(3)
// 005115fe  d994248c000000       fst dword ptr [esp + 0x8c]
// 00511605  d994249c000000       fst dword ptr [esp + 0x9c]
// 0051160c  d95c2468             fstp dword ptr [esp + 0x68]
// 00511610  d9c9                 fxch st(1)
// 00511612  d9942490000000       fst dword ptr [esp + 0x90]
// 00511619  d99424a0000000       fst dword ptr [esp + 0xa0]
// 00511620  d95c246c             fstp dword ptr [esp + 0x6c]
// 00511624  d9942498000000       fst dword ptr [esp + 0x98]
// 0051162b  d95c2464             fstp dword ptr [esp + 0x64]
// 0051162f  d95c2460             fstp dword ptr [esp + 0x60]
// 00511633  e838faffff           call 0x511070
// 00511638  d944241c             fld dword ptr [esp + 0x1c]
// 0051163c  d9542450             fst dword ptr [esp + 0x50]
// 00511640  d9842498000000       fld dword ptr [esp + 0x98]
// 00511647  d9542454             fst dword ptr [esp + 0x54]
// 0051164b  d984249c000000       fld dword ptr [esp + 0x9c]
// 00511652  d9542458             fst dword ptr [esp + 0x58]
// 00511656  d98424a4000000       fld dword ptr [esp + 0xa4]
// 0051165d  d954245c             fst dword ptr [esp + 0x5c]
// 00511661  d98424a8000000       fld dword ptr [esp + 0xa8]
// 00511668  8d4c2450             lea ecx, [esp + 0x50]
// 0051166c  d9942484000000       fst dword ptr [esp + 0x84]
// 00511673  51                   push ecx
// 00511674  d95c2478             fstp dword ptr [esp + 0x78]
// 00511678  8d942488000000       lea edx, [esp + 0x88]
// 0051167f  d9ca                 fxch st(2)
// 00511681  52                   push edx
// 00511682  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00511689  8d44247c             lea eax, [esp + 0x7c]
// 0051168d  50                   push eax
// 0051168e  d9942498000000       fst dword ptr [esp + 0x98]
// 00511695  8d4c2470             lea ecx, [esp + 0x70]
// 00511699  d9c9                 fxch st(1)
// 0051169b  51                   push ecx
// 0051169c  d99424a0000000       fst dword ptr [esp + 0xa0]
// 005116a3  8bcb                 mov ecx, ebx
// 005116a5  d98424b0000000       fld dword ptr [esp + 0xb0]
// 005116ac  d9942488000000       fst dword ptr [esp + 0x88]
// 005116b3  d95c2478             fstp dword ptr [esp + 0x78]
// 005116b7  d9c9                 fxch st(1)
// 005116b9  d994248c000000       fst dword ptr [esp + 0x8c]
// 005116c0  d95c247c             fstp dword ptr [esp + 0x7c]
// 005116c4  d9942490000000       fst dword ptr [esp + 0x90]
// 005116cb  d99c2480000000       fstp dword ptr [esp + 0x80]
// 005116d2  d95c2474             fstp dword ptr [esp + 0x74]
// 005116d6  e895f9ffff           call 0x511070
// 005116db  8d4c2430             lea ecx, [esp + 0x30]
// 005116df  e8fcf2ffff           call 0x5109e0
// 005116e4  d9ee                 fldz 
// 005116e6  d954240c             fst dword ptr [esp + 0xc]
// 005116ea  8d54240c             lea edx, [esp + 0xc]
// 005116ee  d9542410             fst dword ptr [esp + 0x10]
// 005116f2  52                   push edx
// 005116f3  d9470c               fld dword ptr [edi + 0xc]
// 005116f6  8d442448             lea eax, [esp + 0x48]
// 005116fa  d9e0                 fchs 
// 005116fc  33f6                 xor esi, esi
// 005116fe  d95c2418             fstp dword ptr [esp + 0x18]
// 00511702  50                   push eax
// 00511703  8d4c2458             lea ecx, [esp + 0x58]
// 00511707  89b42404010000       mov dword ptr [esp + 0x104], esi
// 0051170e  d954244c             fst dword ptr [esp + 0x4c]
// 00511712  d95c2450             fstp dword ptr [esp + 0x50]
// 00511716  d905b8c38100         fld dword ptr [0x81c3b8]
// 0051171c  d95c2454             fstp dword ptr [esp + 0x54]
// 00511720  e8bb420100           call 0x5259e0
// 00511725  d94004               fld dword ptr [eax + 4]
// 00511728  8974242c             mov dword ptr [esp + 0x2c], esi
// 0051172c  d95c2434             fstp dword ptr [esp + 0x34]
// 00511730  8d4c2420             lea ecx, [esp + 0x20]
// 00511734  d94008               fld dword ptr [eax + 8]
// 00511737  8d730c               lea esi, [ebx + 0xc]
// 0051173a  d95c2438             fstp dword ptr [esp + 0x38]
// 0051173e  51                   push ecx
// 0051173f  d9400c               fld dword ptr [eax + 0xc]
// 00511742  8bce                 mov ecx, esi
// 00511744  d95c2440             fstp dword ptr [esp + 0x40]
// 00511748  c744242403000000     mov dword ptr [esp + 0x24], 3
// 00511750  d94010               fld dword ptr [eax + 0x10]
// 00511753  c744242802000000     mov dword ptr [esp + 0x28], 2
// 0051175b  d95c2444             fstp dword ptr [esp + 0x44]
// 0051175f  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 00511767  e854fcffff           call 0x5113c0
// 0051176c  d9ee                 fldz 
// 0051176e  f60550f0960001       test byte ptr [0x96f050], 1
// 00511775  7519                 jne 0x511790
// 00511777  830d50f0960001       or dword ptr [0x96f050], 1
// 0051177e  d91544f09600         fst dword ptr [0x96f044]
// 00511784  d91548f09600         fst dword ptr [0x96f048]
// 0051178a  d9154cf09600         fst dword ptr [0x96f04c]
// 00511790  d9842494000000       fld dword ptr [esp + 0x94]
// 00511797  6844f09600           push 0x96f044
// 0051179c  d80dac9b8100         fmul dword ptr [0x819bac]
// 005117a2  8d542410             lea edx, [esp + 0x10]
// 005117a6  52                   push edx
// 005117a7  8d4c2458             lea ecx, [esp + 0x58]
// 005117ab  d9c0                 fld st(0)
// 005117ad  d9ff                 fcos 
// 005117af  d9e0                 fchs 
// 005117b1  d95c2414             fstp dword ptr [esp + 0x14]
// 005117b5  d9c9                 fxch st(1)
// 005117b7  d95c2418             fstp dword ptr [esp + 0x18]
// 005117bb  d9fe                 fsin 
// 005117bd  d9e0                 fchs 
// 005117bf  d95c241c             fstp dword ptr [esp + 0x1c]
// 005117c3  e818420100           call 0x5259e0
// 005117c8  d94004               fld dword ptr [eax + 4]
// 005117cb  d95c2434             fstp dword ptr [esp + 0x34]
// 005117cf  8bce                 mov ecx, esi
// 005117d1  d94008               fld dword ptr [eax + 8]
// 005117d4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005117dc  d95c2438             fstp dword ptr [esp + 0x38]
// 005117e0  c744242404000000     mov dword ptr [esp + 0x24], 4
// 005117e8  d9400c               fld dword ptr [eax + 0xc]
// 005117eb  c744242807000000     mov dword ptr [esp + 0x28], 7
// 005117f3  d95c243c             fstp dword ptr [esp + 0x3c]
// 005117f7  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 005117ff  d94010               fld dword ptr [eax + 0x10]
// 00511802  8d442420             lea eax, [esp + 0x20]
// 00511806  d95c2440             fstp dword ptr [esp + 0x40]
// 0051180a  50                   push eax
// 0051180b  e8b0fbffff           call 0x5113c0
// 00511810  d9ee                 fldz 
// 00511812  f60550f0960001       test byte ptr [0x96f050], 1
// 00511819  7519                 jne 0x511834
// 0051181b  830d50f0960001       or dword ptr [0x96f050], 1
// 00511822  d91544f09600         fst dword ptr [0x96f044]
// 00511828  d91548f09600         fst dword ptr [0x96f048]
// 0051182e  d9154cf09600         fst dword ptr [0x96f04c]
// 00511834  8b4604               mov eax, dword ptr [esi + 4]
// 00511837  8b16                 mov edx, dword ptr [esi]
// 00511839  8d0cc0               lea ecx, [eax + eax*8]
// 0051183c  d9448af8             fld dword ptr [edx + ecx*4 - 8]
// 00511840  8bca                 mov ecx, edx
// 00511842  8d04c0               lea eax, [eax + eax*8]
// 00511845  d94481f0             fld dword ptr [ecx + eax*4 - 0x10]
// 00511849  6844f09600           push 0x96f044
// 0051184e  d9e0                 fchs 
// 00511850  8d542410             lea edx, [esp + 0x10]
// 00511854  d95c2410             fstp dword ptr [esp + 0x10]
// 00511858  52                   push edx
// 00511859  d9c9                 fxch st(1)
// 0051185b  8d4c2458             lea ecx, [esp + 0x58]
// 0051185f  d95c2418             fstp dword ptr [esp + 0x18]
// 00511863  d95c241c             fstp dword ptr [esp + 0x1c]
// 00511867  e874410100           call 0x5259e0
// 0051186c  d94004               fld dword ptr [eax + 4]
// 0051186f  8bce                 mov ecx, esi
// 00511871  d95c2434             fstp dword ptr [esp + 0x34]
// 00511875  c744242005000000     mov dword ptr [esp + 0x20], 5
// 0051187d  d94008               fld dword ptr [eax + 8]
// 00511880  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00511888  d95c2438             fstp dword ptr [esp + 0x38]
// 0051188c  c744242802000000     mov dword ptr [esp + 0x28], 2
// 00511894  d9400c               fld dword ptr [eax + 0xc]
// 00511897  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 0051189f  d95c243c             fstp dword ptr [esp + 0x3c]
// 005118a3  d94010               fld dword ptr [eax + 0x10]
// 005118a6  8d442420             lea eax, [esp + 0x20]
// 005118aa  50                   push eax
// 005118ab  d95c2444             fstp dword ptr [esp + 0x44]
// 005118af  e80cfbffff           call 0x5113c0
// 005118b4  d9ee                 fldz 
// 005118b6  f60550f0960001       test byte ptr [0x96f050], 1
// 005118bd  7519                 jne 0x5118d8
// 005118bf  830d50f0960001       or dword ptr [0x96f050], 1
// 005118c6  d91544f09600         fst dword ptr [0x96f044]
// 005118cc  d91548f09600         fst dword ptr [0x96f048]
// 005118d2  d9154cf09600         fst dword ptr [0x96f04c]
// 005118d8  d95c240c             fstp dword ptr [esp + 0xc]
// 005118dc  6844f09600           push 0x96f044
// 005118e1  d94704               fld dword ptr [edi + 4]
// 005118e4  8d4c2410             lea ecx, [esp + 0x10]
// 005118e8  d80dac9b8100         fmul dword ptr [0x819bac]
// 005118ee  51                   push ecx
// 005118ef  8d4c2458             lea ecx, [esp + 0x58]
// 005118f3  d9c0                 fld st(0)
// 005118f5  d9ff                 fcos 
// 005118f7  d9e0                 fchs 
// 005118f9  d95c2418             fstp dword ptr [esp + 0x18]
// 005118fd  d9fe                 fsin 
// 005118ff  d9e0                 fchs 
// 00511901  d95c241c             fstp dword ptr [esp + 0x1c]
// 00511905  e8d6400100           call 0x5259e0
// 0051190a  d94004               fld dword ptr [eax + 4]
// 0051190d  d95c2434             fstp dword ptr [esp + 0x34]
// 00511911  8d542420             lea edx, [esp + 0x20]
// 00511915  d94008               fld dword ptr [eax + 8]
// 00511918  52                   push edx
// 00511919  d95c243c             fstp dword ptr [esp + 0x3c]
// 0051191d  8bce                 mov ecx, esi
// 0051191f  d9400c               fld dword ptr [eax + 0xc]
// 00511922  c744242401000000     mov dword ptr [esp + 0x24], 1
// 0051192a  d95c2440             fstp dword ptr [esp + 0x40]
// 0051192e  c744242805000000     mov dword ptr [esp + 0x28], 5
// 00511936  d94010               fld dword ptr [eax + 0x10]
// 00511939  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00511941  d95c2444             fstp dword ptr [esp + 0x44]
// 00511945  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0051194d  e86efaffff           call 0x5113c0
// 00511952  d9ee                 fldz 
// 00511954  f60550f0960001       test byte ptr [0x96f050], 1
// 0051195b  7519                 jne 0x511976
// 0051195d  830d50f0960001       or dword ptr [0x96f050], 1
// 00511964  d91544f09600         fst dword ptr [0x96f044]
// 0051196a  d91548f09600         fst dword ptr [0x96f048]
// 00511970  d9154cf09600         fst dword ptr [0x96f04c]
// 00511976  8b4604               mov eax, dword ptr [esi + 4]
// 00511979  8b0e                 mov ecx, dword ptr [esi]
// 0051197b  8d04c0               lea eax, [eax + eax*8]
// 0051197e  d94481f4             fld dword ptr [ecx + eax*4 - 0xc]
// 00511982  8b4604               mov eax, dword ptr [esi + 4]
// 00511985  d9e0                 fchs 
// 00511987  8d14c0               lea edx, [eax + eax*8]
// 0051198a  8bc1                 mov eax, ecx
// 0051198c  d94490f8             fld dword ptr [eax + edx*4 - 8]
// 00511990  6844f09600           push 0x96f044
// 00511995  d9ca                 fxch st(2)
// 00511997  8d4c2410             lea ecx, [esp + 0x10]
// 0051199b  d95c2410             fstp dword ptr [esp + 0x10]
// 0051199f  51                   push ecx
// 005119a0  8d4c2458             lea ecx, [esp + 0x58]
// 005119a4  d95c2418             fstp dword ptr [esp + 0x18]
// 005119a8  d95c241c             fstp dword ptr [esp + 0x1c]
// 005119ac  e82f400100           call 0x5259e0
// 005119b1  d94004               fld dword ptr [eax + 4]
// 005119b4  8d542420             lea edx, [esp + 0x20]
// 005119b8  d95c2434             fstp dword ptr [esp + 0x34]
// 005119bc  52                   push edx
// 005119bd  d94008               fld dword ptr [eax + 8]
// 005119c0  8bce                 mov ecx, esi
// 005119c2  d95c243c             fstp dword ptr [esp + 0x3c]
// 005119c6  c744242402000000     mov dword ptr [esp + 0x24], 2
// 005119ce  d9400c               fld dword ptr [eax + 0xc]
// 005119d1  c744242803000000     mov dword ptr [esp + 0x28], 3
// 005119d9  d95c2440             fstp dword ptr [esp + 0x40]
// 005119dd  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 005119e5  d94010               fld dword ptr [eax + 0x10]
// 005119e8  c744243006000000     mov dword ptr [esp + 0x30], 6
// 005119f0  d95c2444             fstp dword ptr [esp + 0x44]
// 005119f4  e8c7f9ffff           call 0x5113c0
// 005119f9  f60520f0960001       test byte ptr [0x96f020], 1
// 00511a00  7514                 jne 0x511a16
// 00511a02  a1ac248000           mov eax, dword ptr [0x8024ac]
// 00511a07  830d20f0960001       or dword ptr [0x96f020], 1
// 00511a0e  dd00                 fld qword ptr [eax]
// 00511a10  dd1d18f09600         fstp qword ptr [0x96f018]
// 00511a16  d94710               fld dword ptr [edi + 0x10]
// 00511a19  dc1d18f09600         fcomp qword ptr [0x96f018]
// 00511a1f  dfe0                 fnstsw ax
// 00511a21  f6c405               test ah, 5
// 00511a24  7a7c                 jp 0x511aa2
// 00511a26  d9ee                 fldz 
// 00511a28  8d4c240c             lea ecx, [esp + 0xc]
// 00511a2c  d954240c             fst dword ptr [esp + 0xc]
// 00511a30  51                   push ecx
// 00511a31  d9542414             fst dword ptr [esp + 0x14]
// 00511a35  8d542448             lea edx, [esp + 0x48]
// 00511a39  d94710               fld dword ptr [edi + 0x10]
// 00511a3c  52                   push edx
// 00511a3d  d9e0                 fchs 
// 00511a3f  8d4c2458             lea ecx, [esp + 0x58]
// 00511a43  d95c241c             fstp dword ptr [esp + 0x1c]
// 00511a47  d954244c             fst dword ptr [esp + 0x4c]
// 00511a4b  d95c2450             fstp dword ptr [esp + 0x50]
// 00511a4f  d9e8                 fld1 
// 00511a51  d95c2454             fstp dword ptr [esp + 0x54]
// 00511a55  e8863f0100           call 0x5259e0
// 00511a5a  d94004               fld dword ptr [eax + 4]
// 00511a5d  d95c2434             fstp dword ptr [esp + 0x34]
// 00511a61  8bce                 mov ecx, esi
// 00511a63  d94008               fld dword ptr [eax + 8]
// 00511a66  c744242004000000     mov dword ptr [esp + 0x20], 4
// 00511a6e  d95c2438             fstp dword ptr [esp + 0x38]
// 00511a72  c744242405000000     mov dword ptr [esp + 0x24], 5
// 00511a7a  d9400c               fld dword ptr [eax + 0xc]
// 00511a7d  c744242806000000     mov dword ptr [esp + 0x28], 6
// 00511a85  d95c243c             fstp dword ptr [esp + 0x3c]
// 00511a89  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 00511a91  d94010               fld dword ptr [eax + 0x10]
// 00511a94  8d442420             lea eax, [esp + 0x20]
// 00511a98  d95c2440             fstp dword ptr [esp + 0x40]
// 00511a9c  50                   push eax
// 00511a9d  e81ef9ffff           call 0x5113c0
// 00511aa2  33c0                 xor eax, eax
// 00511aa4  394304               cmp dword ptr [ebx + 4], eax
// 00511aa7  8944241c             mov dword ptr [esp + 0x1c], eax
// 00511aab  7e4b                 jle 0x511af8
// 00511aad  89442418             mov dword ptr [esp + 0x18], eax
// 00511ab1  8b0b                 mov ecx, dword ptr [ebx]
// 00511ab3  8b542418             mov edx, dword ptr [esp + 0x18]
// 00511ab7  8d1c0a               lea ebx, [edx + ecx]
// 00511aba  53                   push ebx
// 00511abb  8d442454             lea eax, [esp + 0x54]
// 00511abf  50                   push eax
// 00511ac0  8d4f14               lea ecx, [edi + 0x14]
// 00511ac3  e8c838f7ff           call 0x485390
// 00511ac8  d900                 fld dword ptr [eax]
// 00511aca  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00511acd  d91b                 fstp dword ptr [ebx]
// 00511acf  d94004               fld dword ptr [eax + 4]
// 00511ad2  8344241810           add dword ptr [esp + 0x18], 0x10
// 00511ad7  d95b04               fstp dword ptr [ebx + 4]
// 00511ada  d94008               fld dword ptr [eax + 8]
// 00511add  d95b08               fstp dword ptr [ebx + 8]
// 00511ae0  d9400c               fld dword ptr [eax + 0xc]
// 00511ae3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00511ae7  40                   inc eax
// 00511ae8  d95b0c               fstp dword ptr [ebx + 0xc]
// 00511aeb  3b4104               cmp eax, dword ptr [ecx + 4]
// 00511aee  8944241c             mov dword ptr [esp + 0x1c], eax
// 00511af2  8bd9                 mov ebx, ecx
// 00511af4  7cbb                 jl 0x511ab1
// 00511af6  33c0                 xor eax, eax
// 00511af8  394310               cmp dword ptr [ebx + 0x10], eax
// 00511afb  8944241c             mov dword ptr [esp + 0x1c], eax
// 00511aff  0f8e5b010000         jle 0x511c60
// 00511b05  33db                 xor ebx, ebx
// 00511b07  d9ee                 fldz 
// 00511b09  8b0e                 mov ecx, dword ptr [esi]
// 00511b0b  8d542418             lea edx, [esp + 0x18]
// 00511b0f  d954240c             fst dword ptr [esp + 0xc]
// 00511b13  52                   push edx
// 00511b14  d9542414             fst dword ptr [esp + 0x14]
// 00511b18  8d442410             lea eax, [esp + 0x10]
// 00511b1c  d95c2418             fstp dword ptr [esp + 0x18]
// 00511b20  50                   push eax
// 00511b21  8d4c0b10             lea ecx, [ebx + ecx + 0x10]
// 00511b25  e8a63f0100           call 0x525ad0
// 00511b2a  d94714               fld dword ptr [edi + 0x14]
// 00511b2d  d944240c             fld dword ptr [esp + 0xc]
// 00511b31  83ec08               sub esp, 8
// 00511b34  dcc9                 fmul st(1), st(0)
// 00511b36  d944241c             fld dword ptr [esp + 0x1c]
// 00511b3a  d9c0                 fld st(0)
// 00511b3c  d84f1c               fmul dword ptr [edi + 0x1c]
// 00511b3f  dec3                 faddp st(3)
// 00511b41  d9442418             fld dword ptr [esp + 0x18]
// 00511b45  d9c0                 fld st(0)
// 00511b47  d84f18               fmul dword ptr [edi + 0x18]
// 00511b4a  dec4                 faddp st(4)
// 00511b4c  d9cb                 fxch st(3)
// 00511b4e  d95c244c             fstp dword ptr [esp + 0x4c]
// 00511b52  d94728               fld dword ptr [edi + 0x28]
// 00511b55  d8c9                 fmul st(1)
// 00511b57  d94720               fld dword ptr [edi + 0x20]
// 00511b5a  d8cb                 fmul st(3)
// 00511b5c  dec1                 faddp st(1)
// 00511b5e  d94724               fld dword ptr [edi + 0x24]
// 00511b61  d8cc                 fmul st(4)
// 00511b63  dec1                 faddp st(1)
// 00511b65  d95c2450             fstp dword ptr [esp + 0x50]
// 00511b69  d84f34               fmul dword ptr [edi + 0x34]
// 00511b6c  d9ca                 fxch st(2)
// 00511b6e  d84f30               fmul dword ptr [edi + 0x30]
// 00511b71  dec2                 faddp st(2)
// 00511b73  d84f2c               fmul dword ptr [edi + 0x2c]
// 00511b76  dec1                 faddp st(1)
// 00511b78  d95c2454             fstp dword ptr [esp + 0x54]
// 00511b7c  d9442420             fld dword ptr [esp + 0x20]
// 00511b80  dd1c24               fstp qword ptr [esp]
// 00511b83  e8b83df9ff           call 0x4a5940
// 00511b88  d9442420             fld dword ptr [esp + 0x20]
// 00511b8c  83c408               add esp, 8
// 00511b8f  84c0                 test al, al
// 00511b91  7468                 je 0x511bfb
// 00511b93  d9e0                 fchs 
// 00511b95  8d542464             lea edx, [esp + 0x64]
// 00511b99  d9c0                 fld st(0)
// 00511b9b  52                   push edx
// 00511b9c  d9442448             fld dword ptr [esp + 0x48]
// 00511ba0  8d442448             lea eax, [esp + 0x48]
// 00511ba4  dcc9                 fmul st(1), st(0)
// 00511ba6  50                   push eax
// 00511ba7  d9c2                 fld st(2)
// 00511ba9  8d4c2458             lea ecx, [esp + 0x58]
// 00511bad  d9442450             fld dword ptr [esp + 0x50]
// 00511bb1  dcc9                 fmul st(1), st(0)
// 00511bb3  d9442454             fld dword ptr [esp + 0x54]
// 00511bb7  dccd                 fmul st(5), st(0)
// 00511bb9  d9cc                 fxch st(4)
// 00511bbb  d84738               fadd dword ptr [edi + 0x38]
// 00511bbe  d9473c               fld dword ptr [edi + 0x3c]
// 00511bc1  dec3                 faddp st(3)
// 00511bc3  d94740               fld dword ptr [edi + 0x40]
// 00511bc6  dec6                 faddp st(6)
// 00511bc8  d9ca                 fxch st(2)
// 00511bca  d8c9                 fmul st(1)
// 00511bcc  d9cd                 fxch st(5)
// 00511bce  d8cc                 fmul st(4)
// 00511bd0  dec5                 faddp st(5)
// 00511bd2  d9c9                 fxch st(1)
// 00511bd4  d8ca                 fmul st(2)
// 00511bd6  dec4                 faddp st(4)
// 00511bd8  d9cb                 fxch st(3)
// 00511bda  d9542420             fst dword ptr [esp + 0x20]
// 00511bde  dcc9                 fmul st(1), st(0)
// 00511be0  d9c9                 fxch st(1)
// 00511be2  d95c246c             fstp dword ptr [esp + 0x6c]
// 00511be6  dcca                 fmul st(2), st(0)
// 00511be8  d9ca                 fxch st(2)
// 00511bea  d95c2470             fstp dword ptr [esp + 0x70]
// 00511bee  dec9                 fmulp st(1)
// 00511bf0  d95c2474             fstp dword ptr [esp + 0x74]
// 00511bf4  e8e73d0100           call 0x5259e0
// 00511bf9  eb2e                 jmp 0x511c29
// 00511bfb  83ec10               sub esp, 0x10
// 00511bfe  d95c240c             fstp dword ptr [esp + 0xc]
// 00511c02  8d9424bc000000       lea edx, [esp + 0xbc]
// 00511c09  d944245c             fld dword ptr [esp + 0x5c]
// 00511c0d  d95c2408             fstp dword ptr [esp + 8]
// 00511c11  d9442458             fld dword ptr [esp + 0x58]
// 00511c15  d95c2404             fstp dword ptr [esp + 4]
// 00511c19  d9442454             fld dword ptr [esp + 0x54]
// 00511c1d  d91c24               fstp dword ptr [esp]
// 00511c20  52                   push edx
// 00511c21  e82a3e0100           call 0x525a50
// 00511c26  83c414               add esp, 0x14
// 00511c29  8b0e                 mov ecx, dword ptr [esi]
// 00511c2b  d94004               fld dword ptr [eax + 4]
// 00511c2e  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00511c31  d95c0b14             fstp dword ptr [ebx + ecx + 0x14]
// 00511c35  d94008               fld dword ptr [eax + 8]
// 00511c38  8d4c0b10             lea ecx, [ebx + ecx + 0x10]
// 00511c3c  d95908               fstp dword ptr [ecx + 8]
// 00511c3f  83c324               add ebx, 0x24
// 00511c42  d9400c               fld dword ptr [eax + 0xc]
// 00511c45  d9590c               fstp dword ptr [ecx + 0xc]
// 00511c48  d94010               fld dword ptr [eax + 0x10]
// 00511c4b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00511c4f  40                   inc eax
// 00511c50  d95910               fstp dword ptr [ecx + 0x10]
// 00511c53  3b4210               cmp eax, dword ptr [edx + 0x10]
// 00511c56  8944241c             mov dword ptr [esp + 0x1c], eax
// 00511c5a  0f8ca7feffff         jl 0x511b07
// 00511c60  8b8c24f4000000       mov ecx, dword ptr [esp + 0xf4]
// 00511c67  5f                   pop edi
// 00511c68  5e                   pop esi
// 00511c69  64890d00000000       mov dword ptr fs:[0], ecx
// 00511c70  5b                   pop ebx
// 00511c71  8be5                 mov esp, ebp
// 00511c73  5d                   pop ebp
// 00511c74  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GCamera.cpp (function ?getFrustum@GCamera@G3D@@QBEXABVRect2D@2@AAVFrustum@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GCamera.cpp
