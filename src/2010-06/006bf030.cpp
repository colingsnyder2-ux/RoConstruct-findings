// roc 2010-06 006bf030  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006bf030
//
// 006bf030  6aff                 push -1
// 006bf032  64a100000000         mov eax, dword ptr fs:[0]
// 006bf038  68803e9a00           push 0x9a3e80
// 006bf03d  50                   push eax
// 006bf03e  8b442410             mov eax, dword ptr [esp + 0x10]
// 006bf042  64892500000000       mov dword ptr fs:[0], esp
// 006bf049  83ec34               sub esp, 0x34
// 006bf04c  53                   push ebx
// 006bf04d  55                   push ebp
// 006bf04e  56                   push esi
// 006bf04f  57                   push edi
// 006bf050  50                   push eax
// 006bf051  8bf1                 mov esi, ecx
// 006bf053  e8a8f7ffff           call 0x6be800
// 006bf058  33db                 xor ebx, ebx
// 006bf05a  8be8                 mov ebp, eax
// 006bf05c  3bf3                 cmp esi, ebx
// 006bf05e  7506                 jne 0x6bf066
// 006bf060  ff150ca99e00         call dword ptr [0x9ea90c]
// 006bf066  8b3e                 mov edi, dword ptr [esi]
// 006bf068  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 006bf06b  894c2414             mov dword ptr [esp + 0x14], ecx
// 006bf06f  3bfb                 cmp edi, ebx
// 006bf071  7404                 je 0x6bf077
// 006bf073  3bff                 cmp edi, edi
// 006bf075  7406                 je 0x6bf07d
// 006bf077  ff150ca99e00         call dword ptr [0x9ea90c]
// 006bf07d  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 006bf081  7416                 je 0x6bf099
// 006bf083  8b442454             mov eax, dword ptr [esp + 0x54]
// 006bf087  8d550c               lea edx, [ebp + 0xc]
// 006bf08a  52                   push edx
// 006bf08b  50                   push eax
// 006bf08c  ff151ca59e00         call dword ptr [0x9ea51c]
// 006bf092  83c408               add esp, 8
// 006bf095  84c0                 test al, al
// 006bf097  744d                 je 0x6bf0e6
// 006bf099  895c2410             mov dword ptr [esp + 0x10], ebx
// 006bf09d  895c2414             mov dword ptr [esp + 0x14], ebx
// 006bf0a1  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006bf0a5  51                   push ecx
// 006bf0a6  8d4c2424             lea ecx, [esp + 0x24]
// 006bf0aa  895c2450             mov dword ptr [esp + 0x50], ebx
// 006bf0ae  ff150ca49e00         call dword ptr [0x9ea40c]
// 006bf0b4  895c243c             mov dword ptr [esp + 0x3c], ebx
// 006bf0b8  895c2440             mov dword ptr [esp + 0x40], ebx
// 006bf0bc  8d542420             lea edx, [esp + 0x20]
// 006bf0c0  52                   push edx
// 006bf0c1  55                   push ebp
// 006bf0c2  57                   push edi
// 006bf0c3  8d442424             lea eax, [esp + 0x24]
// 006bf0c7  50                   push eax
// 006bf0c8  8bce                 mov ecx, esi
// 006bf0ca  c644245c01           mov byte ptr [esp + 0x5c], 1
// 006bf0cf  e89cfcffff           call 0x6bed70
// 006bf0d4  8b38                 mov edi, dword ptr [eax]
// 006bf0d6  8b6804               mov ebp, dword ptr [eax + 4]
// 006bf0d9  8d4c2420             lea ecx, [esp + 0x20]
// 006bf0dd  885c244c             mov byte ptr [esp + 0x4c], bl
// 006bf0e1  e84a0bf8ff           call 0x63fc30
// 006bf0e6  3bfb                 cmp edi, ebx
// 006bf0e8  752b                 jne 0x6bf115
// 006bf0ea  ff150ca99e00         call dword ptr [0x9ea90c]
// 006bf0f0  33ff                 xor edi, edi
// 006bf0f2  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 006bf0f5  7506                 jne 0x6bf0fd
// 006bf0f7  ff150ca99e00         call dword ptr [0x9ea90c]
// 006bf0fd  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006bf101  5f                   pop edi
// 006bf102  5e                   pop esi
// 006bf103  8d4528               lea eax, [ebp + 0x28]
// 006bf106  5d                   pop ebp
// 006bf107  5b                   pop ebx
// 006bf108  64890d00000000       mov dword ptr fs:[0], ecx
// 006bf10f  83c440               add esp, 0x40
// 006bf112  c20400               ret 4
// 006bf115  8b3f                 mov edi, dword ptr [edi]
// 006bf117  ebd9                 jmp 0x6bf0f2
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@@std@@QAEAAVInstanceHandle@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
