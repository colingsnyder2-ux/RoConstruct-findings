// roc 2010-06 0077ee80  unit: seg_00770000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ee80
//
// 0077ee80  57                   push edi
// 0077ee81  8b7c2408             mov edi, dword ptr [esp + 8]
// 0077ee85  85ff                 test edi, edi
// 0077ee87  751f                 jne 0x77eea8
// 0077ee89  8b442410             mov eax, dword ptr [esp + 0x10]
// 0077ee8d  83caff               or edx, 0xffffffff
// 0077ee90  895010               mov dword ptr [eax + 0x10], edx
// 0077ee93  895014               mov dword ptr [eax + 0x14], edx
// 0077ee96  c70008000000         mov dword ptr [eax], 8
// 0077ee9c  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 0077eea3  8d4708               lea eax, [edi + 8]
// 0077eea6  5f                   pop edi
// 0077eea7  c3                   ret 
// 0077eea8  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 0077eeac  83e801               sub eax, 1
// 0077eeaf  53                   push ebx
// 0077eeb0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0077eeb4  56                   push esi
// 0077eeb5  781f                 js 0x77eed6
// 0077eeb7  8b0f                 mov ecx, dword ptr [edi]
// 0077eeb9  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0077eebc  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 0077eec3  0fb70a               movzx ecx, word ptr [edx]
// 0077eec6  8d0c49               lea ecx, [ecx + ecx*2]
// 0077eec9  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 0077eecc  7425                 je 0x77eef3
// 0077eece  48                   dec eax
// 0077eecf  83ea02               sub edx, 2
// 0077eed2  85c0                 test eax, eax
// 0077eed4  7ded                 jge 0x77eec3
// 0077eed6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0077eeda  8b4708               mov eax, dword ptr [edi + 8]
// 0077eedd  6a00                 push 0
// 0077eedf  56                   push esi
// 0077eee0  53                   push ebx
// 0077eee1  50                   push eax
// 0077eee2  e899ffffff           call 0x77ee80
// 0077eee7  83c410               add esp, 0x10
// 0077eeea  83f808               cmp eax, 8
// 0077eeed  7553                 jne 0x77ef42
// 0077eeef  5e                   pop esi
// 0077eef0  5b                   pop ebx
// 0077eef1  5f                   pop edi
// 0077eef2  c3                   ret 
// 0077eef3  85c0                 test eax, eax
// 0077eef5  7cdf                 jl 0x77eed6
// 0077eef7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077eefb  83caff               or edx, 0xffffffff
// 0077eefe  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0077ef03  895110               mov dword ptr [ecx + 0x10], edx
// 0077ef06  895114               mov dword ptr [ecx + 0x14], edx
// 0077ef09  c70106000000         mov dword ptr [ecx], 6
// 0077ef0f  894108               mov dword ptr [ecx + 8], eax
// 0077ef12  7525                 jne 0x77ef39
// 0077ef14  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0077ef17  85c9                 test ecx, ecx
// 0077ef19  741e                 je 0x77ef39
// 0077ef1b  eb03                 jmp 0x77ef20
// 0077ef1d  8d4900               lea ecx, [ecx]
// 0077ef20  0fb65108             movzx edx, byte ptr [ecx + 8]
// 0077ef24  3bd0                 cmp edx, eax
// 0077ef26  7e0d                 jle 0x77ef35
// 0077ef28  8b09                 mov ecx, dword ptr [ecx]
// 0077ef2a  85c9                 test ecx, ecx
// 0077ef2c  75f2                 jne 0x77ef20
// 0077ef2e  5e                   pop esi
// 0077ef2f  5b                   pop ebx
// 0077ef30  8d4106               lea eax, [ecx + 6]
// 0077ef33  5f                   pop edi
// 0077ef34  c3                   ret 
// 0077ef35  c6410901             mov byte ptr [ecx + 9], 1
// 0077ef39  5e                   pop esi
// 0077ef3a  5b                   pop ebx
// 0077ef3b  b806000000           mov eax, 6
// 0077ef40  5f                   pop edi
// 0077ef41  c3                   ret 
// 0077ef42  56                   push esi
// 0077ef43  53                   push ebx
// 0077ef44  e8f7fdffff           call 0x77ed40
// 0077ef49  83c408               add esp, 8
// 0077ef4c  894608               mov dword ptr [esi + 8], eax
// 0077ef4f  c70607000000         mov dword ptr [esi], 7
// 0077ef55  5e                   pop esi
// 0077ef56  5b                   pop ebx
// 0077ef57  b807000000           mov eax, 7
// 0077ef5c  5f                   pop edi
// 0077ef5d  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
