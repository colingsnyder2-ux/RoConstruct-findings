// roc 2007-08 0056a680  unit: RBX::ModelInstance  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056a680
//
// 0056a680  64a100000000         mov eax, dword ptr fs:[0]
// 0056a686  6aff                 push -1
// 0056a688  6810617500           push 0x756110
// 0056a68d  50                   push eax
// 0056a68e  64892500000000       mov dword ptr fs:[0], esp
// 0056a695  8b5104               mov edx, dword ptr [ecx + 4]
// 0056a698  8b4204               mov eax, dword ptr [edx + 4]
// 0056a69b  83ec1c               sub esp, 0x1c
// 0056a69e  53                   push ebx
// 0056a69f  55                   push ebp
// 0056a6a0  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0056a6a4  33db                 xor ebx, ebx
// 0056a6a6  385819               cmp byte ptr [eax + 0x19], bl
// 0056a6a9  56                   push esi
// 0056a6aa  57                   push edi
// 0056a6ab  7516                 jne 0x56a6c3
// 0056a6ad  8b7500               mov esi, dword ptr [ebp]
// 0056a6b0  39700c               cmp dword ptr [eax + 0xc], esi
// 0056a6b3  7305                 jae 0x56a6ba
// 0056a6b5  8b4008               mov eax, dword ptr [eax + 8]
// 0056a6b8  eb04                 jmp 0x56a6be
// 0056a6ba  8bd0                 mov edx, eax
// 0056a6bc  8b00                 mov eax, dword ptr [eax]
// 0056a6be  385819               cmp byte ptr [eax + 0x19], bl
// 0056a6c1  74ed                 je 0x56a6b0
// 0056a6c3  3b5104               cmp edx, dword ptr [ecx + 4]
// 0056a6c6  8bfa                 mov edi, edx
// 0056a6c8  8bf1                 mov esi, ecx
// 0056a6ca  7408                 je 0x56a6d4
// 0056a6cc  8b4500               mov eax, dword ptr [ebp]
// 0056a6cf  3b420c               cmp eax, dword ptr [edx + 0xc]
// 0056a6d2  736e                 jae 0x56a742
// 0056a6d4  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a6d8  895c2414             mov dword ptr [esp + 0x14], ebx
// 0056a6dc  8b5500               mov edx, dword ptr [ebp]
// 0056a6df  895c2434             mov dword ptr [esp + 0x34], ebx
// 0056a6e3  89542420             mov dword ptr [esp + 0x20], edx
// 0056a6e7  895c2424             mov dword ptr [esp + 0x24], ebx
// 0056a6eb  895c2428             mov dword ptr [esp + 0x28], ebx
// 0056a6ef  8d442420             lea eax, [esp + 0x20]
// 0056a6f3  50                   push eax
// 0056a6f4  57                   push edi
// 0056a6f5  56                   push esi
// 0056a6f6  8d542424             lea edx, [esp + 0x24]
// 0056a6fa  52                   push edx
// 0056a6fb  c644244401           mov byte ptr [esp + 0x44], 1
// 0056a700  e81bfcffff           call 0x56a320
// 0056a705  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0056a709  3beb                 cmp ebp, ebx
// 0056a70b  8b30                 mov esi, dword ptr [eax]
// 0056a70d  8b7804               mov edi, dword ptr [eax + 4]
// 0056a710  885c2434             mov byte ptr [esp + 0x34], bl
// 0056a714  742c                 je 0x56a742
// 0056a716  8d4504               lea eax, [ebp + 4]
// 0056a719  83c9ff               or ecx, 0xffffffff
// 0056a71c  f00fc108             lock xadd dword ptr [eax], ecx
// 0056a720  7520                 jne 0x56a742
// 0056a722  8b5500               mov edx, dword ptr [ebp]
// 0056a725  8b4204               mov eax, dword ptr [edx + 4]
// 0056a728  8bcd                 mov ecx, ebp
// 0056a72a  ffd0                 call eax
// 0056a72c  8d4d08               lea ecx, [ebp + 8]
// 0056a72f  83caff               or edx, 0xffffffff
// 0056a732  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a736  750a                 jne 0x56a742
// 0056a738  8b4500               mov eax, dword ptr [ebp]
// 0056a73b  8b5008               mov edx, dword ptr [eax + 8]
// 0056a73e  8bcd                 mov ecx, ebp
// 0056a740  ffd2                 call edx
// 0056a742  3bf3                 cmp esi, ebx
// 0056a744  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0056a74a  7502                 jne 0x56a74e
// 0056a74c  ffd3                 call ebx
// 0056a74e  3b7e04               cmp edi, dword ptr [esi + 4]
// 0056a751  7502                 jne 0x56a755
// 0056a753  ffd3                 call ebx
// 0056a755  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0056a759  8d4710               lea eax, [edi + 0x10]
// 0056a75c  5f                   pop edi
// 0056a75d  5e                   pop esi
// 0056a75e  5d                   pop ebp
// 0056a75f  5b                   pop ebx
// 0056a760  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a767  83c428               add esp, 0x28
// 0056a76a  c20400               ret 4
// library openrbx-client/App\reflection\signal.cpp (function ??A?$map@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@@std@@QAEAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/signal.cpp
