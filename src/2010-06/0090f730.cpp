// roc 2010-06 0090f730  unit: G3D::TextureManager::TextureArgs  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0090f730
//
// 0090f730  55                   push ebp
// 0090f731  8bec                 mov ebp, esp
// 0090f733  83e4f8               and esp, 0xfffffff8
// 0090f736  83ec1c               sub esp, 0x1c
// 0090f739  837d1800             cmp dword ptr [ebp + 0x18], 0
// 0090f73d  dd4510               fld qword ptr [ebp + 0x10]
// 0090f740  dc0d70e7a100         fmul qword ptr [0xa1e770]
// 0090f746  53                   push ebx
// 0090f747  56                   push esi
// 0090f748  57                   push edi
// 0090f749  dd542420             fst qword ptr [esp + 0x20]
// 0090f74d  8bf9                 mov edi, ecx
// 0090f74f  db870c020000         fild dword ptr [edi + 0x20c]
// 0090f755  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0090f758  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 0090f75b  d9c0                 fld st(0)
// 0090f75d  d8ca                 fmul st(2)
// 0090f75f  dab710020000         fidiv dword ptr [edi + 0x210]
// 0090f765  def1                 fdivrp st(1)
// 0090f767  dd542418             fst qword ptr [esp + 0x18]
// 0090f76b  d9ee                 fldz 
// 0090f76d  dd542410             fst qword ptr [esp + 0x10]
// 0090f771  756d                 jne 0x90f7e0
// 0090f773  33f6                 xor esi, esi
// 0090f775  85db                 test ebx, ebx
// 0090f777  0f8e8f000000         jle 0x90f80c
// 0090f77d  ddda                 fstp st(2)
// 0090f77f  eb02                 jmp 0x90f783
// 0090f781  d9c9                 fxch st(1)
// 0090f783  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 0090f786  7617                 jbe 0x90f79f
// 0090f788  ddd9                 fstp st(1)
// 0090f78a  ddd8                 fstp st(0)
// 0090f78c  ff150ca99e00         call dword ptr [0x9ea90c]
// 0090f792  dd442418             fld qword ptr [esp + 0x18]
// 0090f796  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0090f799  dd442410             fld qword ptr [esp + 0x10]
// 0090f79d  d9c9                 fxch st(1)
// 0090f79f  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 0090f7a3  7205                 jb 0x90f7aa
// 0090f7a5  8b4104               mov eax, dword ptr [ecx + 4]
// 0090f7a8  eb03                 jmp 0x90f7ad
// 0090f7aa  8d4104               lea eax, [ecx + 4]
// 0090f7ad  0fbe0430             movsx eax, byte ptr [eax + esi]
// 0090f7b1  83e07f               and eax, 0x7f
// 0090f7b4  46                   inc esi
// 0090f7b5  3bf3                 cmp esi, ebx
// 0090f7b7  db44870c             fild dword ptr [edi + eax*4 + 0xc]
// 0090f7bb  d8c9                 fmul st(1)
// 0090f7bd  dec2                 faddp st(2)
// 0090f7bf  d9c9                 fxch st(1)
// 0090f7c1  dd542410             fst qword ptr [esp + 0x10]
// 0090f7c5  7cba                 jl 0x90f781
// 0090f7c7  8b4508               mov eax, dword ptr [ebp + 8]
// 0090f7ca  ddd9                 fstp st(1)
// 0090f7cc  dd442420             fld qword ptr [esp + 0x20]
// 0090f7d0  d9c9                 fxch st(1)
// 0090f7d2  d918                 fstp dword ptr [eax]
// 0090f7d4  d95804               fstp dword ptr [eax + 4]
// 0090f7d7  5f                   pop edi
// 0090f7d8  5e                   pop esi
// 0090f7d9  5b                   pop ebx
// 0090f7da  8be5                 mov esp, ebp
// 0090f7dc  5d                   pop ebp
// 0090f7dd  c21400               ret 0x14
// 0090f7e0  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 0090f7e6  ddd8                 fstp st(0)
// 0090f7e8  8b4508               mov eax, dword ptr [ebp + 8]
// 0090f7eb  0fafcb               imul ecx, ebx
// 0090f7ee  894c2410             mov dword ptr [esp + 0x10], ecx
// 0090f7f2  db442410             fild dword ptr [esp + 0x10]
// 0090f7f6  dec9                 fmulp st(1)
// 0090f7f8  dc0d6035a600         fmul qword ptr [0xa63560]
// 0090f7fe  d918                 fstp dword ptr [eax]
// 0090f800  d95804               fstp dword ptr [eax + 4]
// 0090f803  5f                   pop edi
// 0090f804  5e                   pop esi
// 0090f805  5b                   pop ebx
// 0090f806  8be5                 mov esp, ebp
// 0090f808  5d                   pop ebp
// 0090f809  c21400               ret 0x14
// 0090f80c  8b4508               mov eax, dword ptr [ebp + 8]
// 0090f80f  ddd9                 fstp st(1)
// 0090f811  5f                   pop edi
// 0090f812  d918                 fstp dword ptr [eax]
// 0090f814  5e                   pop esi
// 0090f815  d95804               fstp dword ptr [eax + 4]
// 0090f818  5b                   pop ebx
// 0090f819  8be5                 mov esp, ebp
// 0090f81b  5d                   pop ebp
// 0090f81c  c21400               ret 0x14
// copied from an identical function in another client (function ?get2DStringBounds@GFont@G3D@@QBE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/G