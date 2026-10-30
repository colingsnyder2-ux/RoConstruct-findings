// from server: 100% by auto
// roc 2008-06 0059be00  unit: RBX::PartInstance  size: 716 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059be00
//
// 0059be00  55                   push ebp
// 0059be01  8bec                 mov ebp, esp
// 0059be03  6aff                 push -1
// 0059be05  6810267d00           push 0x7d2610
// 0059be0a  64a100000000         mov eax, dword ptr fs:[0]
// 0059be10  50                   push eax
// 0059be11  64892500000000       mov dword ptr fs:[0], esp
// 0059be18  83ec14               sub esp, 0x14
// 0059be1b  53                   push ebx
// 0059be1c  56                   push esi
// 0059be1d  8bf1                 mov esi, ecx
// 0059be1f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059be22  57                   push edi
// 0059be23  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059be26  8975e8               mov dword ptr [ebp - 0x18], esi
// 0059be29  85d2                 test edx, edx
// 0059be2b  7504                 jne 0x59be31
// 0059be2d  33ff                 xor edi, edi
// 0059be2f  eb08                 jmp 0x59be39
// 0059be31  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0059be34  2bfa                 sub edi, edx
// 0059be36  c1ff03               sar edi, 3
// 0059be39  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0059be3c  85db                 test ebx, ebx
// 0059be3e  0f8475020000         je 0x59c0b9
// 0059be44  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059be47  8bc1                 mov eax, ecx
// 0059be49  2bc2                 sub eax, edx
// 0059be4b  c1f803               sar eax, 3
// 0059be4e  baffffff1f           mov edx, 0x1fffffff
// 0059be53  2bd0                 sub edx, eax
// 0059be55  3bd3                 cmp edx, ebx
// 0059be57  7305                 jae 0x59be5e
// 0059be59  e8e2aef2ff           call 0x4c6d40
// 0059be5e  03c3                 add eax, ebx
// 0059be60  3bf8                 cmp edi, eax
// 0059be62  0f8302010000         jae 0x59bf6a
// 0059be68  8bcf                 mov ecx, edi
// 0059be6a  d1e9                 shr ecx, 1
// 0059be6c  baffffff1f           mov edx, 0x1fffffff
// 0059be71  2bd1                 sub edx, ecx
// 0059be73  3bd7                 cmp edx, edi
// 0059be75  7304                 jae 0x59be7b
// 0059be77  33ff                 xor edi, edi
// 0059be79  eb02                 jmp 0x59be7d
// 0059be7b  03f9                 add edi, ecx
// 0059be7d  3bf8                 cmp edi, eax
// 0059be7f  7302                 jae 0x59be83
// 0059be81  8bf8                 mov edi, eax
// 0059be83  6a00                 push 0
// 0059be85  57                   push edi
// 0059be86  e8b53e0d00           call 0x66fd40
// 0059be8b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059be8e  c645e400             mov byte ptr [ebp - 0x1c], 0
// 0059be92  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0059be95  52                   push edx
// 0059be96  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059be99  52                   push edx
// 0059be9a  8d5608               lea edx, [esi + 8]
// 0059be9d  52                   push edx
// 0059be9e  50                   push eax
// 0059be9f  8945ec               mov dword ptr [ebp - 0x14], eax
// 0059bea2  894510               mov dword ptr [ebp + 0x10], eax
// 0059bea5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bea8  50                   push eax
// 0059bea9  51                   push ecx
// 0059beaa  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0059beb1  e8eaeaffff           call 0x59a9a0
// 0059beb6  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0059beb9  83c420               add esp, 0x20
// 0059bebc  51                   push ecx
// 0059bebd  53                   push ebx
// 0059bebe  50                   push eax
// 0059bebf  8bce                 mov ecx, esi
// 0059bec1  894510               mov dword ptr [ebp + 0x10], eax
// 0059bec4  e867faffff           call 0x59b930
// 0059bec9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059becc  c6451400             mov byte ptr [ebp + 0x14], 0
// 0059bed0  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bed3  52                   push edx
// 0059bed4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bed7  52                   push edx
// 0059bed8  8d5608               lea edx, [esi + 8]
// 0059bedb  52                   push edx
// 0059bedc  50                   push eax
// 0059bedd  894510               mov dword ptr [ebp + 0x10], eax
// 0059bee0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bee3  51                   push ecx
// 0059bee4  50                   push eax
// 0059bee5  e8b6eaffff           call 0x59a9a0
// 0059beea  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059beed  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059bef0  2bc8                 sub ecx, eax
// 0059bef2  c1f903               sar ecx, 3
// 0059bef5  83c418               add esp, 0x18
// 0059bef8  03d9                 add ebx, ecx
// 0059befa  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0059bf01  85c0                 test eax, eax
// 0059bf03  741e                 je 0x59bf23
// 0059bf05  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bf08  52                   push edx
// 0059bf09  8d4e08               lea ecx, [esi + 8]
// 0059bf0c  51                   push ecx
// 0059bf0d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059bf10  51                   push ecx
// 0059bf11  50                   push eax
// 0059bf12  e87944ffff           call 0x590390
// 0059bf17  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059bf1a  52                   push edx
// 0059bf1b  e85a471000           call 0x6a067a
// 0059bf20  83c414               add esp, 0x14
// 0059bf23  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0059bf26  8d0cf8               lea ecx, [eax + edi*8]
// 0059bf29  8d14d8               lea edx, [eax + ebx*8]
// 0059bf2c  894e14               mov dword ptr [esi + 0x14], ecx
// 0059bf2f  895610               mov dword ptr [esi + 0x10], edx
// 0059bf32  89460c               mov dword ptr [esi + 0xc], eax
// 0059bf35  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059bf38  64890d00000000       mov dword ptr fs:[0], ecx
// 0059bf3f  5f                   pop edi
// 0059bf40  5e                   pop esi
// 0059bf41  5b                   pop ebx
// 0059bf42  8be5                 mov esp, ebp
// 0059bf44  5d                   pop ebp
// 0059bf45  c21000               ret 0x10
// 0059bf48  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0059bf4b  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 0059bf4e  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0059bf51  50                   push eax
// 0059bf52  56                   push esi
// 0059bf53  e87844ffff           call 0x5903d0
// 0059bf58  56                   push esi
// 0059bf59  e81c471000           call 0x6a067a
// 0059bf5e  83c404               add esp, 4
// 0059bf61  6a00                 push 0
// 0059bf63  6a00                 push 0
// 0059bf65  e822561000           call 0x6a158c
// 0059bf6a  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 0059bf6d  c1f903               sar ecx, 3
// 0059bf70  3bcb                 cmp ecx, ebx
// 0059bf72  0f83cd000000         jae 0x59c045
// 0059bf78  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0059bf7b  51                   push ecx
// 0059bf7c  8d4de0               lea ecx, [ebp - 0x20]
// 0059bf7f  e86cd0ffff           call 0x598ff0
// 0059bf84  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bf87  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059bf8a  8d3cdd00000000       lea edi, [ebx*8]
// 0059bf91  8d1407               lea edx, [edi + eax]
// 0059bf94  52                   push edx
// 0059bf95  51                   push ecx
// 0059bf96  50                   push eax
// 0059bf97  8bce                 mov ecx, esi
// 0059bf99  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0059bfa0  e89bfcffff           call 0x59bc40
// 0059bfa5  8b4610               mov eax, dword ptr [esi + 0x10]
// 0059bfa8  8bc8                 mov ecx, eax
// 0059bfaa  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 0059bfad  8d55e0               lea edx, [ebp - 0x20]
// 0059bfb0  c1f903               sar ecx, 3
// 0059bfb3  52                   push edx
// 0059bfb4  2bd9                 sub ebx, ecx
// 0059bfb6  53                   push ebx
// 0059bfb7  50                   push eax
// 0059bfb8  8bce                 mov ecx, esi
// 0059bfba  c645fc03             mov byte ptr [ebp - 4], 3
// 0059bfbe  e86df9ffff           call 0x59b930
// 0059bfc3  017e10               add dword ptr [esi + 0x10], edi
// 0059bfc6  8b7610               mov esi, dword ptr [esi + 0x10]
// 0059bfc9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bfcc  8d55e0               lea edx, [ebp - 0x20]
// 0059bfcf  52                   push edx
// 0059bfd0  2bf7                 sub esi, edi
// 0059bfd2  56                   push esi
// 0059bfd3  50                   push eax
// 0059bfd4  c745fc02000000       mov dword ptr [ebp - 4], 2
// 0059bfdb  e8a0dcffff           call 0x599c80
// 0059bfe0  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0059bfe3  83c40c               add esp, 0xc
// 0059bfe6  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0059bfed  85c9                 test ecx, ecx
// 0059bfef  0f84c4000000         je 0x59c0b9
// 0059bff5  8d5108               lea edx, [ecx + 8]
// 0059bff8  83c8ff               or eax, 0xffffffff
// 0059bffb  f00fc102             lock xadd dword ptr [edx], eax
// 0059bfff  0f85b4000000         jne 0x59c0b9
// 0059c005  8b11                 mov edx, dword ptr [ecx]
// 0059c007  8b4208               mov eax, dword ptr [edx + 8]
// 0059c00a  ffd0                 call eax
// 0059c00c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059c00f  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c016  5f                   pop edi
// 0059c017  5e                   pop esi
// 0059c018  5b                   pop ebx
// 0059c019  8be5                 mov esp, ebp
// 0059c01b  5d                   pop ebp
// 0059c01c  c21000               ret 0x10
// 0059c01f  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0059c022  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 0059c025  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0059c028  03c0                 add eax, eax
// 0059c02a  03c0                 add eax, eax
// 0059c02c  03c0                 add eax, eax
// 0059c02e  03d0                 add edx, eax
// 0059c030  52                   push edx
// 0059c031  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0059c034  03c2                 add eax, edx
// 0059c036  50                   push eax
// 0059c037  e89443ffff           call 0x5903d0
// 0059c03c  6a00                 push 0
// 0059c03e  6a00                 push 0
// 0059c040  e847551000           call 0x6a158c
// 0059c045  8b4514               mov eax, dword ptr [ebp + 0x14]
// 0059c048  50                   push eax
// 0059c049  8d4de0               lea ecx, [ebp - 0x20]
// 0059c04c  e89fcfffff           call 0x598ff0
// 0059c051  8b7e10               mov edi, dword ptr [esi + 0x10]
// 0059c054  8d04dd00000000       lea eax, [ebx*8]
// 0059c05b  57                   push edi
// 0059c05c  8bdf                 mov ebx, edi
// 0059c05e  2bd8                 sub ebx, eax
// 0059c060  57                   push edi
// 0059c061  53                   push ebx
// 0059c062  8bce                 mov ecx, esi
// 0059c064  c745fc05000000       mov dword ptr [ebp - 4], 5
// 0059c06b  894514               mov dword ptr [ebp + 0x14], eax
// 0059c06e  e8cdfbffff           call 0x59bc40
// 0059c073  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0059c076  57                   push edi
// 0059c077  53                   push ebx
// 0059c078  51                   push ecx
// 0059c079  894610               mov dword ptr [esi + 0x10], eax
// 0059c07c  e8bff3ffff           call 0x59b440
// 0059c081  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059c084  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059c087  8d0c02               lea ecx, [edx + eax]
// 0059c08a  8d55e0               lea edx, [ebp - 0x20]
// 0059c08d  52                   push edx
// 0059c08e  51                   push ecx
// 0059c08f  50                   push eax
// 0059c090  e8ebdbffff           call 0x599c80
// 0059c095  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0059c098  83c418               add esp, 0x18
// 0059c09b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0059c0a2  85c9                 test ecx, ecx
// 0059c0a4  7413                 je 0x59c0b9
// 0059c0a6  8d4108               lea eax, [ecx + 8]
// 0059c0a9  83caff               or edx, 0xffffffff
// 0059c0ac  f00fc110             lock xadd dword ptr [eax], edx
// 0059c0b0  7507                 jne 0x59c0b9
// 0059c0b2  8b01                 mov eax, dword ptr [ecx]
// 0059c0b4  8b5008               mov edx, dword ptr [eax + 8]
// 0059c0b7  ffd2                 call edx
// 0059c0b9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059c0bc  5f                   pop edi
// 0059c0bd  5e                   pop esi
// 0059c0be  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c0c5  5b                   pop ebx
// 0059c0c6  8be5                 mov esp, ebp
// 0059c0c8  5d                   pop ebp
// 0059c0c9  c21000               ret 0x10

