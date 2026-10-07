// roc 2012-06 00667420  unit: seg_00660000  size: 384 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667420
//
// 00667420  53                   push ebx
// 00667421  55                   push ebp
// 00667422  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00667426  56                   push esi
// 00667427  8bf0                 mov esi, eax
// 00667429  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066742d  57                   push edi
// 0066742e  0fbf38               movsx edi, word ptr [eax]
// 00667431  2b7c2418             sub edi, dword ptr [esp + 0x18]
// 00667435  8bc7                 mov eax, edi
// 00667437  7903                 jns 0x66743c
// 00667439  f7d8                 neg eax
// 0066743b  4f                   dec edi
// 0066743c  33db                 xor ebx, ebx
// 0066743e  85c0                 test eax, eax
// 00667440  7423                 je 0x667465
// 00667442  43                   inc ebx
// 00667443  d1f8                 sar eax, 1
// 00667445  75fb                 jne 0x667442
// 00667447  83fb0b               cmp ebx, 0xb
// 0066744a  7e19                 jle 0x667465
// 0066744c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0066744f  8b11                 mov edx, dword ptr [ecx]
// 00667451  c7421406000000       mov dword ptr [edx + 0x14], 6
// 00667458  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066745b  8b08                 mov ecx, dword ptr [eax]
// 0066745d  8b11                 mov edx, dword ptr [ecx]
// 0066745f  50                   push eax
// 00667460  ffd2                 call edx
// 00667462  83c404               add esp, 4
// 00667465  8b4c9d00             mov ecx, dword ptr [ebp + ebx*4]
// 00667469  0fbe842b00040000     movsx eax, byte ptr [ebx + ebp + 0x400]
// 00667471  51                   push ecx
// 00667472  e8c9feffff           call 0x667340
// 00667477  83c404               add esp, 4
// 0066747a  84c0                 test al, al
// 0066747c  7507                 jne 0x667485
// 0066747e  5f                   pop edi
// 0066747f  5e                   pop esi
// 00667480  5d                   pop ebp
// 00667481  32c0                 xor al, al
// 00667483  5b                   pop ebx
// 00667484  c3                   ret 
// 00667485  85db                 test ebx, ebx
// 00667487  740f                 je 0x667498
// 00667489  57                   push edi
// 0066748a  8bc3                 mov eax, ebx
// 0066748c  e8affeffff           call 0x667340
// 00667491  83c404               add esp, 4
// 00667494  84c0                 test al, al
// 00667496  74e6                 je 0x66747e
// 00667498  b84497b800           mov eax, 0xb89744
// 0066749d  33ff                 xor edi, edi
// 0066749f  89442418             mov dword ptr [esp + 0x18], eax
// 006674a3  8b10                 mov edx, dword ptr [eax]
// 006674a5  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006674a9  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 006674ad  85db                 test ebx, ebx
// 006674af  7506                 jne 0x6674b7
// 006674b1  47                   inc edi
// 006674b2  e9ae000000           jmp 0x667565
// 006674b7  83ff0f               cmp edi, 0xf
// 006674ba  7e2a                 jle 0x6674e6
// 006674bc  8d642400             lea esp, [esp]
// 006674c0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006674c4  8b91c0030000         mov edx, dword ptr [ecx + 0x3c0]
// 006674ca  0fbe81f0040000       movsx eax, byte ptr [ecx + 0x4f0]
// 006674d1  52                   push edx
// 006674d2  e869feffff           call 0x667340
// 006674d7  83c404               add esp, 4
// 006674da  84c0                 test al, al
// 006674dc  74a0                 je 0x66747e
// 006674de  83ef10               sub edi, 0x10
// 006674e1  83ff0f               cmp edi, 0xf
// 006674e4  7fda                 jg 0x6674c0
// 006674e6  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006674ea  85db                 test ebx, ebx
// 006674ec  7d06                 jge 0x6674f4
// 006674ee  f7db                 neg ebx
// 006674f0  ff4c241c             dec dword ptr [esp + 0x1c]
// 006674f4  d1fb                 sar ebx, 1
// 006674f6  bd01000000           mov ebp, 1
// 006674fb  7426                 je 0x667523
// 006674fd  8d4900               lea ecx, [ecx]
// 00667500  45                   inc ebp
// 00667501  d1fb                 sar ebx, 1
// 00667503  75fb                 jne 0x667500
// 00667505  83fd0a               cmp ebp, 0xa
// 00667508  7e19                 jle 0x667523
// 0066750a  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066750d  8b08                 mov ecx, dword ptr [eax]
// 0066750f  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 00667516  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667519  8b10                 mov edx, dword ptr [eax]
// 0066751b  50                   push eax
// 0066751c  8b02                 mov eax, dword ptr [edx]
// 0066751e  ffd0                 call eax
// 00667520  83c404               add esp, 4
// 00667523  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00667527  c1e704               shl edi, 4
// 0066752a  03fd                 add edi, ebp
// 0066752c  0fbe840f00040000     movsx eax, byte ptr [edi + ecx + 0x400]
// 00667534  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00667537  51                   push ecx
// 00667538  e803feffff           call 0x667340
// 0066753d  83c404               add esp, 4
// 00667540  84c0                 test al, al
// 00667542  0f8436ffffff         je 0x66747e
// 00667548  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066754c  52                   push edx
// 0066754d  8bc5                 mov eax, ebp
// 0066754f  e8ecfdffff           call 0x667340
// 00667554  83c404               add esp, 4
// 00667557  84c0                 test al, al
// 00667559  0f841fffffff         je 0x66747e
// 0066755f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00667563  33ff                 xor edi, edi
// 00667565  83c004               add eax, 4
// 00667568  3d4098b800           cmp eax, 0xb89840
// 0066756d  89442418             mov dword ptr [esp + 0x18], eax
// 00667571  0f8c2cffffff         jl 0x6674a3
// 00667577  85ff                 test edi, edi
// 00667579  7e1e                 jle 0x667599
// 0066757b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066757f  0fbe8100040000       movsx eax, byte ptr [ecx + 0x400]
// 00667586  8b09                 mov ecx, dword ptr [ecx]
// 00667588  51                   push ecx
// 00667589  e8b2fdffff           call 0x667340
// 0066758e  83c404               add esp, 4
// 00667591  84c0                 test al, al
// 00667593  0f84e5feffff         je 0x66747e
// 00667599  5f                   pop edi
// 0066759a  5e                   pop esi
// 0066759b  5d                   pop ebp
// 0066759c  b001                 mov al, 1
// 0066759e  5b                   pop ebx
// 0066759f  c3                   ret 
// library jpeg-6b/jchuff.c (function _encode_one_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
