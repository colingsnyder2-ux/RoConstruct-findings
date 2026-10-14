// roc 2008-06 006774a0  unit: RBX::AdornG3D  size: 394 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006774a0
//
// 006774a0  83ec3c               sub esp, 0x3c
// 006774a3  53                   push ebx
// 006774a4  55                   push ebp
// 006774a5  56                   push esi
// 006774a6  8b742458             mov esi, dword ptr [esp + 0x58]
// 006774aa  b856555555           mov eax, 0x55555556
// 006774af  f7ee                 imul esi
// 006774b1  8bc2                 mov eax, edx
// 006774b3  c1e81f               shr eax, 0x1f
// 006774b6  03c2                 add eax, edx
// 006774b8  8d0440               lea eax, [eax + eax*2]
// 006774bb  33d2                 xor edx, edx
// 006774bd  8bce                 mov ecx, esi
// 006774bf  2bc8                 sub ecx, eax
// 006774c1  83fe03               cmp esi, 3
// 006774c4  0f9cc2               setl dl
// 006774c7  8d4101               lea eax, [ecx + 1]
// 006774ca  be03000000           mov esi, 3
// 006774cf  57                   push edi
// 006774d0  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 006774d4  c744245400000000     mov dword ptr [esp + 0x54], 0
// 006774dc  8d5412ff             lea edx, [edx + edx - 1]
// 006774e0  8954245c             mov dword ptr [esp + 0x5c], edx
// 006774e4  db44245c             fild dword ptr [esp + 0x5c]
// 006774e8  99                   cdq 
// 006774e9  f7fe                 idiv esi
// 006774eb  d80c8f               fmul dword ptr [edi + ecx*4]
// 006774ee  d9ee                 fldz 
// 006774f0  d954241c             fst dword ptr [esp + 0x1c]
// 006774f4  d9542420             fst dword ptr [esp + 0x20]
// 006774f8  d9542424             fst dword ptr [esp + 0x24]
// 006774fc  d9542428             fst dword ptr [esp + 0x28]
// 00677500  d954242c             fst dword ptr [esp + 0x2c]
// 00677504  d95c2430             fstp dword ptr [esp + 0x30]
// 00677508  d9c0                 fld st(0)
// 0067750a  d9442458             fld dword ptr [esp + 0x58]
// 0067750e  dce9                 fsub st(1), st(0)
// 00677510  d9c9                 fxch st(1)
// 00677512  d95c8c1c             fstp dword ptr [esp + ecx*4 + 0x1c]
// 00677516  dcc1                 fadd st(1), st(0)
// 00677518  d9c9                 fxch st(1)
// 0067751a  8d4102               lea eax, [ecx + 2]
// 0067751d  d95c8c28             fstp dword ptr [esp + ecx*4 + 0x28]
// 00677521  b903000000           mov ecx, 3
// 00677526  8bf2                 mov esi, edx
// 00677528  99                   cdq 
// 00677529  f7f9                 idiv ecx
// 0067752b  89742414             mov dword ptr [esp + 0x14], esi
// 0067752f  89542418             mov dword ptr [esp + 0x18], edx
// 00677533  eb17                 jmp 0x67754c
// 00677535  eb09                 jmp 0x677540
// 00677537  8da42400000000       lea esp, [esp]
// 0067753e  8bff                 mov edi, edi
// 00677540  d9442458             fld dword ptr [esp + 0x58]
// 00677544  8b742414             mov esi, dword ptr [esp + 0x14]
// 00677548  8b542418             mov edx, dword ptr [esp + 0x18]
// 0067754c  837c245400           cmp dword ptr [esp + 0x54], 0
// 00677551  7411                 je 0x677564
// 00677553  8bc6                 mov eax, esi
// 00677555  83cdff               or ebp, 0xffffffff
// 00677558  8944245c             mov dword ptr [esp + 0x5c], eax
// 0067755c  8bda                 mov ebx, edx
// 0067755e  896c2410             mov dword ptr [esp + 0x10], ebp
// 00677562  eb24                 jmp 0x677588
// 00677564  83cdff               or ebp, 0xffffffff
// 00677567  8954245c             mov dword ptr [esp + 0x5c], edx
// 0067756b  8bde                 mov ebx, esi
// 0067756d  8bc2                 mov eax, edx
// 0067756f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00677573  eb13                 jmp 0x677588
// 00677575  eb09                 jmp 0x677580
// 00677577  8da42400000000       lea esp, [esp]
// 0067757e  8bff                 mov edi, edi
// 00677580  d9442458             fld dword ptr [esp + 0x58]
// 00677584  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00677588  db442410             fild dword ptr [esp + 0x10]
// 0067758c  8b542450             mov edx, dword ptr [esp + 0x50]
// 00677590  8b32                 mov esi, dword ptr [edx]
// 00677592  83c640               add esi, 0x40
// 00677595  d80c87               fmul dword ptr [edi + eax*4]
// 00677598  d9c0                 fld st(0)
// 0067759a  d8e2                 fsub st(2)
// 0067759c  d95c841c             fstp dword ptr [esp + eax*4 + 0x1c]
// 006775a0  d8c1                 fadd st(1)
// 006775a2  d95c8428             fstp dword ptr [esp + eax*4 + 0x28]
// 006775a6  d9049f               fld dword ptr [edi + ebx*4]
// 006775a9  d9e0                 fchs 
// 006775ab  d8e1                 fsub st(1)
// 006775ad  d95c9c1c             fstp dword ptr [esp + ebx*4 + 0x1c]
// 006775b1  d8049f               fadd dword ptr [edi + ebx*4]
// 006775b4  d95c9c28             fstp dword ptr [esp + ebx*4 + 0x28]
// 006775b8  d944241c             fld dword ptr [esp + 0x1c]
// 006775bc  d95c2434             fstp dword ptr [esp + 0x34]
// 006775c0  d9442420             fld dword ptr [esp + 0x20]
// 006775c4  d95c2438             fstp dword ptr [esp + 0x38]
// 006775c8  d9442424             fld dword ptr [esp + 0x24]
// 006775cc  d95c243c             fstp dword ptr [esp + 0x3c]
// 006775d0  d9442428             fld dword ptr [esp + 0x28]
// 006775d4  d95c2440             fstp dword ptr [esp + 0x40]
// 006775d8  d944242c             fld dword ptr [esp + 0x2c]
// 006775dc  d95c2444             fstp dword ptr [esp + 0x44]
// 006775e0  d9442430             fld dword ptr [esp + 0x30]
// 006775e4  d95c2448             fstp dword ptr [esp + 0x48]
// 006775e8  e823391400           call 0x7baf10
// 006775ed  8b16                 mov edx, dword ptr [esi]
// 006775ef  50                   push eax
// 006775f0  8b442464             mov eax, dword ptr [esp + 0x64]
// 006775f4  50                   push eax
// 006775f5  8d4c243c             lea ecx, [esp + 0x3c]
// 006775f9  51                   push ecx
// 006775fa  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 006775fe  ffd2                 call edx
// 00677600  83c502               add ebp, 2
// 00677603  83fd01               cmp ebp, 1
// 00677606  896c2410             mov dword ptr [esp + 0x10], ebp
// 0067760a  0f8e70ffffff         jle 0x677580
// 00677610  8b442454             mov eax, dword ptr [esp + 0x54]
// 00677614  40                   inc eax
// 00677615  83f802               cmp eax, 2
// 00677618  89442454             mov dword ptr [esp + 0x54], eax
// 0067761c  0f8c1effffff         jl 0x677540
// 00677622  5f                   pop edi
// 00677623  5e                   pop esi
// 00677624  5d                   pop ebp
// 00677625  5b                   pop ebx
// 00677626  83c43c               add esp, 0x3c
// 00677629  c3                   ret 
// library openrbx-client/Rendering\AppDraw\DrawAdorn.cpp (function ?surfaceBorder@DrawAdorn@RBX@@CAXPAVAdorn@2@ABVVector3@G3D@@MHABVColor4@5@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client Rendering/AppDraw/DrawAdorn.cpp
