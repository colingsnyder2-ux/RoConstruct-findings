// roc 2012-06 009387d0  unit: seg_00930000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009387d0
//
// 009387d0  57                   push edi
// 009387d1  8b7c2408             mov edi, dword ptr [esp + 8]
// 009387d5  85ff                 test edi, edi
// 009387d7  751f                 jne 0x9387f8
// 009387d9  8b442410             mov eax, dword ptr [esp + 0x10]
// 009387dd  83caff               or edx, 0xffffffff
// 009387e0  895010               mov dword ptr [eax + 0x10], edx
// 009387e3  895014               mov dword ptr [eax + 0x14], edx
// 009387e6  c70008000000         mov dword ptr [eax], 8
// 009387ec  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 009387f3  8d4708               lea eax, [edi + 8]
// 009387f6  5f                   pop edi
// 009387f7  c3                   ret 
// 009387f8  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 009387fc  83e801               sub eax, 1
// 009387ff  53                   push ebx
// 00938800  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00938804  56                   push esi
// 00938805  781f                 js 0x938826
// 00938807  8b0f                 mov ecx, dword ptr [edi]
// 00938809  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0093880c  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 00938813  0fb70a               movzx ecx, word ptr [edx]
// 00938816  8d0c49               lea ecx, [ecx + ecx*2]
// 00938819  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 0093881c  7425                 je 0x938843
// 0093881e  48                   dec eax
// 0093881f  83ea02               sub edx, 2
// 00938822  85c0                 test eax, eax
// 00938824  7ded                 jge 0x938813
// 00938826  8b742418             mov esi, dword ptr [esp + 0x18]
// 0093882a  8b4708               mov eax, dword ptr [edi + 8]
// 0093882d  6a00                 push 0
// 0093882f  56                   push esi
// 00938830  53                   push ebx
// 00938831  50                   push eax
// 00938832  e899ffffff           call 0x9387d0
// 00938837  83c410               add esp, 0x10
// 0093883a  83f808               cmp eax, 8
// 0093883d  7553                 jne 0x938892
// 0093883f  5e                   pop esi
// 00938840  5b                   pop ebx
// 00938841  5f                   pop edi
// 00938842  c3                   ret 
// 00938843  85c0                 test eax, eax
// 00938845  7cdf                 jl 0x938826
// 00938847  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0093884b  83caff               or edx, 0xffffffff
// 0093884e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00938853  895110               mov dword ptr [ecx + 0x10], edx
// 00938856  895114               mov dword ptr [ecx + 0x14], edx
// 00938859  c70106000000         mov dword ptr [ecx], 6
// 0093885f  894108               mov dword ptr [ecx + 8], eax
// 00938862  7525                 jne 0x938889
// 00938864  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00938867  85c9                 test ecx, ecx
// 00938869  741e                 je 0x938889
// 0093886b  eb03                 jmp 0x938870
// 0093886d  8d4900               lea ecx, [ecx]
// 00938870  0fb65108             movzx edx, byte ptr [ecx + 8]
// 00938874  3bd0                 cmp edx, eax
// 00938876  7e0d                 jle 0x938885
// 00938878  8b09                 mov ecx, dword ptr [ecx]
// 0093887a  85c9                 test ecx, ecx
// 0093887c  75f2                 jne 0x938870
// 0093887e  5e                   pop esi
// 0093887f  5b                   pop ebx
// 00938880  8d4106               lea eax, [ecx + 6]
// 00938883  5f                   pop edi
// 00938884  c3                   ret 
// 00938885  c6410901             mov byte ptr [ecx + 9], 1
// 00938889  5e                   pop esi
// 0093888a  5b                   pop ebx
// 0093888b  b806000000           mov eax, 6
// 00938890  5f                   pop edi
// 00938891  c3                   ret 
// 00938892  56                   push esi
// 00938893  53                   push ebx
// 00938894  e8f7fdffff           call 0x938690
// 00938899  83c408               add esp, 8
// 0093889c  894608               mov dword ptr [esi + 8], eax
// 0093889f  c70607000000         mov dword ptr [esi], 7
// 009388a5  5e                   pop esi
// 009388a6  5b                   pop ebx
// 009388a7  b807000000           mov eax, 7
// 009388ac  5f                   pop edi
// 009388ad  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
