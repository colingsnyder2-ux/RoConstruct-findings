// roc 2008-06 00503110  unit: RBX::Render::RenderScene  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503110
//
// 00503110  6aff                 push -1
// 00503112  6881b47c00           push 0x7cb481
// 00503117  64a100000000         mov eax, dword ptr fs:[0]
// 0050311d  50                   push eax
// 0050311e  64892500000000       mov dword ptr fs:[0], esp
// 00503125  83ec0c               sub esp, 0xc
// 00503128  53                   push ebx
// 00503129  55                   push ebp
// 0050312a  56                   push esi
// 0050312b  57                   push edi
// 0050312c  8bf9                 mov edi, ecx
// 0050312e  8b4708               mov eax, dword ptr [edi + 8]
// 00503131  8b2f                 mov ebp, dword ptr [edi]
// 00503133  8bc8                 mov ecx, eax
// 00503135  c1e104               shl ecx, 4
// 00503138  03c8                 add ecx, eax
// 0050313a  03c9                 add ecx, ecx
// 0050313c  03c9                 add ecx, ecx
// 0050313e  6a10                 push 0x10
// 00503140  51                   push ecx
// 00503141  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00503145  e836540000           call 0x508580
// 0050314a  8b4f08               mov ecx, dword ptr [edi + 8]
// 0050314d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00503151  83c408               add esp, 8
// 00503154  3bd1                 cmp edx, ecx
// 00503156  8907                 mov dword ptr [edi], eax
// 00503158  7d02                 jge 0x50315c
// 0050315a  8bca                 mov ecx, edx
// 0050315c  8bf1                 mov esi, ecx
// 0050315e  c1e604               shl esi, 4
// 00503161  03f1                 add esi, ecx
// 00503163  8d1cb0               lea ebx, [eax + esi*4]
// 00503166  8bf0                 mov esi, eax
// 00503168  89742410             mov dword ptr [esp + 0x10], esi
// 0050316c  3bf3                 cmp esi, ebx
// 0050316e  0f8385000000         jae 0x5031f9
// 00503174  8d7d2c               lea edi, [ebp + 0x2c]
// 00503177  8b2db0218000         mov ebp, dword ptr [0x8021b0]
// 0050317d  8d4900               lea ecx, [ecx]
// 00503180  89742418             mov dword ptr [esp + 0x18], esi
// 00503184  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0050318c  85f6                 test esi, esi
// 0050318e  744b                 je 0x5031db
// 00503190  8d57d4               lea edx, [edi - 0x2c]
// 00503193  52                   push edx
// 00503194  8bce                 mov ecx, esi
// 00503196  e885000100           call 0x513220
// 0050319b  d947f8               fld dword ptr [edi - 8]
// 0050319e  d95e24               fstp dword ptr [esi + 0x24]
// 005031a1  d947fc               fld dword ptr [edi - 4]
// 005031a4  d95e28               fstp dword ptr [esi + 0x28]
// 005031a7  d907                 fld dword ptr [edi]
// 005031a9  d95e2c               fstp dword ptr [esi + 0x2c]
// 005031ac  d94704               fld dword ptr [edi + 4]
// 005031af  d95e30               fstp dword ptr [esi + 0x30]
// 005031b2  8b4708               mov eax, dword ptr [edi + 8]
// 005031b5  894634               mov dword ptr [esi + 0x34], eax
// 005031b8  d9470c               fld dword ptr [edi + 0xc]
// 005031bb  d95e38               fstp dword ptr [esi + 0x38]
// 005031be  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 005031c1  894e3c               mov dword ptr [esi + 0x3c], ecx
// 005031c4  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005031cb  8b4714               mov eax, dword ptr [edi + 0x14]
// 005031ce  85c0                 test eax, eax
// 005031d0  7409                 je 0x5031db
// 005031d2  894640               mov dword ptr [esi + 0x40], eax
// 005031d5  83c004               add eax, 4
// 005031d8  50                   push eax
// 005031d9  ffd5                 call ebp
// 005031db  83c644               add esi, 0x44
// 005031de  83c744               add edi, 0x44
// 005031e1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005031e9  89742410             mov dword ptr [esp + 0x10], esi
// 005031ed  3bf3                 cmp esi, ebx
// 005031ef  728f                 jb 0x503180
// 005031f1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005031f5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005031f9  8bc2                 mov eax, edx
// 005031fb  c1e004               shl eax, 4
// 005031fe  03c2                 add eax, edx
// 00503200  8d4c8500             lea ecx, [ebp + eax*4]
// 00503204  3be9                 cmp ebp, ecx
// 00503206  736f                 jae 0x503277
// 00503208  2bcd                 sub ecx, ebp
// 0050320a  49                   dec ecx
// 0050320b  b8f1f0f0f0           mov eax, 0xf0f0f0f1
// 00503210  f7e1                 mul ecx
// 00503212  8bda                 mov ebx, edx
// 00503214  c1eb06               shr ebx, 6
// 00503217  8d7d40               lea edi, [ebp + 0x40]
// 0050321a  43                   inc ebx
// 0050321b  eb03                 jmp 0x503220
// 0050321d  8d4900               lea ecx, [ecx]
// 00503220  8b07                 mov eax, dword ptr [edi]
// 00503222  85c0                 test eax, eax
// 00503224  7449                 je 0x50326f
// 00503226  83c004               add eax, 4
// 00503229  50                   push eax
// 0050322a  ff15ac218000         call dword ptr [0x8021ac]
// 00503230  85c0                 test eax, eax
// 00503232  7535                 jne 0x503269
// 00503234  8b0f                 mov ecx, dword ptr [edi]
// 00503236  8b7108               mov esi, dword ptr [ecx + 8]
// 00503239  85f6                 test esi, esi
// 0050323b  741e                 je 0x50325b
// 0050323d  8d4900               lea ecx, [ecx]
// 00503240  8b0e                 mov ecx, dword ptr [esi]
// 00503242  8b11                 mov edx, dword ptr [ecx]
// 00503244  8b4204               mov eax, dword ptr [edx + 4]
// 00503247  ffd0                 call eax
// 00503249  8bc6                 mov eax, esi
// 0050324b  8b7604               mov esi, dword ptr [esi + 4]
// 0050324e  50                   push eax
// 0050324f  e826d41900           call 0x6a067a
// 00503254  83c404               add esp, 4
// 00503257  85f6                 test esi, esi
// 00503259  75e5                 jne 0x503240
// 0050325b  8b0f                 mov ecx, dword ptr [edi]
// 0050325d  85c9                 test ecx, ecx
// 0050325f  7408                 je 0x503269
// 00503261  8b11                 mov edx, dword ptr [ecx]
// 00503263  8b02                 mov eax, dword ptr [edx]
// 00503265  6a01                 push 1
// 00503267  ffd0                 call eax
// 00503269  c70700000000         mov dword ptr [edi], 0
// 0050326f  83c744               add edi, 0x44
// 00503272  83eb01               sub ebx, 1
// 00503275  75a9                 jne 0x503220
// 00503277  55                   push ebp
// 00503278  e8a34a0000           call 0x507d20
// 0050327d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00503281  83c404               add esp, 4
// 00503284  5f                   pop edi
// 00503285  5e                   pop esi
// 00503286  5d                   pop ebp
// 00503287  5b                   pop ebx
// 00503288  64890d00000000       mov dword ptr fs:[0], ecx
// 0050328f  83c418               add esp, 0x18
// 00503292  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?realloc@?$Array@VRenderSurface@Render@RBX@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
