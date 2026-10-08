// roc 2007-03 005e0470  unit: seg_005e0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e0470
//
// 005e0470  6aff                 push -1
// 005e0472  68e9c87500           push 0x75c8e9
// 005e0477  64a100000000         mov eax, dword ptr fs:[0]
// 005e047d  50                   push eax
// 005e047e  64892500000000       mov dword ptr fs:[0], esp
// 005e0485  83ec10               sub esp, 0x10
// 005e0488  53                   push ebx
// 005e0489  33db                 xor ebx, ebx
// 005e048b  895c2404             mov dword ptr [esp + 4], ebx
// 005e048f  56                   push esi
// 005e0490  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005e0494  8b06                 mov eax, dword ptr [esi]
// 005e0496  8b4014               mov eax, dword ptr [eax + 0x14]
// 005e0499  3bc3                 cmp eax, ebx
// 005e049b  57                   push edi
// 005e049c  8bf9                 mov edi, ecx
// 005e049e  7405                 je 0x5e04a5
// 005e04a0  395808               cmp dword ptr [eax + 8], ebx
// 005e04a3  7521                 jne 0x5e04c6
// 005e04a5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e04a9  895804               mov dword ptr [eax + 4], ebx
// 005e04ac  895808               mov dword ptr [eax + 8], ebx
// 005e04af  88580c               mov byte ptr [eax + 0xc], bl
// 005e04b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e04b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e04bd  5f                   pop edi
// 005e04be  5e                   pop esi
// 005e04bf  5b                   pop ebx
// 005e04c0  83c41c               add esp, 0x1c
// 005e04c3  c20c00               ret 0xc
// 005e04c6  8d4608               lea eax, [esi + 8]
// 005e04c9  50                   push eax
// 005e04ca  8d4c2434             lea ecx, [esp + 0x34]
// 005e04ce  e83dffffff           call 0x5e0410
// 005e04d3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005e04d7  51                   push ecx
// 005e04d8  83ec08               sub esp, 8
// 005e04db  8bd4                 mov edx, esp
// 005e04dd  89642440             mov dword ptr [esp + 0x40], esp
// 005e04e1  52                   push edx
// 005e04e2  8bce                 mov ecx, esi
// 005e04e4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005e04ec  e85f89e3ff           call 0x418e50
// 005e04f1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005e04f5  895c2420             mov dword ptr [esp + 0x20], ebx
// 005e04f9  895c2424             mov dword ptr [esp + 0x24], ebx
// 005e04fd  8b0f                 mov ecx, dword ptr [edi]
// 005e04ff  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005e0503  8d44241c             lea eax, [esp + 0x1c]
// 005e0507  50                   push eax
// 005e0508  8d542440             lea edx, [esp + 0x40]
// 005e050c  52                   push edx
// 005e050d  57                   push edi
// 005e050e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005e0513  e8f8741400           call 0x727a10
// 005e0518  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e051c  3bc3                 cmp eax, ebx
// 005e051e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005e0526  c644242401           mov byte ptr [esp + 0x24], 1
// 005e052b  742c                 je 0x5e0559
// 005e052d  8bf0                 mov esi, eax
// 005e052f  83c004               add eax, 4
// 005e0532  83c9ff               or ecx, 0xffffffff
// 005e0535  f00fc108             lock xadd dword ptr [eax], ecx
// 005e0539  751e                 jne 0x5e0559
// 005e053b  8b16                 mov edx, dword ptr [esi]
// 005e053d  8b4204               mov eax, dword ptr [edx + 4]
// 005e0540  8bce                 mov ecx, esi
// 005e0542  ffd0                 call eax
// 005e0544  8d4e08               lea ecx, [esi + 8]
// 005e0547  83caff               or edx, 0xffffffff
// 005e054a  f00fc111             lock xadd dword ptr [ecx], edx
// 005e054e  7509                 jne 0x5e0559
// 005e0550  8b06                 mov eax, dword ptr [esi]
// 005e0552  8b5008               mov edx, dword ptr [eax + 8]
// 005e0555  8bce                 mov ecx, esi
// 005e0557  ffd2                 call edx
// 005e0559  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e055d  3bcb                 cmp ecx, ebx
// 005e055f  885c2424             mov byte ptr [esp + 0x24], bl
// 005e0563  7408                 je 0x5e056d
// 005e0565  8b01                 mov eax, dword ptr [ecx]
// 005e0567  8b10                 mov edx, dword ptr [eax]
// 005e0569  6a01                 push 1
// 005e056b  ffd2                 call edx
// 005e056d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e0571  8bc7                 mov eax, edi
// 005e0573  5f                   pop edi
// 005e0574  5e                   pop esi
// 005e0575  64890d00000000       mov dword ptr fs:[0], ecx
// 005e057c  5b                   pop ebx
// 005e057d  83c41c               add esp, 0x1c
// 005e0580  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
