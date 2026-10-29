// roc 2009-12 00912020  unit: RBX::RenderNew::RenderScene  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00912020
//
// 00912020  55                   push ebp
// 00912021  8bec                 mov ebp, esp
// 00912023  83e4f8               and esp, 0xfffffff8
// 00912026  83ec1c               sub esp, 0x1c
// 00912029  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0091202d  dd4510               fld qword ptr [ebp + 0x10]
// 00912030  dc0d089d9b00         fmul qword ptr [0x9b9d08]
// 00912036  53                   push ebx
// 00912037  56                   push esi
// 00912038  57                   push edi
// 00912039  dd542420             fst qword ptr [esp + 0x20]
// 0091203d  8bf9                 mov edi, ecx
// 0091203f  db870c020000         fild dword ptr [edi + 0x20c]
// 00912045  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00912048  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0091204b  d9c0                 fld st(0)
// 0091204d  d8ca                 fmul st(2)
// 0091204f  dab710020000         fidiv dword ptr [edi + 0x210]
// 00912055  def1                 fdivrp st(1)
// 00912057  dd542418             fst qword ptr [esp + 0x18]
// 0091205b  d9ee                 fldz 
// 0091205d  dd542410             fst qword ptr [esp + 0x10]
// 00912061  756d                 jne 0x9120d0
// 00912063  33f6                 xor esi, esi
// 00912065  85db                 test ebx, ebx
// 00912067  0f8e8f000000         jle 0x9120fc
// 0091206d  ddda                 fstp st(2)
// 0091206f  eb02                 jmp 0x912073
// 00912071  d9c9                 fxch st(1)
// 00912073  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 00912076  7617                 jbe 0x91208f
// 00912078  ddd9                 fstp st(1)
// 0091207a  ddd8                 fstp st(0)
// 0091207c  ff1560b79800         call dword ptr [0x98b760]
// 00912082  dd442418             fld qword ptr [esp + 0x18]
// 00912086  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00912089  dd442410             fld qword ptr [esp + 0x10]
// 0091208d  d9c9                 fxch st(1)
// 0091208f  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 00912093  7205                 jb 0x91209a
// 00912095  8b4104               mov eax, dword ptr [ecx + 4]
// 00912098  eb03                 jmp 0x91209d
// 0091209a  8d4104               lea eax, [ecx + 4]
// 0091209d  0fbe0430             movsx eax, byte ptr [eax + esi]
// 009120a1  83e07f               and eax, 0x7f
// 009120a4  46                   inc esi
// 009120a5  3bf3                 cmp esi, ebx
// 009120a7  db44870c             fild dword ptr [edi + eax*4 + 0xc]
// 009120ab  d8c9                 fmul st(1)
// 009120ad  dec2                 faddp st(2)
// 009120af  d9c9                 fxch st(1)
// 009120b1  dd542410             fst qword ptr [esp + 0x10]
// 009120b5  7cba                 jl 0x912071
// 009120b7  8b4508               mov eax, dword ptr [ebp + 8]
// 009120ba  ddd9                 fstp st(1)
// 009120bc  dd442420             fld qword ptr [esp + 0x20]
// 009120c0  d9c9                 fxch st(1)
// 009120c2  d918                 fstp dword ptr [eax]
// 009120c4  d95804               fstp dword ptr [eax + 4]
// 009120c7  5f                   pop edi
// 009120c8  5e                   pop esi
// 009120c9  5b                   pop ebx
// 009120ca  8be5                 mov esp, ebp
// 009120cc  5d                   pop ebp
// 009120cd  c21400               ret 0x14
// 009120d0  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 009120d6  ddd8                 fstp st(0)
// 009120d8  8b4508               mov eax, dword ptr [ebp + 8]
// 009120db  0fafcb               imul ecx, ebx
// 009120de  894c2410             mov dword ptr [esp + 0x10], ecx
// 009120e2  db442410             fild dword ptr [esp + 0x10]
// 009120e6  dec9                 fmulp st(1)
// 009120e8  dc0dd89f9b00         fmul qword ptr [0x9b9fd8]
// 009120ee  d918                 fstp dword ptr [eax]
// 009120f0  d95804               fstp dword ptr [eax + 4]
// 009120f3  5f                   pop edi
// 009120f4  5e                   pop esi
// 009120f5  5b                   pop ebx
// 009120f6  8be5                 mov esp, ebp
// 009120f8  5d                   pop ebp
// 009120f9  c21400               ret 0x14
// 009120fc  8b4508               mov eax, dword ptr [ebp + 8]
// 009120ff  ddd9                 fstp st(1)
// 00912101  5f                   pop edi
// 00912102  d918                 fstp dword ptr [eax]
// 00912104  5e                   pop esi
// 00912105  d95804               fstp dword ptr [eax + 4]
// 00912108  5b                   pop ebx
// 00912109  8be5                 mov esp, ebp
// 0091210b  5d                   pop ebp
// 0091210c  c21400               ret 0x14
// copied from an identical function in another client (function ?get2DStringBounds@GFont@G3D@@QBE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/G