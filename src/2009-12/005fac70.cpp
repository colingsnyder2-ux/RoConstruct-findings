// roc 2009-12 005fac70  unit: G3D::LineSegment  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fac70
//
// 005fac70  6aff                 push -1
// 005fac72  68a1f89300           push 0x93f8a1
// 005fac77  64a100000000         mov eax, dword ptr fs:[0]
// 005fac7d  50                   push eax
// 005fac7e  64892500000000       mov dword ptr fs:[0], esp
// 005fac85  83ec20               sub esp, 0x20
// 005fac88  8b442438             mov eax, dword ptr [esp + 0x38]
// 005fac8c  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fac90  56                   push esi
// 005fac91  8bf1                 mov esi, ecx
// 005fac93  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005fac97  50                   push eax
// 005fac98  51                   push ecx
// 005fac99  52                   push edx
// 005fac9a  8bce                 mov ecx, esi
// 005fac9c  89742410             mov dword ptr [esp + 0x10], esi
// 005faca0  e80bffffff           call 0x5fabb0
// 005faca5  8b442444             mov eax, dword ptr [esp + 0x44]
// 005faca9  8b542440             mov edx, dword ptr [esp + 0x40]
// 005facad  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005facb5  c706dc2d9c00         mov dword ptr [esi], 0x9c2ddc
// 005facbb  895644               mov dword ptr [esi + 0x44], edx
// 005facbe  894648               mov dword ptr [esi + 0x48], eax
// 005facc1  83f803               cmp eax, 3
// 005facc4  7723                 ja 0x5face9
// 005facc6  ff248564ad5f00       jmp dword ptr [eax*4 + 0x5fad64]
// 005faccd  b99c2d9c00           mov ecx, 0x9c2d9c
// 005facd2  eb1a                 jmp 0x5facee
// 005facd4  b98c2d9c00           mov ecx, 0x9c2d8c
// 005facd9  eb13                 jmp 0x5facee
// 005facdb  b97c2d9c00           mov ecx, 0x9c2d7c
// 005face0  eb0c                 jmp 0x5facee
// 005face2  b9702d9c00           mov ecx, 0x9c2d70
// 005face7  eb05                 jmp 0x5facee
// 005face9  b9d0d99b00           mov ecx, 0x9bd9d0
// 005facee  83fa03               cmp edx, 3
// 005facf1  7723                 ja 0x5fad16
// 005facf3  ff249574ad5f00       jmp dword ptr [edx*4 + 0x5fad74]
// 005facfa  b89c2d9c00           mov eax, 0x9c2d9c
// 005facff  eb1a                 jmp 0x5fad1b
// 005fad01  b88c2d9c00           mov eax, 0x9c2d8c
// 005fad06  eb13                 jmp 0x5fad1b
// 005fad08  b87c2d9c00           mov eax, 0x9c2d7c
// 005fad0d  eb0c                 jmp 0x5fad1b
// 005fad0f  b8702d9c00           mov eax, 0x9c2d70
// 005fad14  eb05                 jmp 0x5fad1b
// 005fad16  b8d0d99b00           mov eax, 0x9bd9d0
// 005fad1b  51                   push ecx
// 005fad1c  50                   push eax
// 005fad1d  8d442410             lea eax, [esp + 0x10]
// 005fad21  68ac2d9c00           push 0x9c2dac
// 005fad26  50                   push eax
// 005fad27  e814ecffff           call 0x5f9940
// 005fad2c  83c410               add esp, 0x10
// 005fad2f  50                   push eax
// 005fad30  8d4e28               lea ecx, [esi + 0x28]
// 005fad33  c644243001           mov byte ptr [esp + 0x30], 1
// 005fad38  ff15fcb69800         call dword ptr [0x98b6fc]
// 005fad3e  8d4c2408             lea ecx, [esp + 8]
// 005fad42  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005fad47  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fad4d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005fad51  8bc6                 mov eax, esi
// 005fad53  5e                   pop esi
// 005fad54  64890d00000000       mov dword ptr fs:[0], ecx
// 005fad5b  83c42c               add esp, 0x2c
// 005fad5e  c21400               ret 0x14
// 005fad61  8d4900               lea ecx, [ecx]
// 005fad64  d4ac                 aam 0xac
// 005fad66  5f                   pop edi
// 005fad67  00cd                 add ch, cl
// 005fad69  ac                   lodsb al, byte ptr [esi]
// 005fad6a  5f                   pop edi
// 005fad6b  00db                 add bl, bl
// 005fad6d  ac                   lodsb al, byte ptr [esi]
// 005fad6e  5f                   pop edi
// 005fad6f  00e2                 add dl, ah
// 005fad71  ac                   lodsb al, byte ptr [esi]
// 005fad72  5f                   pop edi
// 005fad73  0001                 add byte ptr [ecx], al
// 005fad75  ad                   lodsd eax, dword ptr [esi]
// 005fad76  5f                   pop edi
// 005fad77  00fa                 add dl, bh
// 005fad79  ac                   lodsb al, byte ptr [esi]
// 005fad7a  5f                   pop edi
// 005fad7b  0008                 add byte ptr [eax], cl
// 005fad7d  ad                   lodsd eax, dword ptr [esi]
// 005fad7e  5f                   pop edi
// 005fad7f  000f                 add byte ptr [edi], cl
// 005fad81  ad                   lodsd eax, dword ptr [esi]
// 005fad82  5f                   pop edi
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Type@Token@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
