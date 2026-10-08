// roc 2007-03 007389f0  unit: seg_00730000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007389f0
//
// 007389f0  55                   push ebp
// 007389f1  8bec                 mov ebp, esp
// 007389f3  83e4f8               and esp, 0xfffffff8
// 007389f6  83ec1c               sub esp, 0x1c
// 007389f9  837d1800             cmp dword ptr [ebp + 0x18], 0
// 007389fd  dd4510               fld qword ptr [ebp + 0x10]
// 00738a00  dc0d18e57900         fmul qword ptr [0x79e518]
// 00738a06  53                   push ebx
// 00738a07  56                   push esi
// 00738a08  57                   push edi
// 00738a09  dd542420             fst qword ptr [esp + 0x20]
// 00738a0d  8bf9                 mov edi, ecx
// 00738a0f  db870c020000         fild dword ptr [edi + 0x20c]
// 00738a15  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00738a18  8b5914               mov ebx, dword ptr [ecx + 0x14]
// 00738a1b  d9c0                 fld st(0)
// 00738a1d  d8ca                 fmul st(2)
// 00738a1f  dab710020000         fidiv dword ptr [edi + 0x210]
// 00738a25  def1                 fdivrp st(1)
// 00738a27  dd542418             fst qword ptr [esp + 0x18]
// 00738a2b  d9ee                 fldz 
// 00738a2d  dd542410             fst qword ptr [esp + 0x10]
// 00738a31  756f                 jne 0x738aa2
// 00738a33  33f6                 xor esi, esi
// 00738a35  85db                 test ebx, ebx
// 00738a37  0f8e91000000         jle 0x738ace
// 00738a3d  ddda                 fstp st(2)
// 00738a3f  eb02                 jmp 0x738a43
// 00738a41  d9c9                 fxch st(1)
// 00738a43  3b7114               cmp esi, dword ptr [ecx + 0x14]
// 00738a46  7617                 jbe 0x738a5f
// 00738a48  ddd9                 fstp st(1)
// 00738a4a  ddd8                 fstp st(0)
// 00738a4c  ff1544e97700         call dword ptr [0x77e944]
// 00738a52  dd442418             fld qword ptr [esp + 0x18]
// 00738a56  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00738a59  dd442410             fld qword ptr [esp + 0x10]
// 00738a5d  d9c9                 fxch st(1)
// 00738a5f  83791810             cmp dword ptr [ecx + 0x18], 0x10
// 00738a63  7205                 jb 0x738a6a
// 00738a65  8b4104               mov eax, dword ptr [ecx + 4]
// 00738a68  eb03                 jmp 0x738a6d
// 00738a6a  8d4104               lea eax, [ecx + 4]
// 00738a6d  0fb60430             movzx eax, byte ptr [eax + esi]
// 00738a71  83e07f               and eax, 0x7f
// 00738a74  83c601               add esi, 1
// 00738a77  3bf3                 cmp esi, ebx
// 00738a79  db44870c             fild dword ptr [edi + eax*4 + 0xc]
// 00738a7d  d8c9                 fmul st(1)
// 00738a7f  dec2                 faddp st(2)
// 00738a81  d9c9                 fxch st(1)
// 00738a83  dd542410             fst qword ptr [esp + 0x10]
// 00738a87  7cb8                 jl 0x738a41
// 00738a89  8b4508               mov eax, dword ptr [ebp + 8]
// 00738a8c  ddd9                 fstp st(1)
// 00738a8e  dd442420             fld qword ptr [esp + 0x20]
// 00738a92  d9c9                 fxch st(1)
// 00738a94  d918                 fstp dword ptr [eax]
// 00738a96  d95804               fstp dword ptr [eax + 4]
// 00738a99  5f                   pop edi
// 00738a9a  5e                   pop esi
// 00738a9b  5b                   pop ebx
// 00738a9c  8be5                 mov esp, ebp
// 00738a9e  5d                   pop ebp
// 00738a9f  c21400               ret 0x14
// 00738aa2  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 00738aa8  ddd8                 fstp st(0)
// 00738aaa  8b4508               mov eax, dword ptr [ebp + 8]
// 00738aad  0fafcb               imul ecx, ebx
// 00738ab0  894c2410             mov dword ptr [esp + 0x10], ecx
// 00738ab4  db442410             fild dword ptr [esp + 0x10]
// 00738ab8  dc0df0ed7c00         fmul qword ptr [0x7cedf0]
// 00738abe  dec9                 fmulp st(1)
// 00738ac0  d918                 fstp dword ptr [eax]
// 00738ac2  d95804               fstp dword ptr [eax + 4]
// 00738ac5  5f                   pop edi
// 00738ac6  5e                   pop esi
// 00738ac7  5b                   pop ebx
// 00738ac8  8be5                 mov esp, ebp
// 00738aca  5d                   pop ebp
// 00738acb  c21400               ret 0x14
// 00738ace  8b4508               mov eax, dword ptr [ebp + 8]
// 00738ad1  ddd9                 fstp st(1)
// 00738ad3  5f                   pop edi
// 00738ad4  d918                 fstp dword ptr [eax]
// 00738ad6  5e                   pop esi
// 00738ad7  d95804               fstp dword ptr [eax + 4]
// 00738ada  5b                   pop ebx
// 00738adb  8be5                 mov esp, ebp
// 00738add  5d                   pop ebp
// 00738ade  c21400               ret 0x14
// library rbxgs-g3d/GLG3Dcpp\GFont.cpp (function ?get2DStringBounds@GFont@G3D@@QBE?AVVector2@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@NW4Spacing@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/GFont.cpp
