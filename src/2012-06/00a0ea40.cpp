// roc 2012-06 00a0ea40  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 2260 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0ea40
//
// 00a0ea40  83ec6c               sub esp, 0x6c
// 00a0ea43  56                   push esi
// 00a0ea44  8bf1                 mov esi, ecx
// 00a0ea46  e8c58ef7ff           call 0x987910
// 00a0ea4b  e8443ef7ff           call 0x982894
// 00a0ea50  85c0                 test eax, eax
// 00a0ea52  7428                 je 0xa0ea7c
// 00a0ea54  8b10                 mov edx, dword ptr [eax]
// 00a0ea56  8bc8                 mov ecx, eax
// 00a0ea58  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a0ea5b  ffd0                 call eax
// 00a0ea5d  85c0                 test eax, eax
// 00a0ea5f  741b                 je 0xa0ea7c
// 00a0ea61  e82e3ef7ff           call 0x982894
// 00a0ea66  85c0                 test eax, eax
// 00a0ea68  7412                 je 0xa0ea7c
// 00a0ea6a  8b10                 mov edx, dword ptr [eax]
// 00a0ea6c  8bc8                 mov ecx, eax
// 00a0ea6e  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00a0ea71  ffd0                 call eax
// 00a0ea73  85c0                 test eax, eax
// 00a0ea75  7405                 je 0xa0ea7c
// 00a0ea77  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a0ea7a  eb02                 jmp 0xa0ea7e
// 00a0ea7c  33c0                 xor eax, eax
// 00a0ea7e  53                   push ebx
// 00a0ea7f  55                   push ebp
// 00a0ea80  57                   push edi
// 00a0ea81  68dcd0c000           push 0xc0d0dc
// 00a0ea86  50                   push eax
// 00a0ea87  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00a0ea8d  e81e6ffeff           call 0x9f59b0
// 00a0ea92  e8c9edfaff           call 0x9bd860
// 00a0ea97  d9057027b600         fld dword ptr [0xb62770]
// 00a0ea9d  51                   push ecx
// 00a0ea9e  d91c24               fstp dword ptr [esp]
// 00a0eaa1  6a2a                 push 0x2a
// 00a0eaa3  8bce                 mov ecx, esi
// 00a0eaa5  8bf8                 mov edi, eax
// 00a0eaa7  8d9edc040000         lea ebx, [esi + 0x4dc]
// 00a0eaad  e8de8df7ff           call 0x987890
// 00a0eab2  50                   push eax
// 00a0eab3  6826020000           push 0x226
// 00a0eab8  6a2a                 push 0x2a
// 00a0eaba  8bce                 mov ecx, esi
// 00a0eabc  e8cf8df7ff           call 0x987890
// 00a0eac1  50                   push eax
// 00a0eac2  6a05                 push 5
// 00a0eac4  8bce                 mov ecx, esi
// 00a0eac6  e8c58df7ff           call 0x987890
// 00a0eacb  50                   push eax
// 00a0eacc  8bcf                 mov ecx, edi
// 00a0eace  e85de4faff           call 0x9bcf30
// 00a0ead3  50                   push eax
// 00a0ead4  8bcb                 mov ecx, ebx
// 00a0ead6  e865e2faff           call 0x9bcd40
// 00a0eadb  e880edfaff           call 0x9bd860
// 00a0eae0  d9057027b600         fld dword ptr [0xb62770]
// 00a0eae6  51                   push ecx
// 00a0eae7  d91c24               fstp dword ptr [esp]
// 00a0eaea  6a0f                 push 0xf
// 00a0eaec  8bce                 mov ecx, esi
// 00a0eaee  8bd8                 mov ebx, eax
// 00a0eaf0  8dbe7c040000         lea edi, [esi + 0x47c]
// 00a0eaf6  e8958df7ff           call 0x987890
// 00a0eafb  50                   push eax
// 00a0eafc  68cd000000           push 0xcd
// 00a0eb01  6a05                 push 5
// 00a0eb03  8bce                 mov ecx, esi
// 00a0eb05  e8868df7ff           call 0x987890
// 00a0eb0a  50                   push eax
// 00a0eb0b  6a0f                 push 0xf
// 00a0eb0d  8bce                 mov ecx, esi
// 00a0eb0f  e87c8df7ff           call 0x987890
// 00a0eb14  50                   push eax
// 00a0eb15  8bcb                 mov ecx, ebx
// 00a0eb17  e814e4faff           call 0x9bcf30
// 00a0eb1c  50                   push eax
// 00a0eb1d  8bcf                 mov ecx, edi
// 00a0eb1f  e81ce2faff           call 0x9bcd40
// 00a0eb24  e837edfaff           call 0x9bd860
// 00a0eb29  d9057027b600         fld dword ptr [0xb62770]
// 00a0eb2f  51                   push ecx
// 00a0eb30  d91c24               fstp dword ptr [esp]
// 00a0eb33  68cd000000           push 0xcd
// 00a0eb38  6a05                 push 5
// 00a0eb3a  8bce                 mov ecx, esi
// 00a0eb3c  8be8                 mov ebp, eax
// 00a0eb3e  8d9e5c040000         lea ebx, [esi + 0x45c]
// 00a0eb44  e8478df7ff           call 0x987890
// 00a0eb49  50                   push eax
// 00a0eb4a  6a0f                 push 0xf
// 00a0eb4c  8bce                 mov ecx, esi
// 00a0eb4e  e83d8df7ff           call 0x987890
// 00a0eb53  50                   push eax
// 00a0eb54  8bcd                 mov ecx, ebp
// 00a0eb56  e8d5e3faff           call 0x9bcf30
// 00a0eb5b  50                   push eax
// 00a0eb5c  6a0f                 push 0xf
// 00a0eb5e  8bce                 mov ecx, esi
// 00a0eb60  e82b8df7ff           call 0x987890
// 00a0eb65  50                   push eax
// 00a0eb66  8bcb                 mov ecx, ebx
// 00a0eb68  e8d3e1faff           call 0x9bcd40
// 00a0eb6d  6a1e                 push 0x1e
// 00a0eb6f  8bce                 mov ecx, esi
// 00a0eb71  e81a8df7ff           call 0x987890
// 00a0eb76  6a1e                 push 0x1e
// 00a0eb78  8bce                 mov ecx, esi
// 00a0eb7a  898638050000         mov dword ptr [esi + 0x538], eax
// 00a0eb80  e80b8df7ff           call 0x987890
// 00a0eb85  6a10                 push 0x10
// 00a0eb87  8bce                 mov ecx, esi
// 00a0eb89  898620050000         mov dword ptr [esi + 0x520], eax
// 00a0eb8f  e8fc8cf7ff           call 0x987890
// 00a0eb94  89464c               mov dword ptr [esi + 0x4c], eax
// 00a0eb97  e8c4ecfaff           call 0x9bd860
// 00a0eb9c  d9057027b600         fld dword ptr [0xb62770]
// 00a0eba2  51                   push ecx
// 00a0eba3  d91c24               fstp dword ptr [esp]
// 00a0eba6  6826020000           push 0x226
// 00a0ebab  6a0f                 push 0xf
// 00a0ebad  8bce                 mov ecx, esi
// 00a0ebaf  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0ebb3  8daefc040000         lea ebp, [esi + 0x4fc]
// 00a0ebb9  e8d28cf7ff           call 0x987890
// 00a0ebbe  50                   push eax
// 00a0ebbf  6a05                 push 5
// 00a0ebc1  8bce                 mov ecx, esi
// 00a0ebc3  e8c88cf7ff           call 0x987890
// 00a0ebc8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0ebcc  50                   push eax
// 00a0ebcd  e85ee3faff           call 0x9bcf30
// 00a0ebd2  50                   push eax
// 00a0ebd3  6a29                 push 0x29
// 00a0ebd5  8bce                 mov ecx, esi
// 00a0ebd7  e8b48cf7ff           call 0x987890
// 00a0ebdc  50                   push eax
// 00a0ebdd  8bcd                 mov ecx, ebp
// 00a0ebdf  e85ce1faff           call 0x9bcd40
// 00a0ebe4  e877ecfaff           call 0x9bd860
// 00a0ebe9  d9057027b600         fld dword ptr [0xb62770]
// 00a0ebef  51                   push ecx
// 00a0ebf0  d91c24               fstp dword ptr [esp]
// 00a0ebf3  6a10                 push 0x10
// 00a0ebf5  8bce                 mov ecx, esi
// 00a0ebf7  89442418             mov dword ptr [esp + 0x18], eax
// 00a0ebfb  e8908cf7ff           call 0x987890
// 00a0ec00  50                   push eax
// 00a0ec01  6a33                 push 0x33
// 00a0ec03  6a10                 push 0x10
// 00a0ec05  8bce                 mov ecx, esi
// 00a0ec07  e8848cf7ff           call 0x987890
// 00a0ec0c  50                   push eax
// 00a0ec0d  6a33                 push 0x33
// 00a0ec0f  8bce                 mov ecx, esi
// 00a0ec11  e87a8cf7ff           call 0x987890
// 00a0ec16  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0ec1a  50                   push eax
// 00a0ec1b  e810e3faff           call 0x9bcf30
// 00a0ec20  50                   push eax
// 00a0ec21  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a0ec27  e814e1faff           call 0x9bcd40
// 00a0ec2c  c7864005000000000000 mov dword ptr [esi + 0x540], 0
// 00a0ec36  e825ecfaff           call 0x9bd860
// 00a0ec3b  d9057027b600         fld dword ptr [0xb62770]
// 00a0ec41  51                   push ecx
// 00a0ec42  d91c24               fstp dword ptr [esp]
// 00a0ec45  6826020000           push 0x226
// 00a0ec4a  6a0f                 push 0xf
// 00a0ec4c  8bce                 mov ecx, esi
// 00a0ec4e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0ec52  e8398cf7ff           call 0x987890
// 00a0ec57  50                   push eax
// 00a0ec58  6a05                 push 5
// 00a0ec5a  8bce                 mov ecx, esi
// 00a0ec5c  e82f8cf7ff           call 0x987890
// 00a0ec61  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0ec65  50                   push eax
// 00a0ec66  e8c5e2faff           call 0x9bcf30
// 00a0ec6b  50                   push eax
// 00a0ec6c  6a29                 push 0x29
// 00a0ec6e  8bce                 mov ecx, esi
// 00a0ec70  e81b8cf7ff           call 0x987890
// 00a0ec75  50                   push eax
// 00a0ec76  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00a0ec7c  e8bfe0faff           call 0x9bcd40
// 00a0ec81  e8daebfaff           call 0x9bd860
// 00a0ec86  6a46                 push 0x46
// 00a0ec88  6a05                 push 5
// 00a0ec8a  8bce                 mov ecx, esi
// 00a0ec8c  89442418             mov dword ptr [esp + 0x18], eax
// 00a0ec90  e8fb8bf7ff           call 0x987890
// 00a0ec95  50                   push eax
// 00a0ec96  6a0f                 push 0xf
// 00a0ec98  8bce                 mov ecx, esi
// 00a0ec9a  e8f18bf7ff           call 0x987890
// 00a0ec9f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0eca3  50                   push eax
// 00a0eca4  e887e2faff           call 0x9bcf30
// 00a0eca9  89862c050000         mov dword ptr [esi + 0x52c], eax
// 00a0ecaf  e8acebfaff           call 0x9bd860
// 00a0ecb4  8b4858               mov ecx, dword ptr [eax + 0x58]
// 00a0ecb7  83c050               add eax, 0x50
// 00a0ecba  83f9ff               cmp ecx, -1
// 00a0ecbd  7505                 jne 0xa0ecc4
// 00a0ecbf  8b4004               mov eax, dword ptr [eax + 4]
// 00a0ecc2  eb02                 jmp 0xa0ecc6
// 00a0ecc4  8bc1                 mov eax, ecx
// 00a0ecc6  8986fc030000         mov dword ptr [esi + 0x3fc], eax
// 00a0eccc  e88febfaff           call 0x9bd860
// 00a0ecd1  6a00                 push 0
// 00a0ecd3  8bc8                 mov ecx, eax
// 00a0ecd5  e8c6e4faff           call 0x9bd1a0
// 00a0ecda  85c0                 test eax, eax
// 00a0ecdc  7448                 je 0xa0ed26
// 00a0ecde  6a0f                 push 0xf
// 00a0ece0  8bce                 mov ecx, esi
// 00a0ece2  e8a98bf7ff           call 0x987890
// 00a0ece7  50                   push eax
// 00a0ece8  8bcf                 mov ecx, edi
// 00a0ecea  e8c1eafaff           call 0x9bd7b0
// 00a0ecef  6a0f                 push 0xf
// 00a0ecf1  8bce                 mov ecx, esi
// 00a0ecf3  e8988bf7ff           call 0x987890
// 00a0ecf8  50                   push eax
// 00a0ecf9  8bcb                 mov ecx, ebx
// 00a0ecfb  e8b0eafaff           call 0x9bd7b0
// 00a0ed00  6a0f                 push 0xf
// 00a0ed02  8bce                 mov ecx, esi
// 00a0ed04  e8878bf7ff           call 0x987890
// 00a0ed09  50                   push eax
// 00a0ed0a  8bcd                 mov ecx, ebp
// 00a0ed0c  e89feafaff           call 0x9bd7b0
// 00a0ed11  6a0f                 push 0xf
// 00a0ed13  8bce                 mov ecx, esi
// 00a0ed15  e8768bf7ff           call 0x987890
// 00a0ed1a  50                   push eax
// 00a0ed1b  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a0ed21  e88aeafaff           call 0x9bd7b0
// 00a0ed26  8bce                 mov ecx, esi
// 00a0ed28  e8238bf7ff           call 0x987850
// 00a0ed2d  48                   dec eax
// 00a0ed2e  83f804               cmp eax, 4
// 00a0ed31  0f878a050000         ja 0xa0f2c1
// 00a0ed37  ff248500f3a000       jmp dword ptr [eax*4 + 0xa0f300]
// 00a0ed3e  d9057027b600         fld dword ptr [0xb62770]
// 00a0ed44  51                   push ecx
// 00a0ed45  d91c24               fstp dword ptr [esp]
// 00a0ed48  68c4dafa00           push 0xfadac4
// 00a0ed4d  689ebef500           push 0xf5be9e
// 00a0ed52  8bcb                 mov ecx, ebx
// 00a0ed54  e8e7dffaff           call 0x9bcd40
// 00a0ed59  d9058885b600         fld dword ptr [0xb68588]
// 00a0ed5f  51                   push ecx
// 00a0ed60  d91c24               fstp dword ptr [esp]
// 00a0ed63  6881a9e200           push 0xe2a981
// 00a0ed68  68ddecfe00           push 0xfeecdd
// 00a0ed6d  8bcf                 mov ecx, edi
// 00a0ed6f  c786200500003b619c00 mov dword ptr [esi + 0x520], 0x9c613b
// 00a0ed79  e8c2dffaff           call 0x9bcd40
// 00a0ed7e  d9057027b600         fld dword ptr [0xb62770]
// 00a0ed84  51                   push ecx
// 00a0ed85  d91c24               fstp dword ptr [esp]
// 00a0ed88  6893b5e700           push 0xe7b593
// 00a0ed8d  68e3efff00           push 0xffefe3
// 00a0ed92  8bcd                 mov ecx, ebp
// 00a0ed94  c7464c2a66c900       mov dword ptr [esi + 0x4c], 0xc9662a
// 00a0ed9b  e8a0dffaff           call 0x9bcd40
// 00a0eda0  d9058885b600         fld dword ptr [0xb68588]
// 00a0eda6  51                   push ecx
// 00a0eda7  d91c24               fstp dword ptr [esp]
// 00a0edaa  6800359100           push 0x913500
// 00a0edaf  6875a6f100           push 0xf1a675
// 00a0edb4  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a0edba  e881dffaff           call 0x9bcd40
// 00a0edbf  d9057027b600         fld dword ptr [0xb62770]
// 00a0edc5  51                   push ecx
// 00a0edc6  d91c24               fstp dword ptr [esp]
// 00a0edc9  6879a1dc00           push 0xdca179
// 00a0edce  68cbddf600           push 0xf6ddcb
// 00a0edd3  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00a0edd9  e862dffaff           call 0x9bcd40
// 00a0edde  d9057027b600         fld dword ptr [0xb62770]
// 00a0ede4  51                   push ecx
// 00a0ede5  d91c24               fstp dword ptr [esp]
// 00a0ede8  6881a9e200           push 0xe2a981
// 00a0eded  68e3effe00           push 0xfeefe3
// 00a0edf2  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00a0edf8  e843dffaff           call 0x9bcd40
// 00a0edfd  d9057027b600         fld dword ptr [0xb62770]
// 00a0ee03  51                   push ecx
// 00a0ee04  d91c24               fstp dword ptr [esp]
// 00a0ee07  68617aac00           push 0xac7a61
// 00a0ee0c  68e9ecf200           push 0xf2ece9
// 00a0ee11  8d4e28               lea ecx, [esi + 0x28]
// 00a0ee14  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 00a0ee1e  c74620161e3600       mov dword ptr [esi + 0x20], 0x361e16
// 00a0ee25  c78638050000a9c7f000 mov dword ptr [esi + 0x538], 0xf0c7a9
// 00a0ee2f  e80cdffaff           call 0x9bcd40
// 00a0ee34  b800008000           mov eax, 0x800000
// 00a0ee39  c786e4030000cbe1fc00 mov dword ptr [esi + 0x3e4], 0xfce1cb
// 00a0ee43  c786cc030000d8e7fc00 mov dword ptr [esi + 0x3cc], 0xfce7d8
// 00a0ee4d  c786d80300009ebef500 mov dword ptr [esi + 0x3d8], 0xf5be9e
// 00a0ee57  c786f80100009099ae00 mov dword ptr [esi + 0x1f8], 0xae9990
// 00a0ee61  c78608040000bdd3f700 mov dword ptr [esi + 0x408], 0xf7d3bd
// 00a0ee6b  c744244826000000     mov dword ptr [esp + 0x48], 0x26
// 00a0ee73  c744244c27000000     mov dword ptr [esp + 0x4c], 0x27
// 00a0ee7b  c744245028000000     mov dword ptr [esp + 0x50], 0x28
// 00a0ee83  c744245429000000     mov dword ptr [esp + 0x54], 0x29
// 00a0ee8b  c74424582b000000     mov dword ptr [esp + 0x58], 0x2b
// 00a0ee93  c744245c1f000000     mov dword ptr [esp + 0x5c], 0x1f
// 00a0ee9b  c744246020000000     mov dword ptr [esp + 0x60], 0x20
// 00a0eea3  c744246432000000     mov dword ptr [esp + 0x64], 0x32
// 00a0eeab  c744246825000000     mov dword ptr [esp + 0x68], 0x25
// 00a0eeb3  c744246c21000000     mov dword ptr [esp + 0x6c], 0x21
// 00a0eebb  c744247024000000     mov dword ptr [esp + 0x70], 0x24
// 00a0eec3  c74424741e000000     mov dword ptr [esp + 0x74], 0x1e
// 00a0eecb  c74424782f000000     mov dword ptr [esp + 0x78], 0x2f
// 00a0eed3  c744241427417600     mov dword ptr [esp + 0x14], 0x764127
// 00a0eedb  c74424186a8ccb00     mov dword ptr [esp + 0x18], 0xcb8c6a
// 00a0eee3  c744241c6d96d000     mov dword ptr [esp + 0x1c], 0xd0966d
// 00a0eeeb  c7442420f6f6f600     mov dword ptr [esp + 0x20], 0xf6f6f6
// 00a0eef3  c7442424002d9600     mov dword ptr [esp + 0x24], 0x962d00
// 00a0eefb  c7442428ffeec200     mov dword ptr [esp + 0x28], 0xc2eeff
// 00a0ef03  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a0ef07  89442430             mov dword ptr [esp + 0x30], eax
// 00a0ef0b  8d4c2414             lea ecx, [esp + 0x14]
// 00a0ef0f  51                   push ecx
// 00a0ef10  8d54244c             lea edx, [esp + 0x4c]
// 00a0ef14  89442438             mov dword ptr [esp + 0x38], eax
// 00a0ef18  c744243cfe803e00     mov dword ptr [esp + 0x3c], 0x3e80fe
// 00a0ef20  c7442440ffc06f00     mov dword ptr [esp + 0x40], 0x6fc0ff
// 00a0ef28  c7442444c4dbf900     mov dword ptr [esp + 0x44], 0xf9dbc4
// 00a0ef30  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00a0ef38  52                   push edx
// 00a0ef39  e970030000           jmp 0xa0f2ae
// 00a0ef3e  d9057027b600         fld dword ptr [0xb62770]
// 00a0ef44  51                   push ecx
// 00a0ef45  d91c24               fstp dword ptr [esp]
// 00a0ef48  68f2f1e400           push 0xe4f1f2
// 00a0ef4d  68d9d9a700           push 0xa7d9d9
// 00a0ef52  8bcb                 mov ecx, ebx
// 00a0ef54  e8e7ddfaff           call 0x9bcd40
// 00a0ef59  d9056032b600         fld dword ptr [0xb63260]
// 00a0ef5f  51                   push ecx
// 00a0ef60  d91c24               fstp dword ptr [esp]
// 00a0ef63  68b7c69100           push 0x91c6b7
// 00a0ef68  68f4f7de00           push 0xdef7f4
// 00a0ef6d  8bcf                 mov ecx, edi
// 00a0ef6f  e8ccddfaff           call 0x9bcd40
// 00a0ef74  d9057027b600         fld dword ptr [0xb62770]
// 00a0ef7a  51                   push ecx
// 00a0ef7b  d91c24               fstp dword ptr [esp]
// 00a0ef7e  68c2ce9f00           push 0x9fcec2
// 00a0ef83  bf60805800           mov edi, 0x588060
// 00a0ef88  68ecf0d500           push 0xd5f0ec
// 00a0ef8d  8bcd                 mov ecx, ebp
// 00a0ef8f  89be20050000         mov dword ptr [esi + 0x520], edi
// 00a0ef95  c7464c74865e00       mov dword ptr [esi + 0x4c], 0x5e8674
// 00a0ef9c  e89fddfaff           call 0x9bcd40
// 00a0efa1  d9056032b600         fld dword ptr [0xb63260]
// 00a0efa7  51                   push ecx
// 00a0efa8  d91c24               fstp dword ptr [esp]
// 00a0efab  6860776b00           push 0x6b7760
// 00a0efb0  68b0c28c00           push 0x8cc2b0
// 00a0efb5  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a0efbb  e880ddfaff           call 0x9bcd40
// 00a0efc0  d9056032b600         fld dword ptr [0xb63260]
// 00a0efc6  51                   push ecx
// 00a0efc7  d91c24               fstp dword ptr [esp]
// 00a0efca  68a4b47800           push 0x78b4a4
// 00a0efcf  68e6e6d100           push 0xd1e6e6
// 00a0efd4  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00a0efda  e861ddfaff           call 0x9bcd40
// 00a0efdf  d9057027b600         fld dword ptr [0xb62770]
// 00a0efe5  51                   push ecx
// 00a0efe6  d91c24               fstp dword ptr [esp]
// 00a0efe9  68b8c69300           push 0x93c6b8
// 00a0efee  68ecf0d500           push 0xd5f0ec
// 00a0eff3  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00a0eff9  e842ddfaff           call 0x9bcd40
// 00a0effe  d9057027b600         fld dword ptr [0xb62770]
// 00a0f004  51                   push ecx
// 00a0f005  d91c24               fstp dword ptr [esp]
// 00a0f008  6883907100           push 0x719083
// 00a0f00d  68f3f4f000           push 0xf0f4f3
// 00a0f012  8d4e28               lea ecx, [esi + 0x28]
// 00a0f015  c7862c050000d3d3d300 mov dword ptr [esi + 0x52c], 0xd3d3d3
// 00a0f01f  c746201f221900       mov dword ptr [esi + 0x20], 0x19221f
// 00a0f026  e815ddfaff           call 0x9bcd40
// 00a0f02b  b83f5d3800           mov eax, 0x385d3f
// 00a0f030  89442460             mov dword ptr [esp + 0x60], eax
// 00a0f034  89442464             mov dword ptr [esp + 0x64], eax
// 00a0f038  89442468             mov dword ptr [esp + 0x68], eax
// 00a0f03c  8d442448             lea eax, [esp + 0x48]
// 00a0f040  50                   push eax
// 00a0f041  8d4c2418             lea ecx, [esp + 0x18]
// 00a0f045  c78638050000c5d49f00 mov dword ptr [esi + 0x538], 0x9fd4c5
// 00a0f04f  c786e4030000d8e3b600 mov dword ptr [esi + 0x3e4], 0xb6e3d8
// 00a0f059  c786cc030000e2e7bf00 mov dword ptr [esi + 0x3cc], 0xbfe7e2
// 00a0f063  c786d8030000abc08a00 mov dword ptr [esi + 0x3d8], 0x8ac0ab
// 00a0f06d  c786f801000097a07b00 mov dword ptr [esi + 0x1f8], 0x7ba097
// 00a0f077  c78608040000dee3bd00 mov dword ptr [esi + 0x408], 0xbde3de
// 00a0f081  c744244c515e3300     mov dword ptr [esp + 0x4c], 0x335e51
// 00a0f089  897c2450             mov dword ptr [esp + 0x50], edi
// 00a0f08d  c74424549fae7a00     mov dword ptr [esp + 0x54], 0x7aae9f
// 00a0f095  c7442458f4f4ee00     mov dword ptr [esp + 0x58], 0xeef4f4
// 00a0f09d  c744245c758d5e00     mov dword ptr [esp + 0x5c], 0x5e8d75
// 00a0f0a5  c7442478d1dead00     mov dword ptr [esp + 0x78], 0xadded1
// 00a0f0ad  51                   push ecx
// 00a0f0ae  e970010000           jmp 0xa0f223
// 00a0f0b3  d9057027b600         fld dword ptr [0xb62770]
// 00a0f0b9  51                   push ecx
// 00a0f0ba  d91c24               fstp dword ptr [esp]
// 00a0f0bd  68f3f3f700           push 0xf7f3f3
// 00a0f0c2  68d7d7e500           push 0xe5d7d7
// 00a0f0c7  8bcb                 mov ecx, ebx
// 00a0f0c9  e872dcfaff           call 0x9bcd40
// 00a0f0ce  d9058885b600         fld dword ptr [0xb68588]
// 00a0f0d4  51                   push ecx
// 00a0f0d5  d91c24               fstp dword ptr [esp]
// 00a0f0d8  689c9bb700           push 0xb79b9c
// 00a0f0dd  bb7c7c9400           mov ebx, 0x947c7c
// 00a0f0e2  68f9f9ff00           push 0xfff9f9
// 00a0f0e7  8bcf                 mov ecx, edi
// 00a0f0e9  899e20050000         mov dword ptr [esi + 0x520], ebx
// 00a0f0ef  e84cdcfaff           call 0x9bcd40
// 00a0f0f4  d9057027b600         fld dword ptr [0xb62770]
// 00a0f0fa  51                   push ecx
// 00a0f0fb  d91c24               fstp dword ptr [esp]
// 00a0f0fe  68bab9cd00           push 0xcdb9ba
// 00a0f103  68e9e7f100           push 0xf1e7e9
// 00a0f108  8bcd                 mov ecx, ebp
// 00a0f10a  c7464c7a799900       mov dword ptr [esi + 0x4c], 0x99797a
// 00a0f111  e82adcfaff           call 0x9bcd40
// 00a0f116  d9058885b600         fld dword ptr [0xb68588]
// 00a0f11c  51                   push ecx
// 00a0f11d  d91c24               fstp dword ptr [esp]
// 00a0f120  6876749200           push 0x927476
// 00a0f125  68b3b2c800           push 0xc8b2b3
// 00a0f12a  8d8e9c040000         lea ecx, [esi + 0x49c]
// 00a0f130  e80bdcfaff           call 0x9bcd40
// 00a0f135  d9057027b600         fld dword ptr [0xb62770]
// 00a0f13b  51                   push ecx
// 00a0f13c  d91c24               fstp dword ptr [esp]
// 00a0f13f  688583a200           push 0xa28385
// 00a0f144  68d7d7e200           push 0xe2d7d7
// 00a0f149  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00a0f14f  e8ecdbfaff           call 0x9bcd40
// 00a0f154  d9057027b600         fld dword ptr [0xb62770]
// 00a0f15a  51                   push ecx
// 00a0f15b  d91c24               fstp dword ptr [esp]
// 00a0f15e  68b0aec500           push 0xc5aeb0
// 00a0f163  68e8e8f100           push 0xf1e8e8
// 00a0f168  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00a0f16e  e8cddbfaff           call 0x9bcd40
// 00a0f173  d9057027b600         fld dword ptr [0xb62770]
// 00a0f179  51                   push ecx
// 00a0f17a  d91c24               fstp dword ptr [esp]
// 00a0f17d  687a799900           push 0x99797a
// 00a0f182  68f7f5f900           push 0xf9f5f7
// 00a0f187  8d4e28               lea ecx, [esi + 0x28]
// 00a0f18a  c7862c050000eceada00 mov dword ptr [esi + 0x52c], 0xdaeaec
// 00a0f194  c7462024202900       mov dword ptr [esi + 0x20], 0x292024
// 00a0f19b  e8a0dbfaff           call 0x9bcd40
// 00a0f1a0  b84b4b6f00           mov eax, 0x6f4b4b
// 00a0f1a5  8d542448             lea edx, [esp + 0x48]
// 00a0f1a9  89442460             mov dword ptr [esp + 0x60], eax
// 00a0f1ad  89442464             mov dword ptr [esp + 0x64], eax
// 00a0f1b1  89442468             mov dword ptr [esp + 0x68], eax
// 00a0f1b5  52                   push edx
// 00a0f1b6  8d442418             lea eax, [esp + 0x18]
// 00a0f1ba  c78638050000c0c0d300 mov dword ptr [esi + 0x538], 0xd3c0c0
// 00a0f1c4  c786e4030000d6d3e700 mov dword ptr [esi + 0x3e4], 0xe7d3d6
// 00a0f1ce  c786cc030000dfdfea00 mov dword ptr [esi + 0x3cc], 0xeadfdf
// 00a0f1d8  c786d8030000b1b0c300 mov dword ptr [esi + 0x3d8], 0xc3b0b1
// 00a0f1e2  c786f80100009b9ab300 mov dword ptr [esi + 0x1f8], 0xb39a9b
// 00a0f1ec  c78608040000d6d7e700 mov dword ptr [esi + 0x408], 0xe7d7d6
// 00a0f1f6  c744244c54547500     mov dword ptr [esp + 0x4c], 0x755454
// 00a0f1fe  c74424506e6d8f00     mov dword ptr [esp + 0x50], 0x8f6d6e
// 00a0f206  c7442454a8a7be00     mov dword ptr [esp + 0x54], 0xbea7a8
// 00a0f20e  c7442458fdfaff00     mov dword ptr [esp + 0x58], 0xfffafd
// 00a0f216  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a0f21a  c7442478dbdae400     mov dword ptr [esp + 0x78], 0xe4dadb
// 00a0f222  50                   push eax
// 00a0f223  c74424301f000000     mov dword ptr [esp + 0x30], 0x1f
// 00a0f22b  c744242c2b000000     mov dword ptr [esp + 0x2c], 0x2b
// 00a0f233  c744242829000000     mov dword ptr [esp + 0x28], 0x29
// 00a0f23b  c744242428000000     mov dword ptr [esp + 0x24], 0x28
// 00a0f243  c744242027000000     mov dword ptr [esp + 0x20], 0x27
// 00a0f24b  c744241c26000000     mov dword ptr [esp + 0x1c], 0x26
// 00a0f253  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a0f25e  c7442478ffc06f00     mov dword ptr [esp + 0x78], 0x6fc0ff
// 00a0f266  c7442474fe803e00     mov dword ptr [esp + 0x74], 0x3e80fe
// 00a0f26e  c7442464ffeec200     mov dword ptr [esp + 0x64], 0xc2eeff
// 00a0f276  c744244c2f000000     mov dword ptr [esp + 0x4c], 0x2f
// 00a0f27e  c74424481e000000     mov dword ptr [esp + 0x48], 0x1e
// 00a0f286  c744244424000000     mov dword ptr [esp + 0x44], 0x24
// 00a0f28e  c744244021000000     mov dword ptr [esp + 0x40], 0x21
// 00a0f296  c744243c32000000     mov dword ptr [esp + 0x3c], 0x32
// 00a0f29e  c744243825000000     mov dword ptr [esp + 0x38], 0x25
// 00a0f2a6  c744243420000000     mov dword ptr [esp + 0x34], 0x20
// 00a0f2ae  6a0d                 push 0xd
// 00a0f2b0  8bce                 mov ecx, esi
// 00a0f2b2  e80986f7ff           call 0x9878c0
// 00a0f2b7  c7864005000001000000 mov dword ptr [esi + 0x540], 1
// 00a0f2c1  83be4005000000       cmp dword ptr [esi + 0x540], 0
// 00a0f2c8  5f                   pop edi
// 00a0f2c9  5d                   pop ebp
// 00a0f2ca  5b                   pop ebx
// 00a0f2cb  7428                 je 0xa0f2f5
// 00a0f2cd  b88d8d8d00           mov eax, 0x8d8d8d
// 00a0f2d2  898620040000         mov dword ptr [esi + 0x420], eax
// 00a0f2d8  898638040000         mov dword ptr [esi + 0x438], eax
// 00a0f2de  89860c030000         mov dword ptr [esi + 0x30c], eax
// 00a0f2e4  8b4650               mov eax, dword ptr [esi + 0x50]
// 00a0f2e7  83f8ff               cmp eax, -1
// 00a0f2ea  7503                 jne 0xa0f2ef
// 00a0f2ec  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00a0f2ef  898644040000         mov dword ptr [esi + 0x444], eax
// 00a0f2f5  8bce                 mov ecx, esi
// 00a0f2f7  5e                   pop esi
// 00a0f2f8  83c46c               add esp, 0x6c
// 00a0f2fb  e950e8ffff           jmp 0xa0db50
// 00a0f300  3eed                 in eax, dx
// 00a0f302  a0003eefa0           mov al, byte ptr [0xa0ef3e00]
// 00a0f307  00b3f0a0003e         add byte ptr [ebx + 0x3e00a0f0], dh
// 00a0f30d  ed                   in eax, dx
// 00a0f30e  a0003eeda0           mov al, byte ptr [0xa0ed3e00]
// copied from an identical function in another client (function ?RefreshMetrics@CXTPOffice2003Theme@XTPPaintThemes@@MAEXXZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPOffice2003Theme.cpp