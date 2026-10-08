// roc 2007-08 005b7540  unit: RBX::$01MP8Surface::?$SurfaceGetSet  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b7540
//
// 005b7540  6aff                 push -1
// 005b7542  6803637500           push 0x756303
// 005b7547  64a100000000         mov eax, dword ptr fs:[0]
// 005b754d  50                   push eax
// 005b754e  64892500000000       mov dword ptr fs:[0], esp
// 005b7555  83ec0c               sub esp, 0xc
// 005b7558  53                   push ebx
// 005b7559  55                   push ebp
// 005b755a  56                   push esi
// 005b755b  8bf1                 mov esi, ecx
// 005b755d  57                   push edi
// 005b755e  89742410             mov dword ptr [esp + 0x10], esi
// 005b7562  c70624857b00         mov dword ptr [esi], 0x7b8524
// 005b7568  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005b756b  396e14               cmp dword ptr [esi + 0x14], ebp
// 005b756e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005b7574  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005b757c  7602                 jbe 0x5b7580
// 005b757e  ffd3                 call ebx
// 005b7580  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005b7583  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005b7586  7602                 jbe 0x5b758a
// 005b7588  ffd3                 call ebx
// 005b758a  33db                 xor ebx, ebx
// 005b758c  3bfd                 cmp edi, ebp
// 005b758e  7415                 je 0x5b75a5
// 005b7590  8b0f                 mov ecx, dword ptr [edi]
// 005b7592  3bcb                 cmp ecx, ebx
// 005b7594  7408                 je 0x5b759e
// 005b7596  8b01                 mov eax, dword ptr [ecx]
// 005b7598  8b10                 mov edx, dword ptr [eax]
// 005b759a  6a01                 push 1
// 005b759c  ffd2                 call edx
// 005b759e  83c704               add edi, 4
// 005b75a1  3bfd                 cmp edi, ebp
// 005b75a3  75eb                 jne 0x5b7590
// 005b75a5  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005b75ab  3bc3                 cmp eax, ebx
// 005b75ad  7409                 je 0x5b75b8
// 005b75af  50                   push eax
// 005b75b0  e8ad860700           call 0x62fc62
// 005b75b5  83c404               add esp, 4
// 005b75b8  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005b75be  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005b75c4  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005b75ca  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005b75cd  3bc3                 cmp eax, ebx
// 005b75cf  7409                 je 0x5b75da
// 005b75d1  50                   push eax
// 005b75d2  e88b860700           call 0x62fc62
// 005b75d7  83c404               add esp, 4
// 005b75da  8d4e68               lea ecx, [esi + 0x68]
// 005b75dd  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005b75e0  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005b75e6  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005b75ec  c644242405           mov byte ptr [esp + 0x24], 5
// 005b75f1  e86a2ce5ff           call 0x40a260
// 005b75f6  8b4660               mov eax, dword ptr [esi + 0x60]
// 005b75f9  8b08                 mov ecx, dword ptr [eax]
// 005b75fb  8d7e5c               lea edi, [esi + 0x5c]
// 005b75fe  50                   push eax
// 005b75ff  57                   push edi
// 005b7600  51                   push ecx
// 005b7601  57                   push edi
// 005b7602  8d442424             lea eax, [esp + 0x24]
// 005b7606  50                   push eax
// 005b7607  8bcf                 mov ecx, edi
// 005b7609  c644243804           mov byte ptr [esp + 0x38], 4
// 005b760e  e84dbef8ff           call 0x543460
// 005b7613  8b4704               mov eax, dword ptr [edi + 4]
// 005b7616  50                   push eax
// 005b7617  e846860700           call 0x62fc62
// 005b761c  895f04               mov dword ptr [edi + 4], ebx
// 005b761f  895f08               mov dword ptr [edi + 8], ebx
// 005b7622  8b4654               mov eax, dword ptr [esi + 0x54]
// 005b7625  8b08                 mov ecx, dword ptr [eax]
// 005b7627  83c404               add esp, 4
// 005b762a  8d7e50               lea edi, [esi + 0x50]
// 005b762d  50                   push eax
// 005b762e  57                   push edi
// 005b762f  51                   push ecx
// 005b7630  57                   push edi
// 005b7631  8d4c2424             lea ecx, [esp + 0x24]
// 005b7635  51                   push ecx
// 005b7636  8bcf                 mov ecx, edi
// 005b7638  c644243803           mov byte ptr [esp + 0x38], 3
// 005b763d  e81ebef8ff           call 0x543460
// 005b7642  8b4704               mov eax, dword ptr [edi + 4]
// 005b7645  50                   push eax
// 005b7646  e817860700           call 0x62fc62
// 005b764b  895f04               mov dword ptr [edi + 4], ebx
// 005b764e  895f08               mov dword ptr [edi + 8], ebx
// 005b7651  8b4644               mov eax, dword ptr [esi + 0x44]
// 005b7654  83c404               add esp, 4
// 005b7657  3bc3                 cmp eax, ebx
// 005b7659  7409                 je 0x5b7664
// 005b765b  50                   push eax
// 005b765c  e801860700           call 0x62fc62
// 005b7661  83c404               add esp, 4
// 005b7664  8d7e34               lea edi, [esi + 0x34]
// 005b7667  895e44               mov dword ptr [esi + 0x44], ebx
// 005b766a  895e48               mov dword ptr [esi + 0x48], ebx
// 005b766d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005b7670  8b4704               mov eax, dword ptr [edi + 4]
// 005b7673  8b08                 mov ecx, dword ptr [eax]
// 005b7675  50                   push eax
// 005b7676  57                   push edi
// 005b7677  51                   push ecx
// 005b7678  57                   push edi
// 005b7679  8d542424             lea edx, [esp + 0x24]
// 005b767d  52                   push edx
// 005b767e  8bcf                 mov ecx, edi
// 005b7680  c644243801           mov byte ptr [esp + 0x38], 1
// 005b7685  e8a6fdffff           call 0x5b7430
// 005b768a  8b4704               mov eax, dword ptr [edi + 4]
// 005b768d  50                   push eax
// 005b768e  e8cf850700           call 0x62fc62
// 005b7693  895f04               mov dword ptr [edi + 4], ebx
// 005b7696  895f08               mov dword ptr [edi + 8], ebx
// 005b7699  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005b769c  8b08                 mov ecx, dword ptr [eax]
// 005b769e  83c404               add esp, 4
// 005b76a1  8d7e28               lea edi, [esi + 0x28]
// 005b76a4  50                   push eax
// 005b76a5  57                   push edi
// 005b76a6  51                   push ecx
// 005b76a7  57                   push edi
// 005b76a8  8d442424             lea eax, [esp + 0x24]
// 005b76ac  50                   push eax
// 005b76ad  8bcf                 mov ecx, edi
// 005b76af  885c2438             mov byte ptr [esp + 0x38], bl
// 005b76b3  e878fdffff           call 0x5b7430
// 005b76b8  8b4704               mov eax, dword ptr [edi + 4]
// 005b76bb  50                   push eax
// 005b76bc  e8a1850700           call 0x62fc62
// 005b76c1  83c404               add esp, 4
// 005b76c4  8bce                 mov ecx, esi
// 005b76c6  895f04               mov dword ptr [edi + 4], ebx
// 005b76c9  895f08               mov dword ptr [edi + 8], ebx
// 005b76cc  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005b76d4  e8a7fbfcff           call 0x587280
// 005b76d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b76dd  5f                   pop edi
// 005b76de  5e                   pop esi
// 005b76df  5d                   pop ebp
// 005b76e0  5b                   pop ebx
// 005b76e1  64890d00000000       mov dword ptr fs:[0], ecx
// 005b76e8  83c418               add esp, 0x18
// 005b76eb  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
