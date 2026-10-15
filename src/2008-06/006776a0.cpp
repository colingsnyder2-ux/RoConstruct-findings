// roc 2008-06 006776a0  unit: RBX::AdornG3D  size: 1142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006776a0
//
// 006776a0  6aff                 push -1
// 006776a2  6866d07d00           push 0x7dd066
// 006776a7  64a100000000         mov eax, dword ptr fs:[0]
// 006776ad  50                   push eax
// 006776ae  64892500000000       mov dword ptr fs:[0], esp
// 006776b5  81ec04010000         sub esp, 0x104
// 006776bb  8b842414010000       mov eax, dword ptr [esp + 0x114]
// 006776c2  d900                 fld dword ptr [eax]
// 006776c4  53                   push ebx
// 006776c5  d905ac9b8100         fld dword ptr [0x819bac]
// 006776cb  55                   push ebp
// 006776cc  dcc9                 fmul st(1), st(0)
// 006776ce  56                   push esi
// 006776cf  d94004               fld dword ptr [eax + 4]
// 006776d2  8bb42424010000       mov esi, dword ptr [esp + 0x124]
// 006776d9  57                   push edi
// 006776da  8bbc242c010000       mov edi, dword ptr [esp + 0x12c]
// 006776e1  d8c9                 fmul st(1)
// 006776e3  d94008               fld dword ptr [eax + 8]
// 006776e6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006776ee  deca                 fmulp st(2)
// 006776f0  d9ca                 fxch st(2)
// 006776f2  d95c2440             fstp dword ptr [esp + 0x40]
// 006776f6  d9c9                 fxch st(1)
// 006776f8  d95c2444             fstp dword ptr [esp + 0x44]
// 006776fc  d95c2448             fstp dword ptr [esp + 0x48]
// 00677700  d9e8                 fld1 
// 00677702  d9ee                 fldz 
// 00677704  db442414             fild dword ptr [esp + 0x14]
// 00677708  d8da                 fcomp st(2)
// 0067770a  dfe0                 fnstsw ax
// 0067770c  f6c405               test ah, 5
// 0067770f  7a10                 jp 0x677721
// 00677711  ddd9                 fstp st(1)
// 00677713  33ed                 xor ebp, ebp
// 00677715  d905b8c38100         fld dword ptr [0x81c3b8]
// 0067771b  d9542418             fst dword ptr [esp + 0x18]
// 0067771f  eb15                 jmp 0x677736
// 00677721  d9c9                 fxch st(1)
// 00677723  33ed                 xor ebp, ebp
// 00677725  d9542418             fst dword ptr [esp + 0x18]
// 00677729  eb0b                 jmp 0x677736
// 0067772b  eb03                 jmp 0x677730
// 0067772d  8d4900               lea ecx, [ecx]
// 00677730  d9ee                 fldz 
// 00677732  d9442418             fld dword ptr [esp + 0x18]
// 00677736  8b842430010000       mov eax, dword ptr [esp + 0x130]
// 0067773d  83e800               sub eax, 0
// 00677740  bb01000000           mov ebx, 1
// 00677745  0f84cf010000         je 0x67791a
// 0067774b  2bc3                 sub eax, ebx
// 0067774d  0f84b5000000         je 0x677808
// 00677753  83e802               sub eax, 2
// 00677756  0f84be010000         je 0x67791a
// 0067775c  d9c9                 fxch st(1)
// 0067775e  d954241c             fst dword ptr [esp + 0x1c]
// 00677762  d9542420             fst dword ptr [esp + 0x20]
// 00677766  d95c2424             fstp dword ptr [esp + 0x24]
// 0067776a  d9442c40             fld dword ptr [esp + ebp + 0x40]
// 0067776e  d8056c6e8200         fadd dword ptr [0x826e6c]
// 00677774  dec9                 fmulp st(1)
// 00677776  d95c2c1c             fstp dword ptr [esp + ebp + 0x1c]
// 0067777a  d94624               fld dword ptr [esi + 0x24]
// 0067777d  d844241c             fadd dword ptr [esp + 0x1c]
// 00677781  d95c244c             fstp dword ptr [esp + 0x4c]
// 00677785  d94628               fld dword ptr [esi + 0x28]
// 00677788  d8442420             fadd dword ptr [esp + 0x20]
// 0067778c  d95c2450             fstp dword ptr [esp + 0x50]
// 00677790  d9462c               fld dword ptr [esi + 0x2c]
// 00677793  d8442424             fadd dword ptr [esp + 0x24]
// 00677797  d95c2454             fstp dword ptr [esp + 0x54]
// 0067779b  e880c6e9ff           call 0x513e20
// 006777a0  50                   push eax
// 006777a1  8d8c24b8000000       lea ecx, [esp + 0xb8]
// 006777a8  e873bae9ff           call 0x513220
// 006777ad  d944244c             fld dword ptr [esp + 0x4c]
// 006777b1  8b07                 mov eax, dword ptr [edi]
// 006777b3  d99c24d8000000       fstp dword ptr [esp + 0xd8]
// 006777ba  d9442450             fld dword ptr [esp + 0x50]
// 006777be  8b5038               mov edx, dword ptr [eax + 0x38]
// 006777c1  d99c24dc000000       fstp dword ptr [esp + 0xdc]
// 006777c8  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 006777cf  d9442454             fld dword ptr [esp + 0x54]
// 006777d3  51                   push ecx
// 006777d4  8bcf                 mov ecx, edi
// 006777d6  d99c24e4000000       fstp dword ptr [esp + 0xe4]
// 006777dd  ffd2                 call edx
// 006777df  e8ccd0e9ff           call 0x5148b0
// 006777e4  d905ac9b8100         fld dword ptr [0x819bac]
// 006777ea  50                   push eax
// 006777eb  83ec08               sub esp, 8
// 006777ee  d95c2404             fstp dword ptr [esp + 4]
// 006777f2  d9e8                 fld1 
// 006777f4  d91c24               fstp dword ptr [esp]
// 006777f7  6a00                 push 0
// 006777f9  56                   push esi
// 006777fa  57                   push edi
// 006777fb  e8f0fbffff           call 0x6773f0
// 00677800  83c418               add esp, 0x18
// 00677803  e9d7020000           jmp 0x677adf
// 00677808  ddd9                 fstp st(1)
// 0067780a  8d8c2498000000       lea ecx, [esp + 0x98]
// 00677811  ddd8                 fstp st(0)
// 00677813  e81892e9ff           call 0x510a30
// 00677818  d9442c40             fld dword ptr [esp + ebp + 0x40]
// 0067781c  d9442418             fld dword ptr [esp + 0x18]
// 00677820  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00677827  dcc9                 fmul st(1), st(0)
// 00677829  8d442458             lea eax, [esp + 0x58]
// 0067782d  d9c9                 fxch st(1)
// 0067782f  50                   push eax
// 00677830  51                   push ecx
// 00677831  d99c2ca4000000       fstp dword ptr [esp + ebp + 0xa4]
// 00677838  899c2424010000       mov dword ptr [esp + 0x124], ebx
// 0067783f  d80dc4888200         fmul dword ptr [0x8288c4]
// 00677845  d99c2cb0000000       fstp dword ptr [esp + ebp + 0xb0]
// 0067784c  d94604               fld dword ptr [esi + 4]
// 0067784f  d98424a8000000       fld dword ptr [esp + 0xa8]
// 00677856  dcc9                 fmul st(1), st(0)
// 00677858  d94608               fld dword ptr [esi + 8]
// 0067785b  d98424ac000000       fld dword ptr [esp + 0xac]
// 00677862  dcc9                 fmul st(1), st(0)
// 00677864  d9cb                 fxch st(3)
// 00677866  dec1                 faddp st(1)
// 00677868  d906                 fld dword ptr [esi]
// 0067786a  d98424a4000000       fld dword ptr [esp + 0xa4]
// 00677871  dcc9                 fmul st(1), st(0)
// 00677873  d9ca                 fxch st(2)
// 00677875  dec1                 faddp st(1)
// 00677877  d84624               fadd dword ptr [esi + 0x24]
// 0067787a  d9460c               fld dword ptr [esi + 0xc]
// 0067787d  d8ca                 fmul st(2)
// 0067787f  d94610               fld dword ptr [esi + 0x10]
// 00677882  d8cc                 fmul st(4)
// 00677884  dec1                 faddp st(1)
// 00677886  d94614               fld dword ptr [esi + 0x14]
// 00677889  d8cd                 fmul st(5)
// 0067788b  dec1                 faddp st(1)
// 0067788d  d84628               fadd dword ptr [esi + 0x28]
// 00677890  d94618               fld dword ptr [esi + 0x18]
// 00677893  decb                 fmulp st(3)
// 00677895  d9461c               fld dword ptr [esi + 0x1c]
// 00677898  decc                 fmulp st(4)
// 0067789a  d9ca                 fxch st(2)
// 0067789c  dec3                 faddp st(3)
// 0067789e  d94620               fld dword ptr [esi + 0x20]
// 006778a1  decc                 fmulp st(4)
// 006778a3  d9ca                 fxch st(2)
// 006778a5  dec3                 faddp st(3)
// 006778a7  d9ca                 fxch st(2)
// 006778a9  d8462c               fadd dword ptr [esi + 0x2c]
// 006778ac  d9c9                 fxch st(1)
// 006778ae  d95c2460             fstp dword ptr [esp + 0x60]
// 006778b2  d9c9                 fxch st(1)
// 006778b4  d95c2464             fstp dword ptr [esp + 0x64]
// 006778b8  d95c2468             fstp dword ptr [esp + 0x68]
// 006778bc  e87ff8ffff           call 0x677140
// 006778c1  d80d6c6e8200         fmul dword ptr [0x826e6c]
// 006778c7  8b17                 mov edx, dword ptr [edi]
// 006778c9  8b4238               mov eax, dword ptr [edx + 0x38]
// 006778cc  83c408               add esp, 8
// 006778cf  56                   push esi
// 006778d0  d95c2414             fstp dword ptr [esp + 0x14]
// 006778d4  8bcf                 mov ecx, edi
// 006778d6  ffd0                 call eax
// 006778d8  e8d3d0e9ff           call 0x5149b0
// 006778dd  d900                 fld dword ptr [eax]
// 006778df  8b17                 mov edx, dword ptr [edi]
// 006778e1  d95c2474             fstp dword ptr [esp + 0x74]
// 006778e5  d94004               fld dword ptr [eax + 4]
// 006778e8  51                   push ecx
// 006778e9  d95c247c             fstp dword ptr [esp + 0x7c]
// 006778ed  8d8c249c000000       lea ecx, [esp + 0x9c]
// 006778f4  d94008               fld dword ptr [eax + 8]
// 006778f7  8d442478             lea eax, [esp + 0x78]
// 006778fb  d99c2480000000       fstp dword ptr [esp + 0x80]
// 00677902  d9e8                 fld1 
// 00677904  d99c2484000000       fstp dword ptr [esp + 0x84]
// 0067790b  d9442414             fld dword ptr [esp + 0x14]
// 0067790f  d91c24               fstp dword ptr [esp]
// 00677912  8b5254               mov edx, dword ptr [edx + 0x54]
// 00677915  e9b4010000           jmp 0x677ace
// 0067791a  d9c9                 fxch st(1)
// 0067791c  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00677923  d9542428             fst dword ptr [esp + 0x28]
// 00677927  8d442434             lea eax, [esp + 0x34]
// 0067792b  d954242c             fst dword ptr [esp + 0x2c]
// 0067792f  50                   push eax
// 00677930  d95c2434             fstp dword ptr [esp + 0x34]
// 00677934  51                   push ecx
// 00677935  d9442c48             fld dword ptr [esp + ebp + 0x48]
// 00677939  d80580e38100         fadd dword ptr [0x81e380]
// 0067793f  dec9                 fmulp st(1)
// 00677941  d95c2c30             fstp dword ptr [esp + ebp + 0x30]
// 00677945  d94608               fld dword ptr [esi + 8]
// 00677948  d9442438             fld dword ptr [esp + 0x38]
// 0067794c  dcc9                 fmul st(1), st(0)
// 0067794e  d94604               fld dword ptr [esi + 4]
// 00677951  d9442434             fld dword ptr [esp + 0x34]
// 00677955  dcc9                 fmul st(1), st(0)
// 00677957  d9cb                 fxch st(3)
// 00677959  dec1                 faddp st(1)
// 0067795b  d906                 fld dword ptr [esi]
// 0067795d  d9442430             fld dword ptr [esp + 0x30]
// 00677961  dcc9                 fmul st(1), st(0)
// 00677963  d9ca                 fxch st(2)
// 00677965  dec1                 faddp st(1)
// 00677967  d84624               fadd dword ptr [esi + 0x24]
// 0067796a  d94614               fld dword ptr [esi + 0x14]
// 0067796d  d8cb                 fmul st(3)
// 0067796f  d94610               fld dword ptr [esi + 0x10]
// 00677972  d8cd                 fmul st(5)
// 00677974  dec1                 faddp st(1)
// 00677976  d9460c               fld dword ptr [esi + 0xc]
// 00677979  d8cb                 fmul st(3)
// 0067797b  dec1                 faddp st(1)
// 0067797d  d84628               fadd dword ptr [esi + 0x28]
// 00677980  d94620               fld dword ptr [esi + 0x20]
// 00677983  decc                 fmulp st(4)
// 00677985  d9461c               fld dword ptr [esi + 0x1c]
// 00677988  decd                 fmulp st(5)
// 0067798a  d9cb                 fxch st(3)
// 0067798c  dec4                 faddp st(4)
// 0067798e  d94618               fld dword ptr [esi + 0x18]
// 00677991  deca                 fmulp st(2)
// 00677993  d9cb                 fxch st(3)
// 00677995  dec1                 faddp st(1)
// 00677997  d8462c               fadd dword ptr [esi + 0x2c]
// 0067799a  d9ca                 fxch st(2)
// 0067799c  d95c243c             fstp dword ptr [esp + 0x3c]
// 006779a0  d95c2440             fstp dword ptr [esp + 0x40]
// 006779a4  d95c2444             fstp dword ptr [esp + 0x44]
// 006779a8  e893f7ffff           call 0x677140
// 006779ad  83c408               add esp, 8
// 006779b0  d95c2410             fstp dword ptr [esp + 0x10]
// 006779b4  e867c4e9ff           call 0x513e20
// 006779b9  50                   push eax
// 006779ba  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 006779c1  e85ab8e9ff           call 0x513220
// 006779c6  d9442434             fld dword ptr [esp + 0x34]
// 006779ca  8b17                 mov edx, dword ptr [edi]
// 006779cc  d99c2408010000       fstp dword ptr [esp + 0x108]
// 006779d3  d9442438             fld dword ptr [esp + 0x38]
// 006779d7  8b5238               mov edx, dword ptr [edx + 0x38]
// 006779da  d99c240c010000       fstp dword ptr [esp + 0x10c]
// 006779e1  8d8424e4000000       lea eax, [esp + 0xe4]
// 006779e8  d944243c             fld dword ptr [esp + 0x3c]
// 006779ec  50                   push eax
// 006779ed  8bcf                 mov ecx, edi
// 006779ef  d99c2414010000       fstp dword ptr [esp + 0x114]
// 006779f6  ffd2                 call edx
// 006779f8  f605b4d5970001       test byte ptr [0x97d5b4], 1
// 006779ff  7526                 jne 0x677a27
// 00677a01  d90504e78100         fld dword ptr [0x81e704]
// 00677a07  091db4d59700         or dword ptr [0x97d5b4], ebx
// 00677a0d  d91da8d59700         fstp dword ptr [0x97d5a8]
// 00677a13  d90538f88200         fld dword ptr [0x82f838]
// 00677a19  d91dacd59700         fstp dword ptr [0x97d5ac]
// 00677a1f  d9e8                 fld1 
// 00677a21  d91db0d59700         fstp dword ptr [0x97d5b0]
// 00677a27  f60550f0960001       test byte ptr [0x96f050], 1
// 00677a2e  d905a8d59700         fld dword ptr [0x97d5a8]
// 00677a34  d95c2464             fstp dword ptr [esp + 0x64]
// 00677a38  d905acd59700         fld dword ptr [0x97d5ac]
// 00677a3e  d95c2468             fstp dword ptr [esp + 0x68]
// 00677a42  d905b0d59700         fld dword ptr [0x97d5b0]
// 00677a48  d95c246c             fstp dword ptr [esp + 0x6c]
// 00677a4c  d9e8                 fld1 
// 00677a4e  d95c2470             fstp dword ptr [esp + 0x70]
// 00677a52  751a                 jne 0x677a6e
// 00677a54  d9ee                 fldz 
// 00677a56  091d50f09600         or dword ptr [0x96f050], ebx
// 00677a5c  d91544f09600         fst dword ptr [0x96f044]
// 00677a62  d91548f09600         fst dword ptr [0x96f048]
// 00677a68  d91d4cf09600         fstp dword ptr [0x96f04c]
// 00677a6e  d90544f09600         fld dword ptr [0x96f044]
// 00677a74  c784248400000004748200 mov dword ptr [esp + 0x84], 0x827404
// 00677a7f  d99c2488000000       fstp dword ptr [esp + 0x88]
// 00677a86  d90548f09600         fld dword ptr [0x96f048]
// 00677a8c  d99c248c000000       fstp dword ptr [esp + 0x8c]
// 00677a93  d9054cf09600         fld dword ptr [0x96f04c]
// 00677a99  d99c2490000000       fstp dword ptr [esp + 0x90]
// 00677aa0  d9442410             fld dword ptr [esp + 0x10]
// 00677aa4  d99c2494000000       fstp dword ptr [esp + 0x94]
// 00677aab  8b1f                 mov ebx, dword ptr [edi]
// 00677aad  c784241c01000000000000 mov dword ptr [esp + 0x11c], 0
// 00677ab8  83c344               add ebx, 0x44
// 00677abb  e850341400           call 0x7baf10
// 00677ac0  8b13                 mov edx, dword ptr [ebx]
// 00677ac2  50                   push eax
// 00677ac3  8d442468             lea eax, [esp + 0x68]
// 00677ac7  8d8c2488000000       lea ecx, [esp + 0x88]
// 00677ace  50                   push eax
// 00677acf  51                   push ecx
// 00677ad0  8bcf                 mov ecx, edi
// 00677ad2  ffd2                 call edx
// 00677ad4  c784241c010000ffffffff mov dword ptr [esp + 0x11c], 0xffffffff
// 00677adf  83c504               add ebp, 4
// 00677ae2  83fd0c               cmp ebp, 0xc
// 00677ae5  0f8c45fcffff         jl 0x677730
// 00677aeb  8b442414             mov eax, dword ptr [esp + 0x14]
// 00677aef  40                   inc eax
// 00677af0  83f802               cmp eax, 2
// 00677af3  89442414             mov dword ptr [esp + 0x14], eax
// 00677af7  0f8c03fcffff         jl 0x677700
// 00677afd  8b8c2414010000       mov ecx, dword ptr [esp + 0x114]
// 00677b04  5f                   pop edi
// 00677b05  5e                   pop esi
// 00677b06  5d                   pop ebp
// 00677b07  5b                   pop ebx
// 00677b08  64890d00000000       mov dword ptr fs:[0], ecx
// 00677b0f  81c410010000         add esp, 0x110
// 00677b15  c3                   ret 
// library rbxgs/roc_handles3d_410275e979a30584.cpp (function ?handles3d@DrawAdorn@RBX@@SAXABVVector3@G3D@@ABVCoordinateFrame@4@PAVAdorn@2@W4HandleType@2@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_handles3d_410275e979a30584.cpp
