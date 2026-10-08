// roc 2007-08 005f1fd0  unit: G3D::$$A6AXVVector3::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f1fd0
//
// 005f1fd0  6aff                 push -1
// 005f1fd2  68d9b57500           push 0x75b5d9
// 005f1fd7  64a100000000         mov eax, dword ptr fs:[0]
// 005f1fdd  50                   push eax
// 005f1fde  64892500000000       mov dword ptr fs:[0], esp
// 005f1fe5  83ec10               sub esp, 0x10
// 005f1fe8  53                   push ebx
// 005f1fe9  33db                 xor ebx, ebx
// 005f1feb  895c2404             mov dword ptr [esp + 4], ebx
// 005f1fef  56                   push esi
// 005f1ff0  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005f1ff4  8b06                 mov eax, dword ptr [esi]
// 005f1ff6  8b4014               mov eax, dword ptr [eax + 0x14]
// 005f1ff9  3bc3                 cmp eax, ebx
// 005f1ffb  57                   push edi
// 005f1ffc  8bf9                 mov edi, ecx
// 005f1ffe  7405                 je 0x5f2005
// 005f2000  395808               cmp dword ptr [eax + 8], ebx
// 005f2003  7521                 jne 0x5f2026
// 005f2005  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005f2009  895804               mov dword ptr [eax + 4], ebx
// 005f200c  895808               mov dword ptr [eax + 8], ebx
// 005f200f  88580c               mov byte ptr [eax + 0xc], bl
// 005f2012  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f2016  64890d00000000       mov dword ptr fs:[0], ecx
// 005f201d  5f                   pop edi
// 005f201e  5e                   pop esi
// 005f201f  5b                   pop ebx
// 005f2020  83c41c               add esp, 0x1c
// 005f2023  c20c00               ret 0xc
// 005f2026  8d4608               lea eax, [esi + 8]
// 005f2029  50                   push eax
// 005f202a  8d4c2434             lea ecx, [esp + 0x34]
// 005f202e  e83dffffff           call 0x5f1f70
// 005f2033  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f2037  51                   push ecx
// 005f2038  83ec08               sub esp, 8
// 005f203b  8bd4                 mov edx, esp
// 005f203d  89642440             mov dword ptr [esp + 0x40], esp
// 005f2041  52                   push edx
// 005f2042  8bce                 mov ecx, esi
// 005f2044  c744243401000000     mov dword ptr [esp + 0x34], 1
// 005f204c  e89f58e2ff           call 0x4178f0
// 005f2051  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005f2055  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f2059  895c2424             mov dword ptr [esp + 0x24], ebx
// 005f205d  8b0f                 mov ecx, dword ptr [edi]
// 005f205f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 005f2063  8d44241c             lea eax, [esp + 0x1c]
// 005f2067  50                   push eax
// 005f2068  8d542440             lea edx, [esp + 0x40]
// 005f206c  52                   push edx
// 005f206d  57                   push edi
// 005f206e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 005f2073  e8a8531300           call 0x727420
// 005f2078  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f207c  3bc3                 cmp eax, ebx
// 005f207e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 005f2086  c644242401           mov byte ptr [esp + 0x24], 1
// 005f208b  742c                 je 0x5f20b9
// 005f208d  8bf0                 mov esi, eax
// 005f208f  83c004               add eax, 4
// 005f2092  83c9ff               or ecx, 0xffffffff
// 005f2095  f00fc108             lock xadd dword ptr [eax], ecx
// 005f2099  751e                 jne 0x5f20b9
// 005f209b  8b16                 mov edx, dword ptr [esi]
// 005f209d  8b4204               mov eax, dword ptr [edx + 4]
// 005f20a0  8bce                 mov ecx, esi
// 005f20a2  ffd0                 call eax
// 005f20a4  8d4e08               lea ecx, [esi + 8]
// 005f20a7  83caff               or edx, 0xffffffff
// 005f20aa  f00fc111             lock xadd dword ptr [ecx], edx
// 005f20ae  7509                 jne 0x5f20b9
// 005f20b0  8b06                 mov eax, dword ptr [esi]
// 005f20b2  8b5008               mov edx, dword ptr [eax + 8]
// 005f20b5  8bce                 mov ecx, esi
// 005f20b7  ffd2                 call edx
// 005f20b9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005f20bd  3bcb                 cmp ecx, ebx
// 005f20bf  885c2424             mov byte ptr [esp + 0x24], bl
// 005f20c3  7408                 je 0x5f20cd
// 005f20c5  8b01                 mov eax, dword ptr [ecx]
// 005f20c7  8b10                 mov edx, dword ptr [eax]
// 005f20c9  6a01                 push 1
// 005f20cb  ffd2                 call edx
// 005f20cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f20d1  8bc7                 mov eax, edi
// 005f20d3  5f                   pop edi
// 005f20d4  5e                   pop esi
// 005f20d5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f20dc  5b                   pop ebx
// 005f20dd  83c41c               add esp, 0x1c
// 005f20e0  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
