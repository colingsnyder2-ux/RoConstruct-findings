// roc 2009-06 006edbe0  unit: seg_006e0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edbe0
//
// 006edbe0  57                   push edi
// 006edbe1  8b7c2408             mov edi, dword ptr [esp + 8]
// 006edbe5  85ff                 test edi, edi
// 006edbe7  751f                 jne 0x6edc08
// 006edbe9  8b442410             mov eax, dword ptr [esp + 0x10]
// 006edbed  83caff               or edx, 0xffffffff
// 006edbf0  895010               mov dword ptr [eax + 0x10], edx
// 006edbf3  895014               mov dword ptr [eax + 0x14], edx
// 006edbf6  c70008000000         mov dword ptr [eax], 8
// 006edbfc  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 006edc03  8d4708               lea eax, [edi + 8]
// 006edc06  5f                   pop edi
// 006edc07  c3                   ret 
// 006edc08  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 006edc0c  83e801               sub eax, 1
// 006edc0f  53                   push ebx
// 006edc10  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006edc14  56                   push esi
// 006edc15  781f                 js 0x6edc36
// 006edc17  8b0f                 mov ecx, dword ptr [edi]
// 006edc19  8b7118               mov esi, dword ptr [ecx + 0x18]
// 006edc1c  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 006edc23  0fb70a               movzx ecx, word ptr [edx]
// 006edc26  8d0c49               lea ecx, [ecx + ecx*2]
// 006edc29  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 006edc2c  7425                 je 0x6edc53
// 006edc2e  48                   dec eax
// 006edc2f  83ea02               sub edx, 2
// 006edc32  85c0                 test eax, eax
// 006edc34  7ded                 jge 0x6edc23
// 006edc36  8b742418             mov esi, dword ptr [esp + 0x18]
// 006edc3a  8b4708               mov eax, dword ptr [edi + 8]
// 006edc3d  6a00                 push 0
// 006edc3f  56                   push esi
// 006edc40  53                   push ebx
// 006edc41  50                   push eax
// 006edc42  e899ffffff           call 0x6edbe0
// 006edc47  83c410               add esp, 0x10
// 006edc4a  83f808               cmp eax, 8
// 006edc4d  7553                 jne 0x6edca2
// 006edc4f  5e                   pop esi
// 006edc50  5b                   pop ebx
// 006edc51  5f                   pop edi
// 006edc52  c3                   ret 
// 006edc53  85c0                 test eax, eax
// 006edc55  7cdf                 jl 0x6edc36
// 006edc57  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006edc5b  83caff               or edx, 0xffffffff
// 006edc5e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006edc63  895110               mov dword ptr [ecx + 0x10], edx
// 006edc66  895114               mov dword ptr [ecx + 0x14], edx
// 006edc69  c70106000000         mov dword ptr [ecx], 6
// 006edc6f  894108               mov dword ptr [ecx + 8], eax
// 006edc72  7525                 jne 0x6edc99
// 006edc74  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 006edc77  85c9                 test ecx, ecx
// 006edc79  741e                 je 0x6edc99
// 006edc7b  eb03                 jmp 0x6edc80
// 006edc7d  8d4900               lea ecx, [ecx]
// 006edc80  0fb65108             movzx edx, byte ptr [ecx + 8]
// 006edc84  3bd0                 cmp edx, eax
// 006edc86  7e0d                 jle 0x6edc95
// 006edc88  8b09                 mov ecx, dword ptr [ecx]
// 006edc8a  85c9                 test ecx, ecx
// 006edc8c  75f2                 jne 0x6edc80
// 006edc8e  5e                   pop esi
// 006edc8f  5b                   pop ebx
// 006edc90  8d4106               lea eax, [ecx + 6]
// 006edc93  5f                   pop edi
// 006edc94  c3                   ret 
// 006edc95  c6410901             mov byte ptr [ecx + 9], 1
// 006edc99  5e                   pop esi
// 006edc9a  5b                   pop ebx
// 006edc9b  b806000000           mov eax, 6
// 006edca0  5f                   pop edi
// 006edca1  c3                   ret 
// 006edca2  56                   push esi
// 006edca3  53                   push ebx
// 006edca4  e8f7fdffff           call 0x6edaa0
// 006edca9  83c408               add esp, 8
// 006edcac  894608               mov dword ptr [esi + 8], eax
// 006edcaf  c70607000000         mov dword ptr [esi], 7
// 006edcb5  5e                   pop esi
// 006edcb6  5b                   pop ebx
// 006edcb7  b807000000           mov eax, 7
// 006edcbc  5f                   pop edi
// 006edcbd  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
