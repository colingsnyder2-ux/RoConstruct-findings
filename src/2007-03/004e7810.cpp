// roc 2007-03 004e7810  unit: seg_004e0000  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7810
//
// 004e7810  55                   push ebp
// 004e7811  56                   push esi
// 004e7812  57                   push edi
// 004e7813  8bf9                 mov edi, ecx
// 004e7815  8b4708               mov eax, dword ptr [edi + 8]
// 004e7818  8b2f                 mov ebp, dword ptr [edi]
// 004e781a  03c0                 add eax, eax
// 004e781c  03c0                 add eax, eax
// 004e781e  03c0                 add eax, eax
// 004e7820  6a10                 push 0x10
// 004e7822  50                   push eax
// 004e7823  e8a8c30000           call 0x4f3bd0
// 004e7828  8bf0                 mov esi, eax
// 004e782a  8b442418             mov eax, dword ptr [esp + 0x18]
// 004e782e  8937                 mov dword ptr [edi], esi
// 004e7830  8b7f08               mov edi, dword ptr [edi + 8]
// 004e7833  83c408               add esp, 8
// 004e7836  3bc7                 cmp eax, edi
// 004e7838  7c02                 jl 0x4e783c
// 004e783a  8bc7                 mov eax, edi
// 004e783c  8d3cc6               lea edi, [esi + eax*8]
// 004e783f  8bc7                 mov eax, edi
// 004e7841  2bc6                 sub eax, esi
// 004e7843  83c007               add eax, 7
// 004e7846  99                   cdq 
// 004e7847  83e207               and edx, 7
// 004e784a  03c2                 add eax, edx
// 004e784c  c1f803               sar eax, 3
// 004e784f  83f804               cmp eax, 4
// 004e7852  8bcd                 mov ecx, ebp
// 004e7854  7c5d                 jl 0x4e78b3
// 004e7856  53                   push ebx
// 004e7857  8d5fe8               lea ebx, [edi - 0x18]
// 004e785a  8d4614               lea eax, [esi + 0x14]
// 004e785d  8d4900               lea ecx, [ecx]
// 004e7860  85f6                 test esi, esi
// 004e7862  740a                 je 0x4e786e
// 004e7864  d901                 fld dword ptr [ecx]
// 004e7866  d91e                 fstp dword ptr [esi]
// 004e7868  d94104               fld dword ptr [ecx + 4]
// 004e786b  d958f0               fstp dword ptr [eax - 0x10]
// 004e786e  8d50f4               lea edx, [eax - 0xc]
// 004e7871  85d2                 test edx, edx
// 004e7873  740c                 je 0x4e7881
// 004e7875  d94108               fld dword ptr [ecx + 8]
// 004e7878  d958f4               fstp dword ptr [eax - 0xc]
// 004e787b  d9410c               fld dword ptr [ecx + 0xc]
// 004e787e  d958f8               fstp dword ptr [eax - 8]
// 004e7881  8d50fc               lea edx, [eax - 4]
// 004e7884  85d2                 test edx, edx
// 004e7886  740b                 je 0x4e7893
// 004e7888  d94110               fld dword ptr [ecx + 0x10]
// 004e788b  d958fc               fstp dword ptr [eax - 4]
// 004e788e  d94114               fld dword ptr [ecx + 0x14]
// 004e7891  d918                 fstp dword ptr [eax]
// 004e7893  8d5004               lea edx, [eax + 4]
// 004e7896  85d2                 test edx, edx
// 004e7898  740b                 je 0x4e78a5
// 004e789a  d94118               fld dword ptr [ecx + 0x18]
// 004e789d  d91a                 fstp dword ptr [edx]
// 004e789f  d9411c               fld dword ptr [ecx + 0x1c]
// 004e78a2  d95808               fstp dword ptr [eax + 8]
// 004e78a5  83c620               add esi, 0x20
// 004e78a8  83c120               add ecx, 0x20
// 004e78ab  83c020               add eax, 0x20
// 004e78ae  3bf3                 cmp esi, ebx
// 004e78b0  7cae                 jl 0x4e7860
// 004e78b2  5b                   pop ebx
// 004e78b3  3bf7                 cmp esi, edi
// 004e78b5  7318                 jae 0x4e78cf
// 004e78b7  85f6                 test esi, esi
// 004e78b9  740a                 je 0x4e78c5
// 004e78bb  d901                 fld dword ptr [ecx]
// 004e78bd  d91e                 fstp dword ptr [esi]
// 004e78bf  d94104               fld dword ptr [ecx + 4]
// 004e78c2  d95e04               fstp dword ptr [esi + 4]
// 004e78c5  83c608               add esi, 8
// 004e78c8  83c108               add ecx, 8
// 004e78cb  3bf7                 cmp esi, edi
// 004e78cd  72e8                 jb 0x4e78b7
// 004e78cf  55                   push ebp
// 004e78d0  e8abba0000           call 0x4f3380
// 004e78d5  83c404               add esp, 4
// 004e78d8  5f                   pop edi
// 004e78d9  5e                   pop esi
// 004e78da  5d                   pop ebp
// 004e78db  c20400               ret 4
// library rbxgs-render/Mesh.cpp (function ?realloc@?$Array@VVector2@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
