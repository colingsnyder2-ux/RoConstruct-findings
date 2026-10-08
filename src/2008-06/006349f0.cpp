// roc 2008-06 006349f0  unit: G3D::$$A6AXVColor3::V?$function::?$holder  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006349f0
//
// 006349f0  6aff                 push -1
// 006349f2  68596f7c00           push 0x7c6f59
// 006349f7  64a100000000         mov eax, dword ptr fs:[0]
// 006349fd  50                   push eax
// 006349fe  64892500000000       mov dword ptr fs:[0], esp
// 00634a05  83ec10               sub esp, 0x10
// 00634a08  53                   push ebx
// 00634a09  33db                 xor ebx, ebx
// 00634a0b  895c2404             mov dword ptr [esp + 4], ebx
// 00634a0f  56                   push esi
// 00634a10  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00634a14  8b06                 mov eax, dword ptr [esi]
// 00634a16  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00634a19  57                   push edi
// 00634a1a  8bf9                 mov edi, ecx
// 00634a1c  3bc3                 cmp eax, ebx
// 00634a1e  7405                 je 0x634a25
// 00634a20  395808               cmp dword ptr [eax + 8], ebx
// 00634a23  7521                 jne 0x634a46
// 00634a25  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00634a29  895804               mov dword ptr [eax + 4], ebx
// 00634a2c  895808               mov dword ptr [eax + 8], ebx
// 00634a2f  88580c               mov byte ptr [eax + 0xc], bl
// 00634a32  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634a36  64890d00000000       mov dword ptr fs:[0], ecx
// 00634a3d  5f                   pop edi
// 00634a3e  5e                   pop esi
// 00634a3f  5b                   pop ebx
// 00634a40  83c41c               add esp, 0x1c
// 00634a43  c20c00               ret 0xc
// 00634a46  8d4608               lea eax, [esi + 8]
// 00634a49  50                   push eax
// 00634a4a  8d4c2434             lea ecx, [esp + 0x34]
// 00634a4e  e83dffffff           call 0x634990
// 00634a53  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00634a57  51                   push ecx
// 00634a58  83ec08               sub esp, 8
// 00634a5b  8bd4                 mov edx, esp
// 00634a5d  89642440             mov dword ptr [esp + 0x40], esp
// 00634a61  52                   push edx
// 00634a62  8bce                 mov ecx, esi
// 00634a64  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00634a6c  e83fcbe5ff           call 0x4915b0
// 00634a71  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00634a75  895c2420             mov dword ptr [esp + 0x20], ebx
// 00634a79  895c2424             mov dword ptr [esp + 0x24], ebx
// 00634a7d  8b0f                 mov ecx, dword ptr [edi]
// 00634a7f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00634a83  8d44241c             lea eax, [esp + 0x1c]
// 00634a87  50                   push eax
// 00634a88  8d542440             lea edx, [esp + 0x40]
// 00634a8c  52                   push edx
// 00634a8d  57                   push edi
// 00634a8e  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00634a93  e8685ef3ff           call 0x56a900
// 00634a98  8b442418             mov eax, dword ptr [esp + 0x18]
// 00634a9c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00634aa4  c644242401           mov byte ptr [esp + 0x24], 1
// 00634aa9  3bc3                 cmp eax, ebx
// 00634aab  742c                 je 0x634ad9
// 00634aad  8bf0                 mov esi, eax
// 00634aaf  83c004               add eax, 4
// 00634ab2  83c9ff               or ecx, 0xffffffff
// 00634ab5  f00fc108             lock xadd dword ptr [eax], ecx
// 00634ab9  751e                 jne 0x634ad9
// 00634abb  8b16                 mov edx, dword ptr [esi]
// 00634abd  8b4204               mov eax, dword ptr [edx + 4]
// 00634ac0  8bce                 mov ecx, esi
// 00634ac2  ffd0                 call eax
// 00634ac4  8d4e08               lea ecx, [esi + 8]
// 00634ac7  83caff               or edx, 0xffffffff
// 00634aca  f00fc111             lock xadd dword ptr [ecx], edx
// 00634ace  7509                 jne 0x634ad9
// 00634ad0  8b06                 mov eax, dword ptr [esi]
// 00634ad2  8b5008               mov edx, dword ptr [eax + 8]
// 00634ad5  8bce                 mov ecx, esi
// 00634ad7  ffd2                 call edx
// 00634ad9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00634add  885c2424             mov byte ptr [esp + 0x24], bl
// 00634ae1  3bcb                 cmp ecx, ebx
// 00634ae3  7408                 je 0x634aed
// 00634ae5  8b01                 mov eax, dword ptr [ecx]
// 00634ae7  8b10                 mov edx, dword ptr [eax]
// 00634ae9  6a01                 push 1
// 00634aeb  ffd2                 call edx
// 00634aed  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00634af1  8bc7                 mov eax, edi
// 00634af3  5f                   pop edi
// 00634af4  5e                   pop esi
// 00634af5  64890d00000000       mov dword ptr fs:[0], ecx
// 00634afc  5b                   pop ebx
// 00634afd  83c41c               add esp, 0x1c
// 00634b00  c20c00               ret 0xc
// library rbxgs/v8datamodel\FlagStand.cpp (function ?connect@?$signal1@XV?$shared_ptr@VInstance@RBX@@@boost@@U?$last_value@X@2@HU?$less@H@std@@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@2@@boost@@QAE?AVconnection@signals@2@ABV?$slot@V?$function@$$A6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$allocator@X@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
