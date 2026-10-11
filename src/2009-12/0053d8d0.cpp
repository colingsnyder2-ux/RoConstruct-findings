// roc 2009-12 0053d8d0  unit: RBX::Network::DirectPhysicsReceiver  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053d8d0
//
// 0053d8d0  83ec10               sub esp, 0x10
// 0053d8d3  55                   push ebp
// 0053d8d4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0053d8d8  56                   push esi
// 0053d8d9  8bf1                 mov esi, ecx
// 0053d8db  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0053d8de  8b4104               mov eax, dword ptr [ecx + 4]
// 0053d8e1  80781900             cmp byte ptr [eax + 0x19], 0
// 0053d8e5  57                   push edi
// 0053d8e6  8bf9                 mov edi, ecx
// 0053d8e8  751a                 jne 0x53d904
// 0053d8ea  8b4d00               mov ecx, dword ptr [ebp]
// 0053d8ed  8d4900               lea ecx, [ecx]
// 0053d8f0  39480c               cmp dword ptr [eax + 0xc], ecx
// 0053d8f3  7305                 jae 0x53d8fa
// 0053d8f5  8b4008               mov eax, dword ptr [eax + 8]
// 0053d8f8  eb04                 jmp 0x53d8fe
// 0053d8fa  8bf8                 mov edi, eax
// 0053d8fc  8b00                 mov eax, dword ptr [eax]
// 0053d8fe  80781900             cmp byte ptr [eax + 0x19], 0
// 0053d902  74ec                 je 0x53d8f0
// 0053d904  8b06                 mov eax, dword ptr [esi]
// 0053d906  53                   push ebx
// 0053d907  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 0053d90a  897c2414             mov dword ptr [esp + 0x14], edi
// 0053d90e  89442410             mov dword ptr [esp + 0x10], eax
// 0053d912  85c0                 test eax, eax
// 0053d914  7404                 je 0x53d91a
// 0053d916  3bc0                 cmp eax, eax
// 0053d918  7406                 je 0x53d920
// 0053d91a  ff1560b79800         call dword ptr [0x98b760]
// 0053d920  3bfb                 cmp edi, ebx
// 0053d922  5b                   pop ebx
// 0053d923  740e                 je 0x53d933
// 0053d925  8b4500               mov eax, dword ptr [ebp]
// 0053d928  3b470c               cmp eax, dword ptr [edi + 0xc]
// 0053d92b  7206                 jb 0x53d933
// 0053d92d  8d4c240c             lea ecx, [esp + 0xc]
// 0053d931  eb11                 jmp 0x53d944
// 0053d933  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0053d936  8b16                 mov edx, dword ptr [esi]
// 0053d938  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053d93c  89542414             mov dword ptr [esp + 0x14], edx
// 0053d940  8d4c2414             lea ecx, [esp + 0x14]
// 0053d944  8b11                 mov edx, dword ptr [ecx]
// 0053d946  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053d94a  8b4904               mov ecx, dword ptr [ecx + 4]
// 0053d94d  5f                   pop edi
// 0053d94e  5e                   pop esi
// 0053d94f  8910                 mov dword ptr [eax], edx
// 0053d951  894804               mov dword ptr [eax + 4], ecx
// 0053d954  5d                   pop ebp
// 0053d955  83c410               add esp, 0x10
// 0053d958  c20800               ret 8
// library openrbx-client/App\reflection\signal.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/signal.cpp
