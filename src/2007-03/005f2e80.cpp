// roc 2007-03 005f2e80  unit: seg_005f0000  size: 681 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f2e80
//
// 005f2e80  6aff                 push -1
// 005f2e82  68bec77500           push 0x75c7be
// 005f2e87  64a100000000         mov eax, dword ptr fs:[0]
// 005f2e8d  50                   push eax
// 005f2e8e  64892500000000       mov dword ptr fs:[0], esp
// 005f2e95  83ec08               sub esp, 8
// 005f2e98  53                   push ebx
// 005f2e99  55                   push ebp
// 005f2e9a  56                   push esi
// 005f2e9b  57                   push edi
// 005f2e9c  8bf1                 mov esi, ecx
// 005f2e9e  6a28                 push 0x28
// 005f2ea0  89742414             mov dword ptr [esp + 0x14], esi
// 005f2ea4  e85fb20200           call 0x61e108
// 005f2ea9  83c404               add esp, 4
// 005f2eac  89442414             mov dword ptr [esp + 0x14], eax
// 005f2eb0  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 005f2eb4  33ff                 xor edi, edi
// 005f2eb6  3bc7                 cmp eax, edi
// 005f2eb8  897c2420             mov dword ptr [esp + 0x20], edi
// 005f2ebc  740b                 je 0x5f2ec9
// 005f2ebe  53                   push ebx
// 005f2ebf  56                   push esi
// 005f2ec0  8bc8                 mov ecx, eax
// 005f2ec2  e819120200           call 0x6140e0
// 005f2ec7  eb02                 jmp 0x5f2ecb
// 005f2ec9  33c0                 xor eax, eax
// 005f2ecb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f2ecf  894e04               mov dword ptr [esi + 4], ecx
// 005f2ed2  894608               mov dword ptr [esi + 8], eax
// 005f2ed5  895e0c               mov dword ptr [esi + 0xc], ebx
// 005f2ed8  8d6e14               lea ebp, [esi + 0x14]
// 005f2edb  bb01000000           mov ebx, 1
// 005f2ee0  8bcd                 mov ecx, ebp
// 005f2ee2  895c2420             mov dword ptr [esp + 0x20], ebx
// 005f2ee6  c70614ff7b00         mov dword ptr [esi], 0x7bff14
// 005f2eec  e88f52fcff           call 0x5b8180
// 005f2ef1  894504               mov dword ptr [ebp + 4], eax
// 005f2ef4  885815               mov byte ptr [eax + 0x15], bl
// 005f2ef7  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2efa  894004               mov dword ptr [eax + 4], eax
// 005f2efd  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f00  8900                 mov dword ptr [eax], eax
// 005f2f02  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f05  894008               mov dword ptr [eax + 8], eax
// 005f2f08  897d08               mov dword ptr [ebp + 8], edi
// 005f2f0b  8d6e20               lea ebp, [esi + 0x20]
// 005f2f0e  8bcd                 mov ecx, ebp
// 005f2f10  c644242002           mov byte ptr [esp + 0x20], 2
// 005f2f15  e8f6e5ffff           call 0x5f1510
// 005f2f1a  894504               mov dword ptr [ebp + 4], eax
// 005f2f1d  885819               mov byte ptr [eax + 0x19], bl
// 005f2f20  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f23  894004               mov dword ptr [eax + 4], eax
// 005f2f26  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f29  8900                 mov dword ptr [eax], eax
// 005f2f2b  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f2e  894008               mov dword ptr [eax + 8], eax
// 005f2f31  897d08               mov dword ptr [ebp + 8], edi
// 005f2f34  8d6e2c               lea ebp, [esi + 0x2c]
// 005f2f37  8bcd                 mov ecx, ebp
// 005f2f39  c644242003           mov byte ptr [esp + 0x20], 3
// 005f2f3e  e8cde5ffff           call 0x5f1510
// 005f2f43  894504               mov dword ptr [ebp + 4], eax
// 005f2f46  885819               mov byte ptr [eax + 0x19], bl
// 005f2f49  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f4c  894004               mov dword ptr [eax + 4], eax
// 005f2f4f  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f52  8900                 mov dword ptr [eax], eax
// 005f2f54  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f57  894008               mov dword ptr [eax + 8], eax
// 005f2f5a  897d08               mov dword ptr [ebp + 8], edi
// 005f2f5d  8d6e38               lea ebp, [esi + 0x38]
// 005f2f60  8bcd                 mov ecx, ebp
// 005f2f62  c644242004           mov byte ptr [esp + 0x20], 4
// 005f2f67  e81452fcff           call 0x5b8180
// 005f2f6c  894504               mov dword ptr [ebp + 4], eax
// 005f2f6f  885815               mov byte ptr [eax + 0x15], bl
// 005f2f72  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f75  894004               mov dword ptr [eax + 4], eax
// 005f2f78  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f7b  8900                 mov dword ptr [eax], eax
// 005f2f7d  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f80  894008               mov dword ptr [eax + 8], eax
// 005f2f83  897d08               mov dword ptr [ebp + 8], edi
// 005f2f86  8d6e44               lea ebp, [esi + 0x44]
// 005f2f89  8bcd                 mov ecx, ebp
// 005f2f8b  c644242005           mov byte ptr [esp + 0x20], 5
// 005f2f90  e89ba4fbff           call 0x5ad430
// 005f2f95  894504               mov dword ptr [ebp + 4], eax
// 005f2f98  885811               mov byte ptr [eax + 0x11], bl
// 005f2f9b  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2f9e  894004               mov dword ptr [eax + 4], eax
// 005f2fa1  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2fa4  8900                 mov dword ptr [eax], eax
// 005f2fa6  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2fa9  894008               mov dword ptr [eax + 8], eax
// 005f2fac  897d08               mov dword ptr [ebp + 8], edi
// 005f2faf  8d6e50               lea ebp, [esi + 0x50]
// 005f2fb2  8bcd                 mov ecx, ebp
// 005f2fb4  c644242006           mov byte ptr [esp + 0x20], 6
// 005f2fb9  e852e5ffff           call 0x5f1510
// 005f2fbe  894504               mov dword ptr [ebp + 4], eax
// 005f2fc1  885819               mov byte ptr [eax + 0x19], bl
// 005f2fc4  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2fc7  894004               mov dword ptr [eax + 4], eax
// 005f2fca  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2fcd  8900                 mov dword ptr [eax], eax
// 005f2fcf  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2fd2  894008               mov dword ptr [eax + 8], eax
// 005f2fd5  897d08               mov dword ptr [ebp + 8], edi
// 005f2fd8  8d6e5c               lea ebp, [esi + 0x5c]
// 005f2fdb  8bcd                 mov ecx, ebp
// 005f2fdd  c644242007           mov byte ptr [esp + 0x20], 7
// 005f2fe2  e849a4fbff           call 0x5ad430
// 005f2fe7  894504               mov dword ptr [ebp + 4], eax
// 005f2fea  885811               mov byte ptr [eax + 0x11], bl
// 005f2fed  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2ff0  894004               mov dword ptr [eax + 4], eax
// 005f2ff3  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2ff6  8900                 mov dword ptr [eax], eax
// 005f2ff8  8b4504               mov eax, dword ptr [ebp + 4]
// 005f2ffb  894008               mov dword ptr [eax + 8], eax
// 005f2ffe  897d08               mov dword ptr [ebp + 8], edi
// 005f3001  8d6e68               lea ebp, [esi + 0x68]
// 005f3004  8bcd                 mov ecx, ebp
// 005f3006  c644242008           mov byte ptr [esp + 0x20], 8
// 005f300b  e800e5ffff           call 0x5f1510
// 005f3010  894504               mov dword ptr [ebp + 4], eax
// 005f3013  885819               mov byte ptr [eax + 0x19], bl
// 005f3016  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3019  894004               mov dword ptr [eax + 4], eax
// 005f301c  8b4504               mov eax, dword ptr [ebp + 4]
// 005f301f  8900                 mov dword ptr [eax], eax
// 005f3021  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3024  894008               mov dword ptr [eax + 8], eax
// 005f3027  897d08               mov dword ptr [ebp + 8], edi
// 005f302a  897e78               mov dword ptr [esi + 0x78], edi
// 005f302d  897e7c               mov dword ptr [esi + 0x7c], edi
// 005f3030  89be80000000         mov dword ptr [esi + 0x80], edi
// 005f3036  8dae84000000         lea ebp, [esi + 0x84]
// 005f303c  8bcd                 mov ecx, ebp
// 005f303e  c64424200a           mov byte ptr [esp + 0x20], 0xa
// 005f3043  e8e8a3fbff           call 0x5ad430
// 005f3048  894504               mov dword ptr [ebp + 4], eax
// 005f304b  885811               mov byte ptr [eax + 0x11], bl
// 005f304e  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3051  894004               mov dword ptr [eax + 4], eax
// 005f3054  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3057  8900                 mov dword ptr [eax], eax
// 005f3059  8b4504               mov eax, dword ptr [ebp + 4]
// 005f305c  894008               mov dword ptr [eax + 8], eax
// 005f305f  897d08               mov dword ptr [ebp + 8], edi
// 005f3062  8dae90000000         lea ebp, [esi + 0x90]
// 005f3068  8bcd                 mov ecx, ebp
// 005f306a  c64424200b           mov byte ptr [esp + 0x20], 0xb
// 005f306f  e8bca3fbff           call 0x5ad430
// 005f3074  894504               mov dword ptr [ebp + 4], eax
// 005f3077  885811               mov byte ptr [eax + 0x11], bl
// 005f307a  8b4504               mov eax, dword ptr [ebp + 4]
// 005f307d  894004               mov dword ptr [eax + 4], eax
// 005f3080  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3083  8900                 mov dword ptr [eax], eax
// 005f3085  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3088  894008               mov dword ptr [eax + 8], eax
// 005f308b  897d08               mov dword ptr [ebp + 8], edi
// 005f308e  8dae9c000000         lea ebp, [esi + 0x9c]
// 005f3094  8bcd                 mov ecx, ebp
// 005f3096  c64424200c           mov byte ptr [esp + 0x20], 0xc
// 005f309b  e890a3fbff           call 0x5ad430
// 005f30a0  894504               mov dword ptr [ebp + 4], eax
// 005f30a3  885811               mov byte ptr [eax + 0x11], bl
// 005f30a6  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30a9  894004               mov dword ptr [eax + 4], eax
// 005f30ac  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30af  8900                 mov dword ptr [eax], eax
// 005f30b1  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30b4  894008               mov dword ptr [eax + 8], eax
// 005f30b7  897d08               mov dword ptr [ebp + 8], edi
// 005f30ba  8daea8000000         lea ebp, [esi + 0xa8]
// 005f30c0  8bcd                 mov ecx, ebp
// 005f30c2  c64424200d           mov byte ptr [esp + 0x20], 0xd
// 005f30c7  e864a3fbff           call 0x5ad430
// 005f30cc  894504               mov dword ptr [ebp + 4], eax
// 005f30cf  885811               mov byte ptr [eax + 0x11], bl
// 005f30d2  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30d5  894004               mov dword ptr [eax + 4], eax
// 005f30d8  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30db  8900                 mov dword ptr [eax], eax
// 005f30dd  8b4504               mov eax, dword ptr [ebp + 4]
// 005f30e0  894008               mov dword ptr [eax + 8], eax
// 005f30e3  897d08               mov dword ptr [ebp + 8], edi
// 005f30e6  8daeb4000000         lea ebp, [esi + 0xb4]
// 005f30ec  8bcd                 mov ecx, ebp
// 005f30ee  c64424200e           mov byte ptr [esp + 0x20], 0xe
// 005f30f3  e838a3fbff           call 0x5ad430
// 005f30f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f30fc  894504               mov dword ptr [ebp + 4], eax
// 005f30ff  885811               mov byte ptr [eax + 0x11], bl
// 005f3102  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3105  894004               mov dword ptr [eax + 4], eax
// 005f3108  8b4504               mov eax, dword ptr [ebp + 4]
// 005f310b  8900                 mov dword ptr [eax], eax
// 005f310d  8b4504               mov eax, dword ptr [ebp + 4]
// 005f3110  894008               mov dword ptr [eax + 8], eax
// 005f3113  897d08               mov dword ptr [ebp + 8], edi
// 005f3116  5f                   pop edi
// 005f3117  8bc6                 mov eax, esi
// 005f3119  5e                   pop esi
// 005f311a  5d                   pop ebp
// 005f311b  5b                   pop ebx
// 005f311c  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3123  83c414               add esp, 0x14
// 005f3126  c20800               ret 8
// library rbxgs/v8world\ClumpStage.cpp (function ??0ClumpStage@RBX@@QAE@PAVIStage@1@PAVWorld@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/ClumpStage.cpp
