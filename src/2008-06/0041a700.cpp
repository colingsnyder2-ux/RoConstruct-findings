// roc 2008-06 0041a700  unit: boost::X::U?$last_value::?$holder  size: 221 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a700
//
// 0041a700  64a100000000         mov eax, dword ptr fs:[0]
// 0041a706  6aff                 push -1
// 0041a708  6858df7b00           push 0x7bdf58
// 0041a70d  50                   push eax
// 0041a70e  64892500000000       mov dword ptr fs:[0], esp
// 0041a715  53                   push ebx
// 0041a716  56                   push esi
// 0041a717  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0041a71b  bb01000000           mov ebx, 1
// 0041a720  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0041a728  3bc3                 cmp eax, ebx
// 0041a72a  7509                 jne 0x41a735
// 0041a72c  395c2428             cmp dword ptr [esp + 0x28], ebx
// 0041a730  0f95c3               setne bl
// 0041a733  eb29                 jmp 0x41a75e
// 0041a735  83f802               cmp eax, 2
// 0041a738  7504                 jne 0x41a73e
// 0041a73a  32db                 xor bl, bl
// 0041a73c  eb20                 jmp 0x41a75e
// 0041a73e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0041a742  3bc3                 cmp eax, ebx
// 0041a744  7504                 jne 0x41a74a
// 0041a746  32db                 xor bl, bl
// 0041a748  eb14                 jmp 0x41a75e
// 0041a74a  83f802               cmp eax, 2
// 0041a74d  740f                 je 0x41a75e
// 0041a74f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0041a753  8b08                 mov ecx, dword ptr [eax]
// 0041a755  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0041a759  3b0a                 cmp ecx, dword ptr [edx]
// 0041a75b  0f9cc3               setl bl
// 0041a75e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0041a762  85f6                 test esi, esi
// 0041a764  742a                 je 0x41a790
// 0041a766  8d4604               lea eax, [esi + 4]
// 0041a769  83c9ff               or ecx, 0xffffffff
// 0041a76c  f00fc108             lock xadd dword ptr [eax], ecx
// 0041a770  751e                 jne 0x41a790
// 0041a772  8b16                 mov edx, dword ptr [esi]
// 0041a774  8b4204               mov eax, dword ptr [edx + 4]
// 0041a777  8bce                 mov ecx, esi
// 0041a779  ffd0                 call eax
// 0041a77b  8d4e08               lea ecx, [esi + 8]
// 0041a77e  83caff               or edx, 0xffffffff
// 0041a781  f00fc111             lock xadd dword ptr [ecx], edx
// 0041a785  7509                 jne 0x41a790
// 0041a787  8b06                 mov eax, dword ptr [esi]
// 0041a789  8b5008               mov edx, dword ptr [eax + 8]
// 0041a78c  8bce                 mov ecx, esi
// 0041a78e  ffd2                 call edx
// 0041a790  8b742430             mov esi, dword ptr [esp + 0x30]
// 0041a794  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0041a79c  85f6                 test esi, esi
// 0041a79e  742a                 je 0x41a7ca
// 0041a7a0  8d4604               lea eax, [esi + 4]
// 0041a7a3  83c9ff               or ecx, 0xffffffff
// 0041a7a6  f00fc108             lock xadd dword ptr [eax], ecx
// 0041a7aa  751e                 jne 0x41a7ca
// 0041a7ac  8b16                 mov edx, dword ptr [esi]
// 0041a7ae  8b4204               mov eax, dword ptr [edx + 4]
// 0041a7b1  8bce                 mov ecx, esi
// 0041a7b3  ffd0                 call eax
// 0041a7b5  8d4e08               lea ecx, [esi + 8]
// 0041a7b8  83caff               or edx, 0xffffffff
// 0041a7bb  f00fc111             lock xadd dword ptr [ecx], edx
// 0041a7bf  7509                 jne 0x41a7ca
// 0041a7c1  8b06                 mov eax, dword ptr [esi]
// 0041a7c3  8b5008               mov edx, dword ptr [eax + 8]
// 0041a7c6  8bce                 mov ecx, esi
// 0041a7c8  ffd2                 call edx
// 0041a7ca  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041a7ce  5e                   pop esi
// 0041a7cf  8ac3                 mov al, bl
// 0041a7d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a7d8  5b                   pop ebx
// 0041a7d9  83c40c               add esp, 0xc
// 0041a7dc  c3                   ret 
// library templates-boost-1_34_1/signal_b.cpp (function ?invoke@?$function_obj_invoker2@V?$group_bridge_compare@U?$less@H@std@@H@detail@signals@boost@@_NVstored_group@234@V5234@@function@detail@boost@@SA_NAATfunction_buffer@234@Vstored_group@3signals@4@1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 signal_b.cpp
