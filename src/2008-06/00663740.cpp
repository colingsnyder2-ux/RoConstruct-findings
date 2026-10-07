// roc 2008-06 00663740  unit: RBX::FilterStairs  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663740
//
// 00663740  56                   push esi
// 00663741  57                   push edi
// 00663742  8bf0                 mov esi, eax
// 00663744  e8d7feffff           call 0x663620
// 00663749  8bf8                 mov edi, eax
// 0066374b  8d4701               lea eax, [edi + 1]
// 0066374e  3dffffff3f           cmp eax, 0x3fffffff
// 00663753  7719                 ja 0x66376e
// 00663755  8b16                 mov edx, dword ptr [esi]
// 00663757  8d0cbd00000000       lea ecx, [edi*4]
// 0066375e  51                   push ecx
// 0066375f  6a00                 push 0
// 00663761  6a00                 push 0
// 00663763  52                   push edx
// 00663764  e887cfffff           call 0x6606f0
// 00663769  83c410               add esp, 0x10
// 0066376c  eb0b                 jmp 0x663779
// 0066376e  8b06                 mov eax, dword ptr [esi]
// 00663770  50                   push eax
// 00663771  e85acfffff           call 0x6606d0
// 00663776  83c404               add esp, 4
// 00663779  8d0cbd00000000       lea ecx, [edi*4]
// 00663780  51                   push ecx
// 00663781  89430c               mov dword ptr [ebx + 0xc], eax
// 00663784  897b2c               mov dword ptr [ebx + 0x2c], edi
// 00663787  8b5604               mov edx, dword ptr [esi + 4]
// 0066378a  50                   push eax
// 0066378b  52                   push edx
// 0066378c  e86fc1ffff           call 0x65f900
// 00663791  83c40c               add esp, 0xc
// 00663794  85c0                 test eax, eax
// 00663796  7423                 je 0x6637bb
// 00663798  8b460c               mov eax, dword ptr [esi + 0xc]
// 0066379b  8b0e                 mov ecx, dword ptr [esi]
// 0066379d  6830c78400           push 0x84c730
// 006637a2  50                   push eax
// 006637a3  6814c78400           push 0x84c714
// 006637a8  51                   push ecx
// 006637a9  e812f3fbff           call 0x622ac0
// 006637ae  8b16                 mov edx, dword ptr [esi]
// 006637b0  6a03                 push 3
// 006637b2  52                   push edx
// 006637b3  e898e8fbff           call 0x622050
// 006637b8  83c418               add esp, 0x18
// 006637bb  5f                   pop edi
// 006637bc  5e                   pop esi
// 006637bd  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadCode)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
