// roc 2007-08 00566300  unit: RBX::Verb  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00566300
//
// 00566300  83ec0c               sub esp, 0xc
// 00566303  53                   push ebx
// 00566304  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00566308  8bc3                 mov eax, ebx
// 0056630a  8d5001               lea edx, [eax + 1]
// 0056630d  8d4900               lea ecx, [ecx]
// 00566310  8a08                 mov cl, byte ptr [eax]
// 00566312  83c001               add eax, 1
// 00566315  84c9                 test cl, cl
// 00566317  75f7                 jne 0x566310
// 00566319  2bc2                 sub eax, edx
// 0056631b  0f84c3000000         je 0x5663e4
// 00566321  55                   push ebp
// 00566322  56                   push esi
// 00566323  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00566327  57                   push edi
// 00566328  8b3d68e97700         mov edi, dword ptr [0x77e968]
// 0056632e  8be8                 mov ebp, eax
// 00566330  8a03                 mov al, byte ptr [ebx]
// 00566332  83c301               add ebx, 1
// 00566335  3c3c                 cmp al, 0x3c
// 00566337  88442410             mov byte ptr [esp + 0x10], al
// 0056633b  7513                 jne 0x566350
// 0056633d  68b0967a00           push 0x7a96b0
// 00566342  56                   push esi
// 00566343  e85850f0ff           call 0x46b3a0
// 00566348  83c408               add esp, 8
// 0056634b  e988000000           jmp 0x5663d8
// 00566350  3c3e                 cmp al, 0x3e
// 00566352  7510                 jne 0x566364
// 00566354  68a8967a00           push 0x7a96a8
// 00566359  56                   push esi
// 0056635a  e84150f0ff           call 0x46b3a0
// 0056635f  83c408               add esp, 8
// 00566362  eb74                 jmp 0x5663d8
// 00566364  3c26                 cmp al, 0x26
// 00566366  7510                 jne 0x566378
// 00566368  68a0967a00           push 0x7a96a0
// 0056636d  56                   push esi
// 0056636e  e82d50f0ff           call 0x46b3a0
// 00566373  83c408               add esp, 8
// 00566376  eb60                 jmp 0x5663d8
// 00566378  3c22                 cmp al, 0x22
// 0056637a  7510                 jne 0x56638c
// 0056637c  6898967a00           push 0x7a9698
// 00566381  56                   push esi
// 00566382  e81950f0ff           call 0x46b3a0
// 00566387  83c408               add esp, 8
// 0056638a  eb4c                 jmp 0x5663d8
// 0056638c  3c27                 cmp al, 0x27
// 0056638e  7510                 jne 0x5663a0
// 00566390  6890967a00           push 0x7a9690
// 00566395  56                   push esi
// 00566396  e80550f0ff           call 0x46b3a0
// 0056639b  83c408               add esp, 8
// 0056639e  eb38                 jmp 0x5663d8
// 005663a0  8ac8                 mov cl, al
// 005663a2  80e920               sub cl, 0x20
// 005663a5  80f95e               cmp cl, 0x5e
// 005663a8  7710                 ja 0x5663ba
// 005663aa  8b542410             mov edx, dword ptr [esp + 0x10]
// 005663ae  52                   push edx
// 005663af  56                   push esi
// 005663b0  e88bf6fdff           call 0x545a40
// 005663b5  83c408               add esp, 8
// 005663b8  eb1e                 jmp 0x5663d8
// 005663ba  0fb6c0               movzx eax, al
// 005663bd  50                   push eax
// 005663be  8d4c2418             lea ecx, [esp + 0x18]
// 005663c2  6888967a00           push 0x7a9688
// 005663c7  51                   push ecx
// 005663c8  ffd7                 call edi
// 005663ca  8d542420             lea edx, [esp + 0x20]
// 005663ce  52                   push edx
// 005663cf  56                   push esi
// 005663d0  e8cb4ff0ff           call 0x46b3a0
// 005663d5  83c414               add esp, 0x14
// 005663d8  83ed01               sub ebp, 1
// 005663db  0f854fffffff         jne 0x566330
// 005663e1  5f                   pop edi
// 005663e2  5e                   pop esi
// 005663e3  5d                   pop ebp
// 005663e4  5b                   pop ebx
// 005663e5  83c40c               add esp, 0xc
// 005663e8  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?encodedWrite@TextXmlWriter@@SAXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
