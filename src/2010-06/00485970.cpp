// from server: 100% by auto
// roc 2010-06 00485970  unit: G3D::Texture  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00485970
//
// 00485970  6aff                 push -1
// 00485972  68b15c9800           push 0x985cb1
// 00485977  64a100000000         mov eax, dword ptr fs:[0]
// 0048597d  50                   push eax
// 0048597e  64892500000000       mov dword ptr fs:[0], esp
// 00485985  83ec1c               sub esp, 0x1c
// 00485988  53                   push ebx
// 00485989  56                   push esi
// 0048598a  33db                 xor ebx, ebx
// 0048598c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00485990  6a01                 push 1
// 00485992  6a01                 push 1
// 00485994  8d4c2420             lea ecx, [esp + 0x20]
// 00485998  895c2424             mov dword ptr [esp + 0x24], ebx
// 0048599c  895c2428             mov dword ptr [esp + 0x28], ebx
// 004859a0  895c2420             mov dword ptr [esp + 0x20], ebx
// 004859a4  e837feffff           call 0x4857e0
// 004859a9  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004859ad  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004859b5  83f905               cmp ecx, 5
// 004859b8  7505                 jne 0x4859bf
// 004859ba  8d5306               lea edx, [ebx + 6]
// 004859bd  eb0f                 jmp 0x4859ce
// 004859bf  8bd1                 mov edx, ecx
// 004859c1  83ea07               sub edx, 7
// 004859c4  f7da                 neg edx
// 004859c6  1bd2                 sbb edx, edx
// 004859c8  83e2fb               and edx, 0xfffffffb
// 004859cb  83c206               add edx, 6
// 004859ce  33c0                 xor eax, eax
// 004859d0  3bd3                 cmp edx, ebx
// 004859d2  89542408             mov dword ptr [esp + 8], edx
// 004859d6  8944240c             mov dword ptr [esp + 0xc], eax
// 004859da  7e77                 jle 0x485a53
// 004859dc  55                   push ebp
// 004859dd  57                   push edi
// 004859de  8bff                 mov edi, edi
// 004859e0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004859e4  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 004859e7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004859eb  8b4104               mov eax, dword ptr [ecx + 4]
// 004859ee  3b4108               cmp eax, dword ptr [ecx + 8]
// 004859f1  8d7104               lea esi, [ecx + 4]
// 004859f4  8be9                 mov ebp, ecx
// 004859f6  7d0f                 jge 0x485a07
// 004859f8  8b09                 mov ecx, dword ptr [ecx]
// 004859fa  8d0481               lea eax, [ecx + eax*4]
// 004859fd  3bc3                 cmp eax, ebx
// 004859ff  7402                 je 0x485a03
// 00485a01  8938                 mov dword ptr [eax], edi
// 00485a03  ff06                 inc dword ptr [esi]
// 00485a05  eb37                 jmp 0x485a3e
// 00485a07  8b11                 mov edx, dword ptr [ecx]
// 00485a09  8d5c2418             lea ebx, [esp + 0x18]
// 00485a0d  3bda                 cmp ebx, edx
// 00485a0f  7217                 jb 0x485a28
// 00485a11  8d1482               lea edx, [edx + eax*4]
// 00485a14  3bda                 cmp ebx, edx
// 00485a16  7310                 jae 0x485a28
// 00485a18  8d442418             lea eax, [esp + 0x18]
// 00485a1c  50                   push eax
// 00485a1d  897c241c             mov dword ptr [esp + 0x1c], edi
// 00485a21  e80afcffff           call 0x485630
// 00485a26  eb12                 jmp 0x485a3a
// 00485a28  6a00                 push 0
// 00485a2a  40                   inc eax
// 00485a2b  50                   push eax
// 00485a2c  e83ff4ffff           call 0x484e70
// 00485a31  8b0e                 mov ecx, dword ptr [esi]
// 00485a33  8b5500               mov edx, dword ptr [ebp]
// 00485a36  897c8afc             mov dword ptr [edx + ecx*4 - 4], edi
// 00485a3a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00485a3e  8b442414             mov eax, dword ptr [esp + 0x14]
// 00485a42  40                   inc eax
// 00485a43  33db                 xor ebx, ebx
// 00485a45  3bc2                 cmp eax, edx
// 00485a47  89442414             mov dword ptr [esp + 0x14], eax
// 00485a4b  7c93                 jl 0x4859e0
// 00485a4d  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00485a51  5f                   pop edi
// 00485a52  5d                   pop ebp
// 00485a53  d9442468             fld dword ptr [esp + 0x68]
// 00485a57  8b442460             mov eax, dword ptr [esp + 0x60]
// 00485a5b  8b542454             mov edx, dword ptr [esp + 0x54]
// 00485a5f  83ec08               sub esp, 8
// 00485a62  d95c2404             fstp dword ptr [esp + 4]
// 00485a66  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00485a6a  d944246c             fld dword ptr [esp + 0x6c]
// 00485a6e  d91c24               fstp dword ptr [esp]
// 00485a71  50                   push eax
// 00485a72  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00485a76  51                   push ecx
// 00485a77  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00485a7b  51                   push ecx
// 00485a7c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00485a80  52                   push edx
// 00485a81  8b542460             mov edx, dword ptr [esp + 0x60]
// 00485a85  50                   push eax
// 00485a86  8b442460             mov eax, dword ptr [esp + 0x60]
// 00485a8a  51                   push ecx
// 00485a8b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00485a8f  52                   push edx
// 00485a90  50                   push eax
// 00485a91  8b442460             mov eax, dword ptr [esp + 0x60]
// 00485a95  51                   push ecx
// 00485a96  8d542444             lea edx, [esp + 0x44]
// 00485a9a  52                   push edx
// 00485a9b  50                   push eax
// 00485a9c  56                   push esi
// 00485a9d  e8def7ffff           call 0x485280
// 00485aa2  83c438               add esp, 0x38
// 00485aa5  8d4c2418             lea ecx, [esp + 0x18]
// 00485aa9  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00485ab1  885c242c             mov byte ptr [esp + 0x2c], bl
// 00485ab5  e826fbffff           call 0x4855e0
// 00485aba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00485abe  8bc6                 mov eax, esi
// 00485ac0  5e                   pop esi
// 00485ac1  5b                   pop ebx
// 00485ac2  64890d00000000       mov dword ptr fs:[0], ecx
// 00485ac9  83c428               add esp, 0x28
// 00485acc  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?fromMemory@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAPBEPBVTextureFormat@2@HHH2W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
