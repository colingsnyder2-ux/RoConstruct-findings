// roc 2008-06 007acf70  unit: RBX::RenderNew::Material::Level  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007acf70
//
// 007acf70  64a100000000         mov eax, dword ptr fs:[0]
// 007acf76  6aff                 push -1
// 007acf78  6881757d00           push 0x7d7581
// 007acf7d  50                   push eax
// 007acf7e  64892500000000       mov dword ptr fs:[0], esp
// 007acf85  83ec08               sub esp, 8
// 007acf88  55                   push ebp
// 007acf89  56                   push esi
// 007acf8a  57                   push edi
// 007acf8b  8bf9                 mov edi, ecx
// 007acf8d  8b4708               mov eax, dword ptr [edi + 8]
// 007acf90  8b2f                 mov ebp, dword ptr [edi]
// 007acf92  8d0cc500000000       lea ecx, [eax*8]
// 007acf99  2bc8                 sub ecx, eax
// 007acf9b  03c9                 add ecx, ecx
// 007acf9d  03c9                 add ecx, ecx
// 007acf9f  03c9                 add ecx, ecx
// 007acfa1  6a10                 push 0x10
// 007acfa3  51                   push ecx
// 007acfa4  e8d7b5d5ff           call 0x508580
// 007acfa9  8b4f08               mov ecx, dword ptr [edi + 8]
// 007acfac  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007acfb0  83c408               add esp, 8
// 007acfb3  3bd1                 cmp edx, ecx
// 007acfb5  8907                 mov dword ptr [edi], eax
// 007acfb7  7d02                 jge 0x7acfbb
// 007acfb9  8bca                 mov ecx, edx
// 007acfbb  8d34cd00000000       lea esi, [ecx*8]
// 007acfc2  2bf1                 sub esi, ecx
// 007acfc4  8d3cf0               lea edi, [eax + esi*8]
// 007acfc7  8bf0                 mov esi, eax
// 007acfc9  53                   push ebx
// 007acfca  8bdd                 mov ebx, ebp
// 007acfcc  89742410             mov dword ptr [esp + 0x10], esi
// 007acfd0  3bf7                 cmp esi, edi
// 007acfd2  733e                 jae 0x7ad012
// 007acfd4  eb0a                 jmp 0x7acfe0
// 007acfd6  8da42400000000       lea esp, [esp]
// 007acfdd  8d4900               lea ecx, [ecx]
// 007acfe0  89742414             mov dword ptr [esp + 0x14], esi
// 007acfe4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007acfec  85f6                 test esi, esi
// 007acfee  740c                 je 0x7acffc
// 007acff0  53                   push ebx
// 007acff1  8bce                 mov ecx, esi
// 007acff3  e848feffff           call 0x7ace40
// 007acff8  8b542428             mov edx, dword ptr [esp + 0x28]
// 007acffc  83c638               add esi, 0x38
// 007acfff  83c338               add ebx, 0x38
// 007ad002  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007ad00a  89742410             mov dword ptr [esp + 0x10], esi
// 007ad00e  3bf7                 cmp esi, edi
// 007ad010  72ce                 jb 0x7acfe0
// 007ad012  8d04d500000000       lea eax, [edx*8]
// 007ad019  2bc2                 sub eax, edx
// 007ad01b  8d7cc500             lea edi, [ebp + eax*8]
// 007ad01f  8bf5                 mov esi, ebp
// 007ad021  5b                   pop ebx
// 007ad022  3bef                 cmp ebp, edi
// 007ad024  7312                 jae 0x7ad038
// 007ad026  8b16                 mov edx, dword ptr [esi]
// 007ad028  8b4204               mov eax, dword ptr [edx + 4]
// 007ad02b  6a00                 push 0
// 007ad02d  8bce                 mov ecx, esi
// 007ad02f  ffd0                 call eax
// 007ad031  83c638               add esi, 0x38
// 007ad034  3bf7                 cmp esi, edi
// 007ad036  72ee                 jb 0x7ad026
// 007ad038  55                   push ebp
// 007ad039  e8e2acd5ff           call 0x507d20
// 007ad03e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007ad042  83c404               add esp, 4
// 007ad045  5f                   pop edi
// 007ad046  5e                   pop esi
// 007ad047  5d                   pop ebp
// 007ad048  64890d00000000       mov dword ptr fs:[0], ecx
// 007ad04f  83c414               add esp, 0x14
// 007ad052  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?realloc@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
