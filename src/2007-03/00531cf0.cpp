// roc 2007-03 00531cf0  unit: seg_00530000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00531cf0
//
// 00531cf0  6aff                 push -1
// 00531cf2  68e9c87500           push 0x75c8e9
// 00531cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00531cfd  50                   push eax
// 00531cfe  64892500000000       mov dword ptr fs:[0], esp
// 00531d05  83ec10               sub esp, 0x10
// 00531d08  53                   push ebx
// 00531d09  33db                 xor ebx, ebx
// 00531d0b  895c2404             mov dword ptr [esp + 4], ebx
// 00531d0f  56                   push esi
// 00531d10  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00531d14  8b06                 mov eax, dword ptr [esi]
// 00531d16  8b4014               mov eax, dword ptr [eax + 0x14]
// 00531d19  3bc3                 cmp eax, ebx
// 00531d1b  57                   push edi
// 00531d1c  8bf9                 mov edi, ecx
// 00531d1e  7405                 je 0x531d25
// 00531d20  395808               cmp dword ptr [eax + 8], ebx
// 00531d23  7521                 jne 0x531d46
// 00531d25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00531d29  895804               mov dword ptr [eax + 4], ebx
// 00531d2c  895808               mov dword ptr [eax + 8], ebx
// 00531d2f  88580c               mov byte ptr [eax + 0xc], bl
// 00531d32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531d36  64890d00000000       mov dword ptr fs:[0], ecx
// 00531d3d  5f                   pop edi
// 00531d3e  5e                   pop esi
// 00531d3f  5b                   pop ebx
// 00531d40  83c41c               add esp, 0x1c
// 00531d43  c20c00               ret 0xc
// 00531d46  8d4608               lea eax, [esi + 8]
// 00531d49  50                   push eax
// 00531d4a  8d4c2434             lea ecx, [esp + 0x34]
// 00531d4e  e83dffffff           call 0x531c90
// 00531d53  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00531d57  51                   push ecx
// 00531d58  83ec08               sub esp, 8
// 00531d5b  8bd4                 mov edx, esp
// 00531d5d  89642440             mov dword ptr [esp + 0x40], esp
// 00531d61  52                   push edx
// 00531d62  8bce                 mov ecx, esi
// 00531d64  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00531d6c  e8df70eeff           call 0x418e50
// 00531d71  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00531d75  895c2420             mov dword ptr [esp + 0x20], ebx
// 00531d79  895c2424             mov dword ptr [esp + 0x24], ebx
// 00531d7d  8b0f                 mov ecx, dword ptr [edi]
// 00531d7f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00531d83  8d44241c             lea eax, [esp + 0x1c]
// 00531d87  50                   push eax
// 00531d88  8d542440             lea edx, [esp + 0x40]
// 00531d8c  52                   push edx
// 00531d8d  57                   push edi
// 00531d8e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00531d93  e8785c1f00           call 0x727a10
// 00531d98  8b442418             mov eax, dword ptr [esp + 0x18]
// 00531d9c  3bc3                 cmp eax, ebx
// 00531d9e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00531da6  c644242401           mov byte ptr [esp + 0x24], 1
// 00531dab  742c                 je 0x531dd9
// 00531dad  8bf0                 mov esi, eax
// 00531daf  83c004               add eax, 4
// 00531db2  83c9ff               or ecx, 0xffffffff
// 00531db5  f00fc108             lock xadd dword ptr [eax], ecx
// 00531db9  751e                 jne 0x531dd9
// 00531dbb  8b16                 mov edx, dword ptr [esi]
// 00531dbd  8b4204               mov eax, dword ptr [edx + 4]
// 00531dc0  8bce                 mov ecx, esi
// 00531dc2  ffd0                 call eax
// 00531dc4  8d4e08               lea ecx, [esi + 8]
// 00531dc7  83caff               or edx, 0xffffffff
// 00531dca  f00fc111             lock xadd dword ptr [ecx], edx
// 00531dce  7509                 jne 0x531dd9
// 00531dd0  8b06                 mov eax, dword ptr [esi]
// 00531dd2  8b5008               mov edx, dword ptr [eax + 8]
// 00531dd5  8bce                 mov ecx, esi
// 00531dd7  ffd2                 call edx
// 00531dd9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00531ddd  3bcb                 cmp ecx, ebx
// 00531ddf  885c2424             mov byte ptr [esp + 0x24], bl
// 00531de3  7408                 je 0x531ded
// 00531de5  8b01                 mov eax, dword ptr [ecx]
// 00531de7  8b10                 mov edx, dword ptr [eax]
// 00531de9  6a01                 push 1
// 00531deb  ffd2                 call edx
// 00531ded  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00531df1  8bc7                 mov eax, edi
// 00531df3  5f                   pop edi
// 00531df4  5e                   pop esi
// 00531df5  64890d00000000       mov dword ptr fs:[0], ecx
// 00531dfc  5b                   pop ebx
// 00531dfd  83c41c               add esp, 0x1c
// 00531e00  c20c00               ret 0xc
// library rbxgs/v8datamodel\Accoutrement.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Accoutrement.cpp
