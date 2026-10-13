// roc 2008-06 0065c290  unit: RBX::BallBallContact  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065c290
//
// 0065c290  55                   push ebp
// 0065c291  56                   push esi
// 0065c292  8bf0                 mov esi, eax
// 0065c294  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0065c297  0fb64515             movzx eax, byte ptr [ebp + 0x15]
// 0065c29b  57                   push edi
// 0065c29c  83f804               cmp eax, 4
// 0065c29f  0f87cd000000         ja 0x65c372
// 0065c2a5  ff248578c36500       jmp dword ptr [eax*4 + 0x65c378]
// 0065c2ac  8bfe                 mov edi, esi
// 0065c2ae  e8adfdffff           call 0x65c060
// 0065c2b3  5f                   pop edi
// 0065c2b4  5e                   pop esi
// 0065c2b5  33c0                 xor eax, eax
// 0065c2b7  5d                   pop ebp
// 0065c2b8  c3                   ret 
// 0065c2b9  837d2400             cmp dword ptr [ebp + 0x24], 0
// 0065c2bd  740a                 je 0x65c2c9
// 0065c2bf  5f                   pop edi
// 0065c2c0  5e                   pop esi
// 0065c2c1  8bc5                 mov eax, ebp
// 0065c2c3  5d                   pop ebp
// 0065c2c4  e997f8ffff           jmp 0x65bb60
// 0065c2c9  56                   push esi
// 0065c2ca  e841feffff           call 0x65c110
// 0065c2cf  83c404               add esp, 4
// 0065c2d2  5f                   pop edi
// 0065c2d3  5e                   pop esi
// 0065c2d4  33c0                 xor eax, eax
// 0065c2d6  5d                   pop ebp
// 0065c2d7  c3                   ret 
// 0065c2d8  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0065c2db  8b4d00               mov ecx, dword ptr [ebp]
// 0065c2de  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 0065c2e1  8d0c81               lea ecx, [ecx + eax*4]
// 0065c2e4  6afd                 push -3
// 0065c2e6  51                   push ecx
// 0065c2e7  40                   inc eax
// 0065c2e8  56                   push esi
// 0065c2e9  894518               mov dword ptr [ebp + 0x18], eax
// 0065c2ec  e80ffbffff           call 0x65be00
// 0065c2f1  8b5518               mov edx, dword ptr [ebp + 0x18]
// 0065c2f4  83c40c               add esp, 0xc
// 0065c2f7  3b5508               cmp edx, dword ptr [ebp + 8]
// 0065c2fa  7c04                 jl 0x65c300
// 0065c2fc  c6451503             mov byte ptr [ebp + 0x15], 3
// 0065c300  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0065c303  2bc7                 sub eax, edi
// 0065c305  014548               add dword ptr [ebp + 0x48], eax
// 0065c308  5f                   pop edi
// 0065c309  5e                   pop esi
// 0065c30a  b80a000000           mov eax, 0xa
// 0065c30f  5d                   pop ebp
// 0065c310  c3                   ret 
// 0065c311  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0065c314  8b7d44               mov edi, dword ptr [ebp + 0x44]
// 0065c317  6a28                 push 0x28
// 0065c319  51                   push ecx
// 0065c31a  56                   push esi
// 0065c31b  e8e0faffff           call 0x65be00
// 0065c320  83c40c               add esp, 0xc
// 0065c323  894520               mov dword ptr [ebp + 0x20], eax
// 0065c326  833800               cmp dword ptr [eax], 0
// 0065c329  750d                 jne 0x65c338
// 0065c32b  53                   push ebx
// 0065c32c  8bde                 mov ebx, esi
// 0065c32e  e85dfbffff           call 0x65be90
// 0065c333  c6451504             mov byte ptr [ebp + 0x15], 4
// 0065c337  5b                   pop ebx
// 0065c338  8b5544               mov edx, dword ptr [ebp + 0x44]
// 0065c33b  2bd7                 sub edx, edi
// 0065c33d  015548               add dword ptr [ebp + 0x48], edx
// 0065c340  5f                   pop edi
// 0065c341  5e                   pop esi
// 0065c342  b890010000           mov eax, 0x190
// 0065c347  5d                   pop ebp
// 0065c348  c3                   ret 
// 0065c349  33c0                 xor eax, eax
// 0065c34b  394530               cmp dword ptr [ebp + 0x30], eax
// 0065c34e  741c                 je 0x65c36c
// 0065c350  e8abfbffff           call 0x65bf00
// 0065c355  8b4548               mov eax, dword ptr [ebp + 0x48]
// 0065c358  83f864               cmp eax, 0x64
// 0065c35b  7606                 jbe 0x65c363
// 0065c35d  83c09c               add eax, -0x64
// 0065c360  894548               mov dword ptr [ebp + 0x48], eax
// 0065c363  5f                   pop edi
// 0065c364  5e                   pop esi
// 0065c365  b864000000           mov eax, 0x64
// 0065c36a  5d                   pop ebp
// 0065c36b  c3                   ret 
// 0065c36c  884515               mov byte ptr [ebp + 0x15], al
// 0065c36f  89454c               mov dword ptr [ebp + 0x4c], eax
// 0065c372  5f                   pop edi
// 0065c373  5e                   pop esi
// 0065c374  33c0                 xor eax, eax
// 0065c376  5d                   pop ebp
// 0065c377  c3                   ret 
// 0065c378  ac                   lodsb al, byte ptr [esi]
// 0065c379  c26500               ret 0x65
// 0065c37c  b9c26500d8           mov ecx, 0xd80065c2
// 0065c381  c26500               ret 0x65
// 0065c384  11c3                 adc ebx, eax
// 0065c386  650049c3             add byte ptr gs:[ecx - 0x3d], cl
// library lua-5.1.1/lgc.c (function _singlestep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lgc.c
