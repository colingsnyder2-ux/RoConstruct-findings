// roc 2007-08 00613e90  unit: seg_00610000  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613e90
//
// 00613e90  57                   push edi
// 00613e91  8b7c2408             mov edi, dword ptr [esp + 8]
// 00613e95  85ff                 test edi, edi
// 00613e97  7521                 jne 0x613eba
// 00613e99  8b442410             mov eax, dword ptr [esp + 0x10]
// 00613e9d  83caff               or edx, 0xffffffff
// 00613ea0  895010               mov dword ptr [eax + 0x10], edx
// 00613ea3  895014               mov dword ptr [eax + 0x14], edx
// 00613ea6  c70008000000         mov dword ptr [eax], 8
// 00613eac  c74008ff000000       mov dword ptr [eax + 8], 0xff
// 00613eb3  b808000000           mov eax, 8
// 00613eb8  5f                   pop edi
// 00613eb9  c3                   ret 
// 00613eba  0fb64732             movzx eax, byte ptr [edi + 0x32]
// 00613ebe  83e801               sub eax, 1
// 00613ec1  53                   push ebx
// 00613ec2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00613ec6  56                   push esi
// 00613ec7  7821                 js 0x613eea
// 00613ec9  8b0f                 mov ecx, dword ptr [edi]
// 00613ecb  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00613ece  8d9447ac000000       lea edx, [edi + eax*2 + 0xac]
// 00613ed5  0fb70a               movzx ecx, word ptr [edx]
// 00613ed8  8d0c49               lea ecx, [ecx + ecx*2]
// 00613edb  3b1c8e               cmp ebx, dword ptr [esi + ecx*4]
// 00613ede  7427                 je 0x613f07
// 00613ee0  83e801               sub eax, 1
// 00613ee3  83ea02               sub edx, 2
// 00613ee6  85c0                 test eax, eax
// 00613ee8  7deb                 jge 0x613ed5
// 00613eea  8b742418             mov esi, dword ptr [esp + 0x18]
// 00613eee  8b4708               mov eax, dword ptr [edi + 8]
// 00613ef1  6a00                 push 0
// 00613ef3  56                   push esi
// 00613ef4  53                   push ebx
// 00613ef5  50                   push eax
// 00613ef6  e895ffffff           call 0x613e90
// 00613efb  83c410               add esp, 0x10
// 00613efe  83f808               cmp eax, 8
// 00613f01  7551                 jne 0x613f54
// 00613f03  5e                   pop esi
// 00613f04  5b                   pop ebx
// 00613f05  5f                   pop edi
// 00613f06  c3                   ret 
// 00613f07  85c0                 test eax, eax
// 00613f09  7cdf                 jl 0x613eea
// 00613f0b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00613f0f  83caff               or edx, 0xffffffff
// 00613f12  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00613f17  895110               mov dword ptr [ecx + 0x10], edx
// 00613f1a  895114               mov dword ptr [ecx + 0x14], edx
// 00613f1d  c70106000000         mov dword ptr [ecx], 6
// 00613f23  894108               mov dword ptr [ecx + 8], eax
// 00613f26  7523                 jne 0x613f4b
// 00613f28  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00613f2b  85c9                 test ecx, ecx
// 00613f2d  741c                 je 0x613f4b
// 00613f2f  90                   nop 
// 00613f30  0fb65108             movzx edx, byte ptr [ecx + 8]
// 00613f34  3bd0                 cmp edx, eax
// 00613f36  7e0f                 jle 0x613f47
// 00613f38  8b09                 mov ecx, dword ptr [ecx]
// 00613f3a  85c9                 test ecx, ecx
// 00613f3c  75f2                 jne 0x613f30
// 00613f3e  5e                   pop esi
// 00613f3f  5b                   pop ebx
// 00613f40  b806000000           mov eax, 6
// 00613f45  5f                   pop edi
// 00613f46  c3                   ret 
// 00613f47  c6410901             mov byte ptr [ecx + 9], 1
// 00613f4b  5e                   pop esi
// 00613f4c  5b                   pop ebx
// 00613f4d  b806000000           mov eax, 6
// 00613f52  5f                   pop edi
// 00613f53  c3                   ret 
// 00613f54  56                   push esi
// 00613f55  53                   push ebx
// 00613f56  e8e5fdffff           call 0x613d40
// 00613f5b  83c408               add esp, 8
// 00613f5e  894608               mov dword ptr [esi + 8], eax
// 00613f61  c70607000000         mov dword ptr [esi], 7
// 00613f67  5e                   pop esi
// 00613f68  5b                   pop ebx
// 00613f69  b807000000           mov eax, 7
// 00613f6e  5f                   pop edi
// 00613f6f  c3                   ret 
// library lua-5.1.2/roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp (function ?singlevaraux@@YAHPAUFuncState@@PATTString@@PAUexpdesc@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.2 roc_espeon_nativeparlistcontext810a97d37dd18cf0.cpp
