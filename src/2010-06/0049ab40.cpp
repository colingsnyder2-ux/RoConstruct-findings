// from server: 100% by auto
// roc 2010-06 0049ab40  unit: G3D::Shader  size: 1731 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049ab40
//
// 0049ab40  64a100000000         mov eax, dword ptr fs:[0]
// 0049ab46  6aff                 push -1
// 0049ab48  68d1719800           push 0x9871d1
// 0049ab4d  50                   push eax
// 0049ab4e  64892500000000       mov dword ptr fs:[0], esp
// 0049ab55  81eccc000000         sub esp, 0xcc
// 0049ab5b  57                   push edi
// 0049ab5c  8bf9                 mov edi, ecx
// 0049ab5e  807f1400             cmp byte ptr [edi + 0x14], 0
// 0049ab62  740c                 je 0x49ab70
// 0049ab64  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 0049ab6b  e850ccffff           call 0x4977c0
// 0049ab70  837f1000             cmp dword ptr [edi + 0x10], 0
// 0049ab74  0f855d060000         jne 0x49b1d7
// 0049ab7a  53                   push ebx
// 0049ab7b  55                   push ebp
// 0049ab7c  56                   push esi
// 0049ab7d  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 0049ab84  8bce                 mov ecx, esi
// 0049ab86  e84572ffff           call 0x491dd0
// 0049ab8b  8bce                 mov ecx, esi
// 0049ab8d  89442434             mov dword ptr [esp + 0x34], eax
// 0049ab91  e84a72ffff           call 0x491de0
// 0049ab96  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0049ab99  68dc77a100           push 0xa177dc
// 0049ab9e  8d4c241c             lea ecx, [esp + 0x1c]
// 0049aba2  8bf0                 mov esi, eax
// 0049aba4  ff1510a49e00         call dword ptr [0x9ea410]
// 0049abaa  8d442418             lea eax, [esp + 0x18]
// 0049abae  81c5a0010000         add ebp, 0x1a0
// 0049abb4  50                   push eax
// 0049abb5  8bcd                 mov ecx, ebp
// 0049abb7  c78424e800000000000000 mov dword ptr [esp + 0xe8], 0
// 0049abc2  e8b91dffff           call 0x48c980
// 0049abc7  83cbff               or ebx, 0xffffffff
// 0049abca  8d4c2418             lea ecx, [esp + 0x18]
// 0049abce  88442413             mov byte ptr [esp + 0x13], al
// 0049abd2  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049abd9  ff1500a49e00         call dword ptr [0x9ea400]
// 0049abdf  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049abe4  744a                 je 0x49ac30
// 0049abe6  68dc77a100           push 0xa177dc
// 0049abeb  8d4c241c             lea ecx, [esp + 0x1c]
// 0049abef  ff1510a49e00         call dword ptr [0x9ea410]
// 0049abf5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049abf9  51                   push ecx
// 0049abfa  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049ac01  c78424e800000001000000 mov dword ptr [esp + 0xe8], 1
// 0049ac0c  e83fd80b00           call 0x558450
// 0049ac11  50                   push eax
// 0049ac12  8d54241c             lea edx, [esp + 0x1c]
// 0049ac16  52                   push edx
// 0049ac17  8d4f18               lea ecx, [edi + 0x18]
// 0049ac1a  e841f2ffff           call 0x499e60
// 0049ac1f  8d4c2418             lea ecx, [esp + 0x18]
// 0049ac23  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049ac2a  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ac30  68c477a100           push 0xa177c4
// 0049ac35  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ac39  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ac3f  8d442418             lea eax, [esp + 0x18]
// 0049ac43  50                   push eax
// 0049ac44  8bcd                 mov ecx, ebp
// 0049ac46  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 0049ac51  e82a1dffff           call 0x48c980
// 0049ac56  8d4c2418             lea ecx, [esp + 0x18]
// 0049ac5a  88442413             mov byte ptr [esp + 0x13], al
// 0049ac5e  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049ac65  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ac6b  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049ac70  7446                 je 0x49acb8
// 0049ac72  68c477a100           push 0xa177c4
// 0049ac77  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ac7b  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ac81  56                   push esi
// 0049ac82  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049ac89  c78424e800000003000000 mov dword ptr [esp + 0xe8], 3
// 0049ac94  e8b7d70b00           call 0x558450
// 0049ac99  50                   push eax
// 0049ac9a  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ac9e  51                   push ecx
// 0049ac9f  8d4f18               lea ecx, [edi + 0x18]
// 0049aca2  e8b9f1ffff           call 0x499e60
// 0049aca7  8d4c2418             lea ecx, [esp + 0x18]
// 0049acab  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049acb2  ff1500a49e00         call dword ptr [0x9ea400]
// 0049acb8  68ac77a100           push 0xa177ac
// 0049acbd  8d4c241c             lea ecx, [esp + 0x1c]
// 0049acc1  ff1510a49e00         call dword ptr [0x9ea410]
// 0049acc7  8d542418             lea edx, [esp + 0x18]
// 0049accb  52                   push edx
// 0049accc  8bcd                 mov ecx, ebp
// 0049acce  c78424e800000004000000 mov dword ptr [esp + 0xe8], 4
// 0049acd9  e8a21cffff           call 0x48c980
// 0049acde  8d4c2418             lea ecx, [esp + 0x18]
// 0049ace2  88442413             mov byte ptr [esp + 0x13], al
// 0049ace6  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049aced  ff1500a49e00         call dword ptr [0x9ea400]
// 0049acf3  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049acf8  7454                 je 0x49ad4e
// 0049acfa  68ac77a100           push 0xa177ac
// 0049acff  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ad03  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ad09  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049ad0d  8d442450             lea eax, [esp + 0x50]
// 0049ad11  50                   push eax
// 0049ad12  c78424e800000005000000 mov dword ptr [esp + 0xe8], 5
// 0049ad1d  e88e7bffff           call 0x4928b0
// 0049ad22  50                   push eax
// 0049ad23  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049ad2a  e821d70b00           call 0x558450
// 0049ad2f  50                   push eax
// 0049ad30  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ad34  51                   push ecx
// 0049ad35  8d4f18               lea ecx, [edi + 0x18]
// 0049ad38  e823f1ffff           call 0x499e60
// 0049ad3d  8d4c2418             lea ecx, [esp + 0x18]
// 0049ad41  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049ad48  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ad4e  689477a100           push 0xa17794
// 0049ad53  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ad57  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ad5d  8d542418             lea edx, [esp + 0x18]
// 0049ad61  52                   push edx
// 0049ad62  8bcd                 mov ecx, ebp
// 0049ad64  c78424e800000006000000 mov dword ptr [esp + 0xe8], 6
// 0049ad6f  e80c1cffff           call 0x48c980
// 0049ad74  8d4c2418             lea ecx, [esp + 0x18]
// 0049ad78  88442413             mov byte ptr [esp + 0x13], al
// 0049ad7c  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049ad83  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ad89  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049ad8e  7452                 je 0x49ade2
// 0049ad90  689477a100           push 0xa17794
// 0049ad95  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ad99  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ad9f  8d442450             lea eax, [esp + 0x50]
// 0049ada3  50                   push eax
// 0049ada4  8bce                 mov ecx, esi
// 0049ada6  c78424e800000007000000 mov dword ptr [esp + 0xe8], 7
// 0049adb1  e8fa7affff           call 0x4928b0
// 0049adb6  50                   push eax
// 0049adb7  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0049adbe  e88dd60b00           call 0x558450
// 0049adc3  50                   push eax
// 0049adc4  8d4c241c             lea ecx, [esp + 0x1c]
// 0049adc8  51                   push ecx
// 0049adc9  8d4f18               lea ecx, [edi + 0x18]
// 0049adcc  e88ff0ffff           call 0x499e60
// 0049add1  8d4c2418             lea ecx, [esp + 0x18]
// 0049add5  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049addc  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ade2  688477a100           push 0xa17784
// 0049ade7  8d4c241c             lea ecx, [esp + 0x1c]
// 0049adeb  ff1510a49e00         call dword ptr [0x9ea410]
// 0049adf1  8d542418             lea edx, [esp + 0x18]
// 0049adf5  52                   push edx
// 0049adf6  8bcd                 mov ecx, ebp
// 0049adf8  c78424e800000008000000 mov dword ptr [esp + 0xe8], 8
// 0049ae03  e8781bffff           call 0x48c980
// 0049ae08  8d4c2418             lea ecx, [esp + 0x18]
// 0049ae0c  88442413             mov byte ptr [esp + 0x13], al
// 0049ae10  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049ae17  ff1500a49e00         call dword ptr [0x9ea400]
// 0049ae1d  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049ae22  0f84a4000000         je 0x49aecc
// 0049ae28  68500b0000           push 0xb50
// 0049ae2d  e88e44ffff           call 0x48f2c0
// 0049ae32  83c404               add esp, 4
// 0049ae35  84c0                 test al, al
// 0049ae37  7455                 je 0x49ae8e
// 0049ae39  c744241407000000     mov dword ptr [esp + 0x14], 7
// 0049ae41  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049ae45  0500400000           add eax, 0x4000
// 0049ae4a  50                   push eax
// 0049ae4b  e87044ffff           call 0x48f2c0
// 0049ae50  83c404               add esp, 4
// 0049ae53  84c0                 test al, al
// 0049ae55  7507                 jne 0x49ae5e
// 0049ae57  836c241401           sub dword ptr [esp + 0x14], 1
// 0049ae5c  79e3                 jns 0x49ae41
// 0049ae5e  688477a100           push 0xa17784
// 0049ae63  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ae67  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ae6d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0049ae71  41                   inc ecx
// 0049ae72  51                   push ecx
// 0049ae73  f30f2ac1             cvtsi2ss xmm0, ecx
// 0049ae77  8d54241c             lea edx, [esp + 0x1c]
// 0049ae7b  f30f110424           movss dword ptr [esp], xmm0
// 0049ae80  c78424e800000009000000 mov dword ptr [esp + 0xe8], 9
// 0049ae8b  52                   push edx
// 0049ae8c  eb25                 jmp 0x49aeb3
// 0049ae8e  688477a100           push 0xa17784
// 0049ae93  8d4c241c             lea ecx, [esp + 0x1c]
// 0049ae97  ff1510a49e00         call dword ptr [0x9ea410]
// 0049ae9d  d9ee                 fldz 
// 0049ae9f  51                   push ecx
// 0049aea0  d91c24               fstp dword ptr [esp]
// 0049aea3  8d44241c             lea eax, [esp + 0x1c]
// 0049aea7  c78424e80000000a000000 mov dword ptr [esp + 0xe8], 0xa
// 0049aeb2  50                   push eax
// 0049aeb3  8d4f18               lea ecx, [edi + 0x18]
// 0049aeb6  e8f5f1ffff           call 0x49a0b0
// 0049aebb  8d4c2418             lea ecx, [esp + 0x18]
// 0049aebf  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049aec6  ff1500a49e00         call dword ptr [0x9ea400]
// 0049aecc  687077a100           push 0xa17770
// 0049aed1  8d4c241c             lea ecx, [esp + 0x1c]
// 0049aed5  ff1510a49e00         call dword ptr [0x9ea410]
// 0049aedb  8d4c2418             lea ecx, [esp + 0x18]
// 0049aedf  51                   push ecx
// 0049aee0  8bcd                 mov ecx, ebp
// 0049aee2  c78424e80000000b000000 mov dword ptr [esp + 0xe8], 0xb
// 0049aeed  e88e1affff           call 0x48c980
// 0049aef2  8d4c2418             lea ecx, [esp + 0x18]
// 0049aef6  88442413             mov byte ptr [esp + 0x13], al
// 0049aefa  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049af01  ff1500a49e00         call dword ptr [0x9ea400]
// 0049af07  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049af0c  0f8410020000         je 0x49b122
// 0049af12  0f57c0               xorps xmm0, xmm0
// 0049af15  8d54243c             lea edx, [esp + 0x3c]
// 0049af19  52                   push edx
// 0049af1a  6803120000           push 0x1203
// 0049af1f  6800400000           push 0x4000
// 0049af24  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 0049af2a  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 0049af30  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 0049af36  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 0049af3c  ff1554ab9e00         call dword ptr [0x9eab54]
// 0049af42  687077a100           push 0xa17770
// 0049af47  8d4c2454             lea ecx, [esp + 0x54]
// 0049af4b  ff1510a49e00         call dword ptr [0x9ea410]
// 0049af51  f30f105c2448         movss xmm3, dword ptr [esp + 0x48]
// 0049af57  f30f10462c           movss xmm0, dword ptr [esi + 0x2c]
// 0049af5c  f30f10742440         movss xmm6, dword ptr [esp + 0x40]
// 0049af62  f30f10542444         movss xmm2, dword ptr [esp + 0x44]
// 0049af68  f30f104e08           movss xmm1, dword ptr [esi + 8]
// 0049af6d  f30f107e14           movss xmm7, dword ptr [esi + 0x14]
// 0049af72  f30f106624           movss xmm4, dword ptr [esi + 0x24]
// 0049af77  f30f106e28           movss xmm5, dword ptr [esi + 0x28]
// 0049af7c  f30f59ca             mulss xmm1, xmm2
// 0049af80  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049af84  f30f59c3             mulss xmm0, xmm3
// 0049af88  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 0049af8e  f30f104604           movss xmm0, dword ptr [esi + 4]
// 0049af93  f30f59c6             mulss xmm0, xmm6
// 0049af97  f30f58c1             addss xmm0, xmm1
// 0049af9b  f30f100e             movss xmm1, dword ptr [esi]
// 0049af9f  f30f594c243c         mulss xmm1, dword ptr [esp + 0x3c]
// 0049afa5  f30f59fa             mulss xmm7, xmm2
// 0049afa9  f30f10560c           movss xmm2, dword ptr [esi + 0xc]
// 0049afae  f30f5954243c         mulss xmm2, dword ptr [esp + 0x3c]
// 0049afb4  f30f58c1             addss xmm0, xmm1
// 0049afb8  f30f104e10           movss xmm1, dword ptr [esi + 0x10]
// 0049afbd  f30f59ce             mulss xmm1, xmm6
// 0049afc1  f30f58cf             addss xmm1, xmm7
// 0049afc5  f30f58ca             addss xmm1, xmm2
// 0049afc9  f30f10561c           movss xmm2, dword ptr [esi + 0x1c]
// 0049afce  f30f59d6             mulss xmm2, xmm6
// 0049afd2  f30f107620           movss xmm6, dword ptr [esi + 0x20]
// 0049afd7  f30f59742444         mulss xmm6, dword ptr [esp + 0x44]
// 0049afdd  f30f58d6             addss xmm2, xmm6
// 0049afe1  f30f107618           movss xmm6, dword ptr [esi + 0x18]
// 0049afe6  f30f5974243c         mulss xmm6, dword ptr [esp + 0x3c]
// 0049afec  8d84249c000000       lea eax, [esp + 0x9c]
// 0049aff3  f30f59e3             mulss xmm4, xmm3
// 0049aff7  f30f59eb             mulss xmm5, xmm3
// 0049affb  f30f58d6             addss xmm2, xmm6
// 0049afff  f30f58542414         addss xmm2, dword ptr [esp + 0x14]
// 0049b005  f30f58c4             addss xmm0, xmm4
// 0049b009  f30f58cd             addss xmm1, xmm5
// 0049b00d  50                   push eax
// 0049b00e  c78424e80000000c000000 mov dword ptr [esp + 0xe8], 0xc
// 0049b019  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 0049b01f  f30f114c243c         movss dword ptr [esp + 0x3c], xmm1
// 0049b025  f30f11542418         movss dword ptr [esp + 0x18], xmm2
// 0049b02b  f30f115c2428         movss dword ptr [esp + 0x28], xmm3
// 0049b031  e87a78ffff           call 0x4928b0
// 0049b036  f30f105c2424         movss xmm3, dword ptr [esp + 0x24]
// 0049b03c  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 0049b041  f30f10542438         movss xmm2, dword ptr [esp + 0x38]
// 0049b047  f30f104808           movss xmm1, dword ptr [eax + 8]
// 0049b04c  f30f594c2414         mulss xmm1, dword ptr [esp + 0x14]
// 0049b052  f30f1074244c         movss xmm6, dword ptr [esp + 0x4c]
// 0049b058  f30f106024           movss xmm4, dword ptr [eax + 0x24]
// 0049b05d  f30f106828           movss xmm5, dword ptr [eax + 0x28]
// 0049b062  f30f107810           movss xmm7, dword ptr [eax + 0x10]
// 0049b067  f30f59c3             mulss xmm0, xmm3
// 0049b06b  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 0049b071  f30f104004           movss xmm0, dword ptr [eax + 4]
// 0049b076  f30f59c2             mulss xmm0, xmm2
// 0049b07a  f30f58c1             addss xmm0, xmm1
// 0049b07e  f30f1008             movss xmm1, dword ptr [eax]
// 0049b082  f30f59ce             mulss xmm1, xmm6
// 0049b086  f30f58c1             addss xmm0, xmm1
// 0049b08a  f30f10480c           movss xmm1, dword ptr [eax + 0xc]
// 0049b08f  f30f59e3             mulss xmm4, xmm3
// 0049b093  f30f59eb             mulss xmm5, xmm3
// 0049b097  f30f59ce             mulss xmm1, xmm6
// 0049b09b  f30f59fa             mulss xmm7, xmm2
// 0049b09f  f30f105014           movss xmm2, dword ptr [eax + 0x14]
// 0049b0a4  f30f59542414         mulss xmm2, dword ptr [esp + 0x14]
// 0049b0aa  f30f58cf             addss xmm1, xmm7
// 0049b0ae  f30f58ca             addss xmm1, xmm2
// 0049b0b2  f30f105018           movss xmm2, dword ptr [eax + 0x18]
// 0049b0b7  f30f59d6             mulss xmm2, xmm6
// 0049b0bb  f30f10701c           movss xmm6, dword ptr [eax + 0x1c]
// 0049b0c0  f30f59742438         mulss xmm6, dword ptr [esp + 0x38]
// 0049b0c6  f30f58d6             addss xmm2, xmm6
// 0049b0ca  f30f107020           movss xmm6, dword ptr [eax + 0x20]
// 0049b0cf  f30f59742414         mulss xmm6, dword ptr [esp + 0x14]
// 0049b0d5  8d4c2418             lea ecx, [esp + 0x18]
// 0049b0d9  51                   push ecx
// 0049b0da  8d542454             lea edx, [esp + 0x54]
// 0049b0de  f30f58d6             addss xmm2, xmm6
// 0049b0e2  f30f58542438         addss xmm2, dword ptr [esp + 0x38]
// 0049b0e8  f30f58c4             addss xmm0, xmm4
// 0049b0ec  f30f58cd             addss xmm1, xmm5
// 0049b0f0  52                   push edx
// 0049b0f1  8d4f18               lea ecx, [edi + 0x18]
// 0049b0f4  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 0049b0fa  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 0049b100  f30f11542428         movss dword ptr [esp + 0x28], xmm2
// 0049b106  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 0049b10c  e89feeffff           call 0x499fb0
// 0049b111  8d4c2450             lea ecx, [esp + 0x50]
// 0049b115  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049b11c  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b122  686077a100           push 0xa17760
// 0049b127  8d4c2454             lea ecx, [esp + 0x54]
// 0049b12b  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b131  8d442450             lea eax, [esp + 0x50]
// 0049b135  50                   push eax
// 0049b136  8bcd                 mov ecx, ebp
// 0049b138  c78424e80000000d000000 mov dword ptr [esp + 0xe8], 0xd
// 0049b143  e83818ffff           call 0x48c980
// 0049b148  8d4c2450             lea ecx, [esp + 0x50]
// 0049b14c  88442413             mov byte ptr [esp + 0x13], al
// 0049b150  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049b157  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b15d  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049b162  7470                 je 0x49b1d4
// 0049b164  be07000000           mov esi, 7
// 0049b169  8da42400000000       lea esp, [esp]
// 0049b170  8d8ec0840000         lea ecx, [esi + 0x84c0]
// 0049b176  51                   push ecx
// 0049b177  e84441ffff           call 0x48f2c0
// 0049b17c  83c404               add esp, 4
// 0049b17f  84c0                 test al, al
// 0049b181  7505                 jne 0x49b188
// 0049b183  83ee01               sub esi, 1
// 0049b186  79e8                 jns 0x49b170
// 0049b188  686077a100           push 0xa17760
// 0049b18d  8d8c2484000000       lea ecx, [esp + 0x84]
// 0049b194  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b19a  51                   push ecx
// 0049b19b  46                   inc esi
// 0049b19c  f30f2ac6             cvtsi2ss xmm0, esi
// 0049b1a0  8d942484000000       lea edx, [esp + 0x84]
// 0049b1a7  f30f110424           movss dword ptr [esp], xmm0
// 0049b1ac  52                   push edx
// 0049b1ad  8d4f18               lea ecx, [edi + 0x18]
// 0049b1b0  c78424ec0000000e000000 mov dword ptr [esp + 0xec], 0xe
// 0049b1bb  e8f0eeffff           call 0x49a0b0
// 0049b1c0  8d8c2480000000       lea ecx, [esp + 0x80]
// 0049b1c7  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 0049b1ce  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b1d4  5e                   pop esi
// 0049b1d5  5d                   pop ebp
// 0049b1d6  5b                   pop ebx
// 0049b1d7  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 0049b1de  8d4718               lea eax, [edi + 0x18]
// 0049b1e1  50                   push eax
// 0049b1e2  83c70c               add edi, 0xc
// 0049b1e5  57                   push edi
// 0049b1e6  e8f585ffff           call 0x4937e0
// 0049b1eb  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 0049b1f2  5f                   pop edi
// 0049b1f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b1fa  81c4d8000000         add esp, 0xd8
// 0049b200  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?beforePrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
