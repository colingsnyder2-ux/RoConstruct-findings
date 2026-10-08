// roc 2007-08 005b76f0  unit: RBX::$01MP8Surface::?$SurfaceGetSet  size: 428 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b76f0
//
// 005b76f0  6aff                 push -1
// 005b76f2  6803637500           push 0x756303
// 005b76f7  64a100000000         mov eax, dword ptr fs:[0]
// 005b76fd  50                   push eax
// 005b76fe  64892500000000       mov dword ptr fs:[0], esp
// 005b7705  83ec0c               sub esp, 0xc
// 005b7708  53                   push ebx
// 005b7709  55                   push ebp
// 005b770a  56                   push esi
// 005b770b  8bf1                 mov esi, ecx
// 005b770d  57                   push edi
// 005b770e  89742410             mov dword ptr [esp + 0x10], esi
// 005b7712  c7062c857b00         mov dword ptr [esi], 0x7b852c
// 005b7718  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005b771b  396e14               cmp dword ptr [esi + 0x14], ebp
// 005b771e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005b7724  c744242408000000     mov dword ptr [esp + 0x24], 8
// 005b772c  7602                 jbe 0x5b7730
// 005b772e  ffd3                 call ebx
// 005b7730  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005b7733  3b7e18               cmp edi, dword ptr [esi + 0x18]
// 005b7736  7602                 jbe 0x5b773a
// 005b7738  ffd3                 call ebx
// 005b773a  33db                 xor ebx, ebx
// 005b773c  3bfd                 cmp edi, ebp
// 005b773e  7415                 je 0x5b7755
// 005b7740  8b0f                 mov ecx, dword ptr [edi]
// 005b7742  3bcb                 cmp ecx, ebx
// 005b7744  7408                 je 0x5b774e
// 005b7746  8b01                 mov eax, dword ptr [ecx]
// 005b7748  8b10                 mov edx, dword ptr [eax]
// 005b774a  6a01                 push 1
// 005b774c  ffd2                 call edx
// 005b774e  83c704               add edi, 4
// 005b7751  3bfd                 cmp edi, ebp
// 005b7753  75eb                 jne 0x5b7740
// 005b7755  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 005b775b  3bc3                 cmp eax, ebx
// 005b775d  7409                 je 0x5b7768
// 005b775f  50                   push eax
// 005b7760  e8fd840700           call 0x62fc62
// 005b7765  83c404               add esp, 4
// 005b7768  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 005b776e  899e90000000         mov dword ptr [esi + 0x90], ebx
// 005b7774  899e94000000         mov dword ptr [esi + 0x94], ebx
// 005b777a  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005b777d  3bc3                 cmp eax, ebx
// 005b777f  7409                 je 0x5b778a
// 005b7781  50                   push eax
// 005b7782  e8db840700           call 0x62fc62
// 005b7787  83c404               add esp, 4
// 005b778a  8d4e68               lea ecx, [esi + 0x68]
// 005b778d  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005b7790  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005b7796  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005b779c  c644242405           mov byte ptr [esp + 0x24], 5
// 005b77a1  e8ba2ae5ff           call 0x40a260
// 005b77a6  8b4660               mov eax, dword ptr [esi + 0x60]
// 005b77a9  8b08                 mov ecx, dword ptr [eax]
// 005b77ab  8d7e5c               lea edi, [esi + 0x5c]
// 005b77ae  50                   push eax
// 005b77af  57                   push edi
// 005b77b0  51                   push ecx
// 005b77b1  57                   push edi
// 005b77b2  8d442424             lea eax, [esp + 0x24]
// 005b77b6  50                   push eax
// 005b77b7  8bcf                 mov ecx, edi
// 005b77b9  c644243804           mov byte ptr [esp + 0x38], 4
// 005b77be  e89dbcf8ff           call 0x543460
// 005b77c3  8b4704               mov eax, dword ptr [edi + 4]
// 005b77c6  50                   push eax
// 005b77c7  e896840700           call 0x62fc62
// 005b77cc  895f04               mov dword ptr [edi + 4], ebx
// 005b77cf  895f08               mov dword ptr [edi + 8], ebx
// 005b77d2  8b4654               mov eax, dword ptr [esi + 0x54]
// 005b77d5  8b08                 mov ecx, dword ptr [eax]
// 005b77d7  83c404               add esp, 4
// 005b77da  8d7e50               lea edi, [esi + 0x50]
// 005b77dd  50                   push eax
// 005b77de  57                   push edi
// 005b77df  51                   push ecx
// 005b77e0  57                   push edi
// 005b77e1  8d4c2424             lea ecx, [esp + 0x24]
// 005b77e5  51                   push ecx
// 005b77e6  8bcf                 mov ecx, edi
// 005b77e8  c644243803           mov byte ptr [esp + 0x38], 3
// 005b77ed  e86ebcf8ff           call 0x543460
// 005b77f2  8b4704               mov eax, dword ptr [edi + 4]
// 005b77f5  50                   push eax
// 005b77f6  e867840700           call 0x62fc62
// 005b77fb  895f04               mov dword ptr [edi + 4], ebx
// 005b77fe  895f08               mov dword ptr [edi + 8], ebx
// 005b7801  8b4644               mov eax, dword ptr [esi + 0x44]
// 005b7804  83c404               add esp, 4
// 005b7807  3bc3                 cmp eax, ebx
// 005b7809  7409                 je 0x5b7814
// 005b780b  50                   push eax
// 005b780c  e851840700           call 0x62fc62
// 005b7811  83c404               add esp, 4
// 005b7814  8d7e34               lea edi, [esi + 0x34]
// 005b7817  895e44               mov dword ptr [esi + 0x44], ebx
// 005b781a  895e48               mov dword ptr [esi + 0x48], ebx
// 005b781d  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005b7820  8b4704               mov eax, dword ptr [edi + 4]
// 005b7823  8b08                 mov ecx, dword ptr [eax]
// 005b7825  50                   push eax
// 005b7826  57                   push edi
// 005b7827  51                   push ecx
// 005b7828  57                   push edi
// 005b7829  8d542424             lea edx, [esp + 0x24]
// 005b782d  52                   push edx
// 005b782e  8bcf                 mov ecx, edi
// 005b7830  c644243801           mov byte ptr [esp + 0x38], 1
// 005b7835  e8f6fbffff           call 0x5b7430
// 005b783a  8b4704               mov eax, dword ptr [edi + 4]
// 005b783d  50                   push eax
// 005b783e  e81f840700           call 0x62fc62
// 005b7843  895f04               mov dword ptr [edi + 4], ebx
// 005b7846  895f08               mov dword ptr [edi + 8], ebx
// 005b7849  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005b784c  8b08                 mov ecx, dword ptr [eax]
// 005b784e  83c404               add esp, 4
// 005b7851  8d7e28               lea edi, [esi + 0x28]
// 005b7854  50                   push eax
// 005b7855  57                   push edi
// 005b7856  51                   push ecx
// 005b7857  57                   push edi
// 005b7858  8d442424             lea eax, [esp + 0x24]
// 005b785c  50                   push eax
// 005b785d  8bcf                 mov ecx, edi
// 005b785f  885c2438             mov byte ptr [esp + 0x38], bl
// 005b7863  e8c8fbffff           call 0x5b7430
// 005b7868  8b4704               mov eax, dword ptr [edi + 4]
// 005b786b  50                   push eax
// 005b786c  e8f1830700           call 0x62fc62
// 005b7871  83c404               add esp, 4
// 005b7874  8bce                 mov ecx, esi
// 005b7876  895f04               mov dword ptr [edi + 4], ebx
// 005b7879  895f08               mov dword ptr [edi + 8], ebx
// 005b787c  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005b7884  e8f7f9fcff           call 0x587280
// 005b7889  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005b788d  5f                   pop edi
// 005b788e  5e                   pop esi
// 005b788f  5d                   pop ebp
// 005b7890  5b                   pop ebx
// 005b7891  64890d00000000       mov dword ptr fs:[0], ecx
// 005b7898  83c418               add esp, 0x18
// 005b789b  c3                   ret 
// library openrbx-client/App\v8datamodel\Enums.cpp (function ??1?$EnumDesc@W4PartType@Part@RBX@@@Reflection@RBX@@EAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Enums.cpp
