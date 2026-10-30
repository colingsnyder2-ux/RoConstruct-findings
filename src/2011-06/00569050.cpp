// from server: 100% by auto
// roc 2011-06 00569050  unit: seg_00560000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569050
//
// 00569050  53                   push ebx
// 00569051  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00569055  55                   push ebp
// 00569056  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0056905a  56                   push esi
// 0056905b  8b7304               mov esi, dword ptr [ebx + 4]
// 0056905e  57                   push edi
// 0056905f  85ed                 test ebp, ebp
// 00569061  7c05                 jl 0x569068
// 00569063  83fd02               cmp ebp, 2
// 00569066  7c18                 jl 0x569080
// 00569068  8b03                 mov eax, dword ptr [ebx]
// 0056906a  c740140e000000       mov dword ptr [eax + 0x14], 0xe
// 00569071  8b0b                 mov ecx, dword ptr [ebx]
// 00569073  896918               mov dword ptr [ecx + 0x18], ebp
// 00569076  8b13                 mov edx, dword ptr [ebx]
// 00569078  8b02                 mov eax, dword ptr [edx]
// 0056907a  53                   push ebx
// 0056907b  ffd0                 call eax
// 0056907d  83c404               add esp, 4
// 00569080  83fd01               cmp ebp, 1
// 00569083  7560                 jne 0x5690e5
// 00569085  8b7e44               mov edi, dword ptr [esi + 0x44]
// 00569088  85ff                 test edi, edi
// 0056908a  7422                 je 0x5690ae
// 0056908c  8d642400             lea esp, [esp]
// 00569090  807f2200             cmp byte ptr [edi + 0x22], 0
// 00569094  7411                 je 0x5690a7
// 00569096  8b5730               mov edx, dword ptr [edi + 0x30]
// 00569099  8d4f28               lea ecx, [edi + 0x28]
// 0056909c  51                   push ecx
// 0056909d  53                   push ebx
// 0056909e  c6472200             mov byte ptr [edi + 0x22], 0
// 005690a2  ffd2                 call edx
// 005690a4  83c408               add esp, 8
// 005690a7  8b7f24               mov edi, dword ptr [edi + 0x24]
// 005690aa  85ff                 test edi, edi
// 005690ac  75e2                 jne 0x569090
// 005690ae  8b7e48               mov edi, dword ptr [esi + 0x48]
// 005690b1  c7464400000000       mov dword ptr [esi + 0x44], 0
// 005690b8  85ff                 test edi, edi
// 005690ba  7422                 je 0x5690de
// 005690bc  8d642400             lea esp, [esp]
// 005690c0  807f2200             cmp byte ptr [edi + 0x22], 0
// 005690c4  7411                 je 0x5690d7
// 005690c6  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 005690c9  8d4728               lea eax, [edi + 0x28]
// 005690cc  50                   push eax
// 005690cd  53                   push ebx
// 005690ce  c6472200             mov byte ptr [edi + 0x22], 0
// 005690d2  ffd1                 call ecx
// 005690d4  83c408               add esp, 8
// 005690d7  8b7f24               mov edi, dword ptr [edi + 0x24]
// 005690da  85ff                 test edi, edi
// 005690dc  75e2                 jne 0x5690c0
// 005690de  c7464800000000       mov dword ptr [esi + 0x48], 0
// 005690e5  8b44ae3c             mov eax, dword ptr [esi + ebp*4 + 0x3c]
// 005690e9  c744ae3c00000000     mov dword ptr [esi + ebp*4 + 0x3c], 0
// 005690f1  85c0                 test eax, eax
// 005690f3  7424                 je 0x569119
// 005690f5  8b5008               mov edx, dword ptr [eax + 8]
// 005690f8  8b4804               mov ecx, dword ptr [eax + 4]
// 005690fb  8b38                 mov edi, dword ptr [eax]
// 005690fd  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 00569101  55                   push ebp
// 00569102  50                   push eax
// 00569103  53                   push ebx
// 00569104  e857900000           call 0x572160
// 00569109  296e4c               sub dword ptr [esi + 0x4c], ebp
// 0056910c  83c40c               add esp, 0xc
// 0056910f  8bc7                 mov eax, edi
// 00569111  85ff                 test edi, edi
// 00569113  75e0                 jne 0x5690f5
// 00569115  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00569119  8b44ae34             mov eax, dword ptr [esi + ebp*4 + 0x34]
// 0056911d  c744ae3400000000     mov dword ptr [esi + ebp*4 + 0x34], 0
// 00569125  85c0                 test eax, eax
// 00569127  7427                 je 0x569150
// 00569129  8da42400000000       lea esp, [esp]
// 00569130  8b5008               mov edx, dword ptr [eax + 8]
// 00569133  8b4804               mov ecx, dword ptr [eax + 4]
// 00569136  8b38                 mov edi, dword ptr [eax]
// 00569138  8d6c0a10             lea ebp, [edx + ecx + 0x10]
// 0056913c  55                   push ebp
// 0056913d  50                   push eax
// 0056913e  53                   push ebx
// 0056913f  e81c900000           call 0x572160
// 00569144  296e4c               sub dword ptr [esi + 0x4c], ebp
// 00569147  83c40c               add esp, 0xc
// 0056914a  8bc7                 mov eax, edi
// 0056914c  85ff                 test edi, edi
// 0056914e  75e0                 jne 0x569130
// 00569150  5f                   pop edi
// 00569151  5e                   pop esi
// 00569152  5d                   pop ebp
// 00569153  5b                   pop ebx
// 00569154  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _free_pool)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
