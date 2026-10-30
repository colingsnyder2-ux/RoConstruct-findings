// roc 2009-12 00860ec0  unit: CXTPToolTipContext::CRichEditToolTip  size: 602 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00860ec0
//
// 00860ec0  6aff                 push -1
// 00860ec2  68ade89500           push 0x95e8ad
// 00860ec7  64a100000000         mov eax, dword ptr fs:[0]
// 00860ecd  50                   push eax
// 00860ece  81ecd0000000         sub esp, 0xd0
// 00860ed4  a10052b600           mov eax, dword ptr [0xb65200]
// 00860ed9  33c4                 xor eax, esp
// 00860edb  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 00860ee2  53                   push ebx
// 00860ee3  55                   push ebp
// 00860ee4  56                   push esi
// 00860ee5  57                   push edi
// 00860ee6  a10052b600           mov eax, dword ptr [0xb65200]
// 00860eeb  33c4                 xor eax, esp
// 00860eed  50                   push eax
// 00860eee  8d8424e4000000       lea eax, [esp + 0xe4]
// 00860ef5  64a300000000         mov dword ptr fs:[0], eax
// 00860efb  8bac24f4000000       mov ebp, dword ptr [esp + 0xf4]
// 00860f02  8bf1                 mov esi, ecx
// 00860f04  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 00860f0a  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 00860f11  33ff                 xor edi, edi
// 00860f13  3bc7                 cmp eax, edi
// 00860f15  750b                 jne 0x860f22
// 00860f17  897d00               mov dword ptr [ebp], edi
// 00860f1a  897d04               mov dword ptr [ebp + 4], edi
// 00860f1d  e9cc010000           jmp 0x8610ee
// 00860f22  51                   push ecx
// 00860f23  8d442418             lea eax, [esp + 0x18]
// 00860f27  50                   push eax
// 00860f28  8bce                 mov ecx, esi
// 00860f2a  e8f1edffff           call 0x85fd20
// 00860f2f  8d4c2414             lea ecx, [esp + 0x14]
// 00860f33  89bc24ec000000       mov dword ptr [esp + 0xec], edi
// 00860f3a  ff15bcdd9800         call dword ptr [0x98ddbc]
// 00860f40  84c0                 test al, al
// 00860f42  740b                 je 0x860f4f
// 00860f44  897d00               mov dword ptr [ebp], edi
// 00860f47  897d04               mov dword ptr [ebp + 4], edi
// 00860f4a  e995010000           jmp 0x8610e4
// 00860f4f  56                   push esi
// 00860f50  8d4c2428             lea ecx, [esp + 0x28]
// 00860f54  e87d37f9ff           call 0x7f46d6
// 00860f59  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00860f5c  81c198000000         add ecx, 0x98
// 00860f62  51                   push ecx
// 00860f63  8d542428             lea edx, [esp + 0x28]
// 00860f67  52                   push edx
// 00860f68  8d4c2440             lea ecx, [esp + 0x40]
// 00860f6c  c68424f400000001     mov byte ptr [esp + 0xf4], 1
// 00860f74  e8e7a6feff           call 0x84b660
// 00860f79  6a5c                 push 0x5c
// 00860f7b  8d44244c             lea eax, [esp + 0x4c]
// 00860f7f  57                   push edi
// 00860f80  b302                 mov bl, 2
// 00860f82  50                   push eax
// 00860f83  889c24f8000000       mov byte ptr [esp + 0xf8], bl
// 00860f8a  e8153bf9ff           call 0x7f4aa4
// 00860f8f  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00860f92  83c40c               add esp, 0xc
// 00860f95  c74424485c000000     mov dword ptr [esp + 0x48], 0x5c
// 00860f9d  c744244c1f000040     mov dword ptr [esp + 0x4c], 0x4000001f
// 00860fa5  e886f2ffff           call 0x860230
// 00860faa  8944245c             mov dword ptr [esp + 0x5c], eax
// 00860fae  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00860fb1  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00860fb7  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00860fbe  51                   push ecx
// 00860fbf  0598000000           add eax, 0x98
// 00860fc4  6a3c                 push 0x3c
// 00860fc6  52                   push edx
// 00860fc7  ff155cb19800         call dword ptr [0x98b15c]
// 00860fcd  85c0                 test eax, eax
// 00860fcf  7472                 je 0x861043
// 00860fd1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00860fd5  6a5a                 push 0x5a
// 00860fd7  50                   push eax
// 00860fd8  ff1564b19800         call dword ptr [0x98b164]
// 00860fde  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00860fe5  50                   push eax
// 00860fe6  68a0050000           push 0x5a0
// 00860feb  51                   push ecx
// 00860fec  ff15a0b29800         call dword ptr [0x98b2a0]
// 00860ff2  8d9424c0000000       lea edx, [esp + 0xc0]
// 00860ff9  f7d8                 neg eax
// 00860ffb  52                   push edx
// 00860ffc  8d4c241c             lea ecx, [esp + 0x1c]
// 00861000  89442458             mov dword ptr [esp + 0x58], eax
// 00861004  e887d90000           call 0x86e990
// 00861009  8bc8                 mov ecx, eax
// 0086100b  c68424ec00000003     mov byte ptr [esp + 0xec], 3
// 00861013  e858e6ccff           call 0x52f670
// 00861018  6a20                 push 0x20
// 0086101a  50                   push eax
// 0086101b  8d44246a             lea eax, [esp + 0x6a]
// 0086101f  6a20                 push 0x20
// 00861021  50                   push eax
// 00861022  ff15e4b79800         call dword ptr [0x98b7e4]
// 00861028  83c410               add esp, 0x10
// 0086102b  8d4c2418             lea ecx, [esp + 0x18]
// 0086102f  889c24ec000000       mov byte ptr [esp + 0xec], bl
// 00861036  e835d00000           call 0x86e070
// 0086103b  814c244c000000a0     or dword ptr [esp + 0x4c], 0xa0000000
// 00861043  8dbe30010000         lea edi, [esi + 0x130]
// 00861049  6a00                 push 0
// 0086104b  8bcf                 mov ecx, edi
// 0086104d  e82ee70700           call 0x8df780
// 00861052  8d4c2448             lea ecx, [esp + 0x48]
// 00861056  51                   push ecx
// 00861057  8bcf                 mov ecx, edi
// 00861059  e802e60700           call 0x8df660
// 0086105e  8d4c2414             lea ecx, [esp + 0x14]
// 00861062  ff1580de9800         call dword ptr [0x98de80]
// 00861068  50                   push eax
// 00861069  8bcf                 mov ecx, edi
// 0086106b  e810e70700           call 0x8df780
// 00861070  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00861073  8b4844               mov ecx, dword ptr [eax + 0x44]
// 00861076  8b5048               mov edx, dword ptr [eax + 0x48]
// 00861079  8b584c               mov ebx, dword ptr [eax + 0x4c]
// 0086107c  8b4050               mov eax, dword ptr [eax + 0x50]
// 0086107f  8d541006             lea edx, [eax + edx + 6]
// 00861083  8d5c0b06             lea ebx, [ebx + ecx + 6]
// 00861087  8bce                 mov ecx, esi
// 00861089  89542418             mov dword ptr [esp + 0x18], edx
// 0086108d  e86ef3ffff           call 0x860400
// 00861092  2bc3                 sub eax, ebx
// 00861094  50                   push eax
// 00861095  8d442428             lea eax, [esp + 0x28]
// 00861099  50                   push eax
// 0086109a  8d4c2424             lea ecx, [esp + 0x24]
// 0086109e  51                   push ecx
// 0086109f  8bcf                 mov ecx, edi
// 008610a1  e8fae70700           call 0x8df8a0
// 008610a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008610aa  034c2418             add ecx, dword ptr [esp + 0x18]
// 008610ae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008610b2  03c3                 add eax, ebx
// 008610b4  894c2420             mov dword ptr [esp + 0x20], ecx
// 008610b8  894d04               mov dword ptr [ebp + 4], ecx
// 008610bb  8d4c2438             lea ecx, [esp + 0x38]
// 008610bf  8944241c             mov dword ptr [esp + 0x1c], eax
// 008610c3  894500               mov dword ptr [ebp], eax
// 008610c6  c68424ec00000001     mov byte ptr [esp + 0xec], 1
// 008610ce  e80da6feff           call 0x84b6e0
// 008610d3  8d4c2424             lea ecx, [esp + 0x24]
// 008610d7  c68424ec00000000     mov byte ptr [esp + 0xec], 0
// 008610df  e8ec35f9ff           call 0x7f46d0
// 008610e4  8d4c2414             lea ecx, [esp + 0x14]
// 008610e8  ff15c0de9800         call dword ptr [0x98dec0]
// 008610ee  8bc5                 mov eax, ebp
// 008610f0  8b8c24e4000000       mov ecx, dword ptr [esp + 0xe4]
// 008610f7  64890d00000000       mov dword ptr fs:[0], ecx
// 008610fe  59                   pop ecx
// 008610ff  5f                   pop edi
// 00861100  5e                   pop esi
// 00861101  5d                   pop ebp
// 00861102  5b                   pop ebx
// 00861103  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 0086110a  33cc                 xor ecx, esp
// 0086110c  e88942f9ff           call 0x7f539a
// 00861111  81c4dc000000         add esp, 0xdc
// 00861117  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CRichEditToolTip@CXTPToolTipContext@@MAE?AVCSize@@PAUTOOLITEM@CXTPToolTipContextToolTip@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp