// from server: 100% by auto
// roc 2010-06 00498d50  unit: G3D::Shader  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498d50
//
// 00498d50  6aff                 push -1
// 00498d52  68416e9800           push 0x986e41
// 00498d57  64a100000000         mov eax, dword ptr fs:[0]
// 00498d5d  50                   push eax
// 00498d5e  64892500000000       mov dword ptr fs:[0], esp
// 00498d65  81ecf0000000         sub esp, 0xf0
// 00498d6b  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 00498d71  53                   push ebx
// 00498d72  55                   push ebp
// 00498d73  8bac2408010000       mov ebp, dword ptr [esp + 0x108]
// 00498d7a  33d2                 xor edx, edx
// 00498d7c  3bc2                 cmp eax, edx
// 00498d7e  56                   push esi
// 00498d7f  57                   push edi
// 00498d80  894c2414             mov dword ptr [esp + 0x14], ecx
// 00498d84  89542410             mov dword ptr [esp + 0x10], edx
// 00498d88  89542418             mov dword ptr [esp + 0x18], edx
// 00498d8c  0f8e20010000         jle 0x498eb2
// 00498d92  8954241c             mov dword ptr [esp + 0x1c], edx
// 00498d96  eb08                 jmp 0x498da0
// 00498d98  8da42400000000       lea esp, [esp]
// 00498d9f  90                   nop 
// 00498da0  8bb190010000         mov esi, dword ptr [ecx + 0x190]
// 00498da6  0374241c             add esi, dword ptr [esp + 0x1c]
// 00498daa  803e00               cmp byte ptr [esi], 0
// 00498dad  7504                 jne 0x498db3
// 00498daf  ff442410             inc dword ptr [esp + 0x10]
// 00498db3  689474a100           push 0xa17494
// 00498db8  8d4c2440             lea ecx, [esp + 0x40]
// 00498dbc  ff1510a49e00         call dword ptr [0x9ea410]
// 00498dc2  8d44243c             lea eax, [esp + 0x3c]
// 00498dc6  50                   push eax
// 00498dc7  8d7e08               lea edi, [esi + 8]
// 00498dca  57                   push edi
// 00498dcb  c784241001000000000000 mov dword ptr [esp + 0x110], 0
// 00498dd6  e805e70b00           call 0x5574e0
// 00498ddb  83c408               add esp, 8
// 00498dde  8d4c243c             lea ecx, [esp + 0x3c]
// 00498de2  8ad8                 mov bl, al
// 00498de4  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 00498def  ff1500a49e00         call dword ptr [0x9ea400]
// 00498df5  84db                 test bl, bl
// 00498df7  7450                 je 0x498e49
// 00498df9  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00498dfc  83c0f7               add eax, -9
// 00498dff  50                   push eax
// 00498e00  6a09                 push 9
// 00498e02  8d4c2428             lea ecx, [esp + 0x28]
// 00498e06  51                   push ecx
// 00498e07  8bcf                 mov ecx, edi
// 00498e09  ff155ca49e00         call dword ptr [0x9ea45c]
// 00498e0f  8d542420             lea edx, [esp + 0x20]
// 00498e13  52                   push edx
// 00498e14  8bcd                 mov ecx, ebp
// 00498e16  c784240c01000001000000 mov dword ptr [esp + 0x10c], 1
// 00498e21  e85af9ffff           call 0x498780
// 00498e26  84c0                 test al, al
// 00498e28  7508                 jne 0x498e32
// 00498e2a  3806                 cmp byte ptr [esi], al
// 00498e2c  0f8474010000         je 0x498fa6
// 00498e32  8d4c2420             lea ecx, [esp + 0x20]
// 00498e36  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 00498e41  ff1500a49e00         call dword ptr [0x9ea400]
// 00498e47  eb4b                 jmp 0x498e94
// 00498e49  57                   push edi
// 00498e4a  8bcd                 mov ecx, ebp
// 00498e4c  e82ff9ffff           call 0x498780
// 00498e51  84c0                 test al, al
// 00498e53  7516                 jne 0x498e6b
// 00498e55  3806                 cmp byte ptr [esi], al
// 00498e57  753b                 jne 0x498e94
// 00498e59  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 00498e5d  0f8287010000         jb 0x498fea
// 00498e63  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 00498e66  e982010000           jmp 0x498fed
// 00498e6b  57                   push edi
// 00498e6c  8bcd                 mov ecx, ebp
// 00498e6e  e89df8ffff           call 0x498710
// 00498e73  8bf8                 mov edi, eax
// 00498e75  8b4744               mov eax, dword ptr [edi + 0x44]
// 00498e78  50                   push eax
// 00498e79  e802f8ffff           call 0x498680
// 00498e7e  8bd0                 mov edx, eax
// 00498e80  8b4624               mov eax, dword ptr [esi + 0x24]
// 00498e83  50                   push eax
// 00498e84  e8f7f7ffff           call 0x498680
// 00498e89  83c408               add esp, 8
// 00498e8c  3bd0                 cmp edx, eax
// 00498e8e  0f859b010000         jne 0x49902f
// 00498e94  8b442418             mov eax, dword ptr [esp + 0x18]
// 00498e98  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00498e9c  8344241c30           add dword ptr [esp + 0x1c], 0x30
// 00498ea1  40                   inc eax
// 00498ea2  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 00498ea8  89442418             mov dword ptr [esp + 0x18], eax
// 00498eac  0f8ceefeffff         jl 0x498da0
// 00498eb2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00498eb6  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 00498eb9  0f8dcc020000         jge 0x49918b
// 00498ebf  8b4508               mov eax, dword ptr [ebp + 8]
// 00498ec2  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 00498ec5  89442410             mov dword ptr [esp + 0x10], eax
// 00498ec9  896c2418             mov dword ptr [esp + 0x18], ebp
// 00498ecd  85ed                 test ebp, ebp
// 00498ecf  0f8566020000         jne 0x49913b
// 00498ed5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00498ed9  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00498edd  c644243401           mov byte ptr [esp + 0x34], 1
// 00498ee2  807c243401           cmp byte ptr [esp + 0x34], 1
// 00498ee7  0f849e020000         je 0x49918b
// 00498eed  8b542414             mov edx, dword ptr [esp + 0x14]
// 00498ef1  33ed                 xor ebp, ebp
// 00498ef3  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 00498ef9  7e3a                 jle 0x498f35
// 00498efb  33f6                 xor esi, esi
// 00498efd  8d4900               lea ecx, [ecx]
// 00498f00  8b442414             mov eax, dword ptr [esp + 0x14]
// 00498f04  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 00498f0a  03c6                 add eax, esi
// 00498f0c  8d4f04               lea ecx, [edi + 4]
// 00498f0f  51                   push ecx
// 00498f10  83c008               add eax, 8
// 00498f13  50                   push eax
// 00498f14  ff158ca49e00         call dword ptr [0x9ea48c]
// 00498f1a  83c408               add esp, 8
// 00498f1d  84c0                 test al, al
// 00498f1f  0f8540020000         jne 0x499165
// 00498f25  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00498f29  45                   inc ebp
// 00498f2a  83c630               add esi, 0x30
// 00498f2d  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 00498f33  7ccb                 jl 0x498f00
// 00498f35  685074a100           push 0xa17450
// 00498f3a  8d8c2494000000       lea ecx, [esp + 0x94]
// 00498f41  ff1510a49e00         call dword ptr [0x9ea410]
// 00498f47  8d4f04               lea ecx, [edi + 4]
// 00498f4a  51                   push ecx
// 00498f4b  50                   push eax
// 00498f4c  8d8424b4000000       lea eax, [esp + 0xb4]
// 00498f53  50                   push eax
// 00498f54  c784241401000009000000 mov dword ptr [esp + 0x114], 9
// 00498f5f  ff1504a79e00         call dword ptr [0x9ea704]
// 00498f65  683428a100           push 0xa12834
// 00498f6a  50                   push eax
// 00498f6b  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 00498f72  51                   push ecx
// 00498f73  c68424200100000a     mov byte ptr [esp + 0x120], 0xa
// 00498f7b  ff1588a49e00         call dword ptr [0x9ea488]
// 00498f81  83c418               add esp, 0x18
// 00498f84  50                   push eax
// 00498f85  8d4c2478             lea ecx, [esp + 0x78]
// 00498f89  c684240c0100000b     mov byte ptr [esp + 0x10c], 0xb
// 00498f91  ff150ca49e00         call dword ptr [0x9ea40c]
// 00498f97  68b4ffb000           push 0xb0ffb4
// 00498f9c  8d542478             lea edx, [esp + 0x78]
// 00498fa0  52                   push edx
// 00498fa1  e80cfa3000           call 0x7a89b2
// 00498fa6  837c243810           cmp dword ptr [esp + 0x38], 0x10
// 00498fab  8b442424             mov eax, dword ptr [esp + 0x24]
// 00498faf  7304                 jae 0x498fb5
// 00498fb1  8d442424             lea eax, [esp + 0x24]
// 00498fb5  50                   push eax
// 00498fb6  8d542478             lea edx, [esp + 0x78]
// 00498fba  681074a100           push 0xa17410
// 00498fbf  52                   push edx
// 00498fc0  e8ebe40b00           call 0x5574b0
// 00498fc5  83c40c               add esp, 0xc
// 00498fc8  50                   push eax
// 00498fc9  8d4c2440             lea ecx, [esp + 0x40]
// 00498fcd  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 00498fd5  ff150ca49e00         call dword ptr [0x9ea40c]
// 00498fdb  68b4ffb000           push 0xb0ffb4
// 00498fe0  8d442440             lea eax, [esp + 0x40]
// 00498fe4  50                   push eax
// 00498fe5  e8c8f93000           call 0x7a89b2
// 00498fea  8d7e0c               lea edi, [esi + 0xc]
// 00498fed  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00498ff0  51                   push ecx
// 00498ff1  e8ea62ffff           call 0x48f2e0
// 00498ff6  50                   push eax
// 00498ff7  57                   push edi
// 00498ff8  8d542464             lea edx, [esp + 0x64]
// 00498ffc  68c073a100           push 0xa173c0
// 00499001  52                   push edx
// 00499002  e8a9e40b00           call 0x5574b0
// 00499007  83c414               add esp, 0x14
// 0049900a  50                   push eax
// 0049900b  8d4c2440             lea ecx, [esp + 0x40]
// 0049900f  c784240c01000003000000 mov dword ptr [esp + 0x10c], 3
// 0049901a  ff150ca49e00         call dword ptr [0x9ea40c]
// 00499020  68b4ffb000           push 0xb0ffb4
// 00499025  8d442440             lea eax, [esp + 0x40]
// 00499029  50                   push eax
// 0049902a  e883f93000           call 0x7a89b2
// 0049902f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00499032  51                   push ecx
// 00499033  e8a862ffff           call 0x48f2e0
// 00499038  83c404               add esp, 4
// 0049903b  50                   push eax
// 0049903c  8d4c2440             lea ecx, [esp + 0x40]
// 00499040  ff1510a49e00         call dword ptr [0x9ea410]
// 00499046  8b5744               mov edx, dword ptr [edi + 0x44]
// 00499049  52                   push edx
// 0049904a  c784240c01000004000000 mov dword ptr [esp + 0x10c], 4
// 00499055  e88662ffff           call 0x48f2e0
// 0049905a  83c404               add esp, 4
// 0049905d  50                   push eax
// 0049905e  8d4c2424             lea ecx, [esp + 0x24]
// 00499062  ff1510a49e00         call dword ptr [0x9ea410]
// 00499068  8b4624               mov eax, dword ptr [esi + 0x24]
// 0049906b  50                   push eax
// 0049906c  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 00499074  e807f6ffff           call 0x498680
// 00499079  50                   push eax
// 0049907a  e86162ffff           call 0x48f2e0
// 0049907f  83c408               add esp, 8
// 00499082  50                   push eax
// 00499083  8d4c245c             lea ecx, [esp + 0x5c]
// 00499087  ff1510a49e00         call dword ptr [0x9ea410]
// 0049908d  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 00499090  51                   push ecx
// 00499091  c684240c01000006     mov byte ptr [esp + 0x10c], 6
// 00499099  e8e2f5ffff           call 0x498680
// 0049909e  50                   push eax
// 0049909f  e83c62ffff           call 0x48f2e0
// 004990a4  83c408               add esp, 8
// 004990a7  50                   push eax
// 004990a8  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 004990af  ff1510a49e00         call dword ptr [0x9ea410]
// 004990b5  8b442438             mov eax, dword ptr [esp + 0x38]
// 004990b9  8b542424             mov edx, dword ptr [esp + 0x24]
// 004990bd  bb10000000           mov ebx, 0x10
// 004990c2  c684240801000007     mov byte ptr [esp + 0x108], 7
// 004990ca  8bfa                 mov edi, edx
// 004990cc  3bc3                 cmp eax, ebx
// 004990ce  7306                 jae 0x4990d6
// 004990d0  8d7c2424             lea edi, [esp + 0x24]
// 004990d4  8bd7                 mov edx, edi
// 004990d6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004990da  395c2470             cmp dword ptr [esp + 0x70], ebx
// 004990de  7304                 jae 0x4990e4
// 004990e0  8d4c245c             lea ecx, [esp + 0x5c]
// 004990e4  8b442440             mov eax, dword ptr [esp + 0x40]
// 004990e8  395c2454             cmp dword ptr [esp + 0x54], ebx
// 004990ec  7304                 jae 0x4990f2
// 004990ee  8d442440             lea eax, [esp + 0x40]
// 004990f2  395e20               cmp dword ptr [esi + 0x20], ebx
// 004990f5  7205                 jb 0x4990fc
// 004990f7  8b760c               mov esi, dword ptr [esi + 0xc]
// 004990fa  eb03                 jmp 0x4990ff
// 004990fc  83c60c               add esi, 0xc
// 004990ff  57                   push edi
// 00499100  52                   push edx
// 00499101  51                   push ecx
// 00499102  50                   push eax
// 00499103  56                   push esi
// 00499104  8d9424a4000000       lea edx, [esp + 0xa4]
// 0049910b  686073a100           push 0xa17360
// 00499110  52                   push edx
// 00499111  e89ae30b00           call 0x5574b0
// 00499116  83c41c               add esp, 0x1c
// 00499119  50                   push eax
// 0049911a  8d4c2478             lea ecx, [esp + 0x78]
// 0049911e  c684240c01000008     mov byte ptr [esp + 0x10c], 8
// 00499126  ff150ca49e00         call dword ptr [0x9ea40c]
// 0049912c  68b4ffb000           push 0xb0ffb4
// 00499131  8d442478             lea eax, [esp + 0x78]
// 00499135  50                   push eax
// 00499136  e877f83000           call 0x7a89b2
// 0049913b  8b38                 mov edi, dword ptr [eax]
// 0049913d  33db                 xor ebx, ebx
// 0049913f  885c2434             mov byte ptr [esp + 0x34], bl
// 00499143  85ff                 test edi, edi
// 00499145  0f8597fdffff         jne 0x498ee2
// 0049914b  eb03                 jmp 0x499150
// 0049914d  8d4900               lea ecx, [ecx]
// 00499150  43                   inc ebx
// 00499151  3bdd                 cmp ebx, ebp
// 00499153  0f8d84fdffff         jge 0x498edd
// 00499159  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 0049915c  85ff                 test edi, edi
// 0049915e  74f0                 je 0x499150
// 00499160  e97dfdffff           jmp 0x498ee2
// 00499165  8b7f68               mov edi, dword ptr [edi + 0x68]
// 00499168  85ff                 test edi, edi
// 0049916a  0f8572fdffff         jne 0x498ee2
// 00499170  43                   inc ebx
// 00499171  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 00499175  0f8d62fdffff         jge 0x498edd
// 0049917b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049917f  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00499182  85ff                 test edi, edi
// 00499184  74ea                 je 0x499170
// 00499186  e957fdffff           jmp 0x498ee2
// 0049918b  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 00499192  5f                   pop edi
// 00499193  5e                   pop esi
// 00499194  5d                   pop ebp
// 00499195  5b                   pop ebx
// 00499196  64890d00000000       mov dword ptr fs:[0], ecx
// 0049919d  81c4fc000000         add esp, 0xfc
// 004991a3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
