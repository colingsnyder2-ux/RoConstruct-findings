// roc 2008-06 00516730  unit: G3D::BinaryInput  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00516730
//
// 00516730  6aff                 push -1
// 00516732  68b1c67c00           push 0x7cc6b1
// 00516737  64a100000000         mov eax, dword ptr fs:[0]
// 0051673d  50                   push eax
// 0051673e  64892500000000       mov dword ptr fs:[0], esp
// 00516745  83ec20               sub esp, 0x20
// 00516748  8b442438             mov eax, dword ptr [esp + 0x38]
// 0051674c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00516750  56                   push esi
// 00516751  8bf1                 mov esi, ecx
// 00516753  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00516757  50                   push eax
// 00516758  51                   push ecx
// 00516759  52                   push edx
// 0051675a  8bce                 mov ecx, esi
// 0051675c  89742410             mov dword ptr [esp + 0x10], esi
// 00516760  e80bffffff           call 0x516670
// 00516765  8b442444             mov eax, dword ptr [esp + 0x44]
// 00516769  8b542440             mov edx, dword ptr [esp + 0x40]
// 0051676d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00516775  c7067c8a8200         mov dword ptr [esi], 0x828a7c
// 0051677b  895644               mov dword ptr [esi + 0x44], edx
// 0051677e  894648               mov dword ptr [esi + 0x48], eax
// 00516781  83f803               cmp eax, 3
// 00516784  7723                 ja 0x5167a9
// 00516786  ff248524685100       jmp dword ptr [eax*4 + 0x516824]
// 0051678d  b93c8a8200           mov ecx, 0x828a3c
// 00516792  eb1a                 jmp 0x5167ae
// 00516794  b92c8a8200           mov ecx, 0x828a2c
// 00516799  eb13                 jmp 0x5167ae
// 0051679b  b91c8a8200           mov ecx, 0x828a1c
// 005167a0  eb0c                 jmp 0x5167ae
// 005167a2  b9108a8200           mov ecx, 0x828a10
// 005167a7  eb05                 jmp 0x5167ae
// 005167a9  b9109e8100           mov ecx, 0x819e10
// 005167ae  83fa03               cmp edx, 3
// 005167b1  7723                 ja 0x5167d6
// 005167b3  ff249534685100       jmp dword ptr [edx*4 + 0x516834]
// 005167ba  b83c8a8200           mov eax, 0x828a3c
// 005167bf  eb1a                 jmp 0x5167db
// 005167c1  b82c8a8200           mov eax, 0x828a2c
// 005167c6  eb13                 jmp 0x5167db
// 005167c8  b81c8a8200           mov eax, 0x828a1c
// 005167cd  eb0c                 jmp 0x5167db
// 005167cf  b8108a8200           mov eax, 0x828a10
// 005167d4  eb05                 jmp 0x5167db
// 005167d6  b8109e8100           mov eax, 0x819e10
// 005167db  51                   push ecx
// 005167dc  50                   push eax
// 005167dd  8d442410             lea eax, [esp + 0x10]
// 005167e1  684c8a8200           push 0x828a4c
// 005167e6  50                   push eax
// 005167e7  e82433ffff           call 0x509b10
// 005167ec  83c410               add esp, 0x10
// 005167ef  50                   push eax
// 005167f0  8d4e28               lea ecx, [esi + 0x28]
// 005167f3  c644243001           mov byte ptr [esp + 0x30], 1
// 005167f8  ff1550248000         call dword ptr [0x802450]
// 005167fe  8d4c2408             lea ecx, [esp + 8]
// 00516802  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00516807  ff1568248000         call dword ptr [0x802468]
// 0051680d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00516811  8bc6                 mov eax, esi
// 00516813  5e                   pop esi
// 00516814  64890d00000000       mov dword ptr fs:[0], ecx
// 0051681b  83c42c               add esp, 0x2c
// 0051681e  c21400               ret 0x14
// 00516821  8d4900               lea ecx, [ecx]
// 00516824  94                   xchg esp, eax
// 00516825  6751                 push ecx
// 00516827  008d6751009b         add byte ptr [ebp - 0x64ffae99], cl
// 0051682d  6751                 push ecx
// 0051682f  00a2675100c1         add byte ptr [edx - 0x3effae99], ah
// 00516835  6751                 push ecx
// 00516837  00ba675100c8         add byte ptr [edx - 0x37ffae99], bh
// 0051683d  6751                 push ecx
// 0051683f  00cf                 add bh, cl
// 00516841  6751                 push ecx
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ??0WrongTokenType@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHW4Type@Token@2@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
