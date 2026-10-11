// roc 2009-12 0073f250  unit: RBX::VInstance::V?$shared_ptr::V?$vector::V?$copy_on_write_ptr::?$sp_counted_impl_p  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0073f250
//
// 0073f250  6aff                 push -1
// 0073f252  64a100000000         mov eax, dword ptr fs:[0]
// 0073f258  6820019500           push 0x950120
// 0073f25d  50                   push eax
// 0073f25e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0073f262  64892500000000       mov dword ptr fs:[0], esp
// 0073f269  83ec34               sub esp, 0x34
// 0073f26c  53                   push ebx
// 0073f26d  55                   push ebp
// 0073f26e  56                   push esi
// 0073f26f  57                   push edi
// 0073f270  50                   push eax
// 0073f271  8bf1                 mov esi, ecx
// 0073f273  e8c8f6ffff           call 0x73e940
// 0073f278  33db                 xor ebx, ebx
// 0073f27a  8be8                 mov ebp, eax
// 0073f27c  3bf3                 cmp esi, ebx
// 0073f27e  7506                 jne 0x73f286
// 0073f280  ff1560b79800         call dword ptr [0x98b760]
// 0073f286  8b3e                 mov edi, dword ptr [esi]
// 0073f288  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0073f28b  894c2414             mov dword ptr [esp + 0x14], ecx
// 0073f28f  3bfb                 cmp edi, ebx
// 0073f291  7404                 je 0x73f297
// 0073f293  3bff                 cmp edi, edi
// 0073f295  7406                 je 0x73f29d
// 0073f297  ff1560b79800         call dword ptr [0x98b760]
// 0073f29d  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 0073f2a1  7416                 je 0x73f2b9
// 0073f2a3  8b442454             mov eax, dword ptr [esp + 0x54]
// 0073f2a7  8d550c               lea edx, [ebp + 0xc]
// 0073f2aa  52                   push edx
// 0073f2ab  50                   push eax
// 0073f2ac  ff15d8b59800         call dword ptr [0x98b5d8]
// 0073f2b2  83c408               add esp, 8
// 0073f2b5  84c0                 test al, al
// 0073f2b7  744d                 je 0x73f306
// 0073f2b9  895c2410             mov dword ptr [esp + 0x10], ebx
// 0073f2bd  895c2414             mov dword ptr [esp + 0x14], ebx
// 0073f2c1  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0073f2c5  51                   push ecx
// 0073f2c6  8d4c2424             lea ecx, [esp + 0x24]
// 0073f2ca  895c2450             mov dword ptr [esp + 0x50], ebx
// 0073f2ce  ff15f0b69800         call dword ptr [0x98b6f0]
// 0073f2d4  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0073f2d8  895c2440             mov dword ptr [esp + 0x40], ebx
// 0073f2dc  8d542420             lea edx, [esp + 0x20]
// 0073f2e0  52                   push edx
// 0073f2e1  55                   push ebp
// 0073f2e2  57                   push edi
// 0073f2e3  8d442424             lea eax, [esp + 0x24]
// 0073f2e7  50                   push eax
// 0073f2e8  8bce                 mov ecx, esi
// 0073f2ea  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0073f2ef  e89cfcffff           call 0x73ef90
// 0073f2f4  8b38                 mov edi, dword ptr [eax]
// 0073f2f6  8b6804               mov ebp, dword ptr [eax + 4]
// 0073f2f9  8d4c2420             lea ecx, [esp + 0x20]
// 0073f2fd  885c244c             mov byte ptr [esp + 0x4c], bl
// 0073f301  e8ba7fd3ff           call 0x4772c0
// 0073f306  3bfb                 cmp edi, ebx
// 0073f308  752b                 jne 0x73f335
// 0073f30a  ff1560b79800         call dword ptr [0x98b760]
// 0073f310  33ff                 xor edi, edi
// 0073f312  3b6f18               cmp ebp, dword ptr [edi + 0x18]
// 0073f315  7506                 jne 0x73f31d
// 0073f317  ff1560b79800         call dword ptr [0x98b760]
// 0073f31d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0073f321  5f                   pop edi
// 0073f322  5e                   pop esi
// 0073f323  8d4528               lea eax, [ebp + 0x28]
// 0073f326  5d                   pop ebp
// 0073f327  5b                   pop ebx
// 0073f328  64890d00000000       mov dword ptr fs:[0], ecx
// 0073f32f  83c440               add esp, 0x40
// 0073f332  c20400               ret 4
// 0073f335  8b3f                 mov edi, dword ptr [edi]
// 0073f337  ebd9                 jmp 0x73f312
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ??A?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@@std@@QAEAAVInstanceHandle@RBX@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
