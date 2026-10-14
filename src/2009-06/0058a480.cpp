// roc 2009-06 0058a480  unit: seg_00580000  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a480
//
// 0058a480  8b542404             mov edx, dword ptr [esp + 4]
// 0058a484  d902                 fld dword ptr [edx]
// 0058a486  53                   push ebx
// 0058a487  d85a10               fcomp dword ptr [edx + 0x10]
// 0058a48a  55                   push ebp
// 0058a48b  56                   push esi
// 0058a48c  57                   push edi
// 0058a48d  dfe0                 fnstsw ax
// 0058a48f  f6c405               test ah, 5
// 0058a492  7a07                 jp 0x58a49b
// 0058a494  be01000000           mov esi, 1
// 0058a499  eb02                 jmp 0x58a49d
// 0058a49b  33f6                 xor esi, esi
// 0058a49d  8bc6                 mov eax, esi
// 0058a49f  c1e004               shl eax, 4
// 0058a4a2  d90410               fld dword ptr [eax + edx]
// 0058a4a5  d85a20               fcomp dword ptr [edx + 0x20]
// 0058a4a8  dfe0                 fnstsw ax
// 0058a4aa  f6c405               test ah, 5
// 0058a4ad  7a05                 jp 0x58a4b4
// 0058a4af  be02000000           mov esi, 2
// 0058a4b4  8b04b5b0e29100       mov eax, dword ptr [esi*4 + 0x91e2b0]
// 0058a4bb  8b3c85b0e29100       mov edi, dword ptr [eax*4 + 0x91e2b0]
// 0058a4c2  8be8                 mov ebp, eax
// 0058a4c4  8bdf                 mov ebx, edi
// 0058a4c6  c1e304               shl ebx, 4
// 0058a4c9  d90413               fld dword ptr [ebx + edx]
// 0058a4cc  c1e504               shl ebp, 4
// 0058a4cf  d8042a               fadd dword ptr [edx + ebp]
// 0058a4d2  8bde                 mov ebx, esi
// 0058a4d4  c1e304               shl ebx, 4
// 0058a4d7  8d2c7f               lea ebp, [edi + edi*2]
// 0058a4da  d82413               fsub dword ptr [ebx + edx]
// 0058a4dd  8d1c40               lea ebx, [eax + eax*2]
// 0058a4e0  d9e8                 fld1 
// 0058a4e2  03df                 add ebx, edi
// 0058a4e4  dce9                 fsub st(1), st(0)
// 0058a4e6  03e8                 add ebp, eax
// 0058a4e8  d9c9                 fxch st(1)
// 0058a4ea  d91cb1               fstp dword ptr [ecx + esi*4]
// 0058a4ed  d9049a               fld dword ptr [edx + ebx*4]
// 0058a4f0  8d1c76               lea ebx, [esi + esi*2]
// 0058a4f3  d824aa               fsub dword ptr [edx + ebp*4]
// 0058a4f6  8d2c03               lea ebp, [ebx + eax]
// 0058a4f9  8d1c40               lea ebx, [eax + eax*2]
// 0058a4fc  03de                 add ebx, esi
// 0058a4fe  d9590c               fstp dword ptr [ecx + 0xc]
// 0058a501  d904aa               fld dword ptr [edx + ebp*4]
// 0058a504  d8049a               fadd dword ptr [edx + ebx*4]
// 0058a507  d9e0                 fchs 
// 0058a509  d91c81               fstp dword ptr [ecx + eax*4]
// 0058a50c  8d0476               lea eax, [esi + esi*2]
// 0058a50f  8d1c38               lea ebx, [eax + edi]
// 0058a512  d9049a               fld dword ptr [edx + ebx*4]
// 0058a515  8d047f               lea eax, [edi + edi*2]
// 0058a518  03c6                 add eax, esi
// 0058a51a  d80482               fadd dword ptr [edx + eax*4]
// 0058a51d  d9e0                 fchs 
// 0058a51f  d91cb9               fstp dword ptr [ecx + edi*4]
// 0058a522  5f                   pop edi
// 0058a523  d9410c               fld dword ptr [ecx + 0xc]
// 0058a526  5e                   pop esi
// 0058a527  d94108               fld dword ptr [ecx + 8]
// 0058a52a  5d                   pop ebp
// 0058a52b  d94104               fld dword ptr [ecx + 4]
// 0058a52e  5b                   pop ebx
// 0058a52f  d901                 fld dword ptr [ecx]
// 0058a531  dcc8                 fmul st(0), st(0)
// 0058a533  d9c1                 fld st(1)
// 0058a535  deca                 fmulp st(2)
// 0058a537  dec1                 faddp st(1)
// 0058a539  d9c1                 fld st(1)
// 0058a53b  deca                 fmulp st(2)
// 0058a53d  dec1                 faddp st(1)
// 0058a53f  d9c1                 fld st(1)
// 0058a541  deca                 fmulp st(2)
// 0058a543  dec1                 faddp st(1)
// 0058a545  d9fa                 fsqrt 
// 0058a547  d905e8978c00         fld dword ptr [0x8c97e8]
// 0058a54d  d8d9                 fcomp st(1)
// 0058a54f  dfe0                 fnstsw ax
// 0058a551  f6c405               test ah, 5
// 0058a554  8bc1                 mov eax, ecx
// 0058a556  7a21                 jp 0x58a579
// 0058a558  def9                 fdivp st(1)
// 0058a55a  d901                 fld dword ptr [ecx]
// 0058a55c  d8c9                 fmul st(1)
// 0058a55e  d919                 fstp dword ptr [ecx]
// 0058a560  d94104               fld dword ptr [ecx + 4]
// 0058a563  d8c9                 fmul st(1)
// 0058a565  d95904               fstp dword ptr [ecx + 4]
// 0058a568  d9c0                 fld st(0)
// 0058a56a  d84908               fmul dword ptr [ecx + 8]
// 0058a56d  d95908               fstp dword ptr [ecx + 8]
// 0058a570  d8490c               fmul dword ptr [ecx + 0xc]
// 0058a573  d9590c               fstp dword ptr [ecx + 0xc]
// 0058a576  c20400               ret 4
// 0058a579  ddd8                 fstp st(0)
// 0058a57b  d9ee                 fldz 
// 0058a57d  d911                 fst dword ptr [ecx]
// 0058a57f  d95104               fst dword ptr [ecx + 4]
// 0058a582  d95908               fstp dword ptr [ecx + 8]
// 0058a585  d9590c               fstp dword ptr [ecx + 0xc]
// 0058a588  c20400               ret 4
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ??0Quat@G3D@@QAE@ABVMatrix3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
