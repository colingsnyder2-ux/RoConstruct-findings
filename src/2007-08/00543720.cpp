// roc 2007-08 00543720  unit: RBX::VDebugSettings::?$FactoryProduct  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00543720
//
// 00543720  6aff                 push -1
// 00543722  6803637500           push 0x756303
// 00543727  64a100000000         mov eax, dword ptr fs:[0]
// 0054372d  50                   push eax
// 0054372e  64892500000000       mov dword ptr fs:[0], esp
// 00543735  83ec0c               sub esp, 0xc
// 00543738  53                   push ebx
// 00543739  55                   push ebp
// 0054373a  56                   push esi
// 0054373b  8bf1                 mov esi, ecx
// 0054373d  57                   push edi
// 0054373e  89742410             mov dword ptr [esp + 0x10], esi
// 00543742  c706fc687a00         mov dword ptr [esi], 0x7a68fc
// 00543748  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0054374b  396e14               cmp dword ptr [esi + 0x14], ebp
// 0054374e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 00543754  c744242408000000     mov dword ptr [esp + 0x24], 8
// 0054375c  7602                 jbe 0x543760
// 0054375e  ffd3                 call ebx
// 00543760  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00543763  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 00543766  7602                 jbe 0x54376a
// 00543768  ffd3                 call ebx
// 0054376a  33db                 xor ebx, ebx
// 0054376c  3bfd                 cmp edi, ebp
// 0054376e  7415                 je 0x543785
// 00543770  8b0f                 mov ecx, dword ptr [edi]
// 00543772  3bcb                 cmp ecx, ebx
// 00543774  7408                 je 0x54377e
// 00543776  8b01                 mov eax, dword ptr [ecx]
// 00543778  8b10                 mov edx, dword ptr [eax]
// 0054377a  6a01                 push 1
// 0054377c  ffd2                 call edx
// 0054377e  83c704               add edi, 4
// 00543781  3bfd                 cmp edi, ebp
// 00543783  75eb                 jne 0x543770
// 00543785  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 0054378b  3bc3                 cmp eax, ebx
// 0054378d  7409                 je 0x543798
// 0054378f  50                   push eax
// 00543790  e8cdc40e00           call 0x62fc62
// 00543795  83c404               add esp, 4
// 00543798  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 0054379e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005437a4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005437aa  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005437ad  3bc3                 cmp eax, ebx
// 005437af  7409                 je 0x5437ba
// 005437b1  50                   push eax
// 005437b2  e8abc40e00           call 0x62fc62
// 005437b7  83c404               add esp, 4
// 005437ba  8d4e68               lea ecx, [esi + 0x68]
// 005437bd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005437c0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005437c6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005437cc  c644242405           mov byte ptr [esp + 0x24], 5
// 005437d1  e88a6aecff           call 0x40a260
// 005437d6  8b4660               mov eax, dword ptr [esi + 0x60]
// 005437d9  8b08                 mov ecx, dword ptr [eax]
// 005437db  8d7e5c               lea edi, [esi + 0x5c]
// 005437de  50                   push eax
// 005437df  57                   push edi
// 005437e0  51                   push ecx
// 005437e1  57                   push edi
// 005437e2  8d442424             lea eax, [esp + 0x24]
// 005437e6  50                   push eax
// 005437e7  8bcf                 mov ecx, edi
// 005437e9  c644243804           mov byte ptr [esp + 0x38], 4
// 005437ee  e86dfcffff           call 0x543460
// 005437f3  8b4704               mov eax, dword ptr [edi + 4]
// 005437f6  50                   push eax
// 005437f7  e866c40e00           call 0x62fc62
// 005437fc  895f04               mov dword ptr [edi + 4], ebx
// 005437ff  895f08               mov dword ptr [edi + 8], ebx
// 00543802  8b4654               mov eax, dword ptr [esi + 0x54]
// 00543805  8b08                 mov ecx, dword ptr [eax]
// 00543807  83c404               add esp, 4
// 0054380a  8d7e50               lea edi, [esi + 0x50]
// 0054380d  50                   push eax
// 0054380e  57                   push edi
// 0054380f  51                   push ecx
// 00543810  57                   push edi
// 00543811  8d4c2424             lea ecx, [esp + 0x24]
// 00543815  51                   push ecx
// 00543816  8bcf                 mov ecx, edi
// 00543818  c644243803           mov byte ptr [esp + 0x38], 3
// 0054381d  e83efcffff           call 0x543460
// 00543822  8b4704               mov eax, dword ptr [edi + 4]
// 00543825  50                   push eax
// 00543826  e837c40e00           call 0x62fc62
// 0054382b  895f04               mov dword ptr [edi + 4], ebx
// 0054382e  895f08               mov dword ptr [edi + 8], ebx
// 00543831  8b4644               mov eax, dword ptr [esi + 0x44]
// 00543834  83c404               add esp, 4
// 00543837  3bc3                 cmp eax, ebx
// 00543839  7409                 je 0x543844
// 0054383b  50                   push eax
// 0054383c  e821c40e00           call 0x62fc62
// 00543841  83c404               add esp, 4
// 00543844  8d7e34               lea edi, [esi + 0x34]
// 00543847  895e44               mov dword ptr [esi + 0x44], ebx
// 0054384a  895e48               mov dword ptr [esi + 0x48], ebx
// 0054384d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00543850  8b4704               mov eax, dword ptr [edi + 4]
// 00543853  8b08                 mov ecx, dword ptr [eax]
// 00543855  50                   push eax
// 00543856  57                   push edi
// 00543857  51                   push ecx
// 00543858  57                   push edi
// 00543859  8d542424             lea edx, [esp + 0x24]
// 0054385d  52                   push edx
// 0054385e  8bcf                 mov ecx, edi
// 00543860  c644243801           mov byte ptr [esp + 0x38], 1
// 00543865  e8c63b0700           call 0x5b7430
// 0054386a  8b4704               mov eax, dword ptr [edi + 4]
// 0054386d  50                   push eax
// 0054386e  e8efc30e00           call 0x62fc62
// 00543873  895f04               mov dword ptr [edi + 4], ebx
// 00543876  895f08               mov dword ptr [edi + 8], ebx
// 00543879  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0054387c  8b08                 mov ecx, dword ptr [eax]
// 0054387e  83c404               add esp, 4
// 00543881  8d7e28               lea edi, [esi + 0x28]
// 00543884  50                   push eax
// 00543885  57                   push edi
// 00543886  51                   push ecx
// 00543887  57                   push edi
// 00543888  8d442424             lea eax, [esp + 0x24]
// 0054388c  50                   push eax
// 0054388d  8bcf                 mov ecx, edi
// 0054388f  885c2438             mov byte ptr [esp + 0x38], bl
// 00543893  e8983b0700           call 0x5b7430
// 00543898  8b4704               mov eax, dword ptr [edi + 4]
// 0054389b  50                   push eax
// 0054389c  e8c1c30e00           call 0x62fc62
// 005438a1  83c404               add esp, 4
// 005438a4  8bce                 mov ecx, esi
// 005438a6  895f04               mov dword ptr [edi + 4], ebx
// 005438a9  895f08               mov dword ptr [edi + 8], ebx
// 005438ac  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005438b4  e8c7390400           call 0x587280
// 005438b9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005438bd  5f                   pop edi
// 005438be  5e                   pop esi
// 005438bf  5d                   pop ebp
// 005438c0  5b                   pop ebx
// 005438c1  64890d00000000       mov dword ptr fs:[0], ecx
// 005438c8  83c418               add esp, 0x18
// 005438cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
