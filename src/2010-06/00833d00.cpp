// roc 2010-06 00833d00  unit: CXTPOffice2007Theme  size: 3422 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00833d00
//
// 00833d00  6aff                 push -1
// 00833d02  6808669b00           push 0x9b6608
// 00833d07  64a100000000         mov eax, dword ptr fs:[0]
// 00833d0d  50                   push eax
// 00833d0e  81ec38010000         sub esp, 0x138
// 00833d14  53                   push ebx
// 00833d15  55                   push ebp
// 00833d16  56                   push esi
// 00833d17  57                   push edi
// 00833d18  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00833d1d  33c4                 xor eax, esp
// 00833d1f  50                   push eax
// 00833d20  8d84244c010000       lea eax, [esp + 0x14c]
// 00833d27  64a300000000         mov dword ptr fs:[0], eax
// 00833d2d  8bf9                 mov edi, ecx
// 00833d2f  8bb42460010000       mov esi, dword ptr [esp + 0x160]
// 00833d36  8b4608               mov eax, dword ptr [esi + 8]
// 00833d39  50                   push eax
// 00833d3a  e82b3ff7ff           call 0x7a7c6a
// 00833d3f  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00833d42  8bd8                 mov ebx, eax
// 00833d44  894c2418             mov dword ptr [esp + 0x18], ecx
// 00833d48  53                   push ebx
// 00833d49  8d8c2410010000       lea ecx, [esp + 0x110]
// 00833d50  895c2440             mov dword ptr [esp + 0x40], ebx
// 00833d54  e8b7b5fcff           call 0x7ff310
// 00833d59  8d94240c010000       lea edx, [esp + 0x10c]
// 00833d60  52                   push edx
// 00833d61  8bcb                 mov ecx, ebx
// 00833d63  e8d841f7ff           call 0x7a7f40
// 00833d68  53                   push ebx
// 00833d69  8d4c2420             lea ecx, [esp + 0x20]
// 00833d6d  e83eb5fcff           call 0x7ff2b0
// 00833d72  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00833d76  2b8c2418010000       sub ecx, dword ptr [esp + 0x118]
// 00833d7d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00833d81  8bac240c010000       mov ebp, dword ptr [esp + 0x10c]
// 00833d88  894c2454             mov dword ptr [esp + 0x54], ecx
// 00833d8c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00833d90  2be8                 sub ebp, eax
// 00833d92  f7d9                 neg ecx
// 00833d94  f7d8                 neg eax
// 00833d96  51                   push ecx
// 00833d97  50                   push eax
// 00833d98  8d442424             lea eax, [esp + 0x24]
// 00833d9c  50                   push eax
// 00833d9d  ff1540bc9e00         call dword ptr [0x9ebc40]
// 00833da3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00833da7  8b542424             mov edx, dword ptr [esp + 0x24]
// 00833dab  8b442428             mov eax, dword ptr [esp + 0x28]
// 00833daf  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00833db3  898c24a4000000       mov dword ptr [esp + 0xa4], ecx
// 00833dba  8bce                 mov ecx, esi
// 00833dbc  899424ac000000       mov dword ptr [esp + 0xac], edx
// 00833dc3  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00833dca  e881bc0600           call 0x89fa50
// 00833dcf  8d4c2458             lea ecx, [esp + 0x58]
// 00833dd3  51                   push ecx
// 00833dd4  8bce                 mov ecx, esi
// 00833dd6  89442444             mov dword ptr [esp + 0x44], eax
// 00833dda  03d8                 add ebx, eax
// 00833ddc  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00833de4  e827be0600           call 0x89fc10
// 00833de9  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00833df0  85c0                 test eax, eax
// 00833df2  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00833df9  7409                 je 0x833e04
// 00833dfb  2b442458             sub eax, dword ptr [esp + 0x58]
// 00833dff  2bc3                 sub eax, ebx
// 00833e01  48                   dec eax
// 00833e02  eb02                 jmp 0x833e06
// 00833e04  2bc3                 sub eax, ebx
// 00833e06  89442414             mov dword ptr [esp + 0x14], eax
// 00833e0a  85ed                 test ebp, ebp
// 00833e0c  7e3c                 jle 0x833e4a
// 00833e0e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833e13  7408                 je 0x833e1d
// 00833e15  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00833e1b  eb06                 jmp 0x833e23
// 00833e1d  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00833e23  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00833e2a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00833e31  50                   push eax
// 00833e32  8b442420             mov eax, dword ptr [esp + 0x20]
// 00833e36  2bd3                 sub edx, ebx
// 00833e38  52                   push edx
// 00833e39  6a01                 push 1
// 00833e3b  53                   push ebx
// 00833e3c  50                   push eax
// 00833e3d  8bce                 mov ecx, esi
// 00833e3f  e8468f1400           call 0x97cd8a
// 00833e44  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833e48  eb07                 jmp 0x833e51
// 00833e4a  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 00833e51  83fd01               cmp ebp, 1
// 00833e54  7e2b                 jle 0x833e81
// 00833e56  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833e5b  7408                 je 0x833e65
// 00833e5d  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00833e63  eb06                 jmp 0x833e6b
// 00833e65  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00833e6b  51                   push ecx
// 00833e6c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00833e70  50                   push eax
// 00833e71  6a01                 push 1
// 00833e73  41                   inc ecx
// 00833e74  53                   push ebx
// 00833e75  51                   push ecx
// 00833e76  8bce                 mov ecx, esi
// 00833e78  e80d8f1400           call 0x97cd8a
// 00833e7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833e81  83fd02               cmp ebp, 2
// 00833e84  7e2d                 jle 0x833eb3
// 00833e86  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833e8b  7408                 je 0x833e95
// 00833e8d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00833e93  eb06                 jmp 0x833e9b
// 00833e95  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00833e9b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00833e9f  51                   push ecx
// 00833ea0  50                   push eax
// 00833ea1  6a01                 push 1
// 00833ea3  53                   push ebx
// 00833ea4  83c202               add edx, 2
// 00833ea7  52                   push edx
// 00833ea8  8bce                 mov ecx, esi
// 00833eaa  e8db8e1400           call 0x97cd8a
// 00833eaf  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833eb3  83fd03               cmp ebp, 3
// 00833eb6  7e2f                 jle 0x833ee7
// 00833eb8  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833ebd  7408                 je 0x833ec7
// 00833ebf  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00833ec5  eb06                 jmp 0x833ecd
// 00833ec7  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00833ecd  51                   push ecx
// 00833ece  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00833ed2  50                   push eax
// 00833ed3  8d45fd               lea eax, [ebp - 3]
// 00833ed6  50                   push eax
// 00833ed7  83c103               add ecx, 3
// 00833eda  53                   push ebx
// 00833edb  51                   push ecx
// 00833edc  8bce                 mov ecx, esi
// 00833ede  e8a78e1400           call 0x97cd8a
// 00833ee3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833ee7  85ed                 test ebp, ebp
// 00833ee9  7e34                 jle 0x833f1f
// 00833eeb  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833ef0  7408                 je 0x833efa
// 00833ef2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00833ef8  eb06                 jmp 0x833f00
// 00833efa  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00833f00  8b542424             mov edx, dword ptr [esp + 0x24]
// 00833f04  50                   push eax
// 00833f05  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00833f0c  2bc3                 sub eax, ebx
// 00833f0e  50                   push eax
// 00833f0f  6a01                 push 1
// 00833f11  53                   push ebx
// 00833f12  4a                   dec edx
// 00833f13  52                   push edx
// 00833f14  8bce                 mov ecx, esi
// 00833f16  e86f8e1400           call 0x97cd8a
// 00833f1b  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833f1f  83fd01               cmp ebp, 1
// 00833f22  7e2d                 jle 0x833f51
// 00833f24  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833f29  7408                 je 0x833f33
// 00833f2b  8b8fd0050000         mov ecx, dword ptr [edi + 0x5d0]
// 00833f31  eb06                 jmp 0x833f39
// 00833f33  8b8fe0050000         mov ecx, dword ptr [edi + 0x5e0]
// 00833f39  51                   push ecx
// 00833f3a  50                   push eax
// 00833f3b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00833f3f  6a01                 push 1
// 00833f41  53                   push ebx
// 00833f42  83c0fe               add eax, -2
// 00833f45  50                   push eax
// 00833f46  8bce                 mov ecx, esi
// 00833f48  e83d8e1400           call 0x97cd8a
// 00833f4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833f51  83fd02               cmp ebp, 2
// 00833f54  7e2d                 jle 0x833f83
// 00833f56  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833f5b  7408                 je 0x833f65
// 00833f5d  8b8fd4050000         mov ecx, dword ptr [edi + 0x5d4]
// 00833f63  eb06                 jmp 0x833f6b
// 00833f65  8b8fe4050000         mov ecx, dword ptr [edi + 0x5e4]
// 00833f6b  51                   push ecx
// 00833f6c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00833f70  50                   push eax
// 00833f71  6a01                 push 1
// 00833f73  83c1fd               add ecx, -3
// 00833f76  53                   push ebx
// 00833f77  51                   push ecx
// 00833f78  8bce                 mov ecx, esi
// 00833f7a  e80b8e1400           call 0x97cd8a
// 00833f7f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00833f83  83fd03               cmp ebp, 3
// 00833f86  7e2a                 jle 0x833fb2
// 00833f88  837c241800           cmp dword ptr [esp + 0x18], 0
// 00833f8d  7408                 je 0x833f97
// 00833f8f  8b8fd8050000         mov ecx, dword ptr [edi + 0x5d8]
// 00833f95  eb06                 jmp 0x833f9d
// 00833f97  8b8fe8050000         mov ecx, dword ptr [edi + 0x5e8]
// 00833f9d  51                   push ecx
// 00833f9e  50                   push eax
// 00833f9f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00833fa3  8d55fd               lea edx, [ebp - 3]
// 00833fa6  52                   push edx
// 00833fa7  53                   push ebx
// 00833fa8  2bc5                 sub eax, ebp
// 00833faa  50                   push eax
// 00833fab  8bce                 mov ecx, esi
// 00833fad  e8d88d1400           call 0x97cd8a
// 00833fb2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00833fb6  85db                 test ebx, ebx
// 00833fb8  7420                 je 0x833fda
// 00833fba  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00833fbe  e81b8e1400           call 0x97cdde
// 00833fc3  a900000001           test eax, 0x1000000
// 00833fc8  7408                 je 0x833fd2
// 00833fca  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 00833fd0  eb0e                 jmp 0x833fe0
// 00833fd2  8b87cc050000         mov eax, dword ptr [edi + 0x5cc]
// 00833fd8  eb06                 jmp 0x833fe0
// 00833fda  8b87dc050000         mov eax, dword ptr [edi + 0x5dc]
// 00833fe0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00833fe4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00833fe8  50                   push eax
// 00833fe9  8b442420             mov eax, dword ptr [esp + 0x20]
// 00833fed  6a01                 push 1
// 00833fef  2bc8                 sub ecx, eax
// 00833ff1  51                   push ecx
// 00833ff2  4a                   dec edx
// 00833ff3  52                   push edx
// 00833ff4  50                   push eax
// 00833ff5  8bce                 mov ecx, esi
// 00833ff7  e88e8d1400           call 0x97cd8a
// 00833ffc  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00834000  83f901               cmp ecx, 1
// 00834003  7e35                 jle 0x83403a
// 00834005  85db                 test ebx, ebx
// 00834007  7408                 je 0x834011
// 00834009  8b87d8050000         mov eax, dword ptr [edi + 0x5d8]
// 0083400f  eb06                 jmp 0x834017
// 00834011  8b87e8050000         mov eax, dword ptr [edi + 0x5e8]
// 00834017  8b542424             mov edx, dword ptr [esp + 0x24]
// 0083401b  50                   push eax
// 0083401c  8d41ff               lea eax, [ecx - 1]
// 0083401f  50                   push eax
// 00834020  8b442424             mov eax, dword ptr [esp + 0x24]
// 00834024  2bd0                 sub edx, eax
// 00834026  83ea02               sub edx, 2
// 00834029  52                   push edx
// 0083402a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083402e  2bd1                 sub edx, ecx
// 00834030  52                   push edx
// 00834031  40                   inc eax
// 00834032  50                   push eax
// 00834033  8bce                 mov ecx, esi
// 00834035  e8508d1400           call 0x97cd8a
// 0083403a  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083403e  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00834042  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00834046  03c8                 add ecx, eax
// 00834048  89442470             mov dword ptr [esp + 0x70], eax
// 0083404c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00834050  894c2478             mov dword ptr [esp + 0x78], ecx
// 00834054  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 0083405b  8954246c             mov dword ptr [esp + 0x6c], edx
// 0083405f  89442474             mov dword ptr [esp + 0x74], eax
// 00834063  e868b90600           call 0x89f9d0
// 00834068  85c0                 test eax, eax
// 0083406a  0f8481050000         je 0x8345f1
// 00834070  85f6                 test esi, esi
// 00834072  7403                 je 0x834077
// 00834074  8b7604               mov esi, dword ptr [esi + 4]
// 00834077  8d4c246c             lea ecx, [esp + 0x6c]
// 0083407b  51                   push ecx
// 0083407c  56                   push esi
// 0083407d  8d8c2424010000       lea ecx, [esp + 0x124]
// 00834084  e8e7b2fcff           call 0x7ff370
// 00834089  68d05fa600           push 0xa65fd0
// 0083408e  8bcf                 mov ecx, edi
// 00834090  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 0083409b  e860e1ffff           call 0x832200
// 008340a0  33db                 xor ebx, ebx
// 008340a2  395c2418             cmp dword ptr [esp + 0x18], ebx
// 008340a6  6a02                 push 2
// 008340a8  0f94c3               sete bl
// 008340ab  8bf0                 mov esi, eax
// 008340ad  8d9424b8000000       lea edx, [esp + 0xb8]
// 008340b4  8bce                 mov ecx, esi
// 008340b6  53                   push ebx
// 008340b7  52                   push edx
// 008340b8  e8730a0600           call 0x894b30
// 008340bd  8b8c24bc000000       mov ecx, dword ptr [esp + 0xbc]
// 008340c4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008340c8  8bc1                 mov eax, ecx
// 008340ca  2b8424b4000000       sub eax, dword ptr [esp + 0xb4]
// 008340d1  899424cc000000       mov dword ptr [esp + 0xcc], edx
// 008340d8  03c2                 add eax, edx
// 008340da  8b542420             mov edx, dword ptr [esp + 0x20]
// 008340de  899424d0000000       mov dword ptr [esp + 0xd0], edx
// 008340e5  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 008340ec  8b442478             mov eax, dword ptr [esp + 0x78]
// 008340f0  33d2                 xor edx, edx
// 008340f2  83ec10               sub esp, 0x10
// 008340f5  898424e8000000       mov dword ptr [esp + 0xe8], eax
// 008340fc  8bc4                 mov eax, esp
// 008340fe  8910                 mov dword ptr [eax], edx
// 00834100  89942498000000       mov dword ptr [esp + 0x98], edx
// 00834107  ba05000000           mov edx, 5
// 0083410c  895004               mov dword ptr [eax + 4], edx
// 0083410f  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00834116  895008               mov dword ptr [eax + 8], edx
// 00834119  83ec10               sub esp, 0x10
// 0083411c  ba03000000           mov edx, 3
// 00834121  89500c               mov dword ptr [eax + 0xc], edx
// 00834124  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 0083412b  8bc4                 mov eax, esp
// 0083412d  8910                 mov dword ptr [eax], edx
// 0083412f  8b9424d8000000       mov edx, dword ptr [esp + 0xd8]
// 00834136  895004               mov dword ptr [eax + 4], edx
// 00834139  894808               mov dword ptr [eax + 8], ecx
// 0083413c  8b8c24e0000000       mov ecx, dword ptr [esp + 0xe0]
// 00834143  89480c               mov dword ptr [eax + 0xc], ecx
// 00834146  8d9424ec000000       lea edx, [esp + 0xec]
// 0083414d  52                   push edx
// 0083414e  8d842440010000       lea eax, [esp + 0x140]
// 00834155  50                   push eax
// 00834156  8bce                 mov ecx, esi
// 00834158  e8a3020600           call 0x894400
// 0083415d  68c05fa600           push 0xa65fc0
// 00834162  8bcf                 mov ecx, edi
// 00834164  e897e0ffff           call 0x832200
// 00834169  6a02                 push 2
// 0083416b  53                   push ebx
// 0083416c  8d8c24ac000000       lea ecx, [esp + 0xac]
// 00834173  8bf0                 mov esi, eax
// 00834175  51                   push ecx
// 00834176  8bce                 mov ecx, esi
// 00834178  e8b3090600           call 0x894b30
// 0083417d  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00834184  8b442424             mov eax, dword ptr [esp + 0x24]
// 00834188  8bd1                 mov edx, ecx
// 0083418a  2b9424ac000000       sub edx, dword ptr [esp + 0xac]
// 00834191  8984249c000000       mov dword ptr [esp + 0x9c], eax
// 00834198  03d0                 add edx, eax
// 0083419a  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083419e  89942494000000       mov dword ptr [esp + 0x94], edx
// 008341a5  8b542420             mov edx, dword ptr [esp + 0x20]
// 008341a9  89942498000000       mov dword ptr [esp + 0x98], edx
// 008341b0  33d2                 xor edx, edx
// 008341b2  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 008341b9  89942488000000       mov dword ptr [esp + 0x88], edx
// 008341c0  83ec10               sub esp, 0x10
// 008341c3  8bc4                 mov eax, esp
// 008341c5  8910                 mov dword ptr [eax], edx
// 008341c7  ba05000000           mov edx, 5
// 008341cc  895004               mov dword ptr [eax + 4], edx
// 008341cf  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 008341d6  895008               mov dword ptr [eax + 8], edx
// 008341d9  83ec10               sub esp, 0x10
// 008341dc  ba03000000           mov edx, 3
// 008341e1  89500c               mov dword ptr [eax + 0xc], edx
// 008341e4  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 008341eb  8bc4                 mov eax, esp
// 008341ed  8908                 mov dword ptr [eax], ecx
// 008341ef  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 008341f6  894804               mov dword ptr [eax + 4], ecx
// 008341f9  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00834200  895008               mov dword ptr [eax + 8], edx
// 00834203  89480c               mov dword ptr [eax + 0xc], ecx
// 00834206  8d9424b4000000       lea edx, [esp + 0xb4]
// 0083420d  52                   push edx
// 0083420e  8d842440010000       lea eax, [esp + 0x140]
// 00834215  50                   push eax
// 00834216  8bce                 mov ecx, esi
// 00834218  e8e3010600           call 0x894400
// 0083421d  68945fa600           push 0xa65f94
// 00834222  8bcf                 mov ecx, edi
// 00834224  e8d7dfffff           call 0x832200
// 00834229  8b8c24d4000000       mov ecx, dword ptr [esp + 0xd4]
// 00834230  2b8c24cc000000       sub ecx, dword ptr [esp + 0xcc]
// 00834237  8b542420             mov edx, dword ptr [esp + 0x20]
// 0083423b  034c241c             add ecx, dword ptr [esp + 0x1c]
// 0083423f  8bf0                 mov esi, eax
// 00834241  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 00834248  2b8424ac000000       sub eax, dword ptr [esp + 0xac]
// 0083424f  6a02                 push 2
// 00834251  03442428             add eax, dword ptr [esp + 0x28]
// 00834255  894c2460             mov dword ptr [esp + 0x60], ecx
// 00834259  53                   push ebx
// 0083425a  8d8c2488000000       lea ecx, [esp + 0x88]
// 00834261  8944246c             mov dword ptr [esp + 0x6c], eax
// 00834265  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0083426c  51                   push ecx
// 0083426d  8bce                 mov ecx, esi
// 0083426f  8954246c             mov dword ptr [esp + 0x6c], edx
// 00834273  89442474             mov dword ptr [esp + 0x74], eax
// 00834277  e8b4080600           call 0x894b30
// 0083427c  33d2                 xor edx, edx
// 0083427e  83ec10               sub esp, 0x10
// 00834281  8bcc                 mov ecx, esp
// 00834283  8911                 mov dword ptr [ecx], edx
// 00834285  ba05000000           mov edx, 5
// 0083428a  895104               mov dword ptr [ecx + 4], edx
// 0083428d  33d2                 xor edx, edx
// 0083428f  895108               mov dword ptr [ecx + 8], edx
// 00834292  83ec10               sub esp, 0x10
// 00834295  ba03000000           mov edx, 3
// 0083429a  89510c               mov dword ptr [ecx + 0xc], edx
// 0083429d  8b10                 mov edx, dword ptr [eax]
// 0083429f  8bcc                 mov ecx, esp
// 008342a1  8911                 mov dword ptr [ecx], edx
// 008342a3  8b5004               mov edx, dword ptr [eax + 4]
// 008342a6  895104               mov dword ptr [ecx + 4], edx
// 008342a9  8b5008               mov edx, dword ptr [eax + 8]
// 008342ac  8b400c               mov eax, dword ptr [eax + 0xc]
// 008342af  895108               mov dword ptr [ecx + 8], edx
// 008342b2  89410c               mov dword ptr [ecx + 0xc], eax
// 008342b5  8d4c247c             lea ecx, [esp + 0x7c]
// 008342b9  51                   push ecx
// 008342ba  8d942440010000       lea edx, [esp + 0x140]
// 008342c1  52                   push edx
// 008342c2  8bce                 mov ecx, esi
// 008342c4  e837010600           call 0x894400
// 008342c9  8b742470             mov esi, dword ptr [esp + 0x70]
// 008342cd  8b942460010000       mov edx, dword ptr [esp + 0x160]
// 008342d4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008342d8  037240               add esi, dword ptr [edx + 0x40]
// 008342db  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008342df  89442444             mov dword ptr [esp + 0x44], eax
// 008342e3  8b442478             mov eax, dword ptr [esp + 0x78]
// 008342e7  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008342eb  c744244407000000     mov dword ptr [esp + 0x44], 7
// 008342f3  89742448             mov dword ptr [esp + 0x48], esi
// 008342f7  83e803               sub eax, 3
// 008342fa  89442450             mov dword ptr [esp + 0x50], eax
// 008342fe  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00834302  50                   push eax
// 00834303  8bcf                 mov ecx, edi
// 00834305  e806f9ffff           call 0x833c10
// 0083430a  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00834311  85c0                 test eax, eax
// 00834313  0f84dc000000         je 0x8343f5
// 00834319  6a32                 push 0x32
// 0083431b  ff156cba9e00         call dword ptr [0x9eba6c]
// 00834321  6a31                 push 0x31
// 00834323  89442418             mov dword ptr [esp + 0x18], eax
// 00834327  ff156cba9e00         call dword ptr [0x9eba6c]
// 0083432d  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00834334  8944242c             mov dword ptr [esp + 0x2c], eax
// 00834338  8b4140               mov eax, dword ptr [ecx + 0x40]
// 0083433b  8d48ff               lea ecx, [eax - 1]
// 0083433e  8b442478             mov eax, dword ptr [esp + 0x78]
// 00834342  2b442470             sub eax, dword ptr [esp + 0x70]
// 00834346  2bc1                 sub eax, ecx
// 00834348  2b442414             sub eax, dword ptr [esp + 0x14]
// 0083434c  99                   cdq 
// 0083434d  2bc2                 sub eax, edx
// 0083434f  d1f8                 sar eax, 1
// 00834351  03c1                 add eax, ecx
// 00834353  89842490000000       mov dword ptr [esp + 0x90], eax
// 0083435a  e8a1cffcff           call 0x801300
// 0083435f  8d94241c010000       lea edx, [esp + 0x11c]
// 00834366  52                   push edx
// 00834367  e8e4bdfcff           call 0x800150
// 0083436c  83c404               add esp, 4
// 0083436f  89442440             mov dword ptr [esp + 0x40], eax
// 00834373  83e001               and eax, 1
// 00834376  8944247c             mov dword ptr [esp + 0x7c], eax
// 0083437a  741d                 je 0x834399
// 0083437c  e87fcffcff           call 0x801300
// 00834381  8b442440             mov eax, dword ptr [esp + 0x40]
// 00834385  83c808               or eax, 8
// 00834388  50                   push eax
// 00834389  8d8c2420010000       lea ecx, [esp + 0x120]
// 00834390  51                   push ecx
// 00834391  e8eabdfcff           call 0x800180
// 00834396  83c408               add esp, 8
// 00834399  8b542414             mov edx, dword ptr [esp + 0x14]
// 0083439d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008343a1  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 008343a8  6a03                 push 3
// 008343aa  6a00                 push 0
// 008343ac  6a00                 push 0
// 008343ae  52                   push edx
// 008343af  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 008343b6  50                   push eax
// 008343b7  8b842434010000       mov eax, dword ptr [esp + 0x134]
// 008343be  51                   push ecx
// 008343bf  52                   push edx
// 008343c0  6a07                 push 7
// 008343c2  50                   push eax
// 008343c3  ff15ccb99e00         call dword ptr [0x9eb9cc]
// 008343c9  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 008343ce  741a                 je 0x8343ea
// 008343d0  e82bcffcff           call 0x801300
// 008343d5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008343d9  51                   push ecx
// 008343da  8d942420010000       lea edx, [esp + 0x120]
// 008343e1  52                   push edx
// 008343e2  e899bdfcff           call 0x800180
// 008343e7  83c408               add esp, 8
// 008343ea  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008343ee  83c00c               add eax, 0xc
// 008343f1  89442444             mov dword ptr [esp + 0x44], eax
// 008343f5  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 008343fc  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008343ff  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00834402  33c9                 xor ecx, ecx
// 00834404  89542440             mov dword ptr [esp + 0x40], edx
// 00834408  894c2414             mov dword ptr [esp + 0x14], ecx
// 0083440c  85c0                 test eax, eax
// 0083440e  7f69                 jg 0x834479
// 00834410  8b442418             mov eax, dword ptr [esp + 0x18]
// 00834414  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00834418  296c244c             sub dword ptr [esp + 0x4c], ebp
// 0083441c  8b17                 mov edx, dword ptr [edi]
// 0083441e  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 00834424  50                   push eax
// 00834425  51                   push ecx
// 00834426  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0083442a  83ec10               sub esp, 0x10
// 0083442d  8bc4                 mov eax, esp
// 0083442f  8908                 mov dword ptr [eax], ecx
// 00834431  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00834435  897004               mov dword ptr [eax + 4], esi
// 00834438  894808               mov dword ptr [eax + 8], ecx
// 0083443b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0083443f  89480c               mov dword ptr [eax + 0xc], ecx
// 00834442  8d842434010000       lea eax, [esp + 0x134]
// 00834449  50                   push eax
// 0083444a  8bcf                 mov ecx, edi
// 0083444c  ffd2                 call edx
// 0083444e  8d8c241c010000       lea ecx, [esp + 0x11c]
// 00834455  c7842454010000ffffffff mov dword ptr [esp + 0x154], 0xffffffff
// 00834460  e81bb1fcff           call 0x7ff580
// 00834465  8bb4245c010000       mov esi, dword ptr [esp + 0x15c]
// 0083446c  e9ec020000           jmp 0x83475d
// 00834471  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00834475  8b542440             mov edx, dword ptr [esp + 0x40]
// 00834479  85c9                 test ecx, ecx
// 0083447b  7c18                 jl 0x834495
// 0083447d  3bc8                 cmp ecx, eax
// 0083447f  7d14                 jge 0x834495
// 00834481  3b4a2c               cmp ecx, dword ptr [edx + 0x2c]
// 00834484  0f8d62010000         jge 0x8345ec
// 0083448a  8b5228               mov edx, dword ptr [edx + 0x28]
// 0083448d  8b348a               mov esi, dword ptr [edx + ecx*4]
// 00834490  8d048a               lea eax, [edx + ecx*4]
// 00834493  eb02                 jmp 0x834497
// 00834495  33f6                 xor esi, esi
// 00834497  8b06                 mov eax, dword ptr [esi]
// 00834499  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0083449f  6a00                 push 0
// 008344a1  8bce                 mov ecx, esi
// 008344a3  ffd2                 call edx
// 008344a5  85c0                 test eax, eax
// 008344a7  0f841e010000         je 0x8345cb
// 008344ad  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008344b3  83f8ff               cmp eax, -1
// 008344b6  750f                 jne 0x8344c7
// 008344b8  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008344be  85c9                 test ecx, ecx
// 008344c0  7405                 je 0x8344c7
// 008344c2  e8c961f7ff           call 0x7aa690
// 008344c7  85c0                 test eax, eax
// 008344c9  740e                 je 0x8344d9
// 008344cb  837c241800           cmp dword ptr [esp + 0x18], 0
// 008344d0  7407                 je 0x8344d9
// 008344d2  b901000000           mov ecx, 1
// 008344d7  eb02                 jmp 0x8344db
// 008344d9  33c9                 xor ecx, ecx
// 008344db  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 008344e1  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 008344e7  8944247c             mov dword ptr [esp + 0x7c], eax
// 008344eb  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 008344f1  89442430             mov dword ptr [esp + 0x30], eax
// 008344f5  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008344fb  89442438             mov dword ptr [esp + 0x38], eax
// 008344ff  8b07                 mov eax, dword ptr [edi]
// 00834501  8954242c             mov dword ptr [esp + 0x2c], edx
// 00834505  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 0083450b  0530010000           add eax, 0x130
// 00834510  89542434             mov dword ptr [esp + 0x34], edx
// 00834514  8b16                 mov edx, dword ptr [esi]
// 00834516  89842490000000       mov dword ptr [esp + 0x90], eax
// 0083451d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00834520  51                   push ecx
// 00834521  8bce                 mov ecx, esi
// 00834523  ffd0                 call eax
// 00834525  8b16                 mov edx, dword ptr [esi]
// 00834527  50                   push eax
// 00834528  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0083452b  8bce                 mov ecx, esi
// 0083452d  ffd0                 call eax
// 0083452f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00834536  8b542434             mov edx, dword ptr [esp + 0x34]
// 0083453a  50                   push eax
// 0083453b  51                   push ecx
// 0083453c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00834540  83ec10               sub esp, 0x10
// 00834543  8bc4                 mov eax, esp
// 00834545  8910                 mov dword ptr [eax], edx
// 00834547  8b542454             mov edx, dword ptr [esp + 0x54]
// 0083454b  894804               mov dword ptr [eax + 4], ecx
// 0083454e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00834552  895008               mov dword ptr [eax + 8], edx
// 00834555  89480c               mov dword ptr [eax + 0xc], ecx
// 00834558  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 0083455f  8d94243c010000       lea edx, [esp + 0x13c]
// 00834566  52                   push edx
// 00834567  8b10                 mov edx, dword ptr [eax]
// 00834569  8bcf                 mov ecx, edi
// 0083456b  ffd2                 call edx
// 0083456d  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00834573  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00834579  3944244c             cmp dword ptr [esp + 0x4c], eax
// 0083457d  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00834583  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 0083458a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00834590  89942488000000       mov dword ptr [esp + 0x88], edx
// 00834597  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 0083459e  7c2b                 jl 0x8345cb
// 008345a0  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008345a6  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008345ac  89942484000000       mov dword ptr [esp + 0x84], edx
// 008345b3  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008345b9  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 008345c0  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 008345c7  8944244c             mov dword ptr [esp + 0x4c], eax
// 008345cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008345cf  8b442440             mov eax, dword ptr [esp + 0x40]
// 008345d3  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008345d6  41                   inc ecx
// 008345d7  3bc8                 cmp ecx, eax
// 008345d9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008345dd  0f8c8efeffff         jl 0x834471
// 008345e3  8b742448             mov esi, dword ptr [esp + 0x48]
// 008345e7  e924feffff           jmp 0x834410
// 008345ec  e85b36f7ff           call 0x7a7c4c
// 008345f1  68d05fa600           push 0xa65fd0
// 008345f6  8bcf                 mov ecx, edi
// 008345f8  e803dcffff           call 0x832200
// 008345fd  33c9                 xor ecx, ecx
// 008345ff  85db                 test ebx, ebx
// 00834601  0f94c1               sete cl
// 00834604  6a02                 push 2
// 00834606  8d542448             lea edx, [esp + 0x48]
// 0083460a  89442440             mov dword ptr [esp + 0x40], eax
// 0083460e  8bd9                 mov ebx, ecx
// 00834610  53                   push ebx
// 00834611  52                   push edx
// 00834612  8bc8                 mov ecx, eax
// 00834614  e817050600           call 0x894b30
// 00834619  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083461d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00834621  8d1428               lea edx, [eax + ebp]
// 00834624  8944245c             mov dword ptr [esp + 0x5c], eax
// 00834628  8b442478             mov eax, dword ptr [esp + 0x78]
// 0083462c  894c2460             mov dword ptr [esp + 0x60], ecx
// 00834630  33c9                 xor ecx, ecx
// 00834632  83ec10               sub esp, 0x10
// 00834635  89442478             mov dword ptr [esp + 0x78], eax
// 00834639  8bc4                 mov eax, esp
// 0083463b  8908                 mov dword ptr [eax], ecx
// 0083463d  898c24cc000000       mov dword ptr [esp + 0xcc], ecx
// 00834644  b905000000           mov ecx, 5
// 00834649  894804               mov dword ptr [eax + 4], ecx
// 0083464c  8b8c24cc000000       mov ecx, dword ptr [esp + 0xcc]
// 00834653  894808               mov dword ptr [eax + 8], ecx
// 00834656  83ec10               sub esp, 0x10
// 00834659  b903000000           mov ecx, 3
// 0083465e  89480c               mov dword ptr [eax + 0xc], ecx
// 00834661  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00834665  8bc4                 mov eax, esp
// 00834667  89942484000000       mov dword ptr [esp + 0x84], edx
// 0083466e  8b542464             mov edx, dword ptr [esp + 0x64]
// 00834672  8910                 mov dword ptr [eax], edx
// 00834674  8b542470             mov edx, dword ptr [esp + 0x70]
// 00834678  894804               mov dword ptr [eax + 4], ecx
// 0083467b  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0083467f  896808               mov dword ptr [eax + 8], ebp
// 00834682  89500c               mov dword ptr [eax + 0xc], edx
// 00834685  8d44247c             lea eax, [esp + 0x7c]
// 00834689  50                   push eax
// 0083468a  56                   push esi
// 0083468b  896c2474             mov dword ptr [esp + 0x74], ebp
// 0083468f  e86cfd0500           call 0x894400
// 00834694  68c05fa600           push 0xa65fc0
// 00834699  8bcf                 mov ecx, edi
// 0083469b  e860dbffff           call 0x832200
// 008346a0  6a02                 push 2
// 008346a2  53                   push ebx
// 008346a3  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 008346aa  51                   push ecx
// 008346ab  8bc8                 mov ecx, eax
// 008346ad  89442448             mov dword ptr [esp + 0x48], eax
// 008346b1  e87a040600           call 0x894b30
// 008346b6  8b10                 mov edx, dword ptr [eax]
// 008346b8  89542444             mov dword ptr [esp + 0x44], edx
// 008346bc  8b4804               mov ecx, dword ptr [eax + 4]
// 008346bf  894c2448             mov dword ptr [esp + 0x48], ecx
// 008346c3  8b4808               mov ecx, dword ptr [eax + 8]
// 008346c6  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008346ca  8b500c               mov edx, dword ptr [eax + 0xc]
// 008346cd  8bc1                 mov eax, ecx
// 008346cf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008346d3  89542450             mov dword ptr [esp + 0x50], edx
// 008346d7  8bd1                 mov edx, ecx
// 008346d9  2bd5                 sub edx, ebp
// 008346db  89942494000000       mov dword ptr [esp + 0x94], edx
// 008346e2  8b542470             mov edx, dword ptr [esp + 0x70]
// 008346e6  2bc5                 sub eax, ebp
// 008346e8  89942498000000       mov dword ptr [esp + 0x98], edx
// 008346ef  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 008346f6  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008346fa  33d2                 xor edx, edx
// 008346fc  89442444             mov dword ptr [esp + 0x44], eax
// 00834700  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00834707  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 0083470e  83ec10               sub esp, 0x10
// 00834711  8bcc                 mov ecx, esp
// 00834713  8911                 mov dword ptr [ecx], edx
// 00834715  ba05000000           mov edx, 5
// 0083471a  895104               mov dword ptr [ecx + 4], edx
// 0083471d  8b9424cc000000       mov edx, dword ptr [esp + 0xcc]
// 00834724  895108               mov dword ptr [ecx + 8], edx
// 00834727  83ec10               sub esp, 0x10
// 0083472a  ba03000000           mov edx, 3
// 0083472f  89510c               mov dword ptr [ecx + 0xc], edx
// 00834732  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00834736  8bcc                 mov ecx, esp
// 00834738  8901                 mov dword ptr [ecx], eax
// 0083473a  8b442468             mov eax, dword ptr [esp + 0x68]
// 0083473e  894104               mov dword ptr [ecx + 4], eax
// 00834741  8b442470             mov eax, dword ptr [esp + 0x70]
// 00834745  895108               mov dword ptr [ecx + 8], edx
// 00834748  89410c               mov dword ptr [ecx + 0xc], eax
// 0083474b  8d8c24b4000000       lea ecx, [esp + 0xb4]
// 00834752  51                   push ecx
// 00834753  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00834757  56                   push esi
// 00834758  e8a3fc0500           call 0x894400
// 0083475d  83bc24c400000000     cmp dword ptr [esp + 0xc4], 0
// 00834765  0f84d7020000         je 0x834a42
// 0083476b  68c860a600           push 0xa660c8
// 00834770  8bcf                 mov ecx, edi
// 00834772  e889daffff           call 0x832200
// 00834777  8bc8                 mov ecx, eax
// 00834779  89442414             mov dword ptr [esp + 0x14], eax
// 0083477d  e82e040600           call 0x894bb0
// 00834782  89442438             mov dword ptr [esp + 0x38], eax
// 00834786  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0083478a  40                   inc eax
// 0083478b  898424dc000000       mov dword ptr [esp + 0xdc], eax
// 00834792  8b442428             mov eax, dword ptr [esp + 0x28]
// 00834796  8d55ff               lea edx, [ebp - 1]
// 00834799  89542434             mov dword ptr [esp + 0x34], edx
// 0083479d  8bd0                 mov edx, eax
// 0083479f  2b542458             sub edx, dword ptr [esp + 0x58]
// 008347a3  2b442454             sub eax, dword ptr [esp + 0x54]
// 008347a7  2b542454             sub edx, dword ptr [esp + 0x54]
// 008347ab  83ec10               sub esp, 0x10
// 008347ae  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 008347b5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008347b9  03d5                 add edx, ebp
// 008347bb  899424f4000000       mov dword ptr [esp + 0xf4], edx
// 008347c2  33d2                 xor edx, edx
// 008347c4  898424f8000000       mov dword ptr [esp + 0xf8], eax
// 008347cb  8bc4                 mov eax, esp
// 008347cd  8910                 mov dword ptr [eax], edx
// 008347cf  895004               mov dword ptr [eax + 4], edx
// 008347d2  895008               mov dword ptr [eax + 8], edx
// 008347d5  89500c               mov dword ptr [eax + 0xc], edx
// 008347d8  33c9                 xor ecx, ecx
// 008347da  83ec10               sub esp, 0x10
// 008347dd  8bc4                 mov eax, esp
// 008347df  8908                 mov dword ptr [eax], ecx
// 008347e1  89942488000000       mov dword ptr [esp + 0x88], edx
// 008347e8  8b542454             mov edx, dword ptr [esp + 0x54]
// 008347ec  894804               mov dword ptr [eax + 4], ecx
// 008347ef  895008               mov dword ptr [eax + 8], edx
// 008347f2  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008347f6  894c2450             mov dword ptr [esp + 0x50], ecx
// 008347fa  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008347fe  8d9424fc000000       lea edx, [esp + 0xfc]
// 00834805  52                   push edx
// 00834806  89480c               mov dword ptr [eax + 0xc], ecx
// 00834809  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0083480d  56                   push esi
// 0083480e  e8edfb0500           call 0x894400
// 00834813  68a460a600           push 0xa660a4
// 00834818  8bcf                 mov ecx, edi
// 0083481a  e8e1d9ffff           call 0x832200
// 0083481f  8bc8                 mov ecx, eax
// 00834821  89442414             mov dword ptr [esp + 0x14], eax
// 00834825  e886030600           call 0x894bb0
// 0083482a  50                   push eax
// 0083482b  8d45ff               lea eax, [ebp - 1]
// 0083482e  50                   push eax
// 0083482f  6a00                 push 0
// 00834831  6a00                 push 0
// 00834833  8d4c243c             lea ecx, [esp + 0x3c]
// 00834837  51                   push ecx
// 00834838  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 0083483e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00834842  8b442428             mov eax, dword ptr [esp + 0x28]
// 00834846  8bd1                 mov edx, ecx
// 00834848  2bd5                 sub edx, ebp
// 0083484a  899424ec000000       mov dword ptr [esp + 0xec], edx
// 00834851  8bd0                 mov edx, eax
// 00834853  2b542458             sub edx, dword ptr [esp + 0x58]
// 00834857  2b442454             sub eax, dword ptr [esp + 0x54]
// 0083485b  2b542454             sub edx, dword ptr [esp + 0x54]
// 0083485f  49                   dec ecx
// 00834860  899424f0000000       mov dword ptr [esp + 0xf0], edx
// 00834867  898c24f4000000       mov dword ptr [esp + 0xf4], ecx
// 0083486e  33c9                 xor ecx, ecx
// 00834870  33d2                 xor edx, edx
// 00834872  83ec10               sub esp, 0x10
// 00834875  89842408010000       mov dword ptr [esp + 0x108], eax
// 0083487c  8bc4                 mov eax, esp
// 0083487e  8908                 mov dword ptr [eax], ecx
// 00834880  895004               mov dword ptr [eax + 4], edx
// 00834883  894808               mov dword ptr [eax + 8], ecx
// 00834886  89480c               mov dword ptr [eax + 0xc], ecx
// 00834889  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0083488d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00834891  83ec10               sub esp, 0x10
// 00834894  8bc4                 mov eax, esp
// 00834896  8908                 mov dword ptr [eax], ecx
// 00834898  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0083489c  895004               mov dword ptr [eax + 4], edx
// 0083489f  8b542458             mov edx, dword ptr [esp + 0x58]
// 008348a3  894808               mov dword ptr [eax + 8], ecx
// 008348a6  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008348aa  89500c               mov dword ptr [eax + 0xc], edx
// 008348ad  8d84240c010000       lea eax, [esp + 0x10c]
// 008348b4  50                   push eax
// 008348b5  56                   push esi
// 008348b6  e845fb0500           call 0x894400
// 008348bb  83fd03               cmp ebp, 3
// 008348be  0f8e7e010000         jle 0x834a42
// 008348c4  681468a600           push 0xa66814
// 008348c9  8bcf                 mov ecx, edi
// 008348cb  e830d9ffff           call 0x832200
// 008348d0  6a02                 push 2
// 008348d2  53                   push ebx
// 008348d3  8d4c2464             lea ecx, [esp + 0x64]
// 008348d7  51                   push ecx
// 008348d8  8bc8                 mov ecx, eax
// 008348da  89442420             mov dword ptr [esp + 0x20], eax
// 008348de  e84d020600           call 0x894b30
// 008348e3  8b10                 mov edx, dword ptr [eax]
// 008348e5  8954242c             mov dword ptr [esp + 0x2c], edx
// 008348e9  8b4804               mov ecx, dword ptr [eax + 4]
// 008348ec  894c2430             mov dword ptr [esp + 0x30], ecx
// 008348f0  8b4808               mov ecx, dword ptr [eax + 8]
// 008348f3  894c2434             mov dword ptr [esp + 0x34], ecx
// 008348f7  8b400c               mov eax, dword ptr [eax + 0xc]
// 008348fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008348fe  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00834905  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00834909  2bc8                 sub ecx, eax
// 0083490b  034c2428             add ecx, dword ptr [esp + 0x28]
// 0083490f  89442438             mov dword ptr [esp + 0x38], eax
// 00834913  8b442434             mov eax, dword ptr [esp + 0x34]
// 00834917  2bc2                 sub eax, edx
// 00834919  0344241c             add eax, dword ptr [esp + 0x1c]
// 0083491d  68ff00ff00           push 0xff00ff
// 00834922  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00834929  33c0                 xor eax, eax
// 0083492b  89442460             mov dword ptr [esp + 0x60], eax
// 0083492f  89442464             mov dword ptr [esp + 0x64], eax
// 00834933  89442468             mov dword ptr [esp + 0x68], eax
// 00834937  8944246c             mov dword ptr [esp + 0x6c], eax
// 0083493b  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00834942  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00834946  8d442460             lea eax, [esp + 0x60]
// 0083494a  50                   push eax
// 0083494b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0083494f  83ec10               sub esp, 0x10
// 00834952  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 00834959  8bcc                 mov ecx, esp
// 0083495b  8911                 mov dword ptr [ecx], edx
// 0083495d  8b542448             mov edx, dword ptr [esp + 0x48]
// 00834961  895104               mov dword ptr [ecx + 4], edx
// 00834964  8b542450             mov edx, dword ptr [esp + 0x50]
// 00834968  894108               mov dword ptr [ecx + 8], eax
// 0083496b  8d8424ac000000       lea eax, [esp + 0xac]
// 00834972  50                   push eax
// 00834973  89510c               mov dword ptr [ecx + 0xc], edx
// 00834976  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083497a  56                   push esi
// 0083497b  e8f0060600           call 0x895070
// 00834980  83fd03               cmp ebp, 3
// 00834983  0f8eb9000000         jle 0x834a42
// 00834989  680068a600           push 0xa66800
// 0083498e  8bcf                 mov ecx, edi
// 00834990  e86bd8ffff           call 0x832200
// 00834995  6a02                 push 2
// 00834997  53                   push ebx
// 00834998  8d4c2464             lea ecx, [esp + 0x64]
// 0083499c  8bf8                 mov edi, eax
// 0083499e  51                   push ecx
// 0083499f  8bcf                 mov ecx, edi
// 008349a1  e88a010600           call 0x894b30
// 008349a6  8b10                 mov edx, dword ptr [eax]
// 008349a8  8954242c             mov dword ptr [esp + 0x2c], edx
// 008349ac  8b5804               mov ebx, dword ptr [eax + 4]
// 008349af  895c2430             mov dword ptr [esp + 0x30], ebx
// 008349b3  8b6808               mov ebp, dword ptr [eax + 8]
// 008349b6  8bca                 mov ecx, edx
// 008349b8  2bcd                 sub ecx, ebp
// 008349ba  034c2424             add ecx, dword ptr [esp + 0x24]
// 008349be  896c2434             mov dword ptr [esp + 0x34], ebp
// 008349c2  8b400c               mov eax, dword ptr [eax + 0xc]
// 008349c5  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 008349cc  89442438             mov dword ptr [esp + 0x38], eax
// 008349d0  8bcb                 mov ecx, ebx
// 008349d2  2bc8                 sub ecx, eax
// 008349d4  8b442428             mov eax, dword ptr [esp + 0x28]
// 008349d8  03c8                 add ecx, eax
// 008349da  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 008349e1  33c0                 xor eax, eax
// 008349e3  68ff00ff00           push 0xff00ff
// 008349e8  89842400010000       mov dword ptr [esp + 0x100], eax
// 008349ef  89842404010000       mov dword ptr [esp + 0x104], eax
// 008349f6  89842408010000       mov dword ptr [esp + 0x108], eax
// 008349fd  8984240c010000       mov dword ptr [esp + 0x10c], eax
// 00834a04  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00834a0b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00834a0f  8d842400010000       lea eax, [esp + 0x100]
// 00834a16  50                   push eax
// 00834a17  83ec10               sub esp, 0x10
// 00834a1a  898c24a0000000       mov dword ptr [esp + 0xa0], ecx
// 00834a21  8bcc                 mov ecx, esp
// 00834a23  8911                 mov dword ptr [ecx], edx
// 00834a25  8b542450             mov edx, dword ptr [esp + 0x50]
// 00834a29  895904               mov dword ptr [ecx + 4], ebx
// 00834a2c  8d842498000000       lea eax, [esp + 0x98]
// 00834a33  896908               mov dword ptr [ecx + 8], ebp
// 00834a36  50                   push eax
// 00834a37  89510c               mov dword ptr [ecx + 0xc], edx
// 00834a3a  56                   push esi
// 00834a3b  8bcf                 mov ecx, edi
// 00834a3d  e82e060600           call 0x895070
// 00834a42  8b8c244c010000       mov ecx, dword ptr [esp + 0x14c]
// 00834a49  64890d00000000       mov dword ptr fs:[0], ecx
// 00834a50  59                   pop ecx
// 00834a51  5f                   pop edi
// 00834a52  5e                   pop esi
// 00834a53  5d                   pop ebp
// 00834a54  5b                   pop ebx
// 00834a55  81c444010000         add esp, 0x144
// 00834a5b  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrame@CXTPOffice2007Theme@@UAEXPAVCDC@@PAVCXTPOffice2007FrameHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp