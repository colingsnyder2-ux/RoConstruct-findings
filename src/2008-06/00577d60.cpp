// roc 2008-06 00577d60  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577d60
//
// 00577d60  6aff                 push -1
// 00577d62  68596f7c00           push 0x7c6f59
// 00577d67  64a100000000         mov eax, dword ptr fs:[0]
// 00577d6d  50                   push eax
// 00577d6e  64892500000000       mov dword ptr fs:[0], esp
// 00577d75  83ec10               sub esp, 0x10
// 00577d78  53                   push ebx
// 00577d79  33db                 xor ebx, ebx
// 00577d7b  895c2404             mov dword ptr [esp + 4], ebx
// 00577d7f  56                   push esi
// 00577d80  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00577d84  8b06                 mov eax, dword ptr [esi]
// 00577d86  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00577d89  57                   push edi
// 00577d8a  8bf9                 mov edi, ecx
// 00577d8c  3bc3                 cmp eax, ebx
// 00577d8e  7405                 je 0x577d95
// 00577d90  395808               cmp dword ptr [eax + 8], ebx
// 00577d93  7521                 jne 0x577db6
// 00577d95  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00577d99  895804               mov dword ptr [eax + 4], ebx
// 00577d9c  895808               mov dword ptr [eax + 8], ebx
// 00577d9f  88580c               mov byte ptr [eax + 0xc], bl
// 00577da2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577da6  64890d00000000       mov dword ptr fs:[0], ecx
// 00577dad  5f                   pop edi
// 00577dae  5e                   pop esi
// 00577daf  5b                   pop ebx
// 00577db0  83c41c               add esp, 0x1c
// 00577db3  c20c00               ret 0xc
// 00577db6  8d4608               lea eax, [esi + 8]
// 00577db9  50                   push eax
// 00577dba  8d4c2434             lea ecx, [esp + 0x34]
// 00577dbe  e83dffffff           call 0x577d00
// 00577dc3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00577dc7  51                   push ecx
// 00577dc8  83ec08               sub esp, 8
// 00577dcb  8bd4                 mov edx, esp
// 00577dcd  89642440             mov dword ptr [esp + 0x40], esp
// 00577dd1  52                   push edx
// 00577dd2  8bce                 mov ecx, esi
// 00577dd4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00577ddc  e8cf97f1ff           call 0x4915b0
// 00577de1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00577de5  895c2420             mov dword ptr [esp + 0x20], ebx
// 00577de9  895c2424             mov dword ptr [esp + 0x24], ebx
// 00577ded  8b0f                 mov ecx, dword ptr [edi]
// 00577def  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00577df3  8d44241c             lea eax, [esp + 0x1c]
// 00577df7  50                   push eax
// 00577df8  8d542440             lea edx, [esp + 0x40]
// 00577dfc  52                   push edx
// 00577dfd  57                   push edi
// 00577dfe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00577e03  e8f82affff           call 0x56a900
// 00577e08  8b442418             mov eax, dword ptr [esp + 0x18]
// 00577e0c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00577e14  c644242401           mov byte ptr [esp + 0x24], 1
// 00577e19  3bc3                 cmp eax, ebx
// 00577e1b  742c                 je 0x577e49
// 00577e1d  8bf0                 mov esi, eax
// 00577e1f  83c004               add eax, 4
// 00577e22  83c9ff               or ecx, 0xffffffff
// 00577e25  f00fc108             lock xadd dword ptr [eax], ecx
// 00577e29  751e                 jne 0x577e49
// 00577e2b  8b16                 mov edx, dword ptr [esi]
// 00577e2d  8b4204               mov eax, dword ptr [edx + 4]
// 00577e30  8bce                 mov ecx, esi
// 00577e32  ffd0                 call eax
// 00577e34  8d4e08               lea ecx, [esi + 8]
// 00577e37  83caff               or edx, 0xffffffff
// 00577e3a  f00fc111             lock xadd dword ptr [ecx], edx
// 00577e3e  7509                 jne 0x577e49
// 00577e40  8b06                 mov eax, dword ptr [esi]
// 00577e42  8b5008               mov edx, dword ptr [eax + 8]
// 00577e45  8bce                 mov ecx, esi
// 00577e47  ffd2                 call edx
// 00577e49  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00577e4d  885c2424             mov byte ptr [esp + 0x24], bl
// 00577e51  3bcb                 cmp ecx, ebx
// 00577e53  7408                 je 0x577e5d
// 00577e55  8b01                 mov eax, dword ptr [ecx]
// 00577e57  8b10                 mov edx, dword ptr [eax]
// 00577e59  6a01                 push 1
// 00577e5b  ffd2                 call edx
// 00577e5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577e61  8bc7                 mov eax, edi
// 00577e63  5f                   pop edi
// 00577e64  5e                   pop esi
// 00577e65  64890d00000000       mov dword ptr fs:[0], ecx
// 00577e6c  5b                   pop ebx
// 00577e6d  83c41c               add esp, 0x1c
// 00577e70  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
