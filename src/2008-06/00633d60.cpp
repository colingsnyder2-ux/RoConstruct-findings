// roc 2008-06 00633d60  unit: std::X::ZV?$allocator::$$A6AXN::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00633d60
//
// 00633d60  6aff                 push -1
// 00633d62  68596f7c00           push 0x7c6f59
// 00633d67  64a100000000         mov eax, dword ptr fs:[0]
// 00633d6d  50                   push eax
// 00633d6e  64892500000000       mov dword ptr fs:[0], esp
// 00633d75  83ec10               sub esp, 0x10
// 00633d78  53                   push ebx
// 00633d79  33db                 xor ebx, ebx
// 00633d7b  895c2404             mov dword ptr [esp + 4], ebx
// 00633d7f  56                   push esi
// 00633d80  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00633d84  8b06                 mov eax, dword ptr [esi]
// 00633d86  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00633d89  57                   push edi
// 00633d8a  8bf9                 mov edi, ecx
// 00633d8c  3bc3                 cmp eax, ebx
// 00633d8e  7405                 je 0x633d95
// 00633d90  395808               cmp dword ptr [eax + 8], ebx
// 00633d93  7521                 jne 0x633db6
// 00633d95  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00633d99  895804               mov dword ptr [eax + 4], ebx
// 00633d9c  895808               mov dword ptr [eax + 8], ebx
// 00633d9f  88580c               mov byte ptr [eax + 0xc], bl
// 00633da2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633da6  64890d00000000       mov dword ptr fs:[0], ecx
// 00633dad  5f                   pop edi
// 00633dae  5e                   pop esi
// 00633daf  5b                   pop ebx
// 00633db0  83c41c               add esp, 0x1c
// 00633db3  c20c00               ret 0xc
// 00633db6  8d4608               lea eax, [esi + 8]
// 00633db9  50                   push eax
// 00633dba  8d4c2434             lea ecx, [esp + 0x34]
// 00633dbe  e83dffffff           call 0x633d00
// 00633dc3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00633dc7  51                   push ecx
// 00633dc8  83ec08               sub esp, 8
// 00633dcb  8bd4                 mov edx, esp
// 00633dcd  89642440             mov dword ptr [esp + 0x40], esp
// 00633dd1  52                   push edx
// 00633dd2  8bce                 mov ecx, esi
// 00633dd4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00633ddc  e8cfd7e5ff           call 0x4915b0
// 00633de1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00633de5  895c2420             mov dword ptr [esp + 0x20], ebx
// 00633de9  895c2424             mov dword ptr [esp + 0x24], ebx
// 00633ded  8b0f                 mov ecx, dword ptr [edi]
// 00633def  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00633df3  8d44241c             lea eax, [esp + 0x1c]
// 00633df7  50                   push eax
// 00633df8  8d542440             lea edx, [esp + 0x40]
// 00633dfc  52                   push edx
// 00633dfd  57                   push edi
// 00633dfe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00633e03  e8f86af3ff           call 0x56a900
// 00633e08  8b442418             mov eax, dword ptr [esp + 0x18]
// 00633e0c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00633e14  c644242401           mov byte ptr [esp + 0x24], 1
// 00633e19  3bc3                 cmp eax, ebx
// 00633e1b  742c                 je 0x633e49
// 00633e1d  8bf0                 mov esi, eax
// 00633e1f  83c004               add eax, 4
// 00633e22  83c9ff               or ecx, 0xffffffff
// 00633e25  f00fc108             lock xadd dword ptr [eax], ecx
// 00633e29  751e                 jne 0x633e49
// 00633e2b  8b16                 mov edx, dword ptr [esi]
// 00633e2d  8b4204               mov eax, dword ptr [edx + 4]
// 00633e30  8bce                 mov ecx, esi
// 00633e32  ffd0                 call eax
// 00633e34  8d4e08               lea ecx, [esi + 8]
// 00633e37  83caff               or edx, 0xffffffff
// 00633e3a  f00fc111             lock xadd dword ptr [ecx], edx
// 00633e3e  7509                 jne 0x633e49
// 00633e40  8b06                 mov eax, dword ptr [esi]
// 00633e42  8b5008               mov edx, dword ptr [eax + 8]
// 00633e45  8bce                 mov ecx, esi
// 00633e47  ffd2                 call edx
// 00633e49  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00633e4d  885c2424             mov byte ptr [esp + 0x24], bl
// 00633e51  3bcb                 cmp ecx, ebx
// 00633e53  7408                 je 0x633e5d
// 00633e55  8b01                 mov eax, dword ptr [ecx]
// 00633e57  8b10                 mov edx, dword ptr [eax]
// 00633e59  6a01                 push 1
// 00633e5b  ffd2                 call edx
// 00633e5d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633e61  8bc7                 mov eax, edi
// 00633e63  5f                   pop edi
// 00633e64  5e                   pop esi
// 00633e65  64890d00000000       mov dword ptr fs:[0], ecx
// 00633e6c  5b                   pop ebx
// 00633e6d  83c41c               add esp, 0x1c
// 00633e70  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
