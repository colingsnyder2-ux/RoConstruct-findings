// roc 2007-03 0051ec80  unit: seg_00510000  size: 315 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ec80
//
// 0051ec80  56                   push esi
// 0051ec81  8bf1                 mov esi, ecx
// 0051ec83  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051ec87  d94110               fld dword ptr [ecx + 0x10]
// 0051ec8a  d901                 fld dword ptr [ecx]
// 0051ec8c  ded9                 fcompp 
// 0051ec8e  dfe0                 fnstsw ax
// 0051ec90  f6c405               test ah, 5
// 0051ec93  7a07                 jp 0x51ec9c
// 0051ec95  ba01000000           mov edx, 1
// 0051ec9a  eb02                 jmp 0x51ec9e
// 0051ec9c  33d2                 xor edx, edx
// 0051ec9e  d94120               fld dword ptr [ecx + 0x20]
// 0051eca1  8bc2                 mov eax, edx
// 0051eca3  c1e004               shl eax, 4
// 0051eca6  d90408               fld dword ptr [eax + ecx]
// 0051eca9  ded9                 fcompp 
// 0051ecab  dfe0                 fnstsw ax
// 0051ecad  f6c405               test ah, 5
// 0051ecb0  7a05                 jp 0x51ecb7
// 0051ecb2  ba02000000           mov edx, 2
// 0051ecb7  8b049584447a00       mov eax, dword ptr [edx*4 + 0x7a4484]
// 0051ecbe  53                   push ebx
// 0051ecbf  55                   push ebp
// 0051ecc0  57                   push edi
// 0051ecc1  8b3c8584447a00       mov edi, dword ptr [eax*4 + 0x7a4484]
// 0051ecc8  8bdf                 mov ebx, edi
// 0051ecca  c1e304               shl ebx, 4
// 0051eccd  d9040b               fld dword ptr [ebx + ecx]
// 0051ecd0  8bd8                 mov ebx, eax
// 0051ecd2  c1e304               shl ebx, 4
// 0051ecd5  d8040b               fadd dword ptr [ebx + ecx]
// 0051ecd8  8bda                 mov ebx, edx
// 0051ecda  c1e304               shl ebx, 4
// 0051ecdd  d8240b               fsub dword ptr [ebx + ecx]
// 0051ece0  8d1c40               lea ebx, [eax + eax*2]
// 0051ece3  8d2c3b               lea ebp, [ebx + edi]
// 0051ece6  03da                 add ebx, edx
// 0051ece8  dc25a81f7900         fsub qword ptr [0x791fa8]
// 0051ecee  d91c96               fstp dword ptr [esi + edx*4]
// 0051ecf1  d904a9               fld dword ptr [ecx + ebp*4]
// 0051ecf4  8d2c7f               lea ebp, [edi + edi*2]
// 0051ecf7  03e8                 add ebp, eax
// 0051ecf9  d824a9               fsub dword ptr [ecx + ebp*4]
// 0051ecfc  8d2c52               lea ebp, [edx + edx*2]
// 0051ecff  03e8                 add ebp, eax
// 0051ed01  d95e0c               fstp dword ptr [esi + 0xc]
// 0051ed04  d904a9               fld dword ptr [ecx + ebp*4]
// 0051ed07  d80499               fadd dword ptr [ecx + ebx*4]
// 0051ed0a  d9e0                 fchs 
// 0051ed0c  d91c86               fstp dword ptr [esi + eax*4]
// 0051ed0f  8d0452               lea eax, [edx + edx*2]
// 0051ed12  03c7                 add eax, edi
// 0051ed14  d90481               fld dword ptr [ecx + eax*4]
// 0051ed17  8d047f               lea eax, [edi + edi*2]
// 0051ed1a  03c2                 add eax, edx
// 0051ed1c  d80481               fadd dword ptr [ecx + eax*4]
// 0051ed1f  d9e0                 fchs 
// 0051ed21  d91cbe               fstp dword ptr [esi + edi*4]
// 0051ed24  d94604               fld dword ptr [esi + 4]
// 0051ed27  d906                 fld dword ptr [esi]
// 0051ed29  d94608               fld dword ptr [esi + 8]
// 0051ed2c  d9460c               fld dword ptr [esi + 0xc]
// 0051ed2f  d9c2                 fld st(2)
// 0051ed31  decb                 fmulp st(3)
// 0051ed33  d9c3                 fld st(3)
// 0051ed35  decc                 fmulp st(4)
// 0051ed37  d9ca                 fxch st(2)
// 0051ed39  dec3                 faddp st(3)
// 0051ed3b  dcc8                 fmul st(0), st(0)
// 0051ed3d  dec2                 faddp st(2)
// 0051ed3f  dcc8                 fmul st(0), st(0)
// 0051ed41  dec1                 faddp st(1)
// 0051ed43  d95c2414             fstp dword ptr [esp + 0x14]
// 0051ed47  d9442414             fld dword ptr [esp + 0x14]
// 0051ed4b  e85c051000           call 0x61f2ac
// 0051ed50  d95c2414             fstp dword ptr [esp + 0x14]
// 0051ed54  d9442414             fld dword ptr [esp + 0x14]
// 0051ed58  5f                   pop edi
// 0051ed59  d95c2410             fstp dword ptr [esp + 0x10]
// 0051ed5d  5d                   pop ebp
// 0051ed5e  d90580447a00         fld dword ptr [0x7a4480]
// 0051ed64  5b                   pop ebx
// 0051ed65  d9442408             fld dword ptr [esp + 8]
// 0051ed69  d8d1                 fcom st(1)
// 0051ed6b  dfe0                 fnstsw ax
// 0051ed6d  ddd9                 fstp st(1)
// 0051ed6f  f6c441               test ah, 0x41
// 0051ed72  8bc6                 mov eax, esi
// 0051ed74  7530                 jne 0x51eda6
// 0051ed76  d9e8                 fld1 
// 0051ed78  def1                 fdivrp st(1)
// 0051ed7a  d95c2408             fstp dword ptr [esp + 8]
// 0051ed7e  d906                 fld dword ptr [esi]
// 0051ed80  d9442408             fld dword ptr [esp + 8]
// 0051ed84  d9c0                 fld st(0)
// 0051ed86  deca                 fmulp st(2)
// 0051ed88  d9c9                 fxch st(1)
// 0051ed8a  d91e                 fstp dword ptr [esi]
// 0051ed8c  d94604               fld dword ptr [esi + 4]
// 0051ed8f  d8c9                 fmul st(1)
// 0051ed91  d95e04               fstp dword ptr [esi + 4]
// 0051ed94  d9c0                 fld st(0)
// 0051ed96  d84e08               fmul dword ptr [esi + 8]
// 0051ed99  d95e08               fstp dword ptr [esi + 8]
// 0051ed9c  d84e0c               fmul dword ptr [esi + 0xc]
// 0051ed9f  d95e0c               fstp dword ptr [esi + 0xc]
// 0051eda2  5e                   pop esi
// 0051eda3  c20400               ret 4
// 0051eda6  ddd8                 fstp st(0)
// 0051eda8  d9ee                 fldz 
// 0051edaa  d916                 fst dword ptr [esi]
// 0051edac  d95604               fst dword ptr [esi + 4]
// 0051edaf  d95e08               fstp dword ptr [esi + 8]
// 0051edb2  d9e8                 fld1 
// 0051edb4  d95e0c               fstp dword ptr [esi + 0xc]
// 0051edb7  5e                   pop esi
// 0051edb8  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Quat.cpp (function ??0Quat@G3D@@QAE@ABVMatrix3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Quat.cpp
