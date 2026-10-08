// roc 2008-06 00634560  unit: G3D::$$A6AXVCoordinateFrame::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00634560
//
// 00634560  6aff                 push -1
// 00634562  68596f7c00           push 0x7c6f59
// 00634567  64a100000000         mov eax, dword ptr fs:[0]
// 0063456d  50                   push eax
// 0063456e  64892500000000       mov dword ptr fs:[0], esp
// 00634575  83ec10               sub esp, 0x10
// 00634578  53                   push ebx
// 00634579  33db                 xor ebx, ebx
// 0063457b  895c2404             mov dword ptr [esp + 4], ebx
// 0063457f  56                   push esi
// 00634580  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00634584  8b06                 mov eax, dword ptr [esi]
// 00634586  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00634589  57                   push edi
// 0063458a  8bf9                 mov edi, ecx
// 0063458c  3bc3                 cmp eax, ebx
// 0063458e  7405                 je 0x634595
// 00634590  395808               cmp dword ptr [eax + 8], ebx
// 00634593  7521                 jne 0x6345b6
// 00634595  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00634599  895804               mov dword ptr [eax + 4], ebx
// 0063459c  895808               mov dword ptr [eax + 8], ebx
// 0063459f  88580c               mov byte ptr [eax + 0xc], bl
// 006345a2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006345a6  64890d00000000       mov dword ptr fs:[0], ecx
// 006345ad  5f                   pop edi
// 006345ae  5e                   pop esi
// 006345af  5b                   pop ebx
// 006345b0  83c41c               add esp, 0x1c
// 006345b3  c20c00               ret 0xc
// 006345b6  8d4608               lea eax, [esi + 8]
// 006345b9  50                   push eax
// 006345ba  8d4c2434             lea ecx, [esp + 0x34]
// 006345be  e83dffffff           call 0x634500
// 006345c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006345c7  51                   push ecx
// 006345c8  83ec08               sub esp, 8
// 006345cb  8bd4                 mov edx, esp
// 006345cd  89642440             mov dword ptr [esp + 0x40], esp
// 006345d1  52                   push edx
// 006345d2  8bce                 mov ecx, esi
// 006345d4  c744243401000000     mov dword ptr [esp + 0x34], 1
// 006345dc  e8cfcfe5ff           call 0x4915b0
// 006345e1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006345e5  895c2420             mov dword ptr [esp + 0x20], ebx
// 006345e9  895c2424             mov dword ptr [esp + 0x24], ebx
// 006345ed  8b0f                 mov ecx, dword ptr [edi]
// 006345ef  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006345f3  8d44241c             lea eax, [esp + 0x1c]
// 006345f7  50                   push eax
// 006345f8  8d542440             lea edx, [esp + 0x40]
// 006345fc  52                   push edx
// 006345fd  57                   push edi
// 006345fe  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00634603  e8f862f3ff           call 0x56a900
// 00634608  8b442418             mov eax, dword ptr [esp + 0x18]
// 0063460c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00634614  c644242401           mov byte ptr [esp + 0x24], 1
// 00634619  3bc3                 cmp eax, ebx
// 0063461b  742c                 je 0x634649
// 0063461d  8bf0                 mov esi, eax
// 0063461f  83c004               add eax, 4
// 00634622  83c9ff               or ecx, 0xffffffff
// 00634625  f00fc108             lock xadd dword ptr [eax], ecx
// 00634629  751e                 jne 0x634649
// 0063462b  8b16                 mov edx, dword ptr [esi]
// 0063462d  8b4204               mov eax, dword ptr [edx + 4]
// 00634630  8bce                 mov ecx, esi
// 00634632  ffd0                 call eax
// 00634634  8d4e08               lea ecx, [esi + 8]
// 00634637  83caff               or edx, 0xffffffff
// 0063463a  f00fc111             lock xadd dword ptr [ecx], edx
// 0063463e  7509                 jne 0x634649
// 00634640  8b06                 mov eax, dword ptr [esi]
// 00634642  8b5008               mov edx, dword ptr [eax + 8]
// 00634645  8bce                 mov ecx, esi
// 00634647  ffd2                 call edx
// 00634649  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0063464d  885c2424             mov byte ptr [esp + 0x24], bl
// 00634651  3bcb                 cmp ecx, ebx
// 00634653  7408                 je 0x63465d
// 00634655  8b01                 mov eax, dword ptr [ecx]
// 00634657  8b10                 mov edx, dword ptr [eax]
// 00634659  6a01                 push 1
// 0063465b  ffd2                 call edx
// 0063465d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634661  8bc7                 mov eax, edi
// 00634663  5f                   pop edi
// 00634664  5e                   pop esi
// 00634665  64890d00000000       mov dword ptr fs:[0], ecx
// 0063466c  5b                   pop ebx
// 0063466d  83c41c               add esp, 0x1c
// 00634670  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
