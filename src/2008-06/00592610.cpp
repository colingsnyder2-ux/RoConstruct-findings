// roc 2008-06 00592610  unit: RBX::RootInstance  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592610
//
// 00592610  6aff                 push -1
// 00592612  64a100000000         mov eax, dword ptr fs:[0]
// 00592618  8b542408             mov edx, dword ptr [esp + 8]
// 0059261c  68e01c7d00           push 0x7d1ce0
// 00592621  50                   push eax
// 00592622  64892500000000       mov dword ptr fs:[0], esp
// 00592629  83ec1c               sub esp, 0x1c
// 0059262c  53                   push ebx
// 0059262d  55                   push ebp
// 0059262e  56                   push esi
// 0059262f  57                   push edi
// 00592630  8bf9                 mov edi, ecx
// 00592632  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00592635  8b4104               mov eax, dword ptr [ecx + 4]
// 00592638  33db                 xor ebx, ebx
// 0059263a  8be9                 mov ebp, ecx
// 0059263c  385819               cmp byte ptr [eax + 0x19], bl
// 0059263f  7515                 jne 0x592656
// 00592641  8b0a                 mov ecx, dword ptr [edx]
// 00592643  39480c               cmp dword ptr [eax + 0xc], ecx
// 00592646  7305                 jae 0x59264d
// 00592648  8b4008               mov eax, dword ptr [eax + 8]
// 0059264b  eb04                 jmp 0x592651
// 0059264d  8be8                 mov ebp, eax
// 0059264f  8b00                 mov eax, dword ptr [eax]
// 00592651  385819               cmp byte ptr [eax + 0x19], bl
// 00592654  74ed                 je 0x592643
// 00592656  8b37                 mov esi, dword ptr [edi]
// 00592658  8b4718               mov eax, dword ptr [edi + 0x18]
// 0059265b  89442414             mov dword ptr [esp + 0x14], eax
// 0059265f  3bf3                 cmp esi, ebx
// 00592661  7404                 je 0x592667
// 00592663  3bf6                 cmp esi, esi
// 00592665  740c                 je 0x592673
// 00592667  ff1590288000         call dword ptr [0x802890]
// 0059266d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00592671  33db                 xor ebx, ebx
// 00592673  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00592677  7407                 je 0x592680
// 00592679  8b0a                 mov ecx, dword ptr [edx]
// 0059267b  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0059267e  736d                 jae 0x5926ed
// 00592680  895c2410             mov dword ptr [esp + 0x10], ebx
// 00592684  895c2414             mov dword ptr [esp + 0x14], ebx
// 00592688  8b12                 mov edx, dword ptr [edx]
// 0059268a  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059268e  89542420             mov dword ptr [esp + 0x20], edx
// 00592692  895c2424             mov dword ptr [esp + 0x24], ebx
// 00592696  895c2428             mov dword ptr [esp + 0x28], ebx
// 0059269a  8d442420             lea eax, [esp + 0x20]
// 0059269e  50                   push eax
// 0059269f  55                   push ebp
// 005926a0  56                   push esi
// 005926a1  8d4c2424             lea ecx, [esp + 0x24]
// 005926a5  51                   push ecx
// 005926a6  8bcf                 mov ecx, edi
// 005926a8  c644244401           mov byte ptr [esp + 0x44], 1
// 005926ad  e89efcffff           call 0x592350
// 005926b2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005926b6  8b30                 mov esi, dword ptr [eax]
// 005926b8  8b6804               mov ebp, dword ptr [eax + 4]
// 005926bb  885c2434             mov byte ptr [esp + 0x34], bl
// 005926bf  3bfb                 cmp edi, ebx
// 005926c1  742a                 je 0x5926ed
// 005926c3  8d5704               lea edx, [edi + 4]
// 005926c6  83c8ff               or eax, 0xffffffff
// 005926c9  f00fc102             lock xadd dword ptr [edx], eax
// 005926cd  751e                 jne 0x5926ed
// 005926cf  8b17                 mov edx, dword ptr [edi]
// 005926d1  8b4204               mov eax, dword ptr [edx + 4]
// 005926d4  8bcf                 mov ecx, edi
// 005926d6  ffd0                 call eax
// 005926d8  8d4f08               lea ecx, [edi + 8]
// 005926db  83caff               or edx, 0xffffffff
// 005926de  f00fc111             lock xadd dword ptr [ecx], edx
// 005926e2  7509                 jne 0x5926ed
// 005926e4  8b07                 mov eax, dword ptr [edi]
// 005926e6  8b5008               mov edx, dword ptr [eax + 8]
// 005926e9  8bcf                 mov ecx, edi
// 005926eb  ffd2                 call edx
// 005926ed  3bf3                 cmp esi, ebx
// 005926ef  752b                 jne 0x59271c
// 005926f1  ff1590288000         call dword ptr [0x802890]
// 005926f7  33f6                 xor esi, esi
// 005926f9  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 005926fc  7506                 jne 0x592704
// 005926fe  ff1590288000         call dword ptr [0x802890]
// 00592704  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00592708  5f                   pop edi
// 00592709  5e                   pop esi
// 0059270a  8d4510               lea eax, [ebp + 0x10]
// 0059270d  5d                   pop ebp
// 0059270e  5b                   pop ebx
// 0059270f  64890d00000000       mov dword ptr fs:[0], ecx
// 00592716  83c428               add esp, 0x28
// 00592719  c20400               ret 4
// 0059271c  8b36                 mov esi, dword ptr [esi]
// 0059271e  ebd9                 jmp 0x5926f9
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
