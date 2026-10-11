// roc 2010-06 004edf10  unit: RBX::Network::Replicator::NewInstanceItem  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004edf10
//
// 004edf10  6aff                 push -1
// 004edf12  64a100000000         mov eax, dword ptr fs:[0]
// 004edf18  8b542408             mov edx, dword ptr [esp + 8]
// 004edf1c  68a0af9900           push 0x99afa0
// 004edf21  50                   push eax
// 004edf22  64892500000000       mov dword ptr fs:[0], esp
// 004edf29  83ec1c               sub esp, 0x1c
// 004edf2c  53                   push ebx
// 004edf2d  55                   push ebp
// 004edf2e  56                   push esi
// 004edf2f  57                   push edi
// 004edf30  8bf9                 mov edi, ecx
// 004edf32  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 004edf35  8b4104               mov eax, dword ptr [ecx + 4]
// 004edf38  33db                 xor ebx, ebx
// 004edf3a  8be9                 mov ebp, ecx
// 004edf3c  385819               cmp byte ptr [eax + 0x19], bl
// 004edf3f  7515                 jne 0x4edf56
// 004edf41  8b0a                 mov ecx, dword ptr [edx]
// 004edf43  39480c               cmp dword ptr [eax + 0xc], ecx
// 004edf46  7305                 jae 0x4edf4d
// 004edf48  8b4008               mov eax, dword ptr [eax + 8]
// 004edf4b  eb04                 jmp 0x4edf51
// 004edf4d  8be8                 mov ebp, eax
// 004edf4f  8b00                 mov eax, dword ptr [eax]
// 004edf51  385819               cmp byte ptr [eax + 0x19], bl
// 004edf54  74ed                 je 0x4edf43
// 004edf56  8b37                 mov esi, dword ptr [edi]
// 004edf58  8b4718               mov eax, dword ptr [edi + 0x18]
// 004edf5b  89442414             mov dword ptr [esp + 0x14], eax
// 004edf5f  3bf3                 cmp esi, ebx
// 004edf61  7404                 je 0x4edf67
// 004edf63  3bf6                 cmp esi, esi
// 004edf65  740c                 je 0x4edf73
// 004edf67  ff150ca99e00         call dword ptr [0x9ea90c]
// 004edf6d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 004edf71  33db                 xor ebx, ebx
// 004edf73  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 004edf77  7407                 je 0x4edf80
// 004edf79  8b0a                 mov ecx, dword ptr [edx]
// 004edf7b  3b4d0c               cmp ecx, dword ptr [ebp + 0xc]
// 004edf7e  736d                 jae 0x4edfed
// 004edf80  895c2410             mov dword ptr [esp + 0x10], ebx
// 004edf84  895c2414             mov dword ptr [esp + 0x14], ebx
// 004edf88  8b12                 mov edx, dword ptr [edx]
// 004edf8a  895c2434             mov dword ptr [esp + 0x34], ebx
// 004edf8e  89542420             mov dword ptr [esp + 0x20], edx
// 004edf92  895c2424             mov dword ptr [esp + 0x24], ebx
// 004edf96  895c2428             mov dword ptr [esp + 0x28], ebx
// 004edf9a  8d442420             lea eax, [esp + 0x20]
// 004edf9e  50                   push eax
// 004edf9f  55                   push ebp
// 004edfa0  56                   push esi
// 004edfa1  8d4c2424             lea ecx, [esp + 0x24]
// 004edfa5  51                   push ecx
// 004edfa6  8bcf                 mov ecx, edi
// 004edfa8  c644244401           mov byte ptr [esp + 0x44], 1
// 004edfad  e84ef3ffff           call 0x4ed300
// 004edfb2  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004edfb6  8b30                 mov esi, dword ptr [eax]
// 004edfb8  8b6804               mov ebp, dword ptr [eax + 4]
// 004edfbb  885c2434             mov byte ptr [esp + 0x34], bl
// 004edfbf  3bfb                 cmp edi, ebx
// 004edfc1  742a                 je 0x4edfed
// 004edfc3  8d5704               lea edx, [edi + 4]
// 004edfc6  83c8ff               or eax, 0xffffffff
// 004edfc9  f00fc102             lock xadd dword ptr [edx], eax
// 004edfcd  751e                 jne 0x4edfed
// 004edfcf  8b17                 mov edx, dword ptr [edi]
// 004edfd1  8b4204               mov eax, dword ptr [edx + 4]
// 004edfd4  8bcf                 mov ecx, edi
// 004edfd6  ffd0                 call eax
// 004edfd8  8d4f08               lea ecx, [edi + 8]
// 004edfdb  83caff               or edx, 0xffffffff
// 004edfde  f00fc111             lock xadd dword ptr [ecx], edx
// 004edfe2  7509                 jne 0x4edfed
// 004edfe4  8b07                 mov eax, dword ptr [edi]
// 004edfe6  8b5008               mov edx, dword ptr [eax + 8]
// 004edfe9  8bcf                 mov ecx, edi
// 004edfeb  ffd2                 call edx
// 004edfed  3bf3                 cmp esi, ebx
// 004edfef  752b                 jne 0x4ee01c
// 004edff1  ff150ca99e00         call dword ptr [0x9ea90c]
// 004edff7  33f6                 xor esi, esi
// 004edff9  3b6e18               cmp ebp, dword ptr [esi + 0x18]
// 004edffc  7506                 jne 0x4ee004
// 004edffe  ff150ca99e00         call dword ptr [0x9ea90c]
// 004ee004  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ee008  5f                   pop edi
// 004ee009  5e                   pop esi
// 004ee00a  8d4510               lea eax, [ebp + 0x10]
// 004ee00d  5d                   pop ebp
// 004ee00e  5b                   pop ebx
// 004ee00f  64890d00000000       mov dword ptr fs:[0], ecx
// 004ee016  83c428               add esp, 0x28
// 004ee019  c20400               ret 4
// 004ee01c  8b36                 mov esi, dword ptr [esi]
// 004ee01e  ebd9                 jmp 0x4edff9
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
