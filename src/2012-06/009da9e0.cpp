// roc 2012-06 009da9e0  unit: CXTPPropExchangeXMLNode  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009da9e0
//
// 009da9e0  55                   push ebp
// 009da9e1  8bec                 mov ebp, esp
// 009da9e3  83e4c0               and esp, 0xffffffc0
// 009da9e6  6aff                 push -1
// 009da9e8  68c907ae00           push 0xae07c9
// 009da9ed  64a100000000         mov eax, dword ptr fs:[0]
// 009da9f3  50                   push eax
// 009da9f4  81eca8000000         sub esp, 0xa8
// 009da9fa  53                   push ebx
// 009da9fb  56                   push esi
// 009da9fc  57                   push edi
// 009da9fd  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009daa02  33c4                 xor eax, esp
// 009daa04  50                   push eax
// 009daa05  8d8424b8000000       lea eax, [esp + 0xb8]
// 009daa0c  64a300000000         mov dword ptr fs:[0], eax
// 009daa12  8bf1                 mov esi, ecx
// 009daa14  33db                 xor ebx, ebx
// 009daa16  395e28               cmp dword ptr [esi + 0x28], ebx
// 009daa19  0f843e030000         je 0x9dad5d
// 009daa1f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 009daa22  0fb7c7               movzx eax, di
// 009daa25  83c0fe               add eax, -2
// 009daa28  83f863               cmp eax, 0x63
// 009daa2b  0f875d050000         ja 0x9daf8e
// 009daa31  0fb680c8af9d00       movzx eax, byte ptr [eax + 0x9dafc8]
// 009daa38  ff2485a8af9d00       jmp dword ptr [eax*4 + 0x9dafa8]
// 009daa3f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009daa42  ff159847b200         call dword ptr [0xb24798]
// 009daa48  50                   push eax
// 009daa49  ff15d42ab200         call dword ptr [0xb22ad4]
// 009daa4f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009daa52  83c404               add esp, 4
// 009daa55  8d4c244c             lea ecx, [esp + 0x4c]
// 009daa59  51                   push ecx
// 009daa5a  52                   push edx
// 009daa5b  57                   push edi
// 009daa5c  8bce                 mov ecx, esi
// 009daa5e  89442458             mov dword ptr [esp + 0x58], eax
// 009daa62  e8f9e3ffff           call 0x9d8e60
// 009daa67  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009daa6e  64890d00000000       mov dword ptr fs:[0], ecx
// 009daa75  59                   pop ecx
// 009daa76  5f                   pop edi
// 009daa77  5e                   pop esi
// 009daa78  5b                   pop ebx
// 009daa79  8be5                 mov esp, ebp
// 009daa7b  5d                   pop ebp
// 009daa7c  c21000               ret 0x10
// 009daa7f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009daa82  8d44244c             lea eax, [esp + 0x4c]
// 009daa86  50                   push eax
// 009daa87  895c2450             mov dword ptr [esp + 0x50], ebx
// 009daa8b  ff159847b200         call dword ptr [0xb24798]
// 009daa91  50                   push eax
// 009daa92  ff159428b200         call dword ptr [0xb22894]
// 009daa98  d95c2468             fstp dword ptr [esp + 0x68]
// 009daa9c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009daa9f  83c408               add esp, 8
// 009daaa2  8d4c2460             lea ecx, [esp + 0x60]
// 009daaa6  51                   push ecx
// 009daaa7  52                   push edx
// 009daaa8  57                   push edi
// 009daaa9  8bce                 mov ecx, esi
// 009daaab  e8b0e3ffff           call 0x9d8e60
// 009daab0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009daab7  64890d00000000       mov dword ptr fs:[0], ecx
// 009daabe  59                   pop ecx
// 009daabf  5f                   pop edi
// 009daac0  5e                   pop esi
// 009daac1  5b                   pop ebx
// 009daac2  8be5                 mov esp, ebp
// 009daac4  5d                   pop ebp
// 009daac5  c21000               ret 0x10
// 009daac8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009daacb  8d442460             lea eax, [esp + 0x60]
// 009daacf  50                   push eax
// 009daad0  895c2464             mov dword ptr [esp + 0x64], ebx
// 009daad4  ff159847b200         call dword ptr [0xb24798]
// 009daada  50                   push eax
// 009daadb  ff159428b200         call dword ptr [0xb22894]
// 009daae1  dd5c2454             fstp qword ptr [esp + 0x54]
// 009daae5  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009daae8  83c408               add esp, 8
// 009daaeb  8d4c244c             lea ecx, [esp + 0x4c]
// 009daaef  51                   push ecx
// 009daaf0  52                   push edx
// 009daaf1  57                   push edi
// 009daaf2  8bce                 mov ecx, esi
// 009daaf4  e867e3ffff           call 0x9d8e60
// 009daaf9  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dab00  64890d00000000       mov dword ptr fs:[0], ecx
// 009dab07  59                   pop ecx
// 009dab08  5f                   pop edi
// 009dab09  5e                   pop esi
// 009dab0a  5b                   pop ebx
// 009dab0b  8be5                 mov esp, ebp
// 009dab0d  5d                   pop ebp
// 009dab0e  c21000               ret 0x10
// 009dab11  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dab14  d9ee                 fldz 
// 009dab16  8d442460             lea eax, [esp + 0x60]
// 009dab1a  dd5c2460             fstp qword ptr [esp + 0x60]
// 009dab1e  50                   push eax
// 009dab1f  51                   push ecx
// 009dab20  8bce                 mov ecx, esi
// 009dab22  895c2470             mov dword ptr [esp + 0x70], ebx
// 009dab26  e865fdffff           call 0x9da890
// 009dab2b  85c0                 test eax, eax
// 009dab2d  0f845b040000         je 0x9daf8e
// 009dab33  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009dab36  8b542460             mov edx, dword ptr [esp + 0x60]
// 009dab3a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 009dab3e  8910                 mov dword ptr [eax], edx
// 009dab40  8b542468             mov edx, dword ptr [esp + 0x68]
// 009dab44  894804               mov dword ptr [eax + 4], ecx
// 009dab47  895008               mov dword ptr [eax + 8], edx
// 009dab4a  b801000000           mov eax, 1
// 009dab4f  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dab56  64890d00000000       mov dword ptr fs:[0], ecx
// 009dab5d  59                   pop ecx
// 009dab5e  5f                   pop edi
// 009dab5f  5e                   pop esi
// 009dab60  5b                   pop ebx
// 009dab61  8be5                 mov esp, ebp
// 009dab63  5d                   pop ebp
// 009dab64  c21000               ret 0x10
// 009dab67  6683ff65             cmp di, 0x65
// 009dab6b  0f8582000000         jne 0x9dabf3
// 009dab71  8d442464             lea eax, [esp + 0x64]
// 009dab75  50                   push eax
// 009dab76  8d4c2464             lea ecx, [esp + 0x64]
// 009dab7a  51                   push ecx
// 009dab7b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dab7e  688861c100           push 0xc16188
// 009dab83  895c246c             mov dword ptr [esp + 0x6c], ebx
// 009dab87  895c2470             mov dword ptr [esp + 0x70], ebx
// 009dab8b  ff159847b200         call dword ptr [0xb24798]
// 009dab91  50                   push eax
// 009dab92  ff15b429b200         call dword ptr [0xb229b4]
// 009dab98  83c410               add esp, 0x10
// 009dab9b  83f802               cmp eax, 2
// 009dab9e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009daba1  7426                 je 0x9dabc9
// 009daba3  8b5514               mov edx, dword ptr [ebp + 0x14]
// 009daba6  52                   push edx
// 009daba7  50                   push eax
// 009daba8  6a65                 push 0x65
// 009dabaa  8bce                 mov ecx, esi
// 009dabac  e8afe2ffff           call 0x9d8e60
// 009dabb1  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dabb8  64890d00000000       mov dword ptr fs:[0], ecx
// 009dabbf  59                   pop ecx
// 009dabc0  5f                   pop edi
// 009dabc1  5e                   pop esi
// 009dabc2  5b                   pop ebx
// 009dabc3  8be5                 mov esp, ebp
// 009dabc5  5d                   pop ebp
// 009dabc6  c21000               ret 0x10
// 009dabc9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009dabcd  8b542464             mov edx, dword ptr [esp + 0x64]
// 009dabd1  8908                 mov dword ptr [eax], ecx
// 009dabd3  895004               mov dword ptr [eax + 4], edx
// 009dabd6  b801000000           mov eax, 1
// 009dabdb  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dabe2  64890d00000000       mov dword ptr fs:[0], ecx
// 009dabe9  59                   pop ecx
// 009dabea  5f                   pop edi
// 009dabeb  5e                   pop esi
// 009dabec  5b                   pop ebx
// 009dabed  8be5                 mov esp, ebp
// 009dabef  5d                   pop ebp
// 009dabf0  c21000               ret 0x10
// 009dabf3  6683ff64             cmp di, 0x64
// 009dabf7  0f85a8000000         jne 0x9daca5
// 009dabfd  8d44246c             lea eax, [esp + 0x6c]
// 009dac01  50                   push eax
// 009dac02  8d4c246c             lea ecx, [esp + 0x6c]
// 009dac06  51                   push ecx
// 009dac07  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dac0a  8d54246c             lea edx, [esp + 0x6c]
// 009dac0e  52                   push edx
// 009dac0f  8d44246c             lea eax, [esp + 0x6c]
// 009dac13  50                   push eax
// 009dac14  687861c100           push 0xc16178
// 009dac19  895c2474             mov dword ptr [esp + 0x74], ebx
// 009dac1d  895c2478             mov dword ptr [esp + 0x78], ebx
// 009dac21  895c247c             mov dword ptr [esp + 0x7c], ebx
// 009dac25  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 009dac2c  ff159847b200         call dword ptr [0xb24798]
// 009dac32  50                   push eax
// 009dac33  ff15b429b200         call dword ptr [0xb229b4]
// 009dac39  83c418               add esp, 0x18
// 009dac3c  83f804               cmp eax, 4
// 009dac3f  7429                 je 0x9dac6a
// 009dac41  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 009dac44  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009dac47  51                   push ecx
// 009dac48  52                   push edx
// 009dac49  6a64                 push 0x64
// 009dac4b  8bce                 mov ecx, esi
// 009dac4d  e80ee2ffff           call 0x9d8e60
// 009dac52  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dac59  64890d00000000       mov dword ptr fs:[0], ecx
// 009dac60  59                   pop ecx
// 009dac61  5f                   pop edi
// 009dac62  5e                   pop esi
// 009dac63  5b                   pop ebx
// 009dac64  8be5                 mov esp, ebp
// 009dac66  5d                   pop ebp
// 009dac67  c21000               ret 0x10
// 009dac6a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009dac6d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009dac71  8b542464             mov edx, dword ptr [esp + 0x64]
// 009dac75  8908                 mov dword ptr [eax], ecx
// 009dac77  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 009dac7b  895004               mov dword ptr [eax + 4], edx
// 009dac7e  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 009dac82  894808               mov dword ptr [eax + 8], ecx
// 009dac85  89500c               mov dword ptr [eax + 0xc], edx
// 009dac88  b801000000           mov eax, 1
// 009dac8d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dac94  64890d00000000       mov dword ptr fs:[0], ecx
// 009dac9b  59                   pop ecx
// 009dac9c  5f                   pop edi
// 009dac9d  5e                   pop esi
// 009dac9e  5b                   pop ebx
// 009dac9f  8be5                 mov esp, ebp
// 009daca1  5d                   pop ebp
// 009daca2  c21000               ret 0x10
// 009daca5  8b7d08               mov edi, dword ptr [ebp + 8]
// 009daca8  57                   push edi
// 009daca9  e832d1ffff           call 0x9d7de0
// 009dacae  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 009dacb1  57                   push edi
// 009dacb2  ff152045b200         call dword ptr [0xb24520]
// 009dacb8  b801000000           mov eax, 1
// 009dacbd  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dacc4  64890d00000000       mov dword ptr fs:[0], ecx
// 009daccb  59                   pop ecx
// 009daccc  5f                   pop edi
// 009daccd  5e                   pop esi
// 009dacce  5b                   pop ebx
// 009daccf  8be5                 mov esp, ebp
// 009dacd1  5d                   pop ebp
// 009dacd2  c21000               ret 0x10
// 009dacd5  8b4508               mov eax, dword ptr [ebp + 8]
// 009dacd8  50                   push eax
// 009dacd9  8d4c2450             lea ecx, [esp + 0x50]
// 009dacdd  e80edcffff           call 0x9d88f0
// 009dace2  833d9844e000ff       cmp dword ptr [0xe04498], -1
// 009dace9  899c24c0000000       mov dword ptr [esp + 0xc0], ebx
// 009dacf0  7533                 jne 0x9dad25
// 009dacf2  d9ee                 fldz 
// 009dacf4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dacf7  dd5c2460             fstp qword ptr [esp + 0x60]
// 009dacfb  895c2468             mov dword ptr [esp + 0x68], ebx
// 009dacff  ff159847b200         call dword ptr [0xb24798]
// 009dad05  50                   push eax
// 009dad06  8d4c2464             lea ecx, [esp + 0x64]
// 009dad0a  51                   push ecx
// 009dad0b  e850faffff           call 0x9da760
// 009dad10  83c408               add esp, 8
// 009dad13  85c0                 test eax, eax
// 009dad15  740e                 je 0x9dad25
// 009dad17  8d542460             lea edx, [esp + 0x60]
// 009dad1b  52                   push edx
// 009dad1c  8d4c2450             lea ecx, [esp + 0x50]
// 009dad20  e843ec0b00           call 0xa99968
// 009dad25  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 009dad28  8d44244c             lea eax, [esp + 0x4c]
// 009dad2c  50                   push eax
// 009dad2d  51                   push ecx
// 009dad2e  57                   push edi
// 009dad2f  8bce                 mov ecx, esi
// 009dad31  e82ae1ffff           call 0x9d8e60
// 009dad36  8d54244c             lea edx, [esp + 0x4c]
// 009dad3a  52                   push edx
// 009dad3b  8bf0                 mov esi, eax
// 009dad3d  ff152c2bb200         call dword ptr [0xb22b2c]
// 009dad43  8bc6                 mov eax, esi
// 009dad45  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dad4c  64890d00000000       mov dword ptr fs:[0], ecx
// 009dad53  59                   pop ecx
// 009dad54  5f                   pop edi
// 009dad55  5e                   pop esi
// 009dad56  5b                   pop ebx
// 009dad57  8be5                 mov esp, ebp
// 009dad59  5d                   pop ebp
// 009dad5a  c21000               ret 0x10
// 009dad5d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 009dad60  0fb7c1               movzx eax, cx
// 009dad63  83c0fe               add eax, -2
// 009dad66  83f863               cmp eax, 0x63
// 009dad69  0f871f020000         ja 0x9daf8e
// 009dad6f  0fb68054b09d00       movzx eax, byte ptr [eax + 0x9db054]
// 009dad76  ff24852cb09d00       jmp dword ptr [eax*4 + 0x9db02c]
// 009dad7d  51                   push ecx
// 009dad7e  8bce                 mov ecx, esi
// 009dad80  895c2450             mov dword ptr [esp + 0x50], ebx
// 009dad84  e887ccffff           call 0x9d7a10
// 009dad89  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 009dad8c  50                   push eax
// 009dad8d  51                   push ecx
// 009dad8e  8d542454             lea edx, [esp + 0x54]
// 009dad92  52                   push edx
// 009dad93  e8c488faff           call 0x98365c
// 009dad98  8b442458             mov eax, dword ptr [esp + 0x58]
// 009dad9c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dad9f  50                   push eax
// 009dada0  6878f5c000           push 0xc0f578
// 009dada5  51                   push ecx
// 009dada6  ff158847b200         call dword ptr [0xb24788]
// 009dadac  83c418               add esp, 0x18
// 009dadaf  b801000000           mov eax, 1
// 009dadb4  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dadbb  64890d00000000       mov dword ptr fs:[0], ecx
// 009dadc2  59                   pop ecx
// 009dadc3  5f                   pop edi
// 009dadc4  5e                   pop esi
// 009dadc5  5b                   pop ebx
// 009dadc6  8be5                 mov esp, ebp
// 009dadc8  5d                   pop ebp
// 009dadc9  c21000               ret 0x10
// 009dadcc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009dadcf  8b7d08               mov edi, dword ptr [ebp + 8]
// 009dadd2  52                   push edx
// 009dadd3  8bcf                 mov ecx, edi
// 009dadd5  ff152045b200         call dword ptr [0xb24520]
// 009daddb  57                   push edi
// 009daddc  8bce                 mov ecx, esi
// 009dadde  e8fdcfffff           call 0x9d7de0
// 009dade3  b801000000           mov eax, 1
// 009dade8  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dadef  64890d00000000       mov dword ptr fs:[0], ecx
// 009dadf6  59                   pop ecx
// 009dadf7  5f                   pop edi
// 009dadf8  5e                   pop esi
// 009dadf9  5b                   pop ebx
// 009dadfa  8be5                 mov esp, ebp
// 009dadfc  5d                   pop ebp
// 009dadfd  c21000               ret 0x10
// 009dae00  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009dae03  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009dae06  50                   push eax
// 009dae07  51                   push ecx
// 009dae08  8bce                 mov ecx, esi
// 009dae0a  e881faffff           call 0x9da890
// 009dae0f  b801000000           mov eax, 1
// 009dae14  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dae1b  64890d00000000       mov dword ptr fs:[0], ecx
// 009dae22  59                   pop ecx
// 009dae23  5f                   pop edi
// 009dae24  5e                   pop esi
// 009dae25  5b                   pop ebx
// 009dae26  8be5                 mov esp, ebp
// 009dae28  5d                   pop ebp
// 009dae29  c21000               ret 0x10
// 009dae2c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 009dae2f  d902                 fld dword ptr [edx]
// 009dae31  83ec08               sub esp, 8
// 009dae34  dd1c24               fstp qword ptr [esp]
// 009dae37  680c62c100           push 0xc1620c
// 009dae3c  8b4508               mov eax, dword ptr [ebp + 8]
// 009dae3f  50                   push eax
// 009dae40  ff158847b200         call dword ptr [0xb24788]
// 009dae46  83c410               add esp, 0x10
// 009dae49  b801000000           mov eax, 1
// 009dae4e  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dae55  64890d00000000       mov dword ptr fs:[0], ecx
// 009dae5c  59                   pop ecx
// 009dae5d  5f                   pop edi
// 009dae5e  5e                   pop esi
// 009dae5f  5b                   pop ebx
// 009dae60  8be5                 mov esp, ebp
// 009dae62  5d                   pop ebp
// 009dae63  c21000               ret 0x10
// 009dae66  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 009dae69  dd01                 fld qword ptr [ecx]
// 009dae6b  8b5508               mov edx, dword ptr [ebp + 8]
// 009dae6e  83ec08               sub esp, 8
// 009dae71  dd1c24               fstp qword ptr [esp]
// 009dae74  680c62c100           push 0xc1620c
// 009dae79  52                   push edx
// 009dae7a  ff158847b200         call dword ptr [0xb24788]
// 009dae80  83c410               add esp, 0x10
// 009dae83  b801000000           mov eax, 1
// 009dae88  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009dae8f  64890d00000000       mov dword ptr fs:[0], ecx
// 009dae96  59                   pop ecx
// 009dae97  5f                   pop edi
// 009dae98  5e                   pop esi
// 009dae99  5b                   pop ebx
// 009dae9a  8be5                 mov esp, ebp
// 009dae9c  5d                   pop ebp
// 009dae9d  c21000               ret 0x10
// 009daea0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009daea3  8b4804               mov ecx, dword ptr [eax + 4]
// 009daea6  8b10                 mov edx, dword ptr [eax]
// 009daea8  51                   push ecx
// 009daea9  52                   push edx
// 009daeaa  688861c100           push 0xc16188
// 009daeaf  eb8b                 jmp 0x9dae3c
// 009daeb1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 009daeb4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 009daeb7  8b5008               mov edx, dword ptr [eax + 8]
// 009daeba  51                   push ecx
// 009daebb  8b4804               mov ecx, dword ptr [eax + 4]
// 009daebe  52                   push edx
// 009daebf  8b10                 mov edx, dword ptr [eax]
// 009daec1  8b4508               mov eax, dword ptr [ebp + 8]
// 009daec4  51                   push ecx
// 009daec5  52                   push edx
// 009daec6  687861c100           push 0xc16178
// 009daecb  50                   push eax
// 009daecc  ff158847b200         call dword ptr [0xb24788]
// 009daed2  83c418               add esp, 0x18
// 009daed5  e96fffffff           jmp 0x9dae49
// 009daeda  8b359844e000         mov esi, dword ptr [0xe04498]
// 009daee0  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 009daee3  83feff               cmp esi, -1
// 009daee6  7549                 jne 0x9daf31
// 009daee8  66833f07             cmp word ptr [edi], 7
// 009daeec  7541                 jne 0x9daf2f
// 009daeee  dd4708               fld qword ptr [edi + 8]
// 009daef1  8d4c2460             lea ecx, [esp + 0x60]
// 009daef5  51                   push ecx
// 009daef6  dd5c2464             fstp qword ptr [esp + 0x64]
// 009daefa  8d542474             lea edx, [esp + 0x74]
// 009daefe  52                   push edx
// 009daeff  895c2470             mov dword ptr [esp + 0x70], ebx
// 009daf03  e808daffff           call 0x9d8910
// 009daf08  83c408               add esp, 8
// 009daf0b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009daf0e  50                   push eax
// 009daf0f  c78424c400000001000000 mov dword ptr [esp + 0xc4], 1
// 009daf1a  ff152045b200         call dword ptr [0xb24520]
// 009daf20  8d4c2470             lea ecx, [esp + 0x70]
// 009daf24  ff15d047b200         call dword ptr [0xb247d0]
// 009daf2a  e91affffff           jmp 0x9dae49
// 009daf2f  33f6                 xor esi, esi
// 009daf31  8d442474             lea eax, [esp + 0x74]
// 009daf35  50                   push eax
// 009daf36  e8b9e80b00           call 0xa997f4
// 009daf3b  6a08                 push 8
// 009daf3d  53                   push ebx
// 009daf3e  56                   push esi
// 009daf3f  57                   push edi
// 009daf40  8d8c2484000000       lea ecx, [esp + 0x84]
// 009daf47  51                   push ecx
// 009daf48  c78424d400000002000000 mov dword ptr [esp + 0xd4], 2
// 009daf53  ff15fc2ab200         call dword ptr [0xb22afc]
// 009daf59  85c0                 test eax, eax
// 009daf5b  7c26                 jl 0x9daf83
// 009daf5d  66837c247408         cmp word ptr [esp + 0x74], 8
// 009daf63  751e                 jne 0x9daf83
// 009daf65  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 009daf69  8b4d08               mov ecx, dword ptr [ebp + 8]
// 009daf6c  52                   push edx
// 009daf6d  ff15cc4ab200         call dword ptr [0xb24acc]
// 009daf73  8d442474             lea eax, [esp + 0x74]
// 009daf77  50                   push eax
// 009daf78  ff152c2bb200         call dword ptr [0xb22b2c]
// 009daf7e  e9c6feffff           jmp 0x9dae49
// 009daf83  8d4c2474             lea ecx, [esp + 0x74]
// 009daf87  51                   push ecx
// 009daf88  ff152c2bb200         call dword ptr [0xb22b2c]
// 009daf8e  33c0                 xor eax, eax
// 009daf90  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 009daf97  64890d00000000       mov dword ptr fs:[0], ecx
// 009daf9e  59                   pop ecx
// 009daf9f  5f                   pop edi
// 009dafa0  5e                   pop esi
// 009dafa1  5b                   pop ebx
// 009dafa2  8be5                 mov esp, ebp
// 009dafa4  5d                   pop ebp
// 009dafa5  c21000               ret 0x10
// 009dafa8  3f                   aas 
// 009dafa9  aa                   stosb byte ptr es:[edi], al
// 009dafaa  9d                   popfd 
// 009dafab  007faa               add byte ptr [edi - 0x56], bh
// 009dafae  9d                   popfd 
// 009dafaf  00c8                 add al, cl
// 009dafb1  aa                   stosb byte ptr es:[edi], al
// 009dafb2  9d                   popfd 
// 009dafb3  0011                 add byte ptr [ecx], dl
// 009dafb5  ab                   stosd dword ptr es:[edi], eax
// 009dafb6  9d                   popfd 
// 009dafb7  008eaf9d00d5         add byte ptr [esi - 0x2aff6251], cl
// 009dafbd  ac                   lodsb al, byte ptr [esi]
// 009dafbe  9d                   popfd 
// 009dafbf  0067ab               add byte ptr [edi - 0x55], ah
// 009dafc2  9d                   popfd 
// 009dafc3  008eaf9d0000         add byte ptr [esi + 0x9daf], cl
// 009dafc9  0001                 add byte ptr [ecx], al
// 009dafcb  0207                 add al, byte ptr [edi]
// 009dafcd  030407               add eax, dword ptr [edi + eax]
// 009dafd0  07                   pop es
// 009dafd1  000507070707         add byte ptr [0x7070707], al
// 009dafd7  0007                 add byte ptr [edi], al
// 009dafd9  07                   pop es
// 009dafda  07                   pop es
// 009dafdb  07                   pop es
// 009dafdc  07                   pop es
// 009dafdd  07                   pop es
// 009dafde  07                   pop es
// 009dafdf  07                   pop es
// 009dafe0  07                   pop es
// 009dafe1  07                   pop es
// 009dafe2  07                   pop es
// 009dafe3  07                   pop es
// 009dafe4  06                   push es
// 009dafe5  07                   pop es
// 009dafe6  07                   pop es
// 009dafe7  07                   pop es
// 009dafe8  07                   pop es
// 009dafe9  07                   pop es
// 009dafea  07                   pop es
// 009dafeb  07                   pop es
// 009dafec  07                   pop es
// 009dafed  07                   pop es
// 009dafee  07                   pop es
// 009dafef  07                   pop es
// 009daff0  07                   pop es
// 009daff1  07                   pop es
// 009daff2  07                   pop es
// 009daff3  07                   pop es
// 009daff4  07                   pop es
// 009daff5  07                   pop es
// 009daff6  07                   pop es
// 009daff7  07                   pop es
// 009daff8  07                   pop es
// 009daff9  07                   pop es
// 009daffa  07                   pop es
// 009daffb  07                   pop es
// 009daffc  07                   pop es
// 009daffd  07                   pop es
// 009daffe  07                   pop es
// 009dafff  07                   pop es
// 009db000  07                   pop es
// 009db001  07                   pop es
// 009db002  07                   pop es
// 009db003  07                   pop es
// 009db004  07                   pop es
// 009db005  07                   pop es
// 009db006  07                   pop es
// 009db007  07                   pop es
// 009db008  07                   pop es
// 009db009  07                   pop es
// 009db00a  07                   pop es
// 009db00b  07                   pop es
// 009db00c  07                   pop es
// 009db00d  07                   pop es
// 009db00e  07                   pop es
// 009db00f  07                   pop es
// 009db010  07                   pop es
// 009db011  07                   pop es
// 009db012  07                   pop es
// 009db013  07                   pop es
// 009db014  07                   pop es
// 009db015  07                   pop es
// 009db016  07                   pop es
// 009db017  07                   pop es
// 009db018  07                   pop es
// 009db019  07                   pop es
// 009db01a  07                   pop es
// 009db01b  07                   pop es
// 009db01c  07                   pop es
// 009db01d  07                   pop es
// 009db01e  07                   pop es
// 009db01f  07                   pop es
// 009db020  07                   pop es
// 009db021  07                   pop es
// 009db022  07                   pop es
// 009db023  07                   pop es
// 009db024  07                   pop es
// 009db025  07                   pop es
// 009db026  07                   pop es
// 009db027  07                   pop es
// 009db028  07                   pop es
// 009db029  07                   pop es
// 009db02a  06                   push es
// 009db02b  06                   push es
// 009db02c  7dad                 jge 0x9dafdb
// 009db02e  9d                   popfd 
// 009db02f  002cae               add byte ptr [esi + ebp*4], ch
// 009db032  9d                   popfd 
// 009db033  0066ae               add byte ptr [esi - 0x52], ah
// 009db036  9d                   popfd 
// 009db037  0000                 add byte ptr [eax], al
// 009db039  ae                   scasb al, byte ptr es:[edi]
// 009db03a  9d                   popfd 
// 009db03b  008eaf9d00da         add byte ptr [esi - 0x25ff6251], cl
// 009db041  ae                   scasb al, byte ptr es:[edi]
// 009db042  9d                   popfd 
// 009db043  00cc                 add ah, cl
// 009db045  ad                   lodsd eax, dword ptr [esi]
// 009db046  9d                   popfd 
// 009db047  00b1ae9d00a0         add byte ptr [ecx - 0x5fff6252], dh
// 009db04d  ae                   scasb al, byte ptr es:[edi]
// 009db04e  9d                   popfd 
// 009db04f  008eaf9d0000         add byte ptr [esi + 0x9daf], cl
// 009db055  0001                 add byte ptr [ecx], al
// 009db057  0209                 add cl, byte ptr [ecx]
// 009db059  030409               add eax, dword ptr [ecx + ecx]
// 009db05c  0900                 or dword ptr [eax], eax
// 009db05e  0509090909           add eax, 0x9090909
// 009db063  0009                 add byte ptr [ecx], cl
// 009db065  0909                 or dword ptr [ecx], ecx
// 009db067  0909                 or dword ptr [ecx], ecx
// 009db069  0909                 or dword ptr [ecx], ecx
// 009db06b  0909                 or dword ptr [ecx], ecx
// 009db06d  0909                 or dword ptr [ecx], ecx
// 009db06f  0906                 or dword ptr [esi], eax
// 009db071  0909                 or dword ptr [ecx], ecx
// 009db073  0909                 or dword ptr [ecx], ecx
// 009db075  0909                 or dword ptr [ecx], ecx
// 009db077  0909                 or dword ptr [ecx], ecx
// 009db079  0909                 or dword ptr [ecx], ecx
// 009db07b  0909                 or dword ptr [ecx], ecx
// 009db07d  0909                 or dword ptr [ecx], ecx
// 009db07f  0909                 or dword ptr [ecx], ecx
// 009db081  0909                 or dword ptr [ecx], ecx
// 009db083  0909                 or dword ptr [ecx], ecx
// 009db085  0909                 or dword ptr [ecx], ecx
// 009db087  0909                 or dword ptr [ecx], ecx
// 009db089  0909                 or dword ptr [ecx], ecx
// 009db08b  0909                 or dword ptr [ecx], ecx
// 009db08d  0909                 or dword ptr [ecx], ecx
// 009db08f  0909                 or dword ptr [ecx], ecx
// 009db091  0909                 or dword ptr [ecx], ecx
// 009db093  0909                 or dword ptr [ecx], ecx
// 009db095  0909                 or dword ptr [ecx], ecx
// 009db097  0909                 or dword ptr [ecx], ecx
// 009db099  0909                 or dword ptr [ecx], ecx
// 009db09b  0909                 or dword ptr [ecx], ecx
// 009db09d  0909                 or dword ptr [ecx], ecx
// 009db09f  0909                 or dword ptr [ecx], ecx
// 009db0a1  0909                 or dword ptr [ecx], ecx
// 009db0a3  0909                 or dword ptr [ecx], ecx
// 009db0a5  0909                 or dword ptr [ecx], ecx
// 009db0a7  0909                 or dword ptr [ecx], ecx
// 009db0a9  0909                 or dword ptr [ecx], ecx
// 009db0ab  0909                 or dword ptr [ecx], ecx
// 009db0ad  0909                 or dword ptr [ecx], ecx
// 009db0af  0909                 or dword ptr [ecx], ecx
// 009db0b1  0909                 or dword ptr [ecx], ecx
// 009db0b3  0909                 or dword ptr [ecx], ecx
// 009db0b5  0907                 or dword ptr [edi], eax
// copied from an identical function in another client (function ?ExchangePropStringHelper@CXTPPropExchange@@IAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@GPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp