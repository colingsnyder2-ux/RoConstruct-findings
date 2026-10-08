// roc 2008-06 00634df0  unit: RBX::$$A6AXVBrickColor::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634df0
//
// 00634df0  6aff                 push -1
// 00634df2  68596f7c00           push 0x7c6f59
// 00634df7  64a100000000         mov eax, dword ptr fs:[0]
// 00634dfd  50                   push eax
// 00634dfe  64892500000000       mov dword ptr fs:[0], esp
// 00634e05  83ec10               sub esp, 0x10
// 00634e08  53                   push ebx
// 00634e09  33db                 xor ebx, ebx
// 00634e0b  895c2404             mov dword ptr [esp + 4], ebx
// 00634e0f  56                   push esi
// 00634e10  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00634e14  8b06                 mov eax, dword ptr [esi]
// 00634e16  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00634e19  57                   push edi
// 00634e1a  8bf9                 mov edi, ecx
// 00634e1c  3bc3                 cmp eax, ebx
// 00634e1e  7405                 je 0x634e25
// 00634e20  395808               cmp dword ptr [eax + 8], ebx
// 00634e23  7521                 jne 0x634e46
// 00634e25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00634e29  895804               mov dword ptr [eax + 4], ebx
// 00634e2c  895808               mov dword ptr [eax + 8], ebx
// 00634e2f  88580c               mov byte ptr [eax + 0xc], bl
// 00634e32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634e36  64890d00000000       mov dword ptr fs:[0], ecx
// 00634e3d  5f                   pop edi
// 00634e3e  5e                   pop esi
// 00634e3f  5b                   pop ebx
// 00634e40  83c41c               add esp, 0x1c
// 00634e43  c20c00               ret 0xc
// 00634e46  8d4608               lea eax, [esi + 8]
// 00634e49  50                   push eax
// 00634e4a  8d4c2434             lea ecx, [esp + 0x34]
// 00634e4e  e83dffffff           call 0x634d90
// 00634e53  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00634e57  51                   push ecx
// 00634e58  83ec08               sub esp, 8
// 00634e5b  8bd4                 mov edx, esp
// 00634e5d  89642440             mov dword ptr [esp + 0x40], esp
// 00634e61  52                   push edx
// 00634e62  8bce                 mov ecx, esi
// 00634e64  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00634e6c  e83fc7e5ff           call 0x4915b0
// 00634e71  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00634e75  895c2420             mov dword ptr [esp + 0x20], ebx
// 00634e79  895c2424             mov dword ptr [esp + 0x24], ebx
// 00634e7d  8b0f                 mov ecx, dword ptr [edi]
// 00634e7f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00634e83  8d44241c             lea eax, [esp + 0x1c]
// 00634e87  50                   push eax
// 00634e88  8d542440             lea edx, [esp + 0x40]
// 00634e8c  52                   push edx
// 00634e8d  57                   push edi
// 00634e8e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00634e93  e8685af3ff           call 0x56a900
// 00634e98  8b442418             mov eax, dword ptr [esp + 0x18]
// 00634e9c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00634ea4  c644242401           mov byte ptr [esp + 0x24], 1
// 00634ea9  3bc3                 cmp eax, ebx
// 00634eab  742c                 je 0x634ed9
// 00634ead  8bf0                 mov esi, eax
// 00634eaf  83c004               add eax, 4
// 00634eb2  83c9ff               or ecx, 0xffffffff
// 00634eb5  f00fc108             lock xadd dword ptr [eax], ecx
// 00634eb9  751e                 jne 0x634ed9
// 00634ebb  8b16                 mov edx, dword ptr [esi]
// 00634ebd  8b4204               mov eax, dword ptr [edx + 4]
// 00634ec0  8bce                 mov ecx, esi
// 00634ec2  ffd0                 call eax
// 00634ec4  8d4e08               lea ecx, [esi + 8]
// 00634ec7  83caff               or edx, 0xffffffff
// 00634eca  f00fc111             lock xadd dword ptr [ecx], edx
// 00634ece  7509                 jne 0x634ed9
// 00634ed0  8b06                 mov eax, dword ptr [esi]
// 00634ed2  8b5008               mov edx, dword ptr [eax + 8]
// 00634ed5  8bce                 mov ecx, esi
// 00634ed7  ffd2                 call edx
// 00634ed9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00634edd  885c2424             mov byte ptr [esp + 0x24], bl
// 00634ee1  3bcb                 cmp ecx, ebx
// 00634ee3  7408                 je 0x634eed
// 00634ee5  8b01                 mov eax, dword ptr [ecx]
// 00634ee7  8b10                 mov edx, dword ptr [eax]
// 00634ee9  6a01                 push 1
// 00634eeb  ffd2                 call edx
// 00634eed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634ef1  8bc7                 mov eax, edi
// 00634ef3  5f                   pop edi
// 00634ef4  5e                   pop esi
// 00634ef5  64890d00000000       mov dword ptr fs:[0], ecx
// 00634efc  5b                   pop ebx
// 00634efd  83c41c               add esp, 0x1c
// 00634f00  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
