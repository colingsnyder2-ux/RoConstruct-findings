// roc 2009-12 004de7a0  unit: G3D::Shader  size: 1731 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004de7a0
//
// 004de7a0  64a100000000         mov eax, dword ptr fs:[0]
// 004de7a6  6aff                 push -1
// 004de7a8  6871439300           push 0x934371
// 004de7ad  50                   push eax
// 004de7ae  64892500000000       mov dword ptr fs:[0], esp
// 004de7b5  81eccc000000         sub esp, 0xcc
// 004de7bb  57                   push edi
// 004de7bc  8bf9                 mov edi, ecx
// 004de7be  807f1400             cmp byte ptr [edi + 0x14], 0
// 004de7c2  740c                 je 0x4de7d0
// 004de7c4  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 004de7cb  e8c024ffff           call 0x4d0c90
// 004de7d0  837f1000             cmp dword ptr [edi + 0x10], 0
// 004de7d4  0f855d060000         jne 0x4dee37
// 004de7da  53                   push ebx
// 004de7db  55                   push ebp
// 004de7dc  56                   push esi
// 004de7dd  8bb424ec000000       mov esi, dword ptr [esp + 0xec]
// 004de7e4  8bce                 mov ecx, esi
// 004de7e6  e845cdfeff           call 0x4cb530
// 004de7eb  8bce                 mov ecx, esi
// 004de7ed  89442434             mov dword ptr [esp + 0x34], eax
// 004de7f1  e84acdfeff           call 0x4cb540
// 004de7f6  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 004de7f9  68049b9b00           push 0x9b9b04
// 004de7fe  8d4c241c             lea ecx, [esp + 0x1c]
// 004de802  8bf0                 mov esi, eax
// 004de804  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de80a  8d442418             lea eax, [esp + 0x18]
// 004de80e  81c5a0010000         add ebp, 0x1a0
// 004de814  50                   push eax
// 004de815  8bcd                 mov ecx, ebp
// 004de817  c78424e800000000000000 mov dword ptr [esp + 0xe8], 0
// 004de822  e8994cffff           call 0x4d34c0
// 004de827  83cbff               or ebx, 0xffffffff
// 004de82a  8d4c2418             lea ecx, [esp + 0x18]
// 004de82e  88442413             mov byte ptr [esp + 0x13], al
// 004de832  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de839  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de83f  807c241300           cmp byte ptr [esp + 0x13], 0
// 004de844  744a                 je 0x4de890
// 004de846  68049b9b00           push 0x9b9b04
// 004de84b  8d4c241c             lea ecx, [esp + 0x1c]
// 004de84f  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de855  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004de859  51                   push ecx
// 004de85a  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 004de861  c78424e800000001000000 mov dword ptr [esp + 0xe8], 1
// 004de86c  e87f801100           call 0x5f68f0
// 004de871  50                   push eax
// 004de872  8d54241c             lea edx, [esp + 0x1c]
// 004de876  52                   push edx
// 004de877  8d4f18               lea ecx, [edi + 0x18]
// 004de87a  e8f1f1ffff           call 0x4dda70
// 004de87f  8d4c2418             lea ecx, [esp + 0x18]
// 004de883  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de88a  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de890  68ec9a9b00           push 0x9b9aec
// 004de895  8d4c241c             lea ecx, [esp + 0x1c]
// 004de899  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de89f  8d442418             lea eax, [esp + 0x18]
// 004de8a3  50                   push eax
// 004de8a4  8bcd                 mov ecx, ebp
// 004de8a6  c78424e800000002000000 mov dword ptr [esp + 0xe8], 2
// 004de8b1  e80a4cffff           call 0x4d34c0
// 004de8b6  8d4c2418             lea ecx, [esp + 0x18]
// 004de8ba  88442413             mov byte ptr [esp + 0x13], al
// 004de8be  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de8c5  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de8cb  807c241300           cmp byte ptr [esp + 0x13], 0
// 004de8d0  7446                 je 0x4de918
// 004de8d2  68ec9a9b00           push 0x9b9aec
// 004de8d7  8d4c241c             lea ecx, [esp + 0x1c]
// 004de8db  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de8e1  56                   push esi
// 004de8e2  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 004de8e9  c78424e800000003000000 mov dword ptr [esp + 0xe8], 3
// 004de8f4  e8f77f1100           call 0x5f68f0
// 004de8f9  50                   push eax
// 004de8fa  8d4c241c             lea ecx, [esp + 0x1c]
// 004de8fe  51                   push ecx
// 004de8ff  8d4f18               lea ecx, [edi + 0x18]
// 004de902  e869f1ffff           call 0x4dda70
// 004de907  8d4c2418             lea ecx, [esp + 0x18]
// 004de90b  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de912  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de918  68d49a9b00           push 0x9b9ad4
// 004de91d  8d4c241c             lea ecx, [esp + 0x1c]
// 004de921  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de927  8d542418             lea edx, [esp + 0x18]
// 004de92b  52                   push edx
// 004de92c  8bcd                 mov ecx, ebp
// 004de92e  c78424e800000004000000 mov dword ptr [esp + 0xe8], 4
// 004de939  e8824bffff           call 0x4d34c0
// 004de93e  8d4c2418             lea ecx, [esp + 0x18]
// 004de942  88442413             mov byte ptr [esp + 0x13], al
// 004de946  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de94d  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de953  807c241300           cmp byte ptr [esp + 0x13], 0
// 004de958  7454                 je 0x4de9ae
// 004de95a  68d49a9b00           push 0x9b9ad4
// 004de95f  8d4c241c             lea ecx, [esp + 0x1c]
// 004de963  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de969  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004de96d  8d442450             lea eax, [esp + 0x50]
// 004de971  50                   push eax
// 004de972  c78424e800000005000000 mov dword ptr [esp + 0xe8], 5
// 004de97d  e8be3afeff           call 0x4c2440
// 004de982  50                   push eax
// 004de983  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 004de98a  e8617f1100           call 0x5f68f0
// 004de98f  50                   push eax
// 004de990  8d4c241c             lea ecx, [esp + 0x1c]
// 004de994  51                   push ecx
// 004de995  8d4f18               lea ecx, [edi + 0x18]
// 004de998  e8d3f0ffff           call 0x4dda70
// 004de99d  8d4c2418             lea ecx, [esp + 0x18]
// 004de9a1  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de9a8  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de9ae  68bc9a9b00           push 0x9b9abc
// 004de9b3  8d4c241c             lea ecx, [esp + 0x1c]
// 004de9b7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de9bd  8d542418             lea edx, [esp + 0x18]
// 004de9c1  52                   push edx
// 004de9c2  8bcd                 mov ecx, ebp
// 004de9c4  c78424e800000006000000 mov dword ptr [esp + 0xe8], 6
// 004de9cf  e8ec4affff           call 0x4d34c0
// 004de9d4  8d4c2418             lea ecx, [esp + 0x18]
// 004de9d8  88442413             mov byte ptr [esp + 0x13], al
// 004de9dc  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004de9e3  ff15e4b69800         call dword ptr [0x98b6e4]
// 004de9e9  807c241300           cmp byte ptr [esp + 0x13], 0
// 004de9ee  7452                 je 0x4dea42
// 004de9f0  68bc9a9b00           push 0x9b9abc
// 004de9f5  8d4c241c             lea ecx, [esp + 0x1c]
// 004de9f9  ff15f4b69800         call dword ptr [0x98b6f4]
// 004de9ff  8d442450             lea eax, [esp + 0x50]
// 004dea03  50                   push eax
// 004dea04  8bce                 mov ecx, esi
// 004dea06  c78424e800000007000000 mov dword ptr [esp + 0xe8], 7
// 004dea11  e82a3afeff           call 0x4c2440
// 004dea16  50                   push eax
// 004dea17  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 004dea1e  e8cd7e1100           call 0x5f68f0
// 004dea23  50                   push eax
// 004dea24  8d4c241c             lea ecx, [esp + 0x1c]
// 004dea28  51                   push ecx
// 004dea29  8d4f18               lea ecx, [edi + 0x18]
// 004dea2c  e83ff0ffff           call 0x4dda70
// 004dea31  8d4c2418             lea ecx, [esp + 0x18]
// 004dea35  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004dea3c  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dea42  68ac9a9b00           push 0x9b9aac
// 004dea47  8d4c241c             lea ecx, [esp + 0x1c]
// 004dea4b  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dea51  8d542418             lea edx, [esp + 0x18]
// 004dea55  52                   push edx
// 004dea56  8bcd                 mov ecx, ebp
// 004dea58  c78424e800000008000000 mov dword ptr [esp + 0xe8], 8
// 004dea63  e8584affff           call 0x4d34c0
// 004dea68  8d4c2418             lea ecx, [esp + 0x18]
// 004dea6c  88442413             mov byte ptr [esp + 0x13], al
// 004dea70  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004dea77  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dea7d  807c241300           cmp byte ptr [esp + 0x13], 0
// 004dea82  0f84a4000000         je 0x4deb2c
// 004dea88  68500b0000           push 0xb50
// 004dea8d  e83ebaffff           call 0x4da4d0
// 004dea92  83c404               add esp, 4
// 004dea95  84c0                 test al, al
// 004dea97  7455                 je 0x4deaee
// 004dea99  c744241407000000     mov dword ptr [esp + 0x14], 7
// 004deaa1  8b442414             mov eax, dword ptr [esp + 0x14]
// 004deaa5  0500400000           add eax, 0x4000
// 004deaaa  50                   push eax
// 004deaab  e820baffff           call 0x4da4d0
// 004deab0  83c404               add esp, 4
// 004deab3  84c0                 test al, al
// 004deab5  7507                 jne 0x4deabe
// 004deab7  836c241401           sub dword ptr [esp + 0x14], 1
// 004deabc  79e3                 jns 0x4deaa1
// 004deabe  68ac9a9b00           push 0x9b9aac
// 004deac3  8d4c241c             lea ecx, [esp + 0x1c]
// 004deac7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004deacd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004dead1  41                   inc ecx
// 004dead2  51                   push ecx
// 004dead3  f30f2ac1             cvtsi2ss xmm0, ecx
// 004dead7  8d54241c             lea edx, [esp + 0x1c]
// 004deadb  f30f110424           movss dword ptr [esp], xmm0
// 004deae0  c78424e800000009000000 mov dword ptr [esp + 0xe8], 9
// 004deaeb  52                   push edx
// 004deaec  eb25                 jmp 0x4deb13
// 004deaee  68ac9a9b00           push 0x9b9aac
// 004deaf3  8d4c241c             lea ecx, [esp + 0x1c]
// 004deaf7  ff15f4b69800         call dword ptr [0x98b6f4]
// 004deafd  d9ee                 fldz 
// 004deaff  51                   push ecx
// 004deb00  d91c24               fstp dword ptr [esp]
// 004deb03  8d44241c             lea eax, [esp + 0x1c]
// 004deb07  c78424e80000000a000000 mov dword ptr [esp + 0xe8], 0xa
// 004deb12  50                   push eax
// 004deb13  8d4f18               lea ecx, [edi + 0x18]
// 004deb16  e8a5f1ffff           call 0x4ddcc0
// 004deb1b  8d4c2418             lea ecx, [esp + 0x18]
// 004deb1f  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004deb26  ff15e4b69800         call dword ptr [0x98b6e4]
// 004deb2c  68989a9b00           push 0x9b9a98
// 004deb31  8d4c241c             lea ecx, [esp + 0x1c]
// 004deb35  ff15f4b69800         call dword ptr [0x98b6f4]
// 004deb3b  8d4c2418             lea ecx, [esp + 0x18]
// 004deb3f  51                   push ecx
// 004deb40  8bcd                 mov ecx, ebp
// 004deb42  c78424e80000000b000000 mov dword ptr [esp + 0xe8], 0xb
// 004deb4d  e86e49ffff           call 0x4d34c0
// 004deb52  8d4c2418             lea ecx, [esp + 0x18]
// 004deb56  88442413             mov byte ptr [esp + 0x13], al
// 004deb5a  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004deb61  ff15e4b69800         call dword ptr [0x98b6e4]
// 004deb67  807c241300           cmp byte ptr [esp + 0x13], 0
// 004deb6c  0f8410020000         je 0x4ded82
// 004deb72  0f57c0               xorps xmm0, xmm0
// 004deb75  8d54243c             lea edx, [esp + 0x3c]
// 004deb79  52                   push edx
// 004deb7a  6803120000           push 0x1203
// 004deb7f  6800400000           push 0x4000
// 004deb84  f30f11442454         movss dword ptr [esp + 0x54], xmm0
// 004deb8a  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 004deb90  f30f1144244c         movss dword ptr [esp + 0x4c], xmm0
// 004deb96  f30f11442448         movss dword ptr [esp + 0x48], xmm0
// 004deb9c  ff1548bb9800         call dword ptr [0x98bb48]
// 004deba2  68989a9b00           push 0x9b9a98
// 004deba7  8d4c2454             lea ecx, [esp + 0x54]
// 004debab  ff15f4b69800         call dword ptr [0x98b6f4]
// 004debb1  f30f105c2448         movss xmm3, dword ptr [esp + 0x48]
// 004debb7  f30f10462c           movss xmm0, dword ptr [esi + 0x2c]
// 004debbc  f30f10742440         movss xmm6, dword ptr [esp + 0x40]
// 004debc2  f30f10542444         movss xmm2, dword ptr [esp + 0x44]
// 004debc8  f30f104e08           movss xmm1, dword ptr [esi + 8]
// 004debcd  f30f107e14           movss xmm7, dword ptr [esi + 0x14]
// 004debd2  f30f106624           movss xmm4, dword ptr [esi + 0x24]
// 004debd7  f30f106e28           movss xmm5, dword ptr [esi + 0x28]
// 004debdc  f30f59ca             mulss xmm1, xmm2
// 004debe0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004debe4  f30f59c3             mulss xmm0, xmm3
// 004debe8  f30f11442414         movss dword ptr [esp + 0x14], xmm0
// 004debee  f30f104604           movss xmm0, dword ptr [esi + 4]
// 004debf3  f30f59c6             mulss xmm0, xmm6
// 004debf7  f30f58c1             addss xmm0, xmm1
// 004debfb  f30f100e             movss xmm1, dword ptr [esi]
// 004debff  f30f594c243c         mulss xmm1, dword ptr [esp + 0x3c]
// 004dec05  f30f59fa             mulss xmm7, xmm2
// 004dec09  f30f10560c           movss xmm2, dword ptr [esi + 0xc]
// 004dec0e  f30f5954243c         mulss xmm2, dword ptr [esp + 0x3c]
// 004dec14  f30f58c1             addss xmm0, xmm1
// 004dec18  f30f104e10           movss xmm1, dword ptr [esi + 0x10]
// 004dec1d  f30f59ce             mulss xmm1, xmm6
// 004dec21  f30f58cf             addss xmm1, xmm7
// 004dec25  f30f58ca             addss xmm1, xmm2
// 004dec29  f30f10561c           movss xmm2, dword ptr [esi + 0x1c]
// 004dec2e  f30f59d6             mulss xmm2, xmm6
// 004dec32  f30f107620           movss xmm6, dword ptr [esi + 0x20]
// 004dec37  f30f59742444         mulss xmm6, dword ptr [esp + 0x44]
// 004dec3d  f30f58d6             addss xmm2, xmm6
// 004dec41  f30f107618           movss xmm6, dword ptr [esi + 0x18]
// 004dec46  f30f5974243c         mulss xmm6, dword ptr [esp + 0x3c]
// 004dec4c  8d84249c000000       lea eax, [esp + 0x9c]
// 004dec53  f30f59e3             mulss xmm4, xmm3
// 004dec57  f30f59eb             mulss xmm5, xmm3
// 004dec5b  f30f58d6             addss xmm2, xmm6
// 004dec5f  f30f58542414         addss xmm2, dword ptr [esp + 0x14]
// 004dec65  f30f58c4             addss xmm0, xmm4
// 004dec69  f30f58cd             addss xmm1, xmm5
// 004dec6d  50                   push eax
// 004dec6e  c78424e80000000c000000 mov dword ptr [esp + 0xe8], 0xc
// 004dec79  f30f11442450         movss dword ptr [esp + 0x50], xmm0
// 004dec7f  f30f114c243c         movss dword ptr [esp + 0x3c], xmm1
// 004dec85  f30f11542418         movss dword ptr [esp + 0x18], xmm2
// 004dec8b  f30f115c2428         movss dword ptr [esp + 0x28], xmm3
// 004dec91  e8aa37feff           call 0x4c2440
// 004dec96  f30f105c2424         movss xmm3, dword ptr [esp + 0x24]
// 004dec9c  f30f10402c           movss xmm0, dword ptr [eax + 0x2c]
// 004deca1  f30f10542438         movss xmm2, dword ptr [esp + 0x38]
// 004deca7  f30f104808           movss xmm1, dword ptr [eax + 8]
// 004decac  f30f594c2414         mulss xmm1, dword ptr [esp + 0x14]
// 004decb2  f30f1074244c         movss xmm6, dword ptr [esp + 0x4c]
// 004decb8  f30f106024           movss xmm4, dword ptr [eax + 0x24]
// 004decbd  f30f106828           movss xmm5, dword ptr [eax + 0x28]
// 004decc2  f30f107810           movss xmm7, dword ptr [eax + 0x10]
// 004decc7  f30f59c3             mulss xmm0, xmm3
// 004deccb  f30f11442434         movss dword ptr [esp + 0x34], xmm0
// 004decd1  f30f104004           movss xmm0, dword ptr [eax + 4]
// 004decd6  f30f59c2             mulss xmm0, xmm2
// 004decda  f30f58c1             addss xmm0, xmm1
// 004decde  f30f1008             movss xmm1, dword ptr [eax]
// 004dece2  f30f59ce             mulss xmm1, xmm6
// 004dece6  f30f58c1             addss xmm0, xmm1
// 004decea  f30f10480c           movss xmm1, dword ptr [eax + 0xc]
// 004decef  f30f59e3             mulss xmm4, xmm3
// 004decf3  f30f59eb             mulss xmm5, xmm3
// 004decf7  f30f59ce             mulss xmm1, xmm6
// 004decfb  f30f59fa             mulss xmm7, xmm2
// 004decff  f30f105014           movss xmm2, dword ptr [eax + 0x14]
// 004ded04  f30f59542414         mulss xmm2, dword ptr [esp + 0x14]
// 004ded0a  f30f58cf             addss xmm1, xmm7
// 004ded0e  f30f58ca             addss xmm1, xmm2
// 004ded12  f30f105018           movss xmm2, dword ptr [eax + 0x18]
// 004ded17  f30f59d6             mulss xmm2, xmm6
// 004ded1b  f30f10701c           movss xmm6, dword ptr [eax + 0x1c]
// 004ded20  f30f59742438         mulss xmm6, dword ptr [esp + 0x38]
// 004ded26  f30f58d6             addss xmm2, xmm6
// 004ded2a  f30f107020           movss xmm6, dword ptr [eax + 0x20]
// 004ded2f  f30f59742414         mulss xmm6, dword ptr [esp + 0x14]
// 004ded35  8d4c2418             lea ecx, [esp + 0x18]
// 004ded39  51                   push ecx
// 004ded3a  8d542454             lea edx, [esp + 0x54]
// 004ded3e  f30f58d6             addss xmm2, xmm6
// 004ded42  f30f58542438         addss xmm2, dword ptr [esp + 0x38]
// 004ded48  f30f58c4             addss xmm0, xmm4
// 004ded4c  f30f58cd             addss xmm1, xmm5
// 004ded50  52                   push edx
// 004ded51  8d4f18               lea ecx, [edi + 0x18]
// 004ded54  f30f11442420         movss dword ptr [esp + 0x20], xmm0
// 004ded5a  f30f114c2424         movss dword ptr [esp + 0x24], xmm1
// 004ded60  f30f11542428         movss dword ptr [esp + 0x28], xmm2
// 004ded66  f30f115c242c         movss dword ptr [esp + 0x2c], xmm3
// 004ded6c  e84feeffff           call 0x4ddbc0
// 004ded71  8d4c2450             lea ecx, [esp + 0x50]
// 004ded75  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004ded7c  ff15e4b69800         call dword ptr [0x98b6e4]
// 004ded82  68889a9b00           push 0x9b9a88
// 004ded87  8d4c2454             lea ecx, [esp + 0x54]
// 004ded8b  ff15f4b69800         call dword ptr [0x98b6f4]
// 004ded91  8d442450             lea eax, [esp + 0x50]
// 004ded95  50                   push eax
// 004ded96  8bcd                 mov ecx, ebp
// 004ded98  c78424e80000000d000000 mov dword ptr [esp + 0xe8], 0xd
// 004deda3  e81847ffff           call 0x4d34c0
// 004deda8  8d4c2450             lea ecx, [esp + 0x50]
// 004dedac  88442413             mov byte ptr [esp + 0x13], al
// 004dedb0  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004dedb7  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dedbd  807c241300           cmp byte ptr [esp + 0x13], 0
// 004dedc2  7470                 je 0x4dee34
// 004dedc4  be07000000           mov esi, 7
// 004dedc9  8da42400000000       lea esp, [esp]
// 004dedd0  8d8ec0840000         lea ecx, [esi + 0x84c0]
// 004dedd6  51                   push ecx
// 004dedd7  e8f4b6ffff           call 0x4da4d0
// 004deddc  83c404               add esp, 4
// 004deddf  84c0                 test al, al
// 004dede1  7505                 jne 0x4dede8
// 004dede3  83ee01               sub esi, 1
// 004dede6  79e8                 jns 0x4dedd0
// 004dede8  68889a9b00           push 0x9b9a88
// 004deded  8d8c2484000000       lea ecx, [esp + 0x84]
// 004dedf4  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dedfa  51                   push ecx
// 004dedfb  46                   inc esi
// 004dedfc  f30f2ac6             cvtsi2ss xmm0, esi
// 004dee00  8d942484000000       lea edx, [esp + 0x84]
// 004dee07  f30f110424           movss dword ptr [esp], xmm0
// 004dee0c  52                   push edx
// 004dee0d  8d4f18               lea ecx, [edi + 0x18]
// 004dee10  c78424ec0000000e000000 mov dword ptr [esp + 0xec], 0xe
// 004dee1b  e8a0eeffff           call 0x4ddcc0
// 004dee20  8d8c2480000000       lea ecx, [esp + 0x80]
// 004dee27  899c24e4000000       mov dword ptr [esp + 0xe4], ebx
// 004dee2e  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dee34  5e                   pop esi
// 004dee35  5d                   pop ebp
// 004dee36  5b                   pop ebx
// 004dee37  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 004dee3e  8d4718               lea eax, [edi + 0x18]
// 004dee41  50                   push eax
// 004dee42  83c70c               add edi, 0xc
// 004dee45  57                   push edi
// 004dee46  e825defeff           call 0x4ccc70
// 004dee4b  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 004dee52  5f                   pop edi
// 004dee53  64890d00000000       mov dword ptr fs:[0], ecx
// 004dee5a  81c4d8000000         add esp, 0xd8
// 004dee60  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?beforePrimitive@Shader@G3D@@UAEXPAVRenderDevice@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
