// roc 2007-03 004e7710  unit: seg_004e0000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7710
//
// 004e7710  55                   push ebp
// 004e7711  56                   push esi
// 004e7712  8bf1                 mov esi, ecx
// 004e7714  8b4608               mov eax, dword ptr [esi + 8]
// 004e7717  8b2e                 mov ebp, dword ptr [esi]
// 004e7719  8d0440               lea eax, [eax + eax*2]
// 004e771c  57                   push edi
// 004e771d  03c0                 add eax, eax
// 004e771f  03c0                 add eax, eax
// 004e7721  6a10                 push 0x10
// 004e7723  50                   push eax
// 004e7724  e8a7c40000           call 0x4f3bd0
// 004e7729  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e772d  8906                 mov dword ptr [esi], eax
// 004e772f  8b7608               mov esi, dword ptr [esi + 8]
// 004e7732  83c408               add esp, 8
// 004e7735  3bce                 cmp ecx, esi
// 004e7737  7c02                 jl 0x4e773b
// 004e7739  8bce                 mov ecx, esi
// 004e773b  8d0c49               lea ecx, [ecx + ecx*2]
// 004e773e  8d3c88               lea edi, [eax + ecx*4]
// 004e7741  8bf0                 mov esi, eax
// 004e7743  8bd7                 mov edx, edi
// 004e7745  2bd0                 sub edx, eax
// 004e7747  83c20b               add edx, 0xb
// 004e774a  b8abaaaa2a           mov eax, 0x2aaaaaab
// 004e774f  f7ea                 imul edx
// 004e7751  d1fa                 sar edx, 1
// 004e7753  8bc2                 mov eax, edx
// 004e7755  c1e81f               shr eax, 0x1f
// 004e7758  03c2                 add eax, edx
// 004e775a  83f804               cmp eax, 4
// 004e775d  8bcd                 mov ecx, ebp
// 004e775f  7c71                 jl 0x4e77d2
// 004e7761  53                   push ebx
// 004e7762  8d5fdc               lea ebx, [edi - 0x24]
// 004e7765  8d4614               lea eax, [esi + 0x14]
// 004e7768  85f6                 test esi, esi
// 004e776a  7410                 je 0x4e777c
// 004e776c  d901                 fld dword ptr [ecx]
// 004e776e  d91e                 fstp dword ptr [esi]
// 004e7770  d94104               fld dword ptr [ecx + 4]
// 004e7773  d958f0               fstp dword ptr [eax - 0x10]
// 004e7776  d94108               fld dword ptr [ecx + 8]
// 004e7779  d958f4               fstp dword ptr [eax - 0xc]
// 004e777c  8d50f8               lea edx, [eax - 8]
// 004e777f  85d2                 test edx, edx
// 004e7781  7411                 je 0x4e7794
// 004e7783  d9410c               fld dword ptr [ecx + 0xc]
// 004e7786  d958f8               fstp dword ptr [eax - 8]
// 004e7789  d94110               fld dword ptr [ecx + 0x10]
// 004e778c  d958fc               fstp dword ptr [eax - 4]
// 004e778f  d94114               fld dword ptr [ecx + 0x14]
// 004e7792  d918                 fstp dword ptr [eax]
// 004e7794  8d5004               lea edx, [eax + 4]
// 004e7797  85d2                 test edx, edx
// 004e7799  7411                 je 0x4e77ac
// 004e779b  d94118               fld dword ptr [ecx + 0x18]
// 004e779e  d91a                 fstp dword ptr [edx]
// 004e77a0  d9411c               fld dword ptr [ecx + 0x1c]
// 004e77a3  d95808               fstp dword ptr [eax + 8]
// 004e77a6  d94120               fld dword ptr [ecx + 0x20]
// 004e77a9  d9580c               fstp dword ptr [eax + 0xc]
// 004e77ac  8d5010               lea edx, [eax + 0x10]
// 004e77af  85d2                 test edx, edx
// 004e77b1  7411                 je 0x4e77c4
// 004e77b3  d94124               fld dword ptr [ecx + 0x24]
// 004e77b6  d91a                 fstp dword ptr [edx]
// 004e77b8  d94128               fld dword ptr [ecx + 0x28]
// 004e77bb  d95814               fstp dword ptr [eax + 0x14]
// 004e77be  d9412c               fld dword ptr [ecx + 0x2c]
// 004e77c1  d95818               fstp dword ptr [eax + 0x18]
// 004e77c4  83c630               add esi, 0x30
// 004e77c7  83c130               add ecx, 0x30
// 004e77ca  83c030               add eax, 0x30
// 004e77cd  3bf3                 cmp esi, ebx
// 004e77cf  7c97                 jl 0x4e7768
// 004e77d1  5b                   pop ebx
// 004e77d2  3bf7                 cmp esi, edi
// 004e77d4  731e                 jae 0x4e77f4
// 004e77d6  85f6                 test esi, esi
// 004e77d8  7410                 je 0x4e77ea
// 004e77da  d901                 fld dword ptr [ecx]
// 004e77dc  d91e                 fstp dword ptr [esi]
// 004e77de  d94104               fld dword ptr [ecx + 4]
// 004e77e1  d95e04               fstp dword ptr [esi + 4]
// 004e77e4  d94108               fld dword ptr [ecx + 8]
// 004e77e7  d95e08               fstp dword ptr [esi + 8]
// 004e77ea  83c60c               add esi, 0xc
// 004e77ed  83c10c               add ecx, 0xc
// 004e77f0  3bf7                 cmp esi, edi
// 004e77f2  72e2                 jb 0x4e77d6
// 004e77f4  55                   push ebp
// 004e77f5  e886bb0000           call 0x4f3380
// 004e77fa  83c404               add esp, 4
// 004e77fd  5f                   pop edi
// 004e77fe  5e                   pop esi
// 004e77ff  5d                   pop ebp
// 004e7800  c20400               ret 4
// library rbxgs-render/Chunk.cpp (function ?realloc@?$Array@VVector3@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
