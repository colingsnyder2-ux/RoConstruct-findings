// roc 2008-06 00474440  unit: G3D::Texture  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474440
//
// 00474440  64a100000000         mov eax, dword ptr fs:[0]
// 00474446  6aff                 push -1
// 00474448  6881757d00           push 0x7d7581
// 0047444d  50                   push eax
// 0047444e  64892500000000       mov dword ptr fs:[0], esp
// 00474455  83ec08               sub esp, 8
// 00474458  55                   push ebp
// 00474459  56                   push esi
// 0047445a  57                   push edi
// 0047445b  8bf9                 mov edi, ecx
// 0047445d  8b4708               mov eax, dword ptr [edi + 8]
// 00474460  8b2f                 mov ebp, dword ptr [edi]
// 00474462  8d0440               lea eax, [eax + eax*2]
// 00474465  03c0                 add eax, eax
// 00474467  03c0                 add eax, eax
// 00474469  6a10                 push 0x10
// 0047446b  50                   push eax
// 0047446c  e80f410900           call 0x508580
// 00474471  8b4f08               mov ecx, dword ptr [edi + 8]
// 00474474  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00474478  83c408               add esp, 8
// 0047447b  3bd1                 cmp edx, ecx
// 0047447d  8907                 mov dword ptr [edi], eax
// 0047447f  7d02                 jge 0x474483
// 00474481  8bca                 mov ecx, edx
// 00474483  8d0c49               lea ecx, [ecx + ecx*2]
// 00474486  8bf0                 mov esi, eax
// 00474488  8d3c88               lea edi, [eax + ecx*4]
// 0047448b  53                   push ebx
// 0047448c  8bdd                 mov ebx, ebp
// 0047448e  89742410             mov dword ptr [esp + 0x10], esi
// 00474492  3bf7                 cmp esi, edi
// 00474494  733c                 jae 0x4744d2
// 00474496  eb08                 jmp 0x4744a0
// 00474498  8da42400000000       lea esp, [esp]
// 0047449f  90                   nop 
// 004744a0  89742414             mov dword ptr [esp + 0x14], esi
// 004744a4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004744ac  85f6                 test esi, esi
// 004744ae  740c                 je 0x4744bc
// 004744b0  53                   push ebx
// 004744b1  8bce                 mov ecx, esi
// 004744b3  e828ffffff           call 0x4743e0
// 004744b8  8b542428             mov edx, dword ptr [esp + 0x28]
// 004744bc  83c60c               add esi, 0xc
// 004744bf  83c30c               add ebx, 0xc
// 004744c2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004744ca  89742410             mov dword ptr [esp + 0x10], esi
// 004744ce  3bf7                 cmp esi, edi
// 004744d0  72ce                 jb 0x4744a0
// 004744d2  8d1452               lea edx, [edx + edx*2]
// 004744d5  8d7c9500             lea edi, [ebp + edx*4]
// 004744d9  8bf5                 mov esi, ebp
// 004744db  5b                   pop ebx
// 004744dc  3bef                 cmp ebp, edi
// 004744de  731c                 jae 0x4744fc
// 004744e0  8b06                 mov eax, dword ptr [esi]
// 004744e2  50                   push eax
// 004744e3  e838380900           call 0x507d20
// 004744e8  33c0                 xor eax, eax
// 004744ea  8906                 mov dword ptr [esi], eax
// 004744ec  894604               mov dword ptr [esi + 4], eax
// 004744ef  894608               mov dword ptr [esi + 8], eax
// 004744f2  83c60c               add esi, 0xc
// 004744f5  83c404               add esp, 4
// 004744f8  3bf7                 cmp esi, edi
// 004744fa  72e4                 jb 0x4744e0
// 004744fc  55                   push ebp
// 004744fd  e81e380900           call 0x507d20
// 00474502  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00474506  83c404               add esp, 4
// 00474509  5f                   pop edi
// 0047450a  5e                   pop esi
// 0047450b  5d                   pop ebp
// 0047450c  64890d00000000       mov dword ptr fs:[0], ecx
// 00474513  83c414               add esp, 0x14
// 00474516  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@V?$Array@PBX@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
