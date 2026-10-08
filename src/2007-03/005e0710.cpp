// roc 2007-03 005e0710  unit: seg_005e0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0710
//
// 005e0710  6aff                 push -1
// 005e0712  68e9c87500           push 0x75c8e9
// 005e0717  64a100000000         mov eax, dword ptr fs:[0]
// 005e071d  50                   push eax
// 005e071e  64892500000000       mov dword ptr fs:[0], esp
// 005e0725  83ec10               sub esp, 0x10
// 005e0728  53                   push ebx
// 005e0729  33db                 xor ebx, ebx
// 005e072b  895c2404             mov dword ptr [esp + 4], ebx
// 005e072f  56                   push esi
// 005e0730  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e0734  8b06                 mov eax, dword ptr [esi]
// 005e0736  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e0739  3bc3                 cmp eax, ebx
// 005e073b  57                   push edi
// 005e073c  8bf9                 mov edi, ecx
// 005e073e  7405                 je 0x5e0745
// 005e0740  395808               cmp dword ptr [eax + 8], ebx
// 005e0743  7521                 jne 0x5e0766
// 005e0745  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e0749  895804               mov dword ptr [eax + 4], ebx
// 005e074c  895808               mov dword ptr [eax + 8], ebx
// 005e074f  88580c               mov byte ptr [eax + 0xc], bl
// 005e0752  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0756  64890d00000000       mov dword ptr fs:[0], ecx
// 005e075d  5f                   pop edi
// 005e075e  5e                   pop esi
// 005e075f  5b                   pop ebx
// 005e0760  83c41c               add esp, 0x1c
// 005e0763  c20c00               ret 0xc
// 005e0766  8d4608               lea eax, [esi + 8]
// 005e0769  50                   push eax
// 005e076a  8d4c2434             lea ecx, [esp + 0x34]
// 005e076e  e83dffffff           call 0x5e06b0
// 005e0773  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e0777  51                   push ecx
// 005e0778  83ec08               sub esp, 8
// 005e077b  8bd4                 mov edx, esp
// 005e077d  89642440             mov dword ptr [esp + 0x40], esp
// 005e0781  52                   push edx
// 005e0782  8bce                 mov ecx, esi
// 005e0784  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e078c  e8bf86e3ff           call 0x418e50
// 005e0791  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e0795  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e0799  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e079d  8b0f                 mov ecx, dword ptr [edi]
// 005e079f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e07a3  8d44241c             lea eax, [esp + 0x1c]
// 005e07a7  50                   push eax
// 005e07a8  8d542440             lea edx, [esp + 0x40]
// 005e07ac  52                   push edx
// 005e07ad  57                   push edi
// 005e07ae  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e07b3  e858721400           call 0x727a10
// 005e07b8  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e07bc  3bc3                 cmp eax, ebx
// 005e07be  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e07c6  c644242401           mov byte ptr [esp + 0x24], 1
// 005e07cb  742c                 je 0x5e07f9
// 005e07cd  8bf0                 mov esi, eax
// 005e07cf  83c004               add eax, 4
// 005e07d2  83c9ff               or ecx, 0xffffffff
// 005e07d5  f00fc108             lock xadd dword ptr [eax], ecx
// 005e07d9  751e                 jne 0x5e07f9
// 005e07db  8b16                 mov edx, dword ptr [esi]
// 005e07dd  8b4204               mov eax, dword ptr [edx + 4]
// 005e07e0  8bce                 mov ecx, esi
// 005e07e2  ffd0                 call eax
// 005e07e4  8d4e08               lea ecx, [esi + 8]
// 005e07e7  83caff               or edx, 0xffffffff
// 005e07ea  f00fc111             lock xadd dword ptr [ecx], edx
// 005e07ee  7509                 jne 0x5e07f9
// 005e07f0  8b06                 mov eax, dword ptr [esi]
// 005e07f2  8b5008               mov edx, dword ptr [eax + 8]
// 005e07f5  8bce                 mov ecx, esi
// 005e07f7  ffd2                 call edx
// 005e07f9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e07fd  3bcb                 cmp ecx, ebx
// 005e07ff  885c2424             mov byte ptr [esp + 0x24], bl
// 005e0803  7408                 je 0x5e080d
// 005e0805  8b01                 mov eax, dword ptr [ecx]
// 005e0807  8b10                 mov edx, dword ptr [eax]
// 005e0809  6a01                 push 1
// 005e080b  ffd2                 call edx
// 005e080d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0811  8bc7                 mov eax, edi
// 005e0813  5f                   pop edi
// 005e0814  5e                   pop esi
// 005e0815  64890d00000000       mov dword ptr fs:[0], ecx
// 005e081c  5b                   pop ebx
// 005e081d  83c41c               add esp, 0x1c
// 005e0820  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
