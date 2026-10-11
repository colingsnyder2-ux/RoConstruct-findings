// roc 2009-12 0053fb80  unit: RBX::Network::Replicator::NewInstanceItem  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053fb80
//
// 0053fb80  6aff                 push -1
// 0053fb82  64a100000000         mov eax, dword ptr fs:[0]
// 0053fb88  8b542408             mov edx, dword ptr [esp + 8]
// 0053fb8c  6840869400           push 0x948640
// 0053fb91  50                   push eax
// 0053fb92  64892500000000       mov dword ptr fs:[0], esp
// 0053fb99  83ec1c               sub esp, 0x1c
// 0053fb9c  53                   push ebx
// 0053fb9d  55                   push ebp
// 0053fb9e  56                   push esi
// 0053fb9f  57                   push edi
// 0053fba0  8bf9                 mov edi, ecx
// 0053fba2  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0053fba5  8b4104               mov eax, dword ptr [ecx + 4]
// 0053fba8  33db                 xor ebx, ebx
// 0053fbaa  8be9                 mov ebp, ecx
// 0053fbac  385819               cmp byte ptr [eax + 0x19], bl
// 0053fbaf  7515                 jne 0x53fbc6
// 0053fbb1  8b0a                 mov ecx, dword ptr [edx]
// 0053fbb3  39480c               cmp dword ptr [eax + 0xc], ecx
// 0053fbb6  7305                 jae 0x53fbbd
// 0053fbb8  8b4008               mov eax, dword ptr [eax + 8]
// 0053fbbb  eb04                 jmp 0x53fbc1
// 0053fbbd  8be8                 mov ebp, eax
// 0053fbbf  8b00                 mov eax, dword ptr [eax]
// 0053fbc1  385819               cmp byte ptr [eax + 0x19], bl
// 0053fbc4  74ed                 je 0x53fbb3
// 0053fbc6  8b37                 mov esi, dword ptr [edi]
// 0053fbc8  8b4718               mov eax, dword ptr [edi + 0x18]
// 0053fbcb  89442414             mov dword ptr [esp + 0x14], eax
// 0053fbcf  3bf3                 cmp esi, ebx
// 0053fbd1  7404                 je 0x53fbd7
// 0053fbd3  3bf6                 cmp esi, esi
// 0053fbd5  740c                 je 0x53fbe3
// 0053fbd7  ff1560b79800         call dword ptr [0x98b760]
// 0053fbdd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0053fbe1  33db                 xor ebx, ebx
// 0053fbe3  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0053fbe7  7407                 je 0x53fbf0
// 0053fbe9  8b0a                 mov ecx, dword ptr [edx]
// 0053fbeb  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 0053fbee  736d                 jae 0x53fc5d
// 0053fbf0  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053fbf4  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053fbf8  8b12                 mov edx, dword ptr [edx]
// 0053fbfa  895c2434             mov dword ptr [esp + 0x34], ebx
// 0053fbfe  89542420             mov dword ptr [esp + 0x20], edx
// 0053fc02  895c2424             mov dword ptr [esp + 0x24], ebx
// 0053fc06  895c2428             mov dword ptr [esp + 0x28], ebx
// 0053fc0a  8d442420             lea eax, [esp + 0x20]
// 0053fc0e  50                   push eax
// 0053fc0f  55                   push ebp
// 0053fc10  56                   push esi
// 0053fc11  8d4c2424             lea ecx, [esp + 0x24]
// 0053fc15  51                   push ecx
// 0053fc16  8bcf                 mov ecx, edi
// 0053fc18  c644244401           mov byte ptr [esp + 0x44], 1
// 0053fc1d  e84ef3ffff           call 0x53ef70
// 0053fc22  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0053fc26  8b30                 mov esi, dword ptr [eax]
// 0053fc28  8b6804               mov ebp, dword ptr [eax + 4]
// 0053fc2b  885c2434             mov byte ptr [esp + 0x34], bl
// 0053fc2f  3bfb                 cmp edi, ebx
// 0053fc31  742a                 je 0x53fc5d
// 0053fc33  8d5704               lea edx, [edi + 4]
// 0053fc36  83c8ff               or eax, 0xffffffff
// 0053fc39  f00fc102             lock xadd dword ptr [edx], eax
// 0053fc3d  751e                 jne 0x53fc5d
// 0053fc3f  8b17                 mov edx, dword ptr [edi]
// 0053fc41  8b4204               mov eax, dword ptr [edx + 4]
// 0053fc44  8bcf                 mov ecx, edi
// 0053fc46  ffd0                 call eax
// 0053fc48  8d4f08               lea ecx, [edi + 8]
// 0053fc4b  83caff               or edx, 0xffffffff
// 0053fc4e  f00fc111             lock xadd dword ptr [ecx], edx
// 0053fc52  7509                 jne 0x53fc5d
// 0053fc54  8b07                 mov eax, dword ptr [edi]
// 0053fc56  8b5008               mov edx, dword ptr [eax + 8]
// 0053fc59  8bcf                 mov ecx, edi
// 0053fc5b  ffd2                 call edx
// 0053fc5d  3bf3                 cmp esi, ebx
// 0053fc5f  752b                 jne 0x53fc8c
// 0053fc61  ff1560b79800         call dword ptr [0x98b760]
// 0053fc67  33f6                 xor esi, esi
// 0053fc69  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 0053fc6c  7506                 jne 0x53fc74
// 0053fc6e  ff1560b79800         call dword ptr [0x98b760]
// 0053fc74  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053fc78  5f                   pop edi
// 0053fc79  5e                   pop esi
// 0053fc7a  8d4510               lea eax, [ebp + 0x10]
// 0053fc7d  5d                   pop ebp
// 0053fc7e  5b                   pop ebx
// 0053fc7f  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fc86  83c428               add esp, 0x28
// 0053fc89  c20400               ret 4
// 0053fc8c  8b36                 mov esi, dword ptr [esi]
// 0053fc8e  ebd9                 jmp 0x53fc69
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