// from server: 100% by auto
// roc 2008-06 0059be00  unit: RBX::PartInstance  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059be00
//
// 0059be00  55                   push ebp
// 0059be01  8bec                 mov ebp, esp
// 0059be03  6aff                 push -1
// 0059be05  6810267d00           push 0x7d2610
// 0059be0a  64a100000000         mov eax, dword ptr fs:[0]
// 0059be10  50                   push eax
// 0059be11  64892500000000       mov dword ptr fs:[0], esp
// 0059be18  83ec14               sub esp, 0x14
// 0059be1b  53                   push ebx
// 0059be1c  56                   push esi
// 0059be1d  8bf1                 mov esi, ecx
// 0059be1f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059be22  57                   push edi
// 0059be23  8965f0               mov dword ptr [ebp - 0x10], esp
// 0059be26  8975e8               mov dword ptr [ebp - 0x18], esi
// 0059be29  85d2                 test edx, edx
// 0059be2b  7504                 jne 0x59be31
// 0059be2d  33ff                 xor edi, edi
// 0059be2f  eb08                 jmp 0x59be39
// 0059be31  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0059be34  2bfa                 sub edi, edx
// 0059be36  c1ff03               sar edi, 3
// 0059be39  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0059be3c  85db                 test ebx, ebx
// 0059be3e  0f8475020000         je 0x59c0b9
// 0059be44  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059be47  8bc1                 mov eax, ecx
// 0059be49  2bc2                 sub eax, edx
// 0059be4b  c1f803               sar eax, 3
// 0059be4e  baffffff1f           mov edx, 0x1fffffff
// 0059be53  2bd0                 sub edx, eax
// 0059be55  3bd3                 cmp edx, ebx
// 0059be57  7305                 jae 0x59be5e
// 0059be59  e8e2aef2ff           call 0x4c6d40
// 0059be5e  03c3                 add eax, ebx
// 0059be60  3bf8                 cmp edi, eax
// 0059be62  0f8302010000         jae 0x59bf6a
// 0059be68  8bcf                 mov ecx, edi
// 0059be6a  d1e9                 shr ecx, 1
// 0059be6c  baffffff1f           mov edx, 0x1fffffff
// 0059be71  2bd1                 sub edx, ecx
// 0059be73  3bd7                 cmp edx, edi
// 0059be75  7304                 jae 0x59be7b
// 0059be77  33ff                 xor edi, edi
// 0059be79  eb02                 jmp 0x59be7d
// 0059be7b  03f9                 add edi, ecx
// 0059be7d  3bf8                 cmp edi, eax
// 0059be7f  7302                 jae 0x59be83
// 0059be81  8bf8                 mov edi, eax
// 0059be83  6a00                 push 0
// 0059be85  57                   push edi
// 0059be86  e8b53e0d00           call 0x66fd40
// 0059be8b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059be8e  c645e400             mov byte ptr [ebp - 0x1c], 0
// 0059be92  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 0059be95  52                   push edx
// 0059be96  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059be99  52                   push edx
// 0059be9a  8d5608               lea edx, [esi + 8]
// 0059be9d  52                   push edx
// 0059be9e  50                   push eax
// 0059be9f  8945ec               mov dword ptr [ebp - 0x14], eax
// 0059bea2  894510               mov dword ptr [ebp + 0x10], eax
// 0059bea5  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bea8  50                   push eax
// 0059bea9  51                   push ecx
// 0059beaa  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0059beb1  e8eaeaffff           call 0x59a9a0
// 0059beb6  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0059beb9  83c420               add esp, 0x20
// 0059bebc  51                   push ecx
// 0059bebd  53                   push ebx
// 0059bebe  50                   push eax
// 0059bebf  8bce                 mov ecx, esi
// 0059bec1  894510               mov dword ptr [ebp + 0x10], eax
// 0059bec4  e867faffff           call 0x59b930
// 0059bec9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059becc  c6451400             mov byte ptr [ebp + 0x14], 0
// 0059bed0  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bed3  52                   push edx
// 0059bed4  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bed7  52                   push edx
// 0059bed8  8d5608               lea edx, [esi + 8]
// 0059bedb  52                   push edx
// 0059bedc  50                   push eax
// 0059bedd  894510               mov dword ptr [ebp + 0x10], eax
// 0059bee0  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0059bee3  51                   push ecx
// 0059bee4  50                   push eax
// 0059bee5  e8b6eaffff           call 0x59a9a0
// 0059beea  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059beed  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059bef0  2bc8                 sub ecx, eax
// 0059bef2  c1f903               sar ecx, 3
// 0059bef5  83c418               add esp, 0x18
// 0059bef8  03d9                 add ebx, ecx
// 0059befa  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0059bf01  85c0                 test eax, eax
// 0059bf03  741e                 je 0x59bf23
// 0059bf05  8b5514               mov edx, dword ptr [ebp + 0x14]
// 0059bf08  52                   push edx
// 0059bf09  8d4e08               lea ecx, [esi + 8]
// 0059bf0c  51                   push ecx
// 0059bf0d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0059bf10  51                   push ecx
// 0059bf11  50                   push eax
// 0059bf12  e87944ffff           call 0x590390
// 0059bf17  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059bf1a  52                   push edx
// 0059bf1b  e85a471000           call 0x6a067a
// 0059bf20  83c414               add esp, 0x14
// 0059bf23  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0059bf26  8d0cf8               lea ecx, [eax + edi*8]
// 0059bf29  8d14d8               lea edx, [eax + ebx*8]
// 0059bf2c  894e14               mov dword ptr [esi + 0x14], ecx
// 0059bf2f  895610               mov dword ptr [esi + 0x10], edx
// 0059bf32  89460c               mov dword ptr [esi + 0xc], eax
// 0059bf35  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0059bf38  64890d00000000       mov dword ptr fs:[0], ecx
// 0059bf3f  5f                   pop edi
// 0059bf40  5e                   pop esi
// 0059bf41  5b                   pop ebx
// 0059bf42  8be5                 mov esp, ebp
// 0059bf44  5d                   pop ebp
// 0059bf45  c21000               ret 0x10
// library templates-boost-1_34_1/vector_wp.cpp (function ?_Insert_n@?$vector@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$weak_ptr@UT@@@boost@@V?$allocator@V?$weak_ptr@UT@@@boost@@@std@@@2@IABV?$weak_ptr@UT@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_wp.cpp
