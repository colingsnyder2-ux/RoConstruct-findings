// roc 2009-06 004afda0  unit: G3D::Shader  size: 1110 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004afda0
//
// 004afda0  6aff                 push -1
// 004afda2  68e1808500           push 0x8580e1
// 004afda7  64a100000000         mov eax, dword ptr fs:[0]
// 004afdad  50                   push eax
// 004afdae  64892500000000       mov dword ptr fs:[0], esp
// 004afdb5  81ecf0000000         sub esp, 0xf0
// 004afdbb  8b8194010000         mov eax, dword ptr [ecx + 0x194]
// 004afdc1  53                   push ebx
// 004afdc2  55                   push ebp
// 004afdc3  8bac2408010000       mov ebp, dword ptr [esp + 0x108]
// 004afdca  33d2                 xor edx, edx
// 004afdcc  3bc2                 cmp eax, edx
// 004afdce  56                   push esi
// 004afdcf  57                   push edi
// 004afdd0  894c2414             mov dword ptr [esp + 0x14], ecx
// 004afdd4  89542410             mov dword ptr [esp + 0x10], edx
// 004afdd8  89542418             mov dword ptr [esp + 0x18], edx
// 004afddc  0f8e20010000         jle 0x4aff02
// 004afde2  8954241c             mov dword ptr [esp + 0x1c], edx
// 004afde6  eb08                 jmp 0x4afdf0
// 004afde8  8da42400000000       lea esp, [esp]
// 004afdef  90                   nop 
// 004afdf0  8bb190010000         mov esi, dword ptr [ecx + 0x190]
// 004afdf6  0374241c             add esi, dword ptr [esp + 0x1c]
// 004afdfa  803e00               cmp byte ptr [esi], 0
// 004afdfd  7504                 jne 0x4afe03
// 004afdff  ff442410             inc dword ptr [esp + 0x10]
// 004afe03  68ec3e8c00           push 0x8c3eec
// 004afe08  8d4c2440             lea ecx, [esp + 0x40]
// 004afe0c  ff15b4e48900         call dword ptr [0x89e4b4]
// 004afe12  8d44243c             lea eax, [esp + 0x3c]
// 004afe16  50                   push eax
// 004afe17  8d7e08               lea edi, [esi + 8]
// 004afe1a  57                   push edi
// 004afe1b  c784241001000000000000 mov dword ptr [esp + 0x110], 0
// 004afe26  e8b5460c00           call 0x5744e0
// 004afe2b  83c408               add esp, 8
// 004afe2e  8d4c243c             lea ecx, [esp + 0x3c]
// 004afe32  8ad8                 mov bl, al
// 004afe34  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 004afe3f  ff15c4e48900         call dword ptr [0x89e4c4]
// 004afe45  84db                 test bl, bl
// 004afe47  7450                 je 0x4afe99
// 004afe49  8b461c               mov eax, dword ptr [esi + 0x1c]
// 004afe4c  83c0f7               add eax, -9
// 004afe4f  50                   push eax
// 004afe50  6a09                 push 9
// 004afe52  8d4c2428             lea ecx, [esp + 0x28]
// 004afe56  51                   push ecx
// 004afe57  8bcf                 mov ecx, edi
// 004afe59  ff1570e48900         call dword ptr [0x89e470]
// 004afe5f  8d542420             lea edx, [esp + 0x20]
// 004afe63  52                   push edx
// 004afe64  8bcd                 mov ecx, ebp
// 004afe66  c784240c01000001000000 mov dword ptr [esp + 0x10c], 1
// 004afe71  e89af9ffff           call 0x4af810
// 004afe76  84c0                 test al, al
// 004afe78  7508                 jne 0x4afe82
// 004afe7a  3806                 cmp byte ptr [esi], al
// 004afe7c  0f8474010000         je 0x4afff6
// 004afe82  8d4c2420             lea ecx, [esp + 0x20]
// 004afe86  c7842408010000ffffffff mov dword ptr [esp + 0x108], 0xffffffff
// 004afe91  ff15c4e48900         call dword ptr [0x89e4c4]
// 004afe97  eb4b                 jmp 0x4afee4
// 004afe99  57                   push edi
// 004afe9a  8bcd                 mov ecx, ebp
// 004afe9c  e86ff9ffff           call 0x4af810
// 004afea1  84c0                 test al, al
// 004afea3  7516                 jne 0x4afebb
// 004afea5  3806                 cmp byte ptr [esi], al
// 004afea7  753b                 jne 0x4afee4
// 004afea9  837e2010             cmp dword ptr [esi + 0x20], 0x10
// 004afead  0f8287010000         jb 0x4b003a
// 004afeb3  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 004afeb6  e982010000           jmp 0x4b003d
// 004afebb  57                   push edi
// 004afebc  8bcd                 mov ecx, ebp
// 004afebe  e8ddf8ffff           call 0x4af7a0
// 004afec3  8bf8                 mov edi, eax
// 004afec5  8b4744               mov eax, dword ptr [edi + 0x44]
// 004afec8  50                   push eax
// 004afec9  e842f8ffff           call 0x4af710
// 004afece  8bd0                 mov edx, eax
// 004afed0  8b4624               mov eax, dword ptr [esi + 0x24]
// 004afed3  50                   push eax
// 004afed4  e837f8ffff           call 0x4af710
// 004afed9  83c408               add esp, 8
// 004afedc  3bd0                 cmp edx, eax
// 004afede  0f859b010000         jne 0x4b007f
// 004afee4  8b442418             mov eax, dword ptr [esp + 0x18]
// 004afee8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004afeec  8344241c30           add dword ptr [esp + 0x1c], 0x30
// 004afef1  40                   inc eax
// 004afef2  3b8194010000         cmp eax, dword ptr [ecx + 0x194]
// 004afef8  89442418             mov dword ptr [esp + 0x18], eax
// 004afefc  0f8ceefeffff         jl 0x4afdf0
// 004aff02  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004aff06  3b4d04               cmp ecx, dword ptr [ebp + 4]
// 004aff09  0f8dcc020000         jge 0x4b01db
// 004aff0f  8b4508               mov eax, dword ptr [ebp + 8]
// 004aff12  8b6d0c               mov ebp, dword ptr [ebp + 0xc]
// 004aff15  89442410             mov dword ptr [esp + 0x10], eax
// 004aff19  896c2418             mov dword ptr [esp + 0x18], ebp
// 004aff1d  85ed                 test ebp, ebp
// 004aff1f  0f8566020000         jne 0x4b018b
// 004aff25  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 004aff29  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 004aff2d  c644243401           mov byte ptr [esp + 0x34], 1
// 004aff32  807c243401           cmp byte ptr [esp + 0x34], 1
// 004aff37  0f849e020000         je 0x4b01db
// 004aff3d  8b542414             mov edx, dword ptr [esp + 0x14]
// 004aff41  33ed                 xor ebp, ebp
// 004aff43  39aa94010000         cmp dword ptr [edx + 0x194], ebp
// 004aff49  7e3a                 jle 0x4aff85
// 004aff4b  33f6                 xor esi, esi
// 004aff4d  8d4900               lea ecx, [ecx]
// 004aff50  8b442414             mov eax, dword ptr [esp + 0x14]
// 004aff54  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 004aff5a  03c6                 add eax, esi
// 004aff5c  8d4f04               lea ecx, [edi + 4]
// 004aff5f  51                   push ecx
// 004aff60  83c008               add eax, 8
// 004aff63  50                   push eax
// 004aff64  ff1544e48900         call dword ptr [0x89e444]
// 004aff6a  83c408               add esp, 8
// 004aff6d  84c0                 test al, al
// 004aff6f  0f8540020000         jne 0x4b01b5
// 004aff75  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004aff79  45                   inc ebp
// 004aff7a  83c630               add esi, 0x30
// 004aff7d  3ba994010000         cmp ebp, dword ptr [ecx + 0x194]
// 004aff83  7ccb                 jl 0x4aff50
// 004aff85  68a83e8c00           push 0x8c3ea8
// 004aff8a  8d8c2494000000       lea ecx, [esp + 0x94]
// 004aff91  ff15b4e48900         call dword ptr [0x89e4b4]
// 004aff97  8d4f04               lea ecx, [edi + 4]
// 004aff9a  51                   push ecx
// 004aff9b  50                   push eax
// 004aff9c  8d8424b4000000       lea eax, [esp + 0xb4]
// 004affa3  50                   push eax
// 004affa4  c784241401000009000000 mov dword ptr [esp + 0x114], 9
// 004affaf  ff150ce58900         call dword ptr [0x89e50c]
// 004affb5  68a4d08b00           push 0x8bd0a4
// 004affba  50                   push eax
// 004affbb  8d8c24f8000000       lea ecx, [esp + 0xf8]
// 004affc2  51                   push ecx
// 004affc3  c68424200100000a     mov byte ptr [esp + 0x120], 0xa
// 004affcb  ff1548e48900         call dword ptr [0x89e448]
// 004affd1  83c418               add esp, 0x18
// 004affd4  50                   push eax
// 004affd5  8d4c2478             lea ecx, [esp + 0x78]
// 004affd9  c684240c0100000b     mov byte ptr [esp + 0x10c], 0xb
// 004affe1  ff15b8e48900         call dword ptr [0x89e4b8]
// 004affe7  68049f9800           push 0x989f04
// 004affec  8d542478             lea edx, [esp + 0x78]
// 004afff0  52                   push edx
// 004afff1  e8549a2600           call 0x719a4a
// 004afff6  837c243810           cmp dword ptr [esp + 0x38], 0x10
// 004afffb  8b442424             mov eax, dword ptr [esp + 0x24]
// 004affff  7304                 jae 0x4b0005
// 004b0001  8d442424             lea eax, [esp + 0x24]
// 004b0005  50                   push eax
// 004b0006  8d542478             lea edx, [esp + 0x78]
// 004b000a  68683e8c00           push 0x8c3e68
// 004b000f  52                   push edx
// 004b0010  e86b930c00           call 0x579380
// 004b0015  83c40c               add esp, 0xc
// 004b0018  50                   push eax
// 004b0019  8d4c2440             lea ecx, [esp + 0x40]
// 004b001d  c684240c01000002     mov byte ptr [esp + 0x10c], 2
// 004b0025  ff15b8e48900         call dword ptr [0x89e4b8]
// 004b002b  68049f9800           push 0x989f04
// 004b0030  8d442440             lea eax, [esp + 0x40]
// 004b0034  50                   push eax
// 004b0035  e8109a2600           call 0x719a4a
// 004b003a  8d7e0c               lea edi, [esi + 0xc]
// 004b003d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004b0040  51                   push ecx
// 004b0041  e8cad8ffff           call 0x4ad910
// 004b0046  50                   push eax
// 004b0047  57                   push edi
// 004b0048  8d542464             lea edx, [esp + 0x64]
// 004b004c  68183e8c00           push 0x8c3e18
// 004b0051  52                   push edx
// 004b0052  e829930c00           call 0x579380
// 004b0057  83c414               add esp, 0x14
// 004b005a  50                   push eax
// 004b005b  8d4c2440             lea ecx, [esp + 0x40]
// 004b005f  c784240c01000003000000 mov dword ptr [esp + 0x10c], 3
// 004b006a  ff15b8e48900         call dword ptr [0x89e4b8]
// 004b0070  68049f9800           push 0x989f04
// 004b0075  8d442440             lea eax, [esp + 0x40]
// 004b0079  50                   push eax
// 004b007a  e8cb992600           call 0x719a4a
// 004b007f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004b0082  51                   push ecx
// 004b0083  e888d8ffff           call 0x4ad910
// 004b0088  83c404               add esp, 4
// 004b008b  50                   push eax
// 004b008c  8d4c2440             lea ecx, [esp + 0x40]
// 004b0090  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b0096  8b5744               mov edx, dword ptr [edi + 0x44]
// 004b0099  52                   push edx
// 004b009a  c784240c01000004000000 mov dword ptr [esp + 0x10c], 4
// 004b00a5  e866d8ffff           call 0x4ad910
// 004b00aa  83c404               add esp, 4
// 004b00ad  50                   push eax
// 004b00ae  8d4c2424             lea ecx, [esp + 0x24]
// 004b00b2  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b00b8  8b4624               mov eax, dword ptr [esi + 0x24]
// 004b00bb  50                   push eax
// 004b00bc  c684240c01000005     mov byte ptr [esp + 0x10c], 5
// 004b00c4  e847f6ffff           call 0x4af710
// 004b00c9  50                   push eax
// 004b00ca  e841d8ffff           call 0x4ad910
// 004b00cf  83c408               add esp, 8
// 004b00d2  50                   push eax
// 004b00d3  8d4c245c             lea ecx, [esp + 0x5c]
// 004b00d7  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b00dd  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 004b00e0  51                   push ecx
// 004b00e1  c684240c01000006     mov byte ptr [esp + 0x10c], 6
// 004b00e9  e822f6ffff           call 0x4af710
// 004b00ee  50                   push eax
// 004b00ef  e81cd8ffff           call 0x4ad910
// 004b00f4  83c408               add esp, 8
// 004b00f7  50                   push eax
// 004b00f8  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 004b00ff  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b0105  8b442438             mov eax, dword ptr [esp + 0x38]
// 004b0109  8b542424             mov edx, dword ptr [esp + 0x24]
// 004b010d  bb10000000           mov ebx, 0x10
// 004b0112  c684240801000007     mov byte ptr [esp + 0x108], 7
// 004b011a  8bfa                 mov edi, edx
// 004b011c  3bc3                 cmp eax, ebx
// 004b011e  7306                 jae 0x4b0126
// 004b0120  8d7c2424             lea edi, [esp + 0x24]
// 004b0124  8bd7                 mov edx, edi
// 004b0126  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 004b012a  395c2470             cmp dword ptr [esp + 0x70], ebx
// 004b012e  7304                 jae 0x4b0134
// 004b0130  8d4c245c             lea ecx, [esp + 0x5c]
// 004b0134  8b442440             mov eax, dword ptr [esp + 0x40]
// 004b0138  395c2454             cmp dword ptr [esp + 0x54], ebx
// 004b013c  7304                 jae 0x4b0142
// 004b013e  8d442440             lea eax, [esp + 0x40]
// 004b0142  395e20               cmp dword ptr [esi + 0x20], ebx
// 004b0145  7205                 jb 0x4b014c
// 004b0147  8b760c               mov esi, dword ptr [esi + 0xc]
// 004b014a  eb03                 jmp 0x4b014f
// 004b014c  83c60c               add esi, 0xc
// 004b014f  57                   push edi
// 004b0150  52                   push edx
// 004b0151  51                   push ecx
// 004b0152  50                   push eax
// 004b0153  56                   push esi
// 004b0154  8d9424a4000000       lea edx, [esp + 0xa4]
// 004b015b  68b83d8c00           push 0x8c3db8
// 004b0160  52                   push edx
// 004b0161  e81a920c00           call 0x579380
// 004b0166  83c41c               add esp, 0x1c
// 004b0169  50                   push eax
// 004b016a  8d4c2478             lea ecx, [esp + 0x78]
// 004b016e  c684240c01000008     mov byte ptr [esp + 0x10c], 8
// 004b0176  ff15b8e48900         call dword ptr [0x89e4b8]
// 004b017c  68049f9800           push 0x989f04
// 004b0181  8d442478             lea eax, [esp + 0x78]
// 004b0185  50                   push eax
// 004b0186  e8bf982600           call 0x719a4a
// 004b018b  8b38                 mov edi, dword ptr [eax]
// 004b018d  33db                 xor ebx, ebx
// 004b018f  885c2434             mov byte ptr [esp + 0x34], bl
// 004b0193  85ff                 test edi, edi
// 004b0195  0f8597fdffff         jne 0x4aff32
// 004b019b  eb03                 jmp 0x4b01a0
// 004b019d  8d4900               lea ecx, [ecx]
// 004b01a0  43                   inc ebx
// 004b01a1  3bdd                 cmp ebx, ebp
// 004b01a3  0f8d84fdffff         jge 0x4aff2d
// 004b01a9  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 004b01ac  85ff                 test edi, edi
// 004b01ae  74f0                 je 0x4b01a0
// 004b01b0  e97dfdffff           jmp 0x4aff32
// 004b01b5  8b7f68               mov edi, dword ptr [edi + 0x68]
// 004b01b8  85ff                 test edi, edi
// 004b01ba  0f8572fdffff         jne 0x4aff32
// 004b01c0  43                   inc ebx
// 004b01c1  3b5c2418             cmp ebx, dword ptr [esp + 0x18]
// 004b01c5  0f8d62fdffff         jge 0x4aff2d
// 004b01cb  8b542410             mov edx, dword ptr [esp + 0x10]
// 004b01cf  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 004b01d2  85ff                 test edi, edi
// 004b01d4  74ea                 je 0x4b01c0
// 004b01d6  e957fdffff           jmp 0x4aff32
// 004b01db  8b8c2400010000       mov ecx, dword ptr [esp + 0x100]
// 004b01e2  5f                   pop edi
// 004b01e3  5e                   pop esi
// 004b01e4  5d                   pop ebp
// 004b01e5  5b                   pop ebx
// 004b01e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004b01ed  81c4fc000000         add esp, 0xfc
// 004b01f3  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?validateArgList@VertexAndPixelShader@G3D@@QBEXABVArgList@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
