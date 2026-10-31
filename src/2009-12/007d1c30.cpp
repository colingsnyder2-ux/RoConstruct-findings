// roc 2009-12 007d1c30  unit: seg_007d0000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d1c30
//
// 007d1c30  57                   push edi
// 007d1c31  8b7c2408             mov edi, dword ptr [esp + 8]
// 007d1c35  85ff                 test edi, edi
// 007d1c37  751f                 jne 0x7d1c58
// 007d1c39  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d1c3d  83caff               or edx, 0xffffffff
// 007d1c40  895010               mov dword ptr [eax + 0x10], edx
// 007d1c43  895014               mov dword ptr [eax + 0x14], edx
// 007d1c46  c70008000000         mov dword ptr [eax], 8
// 007d1c4c  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 007d1c53  8d4708               lea eax, [edi + 8]
// 007d1c56  5f                   pop edi
// 007d1c57  c3                   ret 
// 007d1c58  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 007d1c5c  83e801               sub eax, 1
// 007d1c5f  53                   push ebx
// 007d1c60  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007d1c64  56                   push esi
// 007d1c65  781f                 js 0x7d1c86
// 007d1c67  8b0f                 mov ecx, dword ptr [edi]
// 007d1c69  8b7118               mov esi, dword ptr [ecx + 0x18]
// 007d1c6c  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 007d1c73  0fb70a               movzx ecx, word ptr [edx]
// 007d1c76  8d0c49               lea ecx, [ecx + ecx*2]
// 007d1c79  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 007d1c7c  7425                 je 0x7d1ca3
// 007d1c7e  48                   dec eax
// 007d1c7f  83ea02               sub edx, 2
// 007d1c82  85c0                 test eax, eax
// 007d1c84  7ded                 jge 0x7d1c73
// 007d1c86  8b742418             mov esi, dword ptr [esp + 0x18]
// 007d1c8a  8b4708               mov eax, dword ptr [edi + 8]
// 007d1c8d  6a00                 push 0
// 007d1c8f  56                   push esi
// 007d1c90  53                   push ebx
// 007d1c91  50                   push eax
// 007d1c92  e899ffffff           call 0x7d1c30
// 007d1c97  83c410               add esp, 0x10
// 007d1c9a  83f808               cmp eax, 8
// 007d1c9d  7553                 jne 0x7d1cf2
// 007d1c9f  5e                   pop esi
// 007d1ca0  5b                   pop ebx
// 007d1ca1  5f                   pop edi
// 007d1ca2  c3                   ret 
// 007d1ca3  85c0                 test eax, eax
// 007d1ca5  7cdf                 jl 0x7d1c86
// 007d1ca7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007d1cab  83caff               or edx, 0xffffffff
// 007d1cae  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007d1cb3  895110               mov dword ptr [ecx + 0x10], edx
// 007d1cb6  895114               mov dword ptr [ecx + 0x14], edx
// 007d1cb9  c70106000000         mov dword ptr [ecx], 6
// 007d1cbf  894108               mov dword ptr [ecx + 8], eax
// 007d1cc2  7525                 jne 0x7d1ce9
// 007d1cc4  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 007d1cc7  85c9                 test ecx, ecx
// 007d1cc9  741e                 je 0x7d1ce9
// 007d1ccb  eb03                 jmp 0x7d1cd0
// 007d1ccd  8d4900               lea ecx, [ecx]
// 007d1cd0  0fb65108             movzx edx, byte ptr [ecx + 8]
// 007d1cd4  3bd0                 cmp edx, eax
// 007d1cd6  7e0d                 jle 0x7d1ce5
// 007d1cd8  8b09                 mov ecx, dword ptr [ecx]
// 007d1cda  85c9                 test ecx, ecx
// 007d1cdc  75f2                 jne 0x7d1cd0
// 007d1cde  5e                   pop esi
// 007d1cdf  5b                   pop ebx
// 007d1ce0  8d4106               lea eax, [ecx + 6]
// 007d1ce3  5f                   pop edi
// 007d1ce4  c3                   ret 
// 007d1ce5  c6410901             mov byte ptr [ecx + 9], 1
// 007d1ce9  5e                   pop esi
// 007d1cea  5b                   pop ebx
// 007d1ceb  b806000000           mov eax, 6
// 007d1cf0  5f                   pop edi
// 007d1cf1  c3                   ret 
// 007d1cf2  56                   push esi
// 007d1cf3  53                   push ebx
// 007d1cf4  e8f7fdffff           call 0x7d1af0
// 007d1cf9  83c408               add esp, 8
// 007d1cfc  894608               mov dword ptr [esi + 8], eax
// 007d1cff  c70607000000         mov dword ptr [esi], 7
// 007d1d05  5e                   pop esi
// 007d1d06  5b                   pop ebx
// 007d1d07  b807000000           mov eax, 7
// 007d1d0c  5f                   pop edi
// 007d1d0d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
