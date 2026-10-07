// roc 2007-08 00736380  unit: G3D::Sky  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00736380
//
// 00736380  55                   push ebp
// 00736381  8bec                 mov ebp, esp
// 00736383  83e4f8               and esp, 0xfffffff8
// 00736386  83ec1c               sub esp, 0x1c
// 00736389  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0073638d  dd4510               fld qword ptr [ebp + 0x10]
// 00736390  dc0d48f77900         fmul qword ptr [0x79f748]
// 00736396  53                   push ebx
// 00736397  56                   push esi
// 00736398  57                   push edi
// 00736399  dd542420             fst qword ptr [esp + 0x20]
// 0073639d  8bf9                 mov edi, ecx
// 0073639f  db870c020000         fild dword ptr [edi + 0x20c]
// 007363a5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007363a8  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 007363ab  d9c0                 fld st(0)
// 007363ad  d8ca                 fmul st(2)
// 007363af  dab710020000         fidiv dword ptr [edi + 0x210]
// 007363b5  def1                 fdivrp st(1)
// 007363b7  dd542418             fst qword ptr [esp + 0x18]
// 007363bb  d9ee                 fldz 
// 007363bd  dd542410             fst qword ptr [esp + 0x10]
// 007363c1  756f                 jne 0x736432
// 007363c3  33f6                 xor esi, esi
// 007363c5  85db                 test ebx, ebx
// 007363c7  0f8e91000000         jle 0x73645e
// 007363cd  ddda                 fstp st(2)
// 007363cf  eb02                 jmp 0x7363d3
// 007363d1  d9c9                 fxch st(1)
// 007363d3  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 007363d6  7617                 jbe 0x7363ef
// 007363d8  ddd9                 fstp st(1)
// 007363da  ddd8                 fstp st(0)
// 007363dc  ff15d8e67700         call dword ptr [0x77e6d8]
// 007363e2  dd442418             fld qword ptr [esp + 0x18]
// 007363e6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007363e9  dd442410             fld qword ptr [esp + 0x10]
// 007363ed  d9c9                 fxch st(1)
// 007363ef  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 007363f3  7205                 jb 0x7363fa
// 007363f5  8b4104               mov eax, dword ptr [ecx + 4]
// 007363f8  eb03                 jmp 0x7363fd
// 007363fa  8d4104               lea eax, [ecx + 4]
// 007363fd  0fb60430             movzx eax, byte ptr [eax + esi]
// 00736401  83e07f               and eax, 0x7f
// 00736404  83c601               add esi, 1
// 00736407  3bf3                 cmp esi, ebx
// 00736409  db44870c             fild dword ptr [edi + eax*4 + 0xc]
// 0073640d  d8c9                 fmul st(1)
// 0073640f  dec2                 faddp st(2)
// 00736411  d9c9                 fxch st(1)
// 00736413  dd542410             fst qword ptr [esp + 0x10]
// 00736417  7cb8                 jl 0x7363d1
// 00736419  8b4508               mov eax, dword ptr [ebp + 8]
// 0073641c  ddd9                 fstp st(1)
// 0073641e  dd442420             fld qword ptr [esp + 0x20]
// 00736422  d9c9                 fxch st(1)
// 00736424  d918                 fstp dword ptr [eax]
// 00736426  d95804               fstp dword ptr [eax + 4]
// 00736429  5f                   pop edi
// 0073642a  5e                   pop esi
// 0073642b  5b                   pop ebx
// 0073642c  8be5                 mov esp, ebp
// 0073642e  5d                   pop ebp
// 0073642f  c21400               ret 0x14
// 00736432  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 00736438  ddd8                 fstp st(0)
// 0073643a  8b4508               mov eax, dword ptr [ebp + 8]
// 0073643d  0fafcb               imul ecx, ebx
// 00736440  894c2410             mov dword ptr [esp + 0x10], ecx
// 00736444  db442410             fild dword ptr [esp + 0x10]
// 00736448  dc0df81e7d00         fmul qword ptr [0x7d1ef8]
// 0073644e  dec9                 fmulp st(1)
// 00736450  d918                 fstp dword ptr [eax]
// 00736452  d95804               fstp dword ptr [eax + 4]
// 00736455  5f                   pop edi
// 00736456  5e                   pop esi
// 00736457  5b                   pop ebx
// 00736458  8be5                 mov esp, ebp
// 0073645a  5d                   pop ebp
// 0073645b  c21400               ret 0x14
// 0073645e  8b4508               mov eax, dword ptr [ebp + 8]
// 00736461  ddd9                 fstp st(1)
// 00736463  5f                   pop edi
// 00736464  d918                 fstp dword ptr [eax]
// 00736466  5e                   pop esi
// 00736467  d95804               fstp dword ptr [eax + 4]
// 0073646a  5b                   pop ebx
// 0073646b  8be5                 mov esp, ebp
// 0073646d  5d                   pop ebp
// 0073646e  c21400               ret 0x14
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?get2DStringBounds@GFont@G3D@@QBE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
