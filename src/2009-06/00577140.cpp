// roc 2009-06 00577140  unit: G3D::LineSegment  size: 586 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577140
//
// 00577140  83ec10               sub esp, 0x10
// 00577143  d90594758b00         fld dword ptr [0x8b7594]
// 00577149  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057714d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00577151  d9c0                 fld st(0)
// 00577153  d9542404             fst dword ptr [esp + 4]
// 00577157  53                   push ebx
// 00577158  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0057715c  d9c1                 fld st(1)
// 0057715e  d954240c             fst dword ptr [esp + 0xc]
// 00577162  c60301               mov byte ptr [ebx], 1
// 00577165  d9ca                 fxch st(2)
// 00577167  55                   push ebp
// 00577168  d9542414             fst dword ptr [esp + 0x14]
// 0057716c  56                   push esi
// 0057716d  d902                 fld dword ptr [edx]
// 0057716f  8b742424             mov esi, dword ptr [esp + 0x24]
// 00577173  d819                 fcomp dword ptr [ecx]
// 00577175  57                   push edi
// 00577176  8d7a0c               lea edi, [edx + 0xc]
// 00577179  dfe0                 fnstsw ax
// 0057717b  f6c441               test ah, 0x41
// 0057717e  7542                 jne 0x5771c2
// 00577180  d902                 fld dword ptr [edx]
// 00577182  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00577186  d95d00               fstp dword ptr [ebp]
// 00577189  c60300               mov byte ptr [ebx], 0
// 0057718c  833e00               cmp dword ptr [esi], 0
// 0057718f  740e                 je 0x57719f
// 00577191  ddd9                 fstp st(1)
// 00577193  d902                 fld dword ptr [edx]
// 00577195  d821                 fsub dword ptr [ecx]
// 00577197  d836                 fdiv dword ptr [esi]
// 00577199  d9542414             fst dword ptr [esp + 0x14]
// 0057719d  d9c9                 fxch st(1)
// 0057719f  d94204               fld dword ptr [edx + 4]
// 005771a2  d85904               fcomp dword ptr [ecx + 4]
// 005771a5  dfe0                 fnstsw ax
// 005771a7  f6c441               test ah, 0x41
// 005771aa  7547                 jne 0x5771f3
// 005771ac  d94204               fld dword ptr [edx + 4]
// 005771af  d95d04               fstp dword ptr [ebp + 4]
// 005771b2  c60300               mov byte ptr [ebx], 0
// 005771b5  837e0400             cmp dword ptr [esi + 4], 0
// 005771b9  7465                 je 0x577220
// 005771bb  ddda                 fstp st(2)
// 005771bd  d94204               fld dword ptr [edx + 4]
// 005771c0  eb52                 jmp 0x577214
// 005771c2  d907                 fld dword ptr [edi]
// 005771c4  d819                 fcomp dword ptr [ecx]
// 005771c6  dfe0                 fnstsw ax
// 005771c8  f6c405               test ah, 5
// 005771cb  7a20                 jp 0x5771ed
// 005771cd  d907                 fld dword ptr [edi]
// 005771cf  8b442430             mov eax, dword ptr [esp + 0x30]
// 005771d3  d918                 fstp dword ptr [eax]
// 005771d5  c60300               mov byte ptr [ebx], 0
// 005771d8  833e00               cmp dword ptr [esi], 0
// 005771db  7410                 je 0x5771ed
// 005771dd  ddd9                 fstp st(1)
// 005771df  8be8                 mov ebp, eax
// 005771e1  d907                 fld dword ptr [edi]
// 005771e3  d821                 fsub dword ptr [ecx]
// 005771e5  d836                 fdiv dword ptr [esi]
// 005771e7  d9542414             fst dword ptr [esp + 0x14]
// 005771eb  ebb0                 jmp 0x57719d
// 005771ed  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005771f1  ebac                 jmp 0x57719f
// 005771f3  d94704               fld dword ptr [edi + 4]
// 005771f6  d85904               fcomp dword ptr [ecx + 4]
// 005771f9  dfe0                 fnstsw ax
// 005771fb  f6c405               test ah, 5
// 005771fe  7a20                 jp 0x577220
// 00577200  d94704               fld dword ptr [edi + 4]
// 00577203  d95d04               fstp dword ptr [ebp + 4]
// 00577206  c60300               mov byte ptr [ebx], 0
// 00577209  837e0400             cmp dword ptr [esi + 4], 0
// 0057720d  7411                 je 0x577220
// 0057720f  ddda                 fstp st(2)
// 00577211  d94704               fld dword ptr [edi + 4]
// 00577214  d86104               fsub dword ptr [ecx + 4]
// 00577217  d87604               fdiv dword ptr [esi + 4]
// 0057721a  d9542418             fst dword ptr [esp + 0x18]
// 0057721e  d9ca                 fxch st(2)
// 00577220  d94208               fld dword ptr [edx + 8]
// 00577223  d85908               fcomp dword ptr [ecx + 8]
// 00577226  dfe0                 fnstsw ax
// 00577228  f6c441               test ah, 0x41
// 0057722b  7516                 jne 0x577243
// 0057722d  d94208               fld dword ptr [edx + 8]
// 00577230  d95d08               fstp dword ptr [ebp + 8]
// 00577233  c60300               mov byte ptr [ebx], 0
// 00577236  837e0800             cmp dword ptr [esi + 8], 0
// 0057723a  7432                 je 0x57726e
// 0057723c  ddd8                 fstp st(0)
// 0057723e  d94208               fld dword ptr [edx + 8]
// 00577241  eb21                 jmp 0x577264
// 00577243  d94708               fld dword ptr [edi + 8]
// 00577246  d85908               fcomp dword ptr [ecx + 8]
// 00577249  dfe0                 fnstsw ax
// 0057724b  f6c405               test ah, 5
// 0057724e  7a1e                 jp 0x57726e
// 00577250  d94708               fld dword ptr [edi + 8]
// 00577253  d95d08               fstp dword ptr [ebp + 8]
// 00577256  c60300               mov byte ptr [ebx], 0
// 00577259  837e0800             cmp dword ptr [esi + 8], 0
// 0057725d  740f                 je 0x57726e
// 0057725f  ddd8                 fstp st(0)
// 00577261  d94708               fld dword ptr [edi + 8]
// 00577264  d86108               fsub dword ptr [ecx + 8]
// 00577267  d87608               fdiv dword ptr [esi + 8]
// 0057726a  d954241c             fst dword ptr [esp + 0x1c]
// 0057726e  803b00               cmp byte ptr [ebx], 0
// 00577271  7410                 je 0x577283
// 00577273  ddd8                 fstp st(0)
// 00577275  ddd9                 fstp st(1)
// 00577277  ddd8                 fstp st(0)
// 00577279  5f                   pop edi
// 0057727a  5e                   pop esi
// 0057727b  5d                   pop ebp
// 0057727c  32c0                 xor al, al
// 0057727e  5b                   pop ebx
// 0057727f  83c410               add esp, 0x10
// 00577282  c3                   ret 
// 00577283  d9ca                 fxch st(2)
// 00577285  33db                 xor ebx, ebx
// 00577287  ded9                 fcompp 
// 00577289  895c2434             mov dword ptr [esp + 0x34], ebx
// 0057728d  dfe0                 fnstsw ax
// 0057728f  f6c441               test ah, 0x41
// 00577292  7508                 jne 0x57729c
// 00577294  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0057729c  8b442434             mov eax, dword ptr [esp + 0x34]
// 005772a0  d85c8414             fcomp dword ptr [esp + eax*4 + 0x14]
// 005772a4  dfe0                 fnstsw ax
// 005772a6  f6c441               test ah, 0x41
// 005772a9  7508                 jne 0x5772b3
// 005772ab  c744243402000000     mov dword ptr [esp + 0x34], 2
// 005772b3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005772b7  f744841400000080     test dword ptr [esp + eax*4 + 0x14], 0x80000000
// 005772bf  75b8                 jne 0x577279
// 005772c1  8b442430             mov eax, dword ptr [esp + 0x30]
// 005772c5  8bee                 mov ebp, esi
// 005772c7  2bc1                 sub eax, ecx
// 005772c9  2be9                 sub ebp, ecx
// 005772cb  2bd1                 sub edx, ecx
// 005772cd  2bf9                 sub edi, ecx
// 005772cf  89442410             mov dword ptr [esp + 0x10], eax
// 005772d3  897c242c             mov dword ptr [esp + 0x2c], edi
// 005772d7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005772db  3bdf                 cmp ebx, edi
// 005772dd  7434                 je 0x577313
// 005772df  d90429               fld dword ptr [ecx + ebp]
// 005772e2  d84cbc14             fmul dword ptr [esp + edi*4 + 0x14]
// 005772e6  d801                 fadd dword ptr [ecx]
// 005772e8  d9c0                 fld st(0)
// 005772ea  d9c9                 fxch st(1)
// 005772ec  d91c08               fstp dword ptr [eax + ecx]
// 005772ef  d8140a               fcom dword ptr [edx + ecx]
// 005772f2  dfe0                 fnstsw ax
// 005772f4  f6c405               test ah, 5
// 005772f7  0f8b7affffff         jnp 0x577277
// 005772fd  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00577301  d81c08               fcomp dword ptr [eax + ecx]
// 00577304  dfe0                 fnstsw ax
// 00577306  f6c441               test ah, 0x41
// 00577309  0f846affffff         je 0x577279
// 0057730f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00577313  43                   inc ebx
// 00577314  83c104               add ecx, 4
// 00577317  83fb03               cmp ebx, 3
// 0057731a  7cbb                 jl 0x5772d7
// 0057731c  f605f8c6a30001       test byte ptr [0xa3c6f8], 1
// 00577323  d9ee                 fldz 
// 00577325  7519                 jne 0x577340
// 00577327  830df8c6a30001       or dword ptr [0xa3c6f8], 1
// 0057732e  d915ecc6a300         fst dword ptr [0xa3c6ec]
// 00577334  d915f0c6a300         fst dword ptr [0xa3c6f0]
// 0057733a  d915f4c6a300         fst dword ptr [0xa3c6f4]
// 00577340  d905ecc6a300         fld dword ptr [0xa3c6ec]
// 00577346  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0057734a  d919                 fstp dword ptr [ecx]
// 0057734c  d905f0c6a300         fld dword ptr [0xa3c6f0]
// 00577352  d95904               fstp dword ptr [ecx + 4]
// 00577355  d905f4c6a300         fld dword ptr [0xa3c6f4]
// 0057735b  d95908               fstp dword ptr [ecx + 8]
// 0057735e  d81cbe               fcomp dword ptr [esi + edi*4]
// 00577361  dfe0                 fnstsw ax
// 00577363  f6c405               test ah, 5
// 00577366  7a13                 jp 0x57737b
// 00577368  dd0588cf8b00         fld qword ptr [0x8bcf88]
// 0057736e  b001                 mov al, 1
// 00577370  d91cb9               fstp dword ptr [ecx + edi*4]
// 00577373  5f                   pop edi
// 00577374  5e                   pop esi
// 00577375  5d                   pop ebp
// 00577376  5b                   pop ebx
// 00577377  83c410               add esp, 0x10
// 0057737a  c3                   ret 
// 0057737b  d9e8                 fld1 
// 0057737d  b001                 mov al, 1
// 0057737f  d91cb9               fstp dword ptr [ecx + edi*4]
// 00577382  5f                   pop edi
// 00577383  5e                   pop esi
// 00577384  5d                   pop ebp
// 00577385  5b                   pop ebx
// 00577386  83c410               add esp, 0x10
// 00577389  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?collisionLocationForMovingPointFixedAABox@CollisionDetection@G3D@@SA_NABVVector3@2@0ABVAABox@2@AAV32@AA_N2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
