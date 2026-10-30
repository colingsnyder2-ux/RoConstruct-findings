// roc 2011-06 0081cc80  unit: CXTPCommandBar  size: 1336 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081cc80
//
// 0081cc80  83ec40               sub esp, 0x40
// 0081cc83  53                   push ebx
// 0081cc84  55                   push ebp
// 0081cc85  56                   push esi
// 0081cc86  8bf1                 mov esi, ecx
// 0081cc88  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 0081cc8f  57                   push edi
// 0081cc90  750d                 jne 0x81cc9f
// 0081cc92  bf01000000           mov edi, 1
// 0081cc97  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 0081cc9d  7402                 je 0x81cca1
// 0081cc9f  33ff                 xor edi, edi
// 0081cca1  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0081cca5  85db                 test ebx, ebx
// 0081cca7  7405                 je 0x81ccae
// 0081cca9  83fb01               cmp ebx, 1
// 0081ccac  7505                 jne 0x81ccb3
// 0081ccae  e8ddeaffff           call 0x81b790
// 0081ccb3  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081ccb9  83cdff               or ebp, 0xffffffff
// 0081ccbc  3bc5                 cmp eax, ebp
// 0081ccbe  741e                 je 0x81ccde
// 0081ccc0  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 0081ccc6  7516                 jne 0x81ccde
// 0081ccc8  85ff                 test edi, edi
// 0081ccca  7412                 je 0x81ccde
// 0081cccc  85db                 test ebx, ebx
// 0081ccce  0f84b5040000         je 0x81d189
// 0081ccd4  83fb01               cmp ebx, 1
// 0081ccd7  7561                 jne 0x81cd3a
// 0081ccd9  8d5d03               lea ebx, [ebp + 3]
// 0081ccdc  eb6a                 jmp 0x81cd48
// 0081ccde  83fb02               cmp ebx, 2
// 0081cce1  7557                 jne 0x81cd3a
// 0081cce3  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0081cce9  0f85a8020000         jne 0x81cf97
// 0081ccef  3bc5                 cmp eax, ebp
// 0081ccf1  7455                 je 0x81cd48
// 0081ccf3  85ff                 test edi, edi
// 0081ccf5  7510                 jne 0x81cd07
// 0081ccf7  8b06                 mov eax, dword ptr [esi]
// 0081ccf9  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 0081ccff  8bce                 mov ecx, esi
// 0081cd01  ffd2                 call edx
// 0081cd03  85c0                 test eax, eax
// 0081cd05  7541                 jne 0x81cd48
// 0081cd07  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081cd0d  50                   push eax
// 0081cd0e  8bce                 mov ecx, esi
// 0081cd10  e80bebffff           call 0x81b820
// 0081cd15  50                   push eax
// 0081cd16  e845370300           call 0x850460
// 0081cd1b  50                   push eax
// 0081cd1c  e81bd7feff           call 0x80a43c
// 0081cd21  83c408               add esp, 8
// 0081cd24  85c0                 test eax, eax
// 0081cd26  7420                 je 0x81cd48
// 0081cd28  8bc8                 mov ecx, eax
// 0081cd2a  e86101c5ff           call 0x46ce90
// 0081cd2f  85c0                 test eax, eax
// 0081cd31  7415                 je 0x81cd48
// 0081cd33  bb03000000           mov ebx, 3
// 0081cd38  eb0e                 jmp 0x81cd48
// 0081cd3a  83fb03               cmp ebx, 3
// 0081cd3d  7409                 je 0x81cd48
// 0081cd3f  83fb02               cmp ebx, 2
// 0081cd42  0f854f020000         jne 0x81cf97
// 0081cd48  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0081cd4e  0f8543020000         jne 0x81cf97
// 0081cd54  85ff                 test edi, edi
// 0081cd56  750d                 jne 0x81cd65
// 0081cd58  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0081cd5f  0f8532020000         jne 0x81cf97
// 0081cd65  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081cd6b  33c9                 xor ecx, ecx
// 0081cd6d  83fb03               cmp ebx, 3
// 0081cd70  0f94c1               sete cl
// 0081cd73  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0081cd77  8bf9                 mov edi, ecx
// 0081cd79  897c2454             mov dword ptr [esp + 0x54], edi
// 0081cd7d  3bc5                 cmp eax, ebp
// 0081cd7f  753b                 jne 0x81cdbc
// 0081cd81  8b1e                 mov ebx, dword ptr [esi]
// 0081cd83  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081cd89  8bd7                 mov edx, edi
// 0081cd8b  81c350010000         add ebx, 0x150
// 0081cd91  f7da                 neg edx
// 0081cd93  1bd2                 sbb edx, edx
// 0081cd95  83c203               add edx, 3
// 0081cd98  52                   push edx
// 0081cd99  6a01                 push 1
// 0081cd9b  6a00                 push 0
// 0081cd9d  6a01                 push 1
// 0081cd9f  57                   push edi
// 0081cda0  55                   push ebp
// 0081cda1  e80aa10300           call 0x856eb0
// 0081cda6  50                   push eax
// 0081cda7  8b03                 mov eax, dword ptr [ebx]
// 0081cda9  8bce                 mov ecx, esi
// 0081cdab  ffd0                 call eax
// 0081cdad  5f                   pop edi
// 0081cdae  5e                   pop esi
// 0081cdaf  5d                   pop ebp
// 0081cdb0  b801000000           mov eax, 1
// 0081cdb5  5b                   pop ebx
// 0081cdb6  83c440               add esp, 0x40
// 0081cdb9  c20400               ret 4
// 0081cdbc  50                   push eax
// 0081cdbd  8bce                 mov ecx, esi
// 0081cdbf  e85ceaffff           call 0x81b820
// 0081cdc4  50                   push eax
// 0081cdc5  e896360300           call 0x850460
// 0081cdca  50                   push eax
// 0081cdcb  e86cd6feff           call 0x80a43c
// 0081cdd0  83c408               add esp, 8
// 0081cdd3  85c0                 test eax, eax
// 0081cdd5  7427                 je 0x81cdfe
// 0081cdd7  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 0081cddd  3bcd                 cmp ecx, ebp
// 0081cddf  7513                 jne 0x81cdf4
// 0081cde1  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 0081cde7  85c0                 test eax, eax
// 0081cde9  7409                 je 0x81cdf4
// 0081cdeb  8bc8                 mov ecx, eax
// 0081cded  e86efefeff           call 0x80cc60
// 0081cdf2  eb02                 jmp 0x81cdf6
// 0081cdf4  8bc1                 mov eax, ecx
// 0081cdf6  85c0                 test eax, eax
// 0081cdf8  0f8599010000         jne 0x81cf97
// 0081cdfe  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0081ce04  51                   push ecx
// 0081ce05  8bce                 mov ecx, esi
// 0081ce07  e814eaffff           call 0x81b820
// 0081ce0c  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 0081ce12  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 0081ce18  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 0081ce1e  89542410             mov dword ptr [esp + 0x10], edx
// 0081ce22  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 0081ce28  894c2414             mov dword ptr [esp + 0x14], ecx
// 0081ce2c  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 0081ce32  89542418             mov dword ptr [esp + 0x18], edx
// 0081ce36  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0081ce3c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0081ce40  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 0081ce46  89542420             mov dword ptr [esp + 0x20], edx
// 0081ce4a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0081ce50  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 0081ce56  33db                 xor ebx, ebx
// 0081ce58  894c2424             mov dword ptr [esp + 0x24], ecx
// 0081ce5c  89542428             mov dword ptr [esp + 0x28], edx
// 0081ce60  8944242c             mov dword ptr [esp + 0x2c], eax
// 0081ce64  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081ce6a  6a01                 push 1
// 0081ce6c  6a00                 push 0
// 0081ce6e  6a01                 push 1
// 0081ce70  57                   push edi
// 0081ce71  55                   push ebp
// 0081ce72  e839a00300           call 0x856eb0
// 0081ce77  8be8                 mov ebp, eax
// 0081ce79  55                   push ebp
// 0081ce7a  8bce                 mov ecx, esi
// 0081ce7c  e89fe9ffff           call 0x81b820
// 0081ce81  8bf8                 mov edi, eax
// 0081ce83  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0081ce89  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 0081ce8f  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 0081ce95  89542448             mov dword ptr [esp + 0x48], edx
// 0081ce99  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 0081ce9f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0081cea3  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 0081cea9  89542430             mov dword ptr [esp + 0x30], edx
// 0081cead  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0081ceb1  8b8fb4000000         mov ecx, dword ptr [edi + 0xb4]
// 0081ceb7  894c2434             mov dword ptr [esp + 0x34], ecx
// 0081cebb  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 0081cec1  89542438             mov dword ptr [esp + 0x38], edx
// 0081cec5  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 0081cecb  8954243c             mov dword ptr [esp + 0x3c], edx
// 0081cecf  85db                 test ebx, ebx
// 0081ced1  0f8493000000         je 0x81cf6a
// 0081ced7  398bb4000000         cmp dword ptr [ebx + 0xb4], ecx
// 0081cedd  755c                 jne 0x81cf3b
// 0081cedf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0081cee3  7f2e                 jg 0x81cf13
// 0081cee5  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0081ceeb  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 0081cef1  3bc1                 cmp eax, ecx
// 0081cef3  89542444             mov dword ptr [esp + 0x44], edx
// 0081cef7  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 0081cefd  89542448             mov dword ptr [esp + 0x48], edx
// 0081cf01  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 0081cf07  8954244c             mov dword ptr [esp + 0x4c], edx
// 0081cf0b  7f72                 jg 0x81cf7f
// 0081cf0d  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0081cf11  7c28                 jl 0x81cf3b
// 0081cf13  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 0081cf19  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 0081cf1f  3bc8                 cmp ecx, eax
// 0081cf21  89542444             mov dword ptr [esp + 0x44], edx
// 0081cf25  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 0081cf2b  89542448             mov dword ptr [esp + 0x48], edx
// 0081cf2f  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 0081cf35  8954244c             mov dword ptr [esp + 0x4c], edx
// 0081cf39  7f44                 jg 0x81cf7f
// 0081cf3b  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 0081cf41  8b16                 mov edx, dword ptr [esi]
// 0081cf43  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 0081cf49  33c0                 xor eax, eax
// 0081cf4b  39442454             cmp dword ptr [esp + 0x54], eax
// 0081cf4f  0f9ec0               setle al
// 0081cf52  83c002               add eax, 2
// 0081cf55  50                   push eax
// 0081cf56  51                   push ecx
// 0081cf57  8bce                 mov ecx, esi
// 0081cf59  ffd2                 call edx
// 0081cf5b  5f                   pop edi
// 0081cf5c  5e                   pop esi
// 0081cf5d  5d                   pop ebp
// 0081cf5e  b801000000           mov eax, 1
// 0081cf63  5b                   pop ebx
// 0081cf64  83c440               add esp, 0x40
// 0081cf67  c20400               ret 4
// 0081cf6a  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0081cf6e  7411                 je 0x81cf81
// 0081cf70  8d442430             lea eax, [esp + 0x30]
// 0081cf74  50                   push eax
// 0081cf75  ff15641ca400         call dword ptr [0xa41c64]
// 0081cf7b  85c0                 test eax, eax
// 0081cf7d  7502                 jne 0x81cf81
// 0081cf7f  8bdf                 mov ebx, edi
// 0081cf81  3baecc000000         cmp ebp, dword ptr [esi + 0xcc]
// 0081cf87  74d2                 je 0x81cf5b
// 0081cf89  83fdff               cmp ebp, -1
// 0081cf8c  74cd                 je 0x81cf5b
// 0081cf8e  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0081cf92  e9cdfeffff           jmp 0x81ce64
// 0081cf97  83fb07               cmp ebx, 7
// 0081cf9a  0f87e9010000         ja 0x81d189
// 0081cfa0  ff249d98d18100       jmp dword ptr [ebx*4 + 0x81d198]
// 0081cfa7  6a02                 push 2
// 0081cfa9  6a01                 push 1
// 0081cfab  6a00                 push 0
// 0081cfad  6a01                 push 1
// 0081cfaf  6a01                 push 1
// 0081cfb1  8b3e                 mov edi, dword ptr [esi]
// 0081cfb3  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081cfb9  81c750010000         add edi, 0x150
// 0081cfbf  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081cfc5  50                   push eax
// 0081cfc6  e8e59e0300           call 0x856eb0
// 0081cfcb  8b17                 mov edx, dword ptr [edi]
// 0081cfcd  50                   push eax
// 0081cfce  8bce                 mov ecx, esi
// 0081cfd0  ffd2                 call edx
// 0081cfd2  5f                   pop edi
// 0081cfd3  5e                   pop esi
// 0081cfd4  5d                   pop ebp
// 0081cfd5  b801000000           mov eax, 1
// 0081cfda  5b                   pop ebx
// 0081cfdb  83c440               add esp, 0x40
// 0081cfde  c20400               ret 4
// 0081cfe1  6a03                 push 3
// 0081cfe3  6a01                 push 1
// 0081cfe5  6a00                 push 0
// 0081cfe7  6a01                 push 1
// 0081cfe9  55                   push ebp
// 0081cfea  ebc5                 jmp 0x81cfb1
// 0081cfec  8b3e                 mov edi, dword ptr [esi]
// 0081cfee  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0081cff4  6a02                 push 2
// 0081cff6  6a01                 push 1
// 0081cff8  6a00                 push 0
// 0081cffa  6a01                 push 1
// 0081cffc  6a01                 push 1
// 0081cffe  55                   push ebp
// 0081cfff  81c750010000         add edi, 0x150
// 0081d005  e8a69e0300           call 0x856eb0
// 0081d00a  50                   push eax
// 0081d00b  8b07                 mov eax, dword ptr [edi]
// 0081d00d  8bce                 mov ecx, esi
// 0081d00f  ffd0                 call eax
// 0081d011  5f                   pop edi
// 0081d012  5e                   pop esi
// 0081d013  5d                   pop ebp
// 0081d014  b801000000           mov eax, 1
// 0081d019  5b                   pop ebx
// 0081d01a  83c440               add esp, 0x40
// 0081d01d  c20400               ret 4
// 0081d020  8b3e                 mov edi, dword ptr [esi]
// 0081d022  6a03                 push 3
// 0081d024  6a01                 push 1
// 0081d026  6a00                 push 0
// 0081d028  6a01                 push 1
// 0081d02a  55                   push ebp
// 0081d02b  8bce                 mov ecx, esi
// 0081d02d  81c750010000         add edi, 0x150
// 0081d033  e8d8e7ffff           call 0x81b810
// 0081d038  eb85                 jmp 0x81cfbf
// 0081d03a  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081d040  3bc5                 cmp eax, ebp
// 0081d042  0f8441010000         je 0x81d189
// 0081d048  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 0081d04e  0f8435010000         je 0x81d189
// 0081d054  50                   push eax
// 0081d055  8bce                 mov ecx, esi
// 0081d057  e8c4e7ffff           call 0x81b820
// 0081d05c  8b10                 mov edx, dword ptr [eax]
// 0081d05e  8bc8                 mov ecx, eax
// 0081d060  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0081d066  6a02                 push 2
// 0081d068  ffd0                 call eax
// 0081d06a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0081d070  6a00                 push 0
// 0081d072  51                   push ecx
// 0081d073  8bce                 mov ecx, esi
// 0081d075  e806fbffff           call 0x81cb80
// 0081d07a  5f                   pop edi
// 0081d07b  5e                   pop esi
// 0081d07c  5d                   pop ebp
// 0081d07d  5b                   pop ebx
// 0081d07e  83c440               add esp, 0x40
// 0081d081  c20400               ret 4
// 0081d084  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0081d08a  0f84f9000000         je 0x81d189
// 0081d090  6a00                 push 0
// 0081d092  55                   push ebp
// 0081d093  8bce                 mov ecx, esi
// 0081d095  e8e6faffff           call 0x81cb80
// 0081d09a  8b16                 mov edx, dword ptr [esi]
// 0081d09c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0081d0a2  6a00                 push 0
// 0081d0a4  6a00                 push 0
// 0081d0a6  6a01                 push 1
// 0081d0a8  8bce                 mov ecx, esi
// 0081d0aa  ffd0                 call eax
// 0081d0ac  5f                   pop edi
// 0081d0ad  5e                   pop esi
// 0081d0ae  5d                   pop ebp
// 0081d0af  b801000000           mov eax, 1
// 0081d0b4  5b                   pop ebx
// 0081d0b5  83c440               add esp, 0x40
// 0081d0b8  c20400               ret 4
// 0081d0bb  8bce                 mov ecx, esi
// 0081d0bd  e80ece0000           call 0x829ed0
// 0081d0c2  83f801               cmp eax, 1
// 0081d0c5  8bce                 mov ecx, esi
// 0081d0c7  7e1e                 jle 0x81d0e7
// 0081d0c9  48                   dec eax
// 0081d0ca  50                   push eax
// 0081d0cb  56                   push esi
// 0081d0cc  e8bfd9ffff           call 0x81aa90
// 0081d0d1  8bc8                 mov ecx, eax
// 0081d0d3  e808f90000           call 0x82c9e0
// 0081d0d8  5f                   pop edi
// 0081d0d9  5e                   pop esi
// 0081d0da  5d                   pop ebp
// 0081d0db  b801000000           mov eax, 1
// 0081d0e0  5b                   pop ebx
// 0081d0e1  83c440               add esp, 0x40
// 0081d0e4  c20400               ret 4
// 0081d0e7  8b16                 mov edx, dword ptr [esi]
// 0081d0e9  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0081d0ef  ffd0                 call eax
// 0081d0f1  85c0                 test eax, eax
// 0081d0f3  741e                 je 0x81d113
// 0081d0f5  8b16                 mov edx, dword ptr [esi]
// 0081d0f7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 0081d0fd  8bce                 mov ecx, esi
// 0081d0ff  ffd0                 call eax
// 0081d101  8b10                 mov edx, dword ptr [eax]
// 0081d103  6a00                 push 0
// 0081d105  6a00                 push 0
// 0081d107  8bc8                 mov ecx, eax
// 0081d109  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0081d10f  6a01                 push 1
// 0081d111  ffd0                 call eax
// 0081d113  8b16                 mov edx, dword ptr [esi]
// 0081d115  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 0081d11b  6a00                 push 0
// 0081d11d  6a01                 push 1
// 0081d11f  6a00                 push 0
// 0081d121  8bce                 mov ecx, esi
// 0081d123  ffd0                 call eax
// 0081d125  5f                   pop edi
// 0081d126  5e                   pop esi
// 0081d127  5d                   pop ebp
// 0081d128  b801000000           mov eax, 1
// 0081d12d  5b                   pop ebx
// 0081d12e  83c440               add esp, 0x40
// 0081d131  c20400               ret 4
// 0081d134  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0081d13a  3bc5                 cmp eax, ebp
// 0081d13c  0f8490feffff         je 0x81cfd2
// 0081d142  50                   push eax
// 0081d143  8bce                 mov ecx, esi
// 0081d145  e8d6e6ffff           call 0x81b820
// 0081d14a  8b10                 mov edx, dword ptr [eax]
// 0081d14c  8bc8                 mov ecx, eax
// 0081d14e  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 0081d154  6a02                 push 2
// 0081d156  ffd0                 call eax
// 0081d158  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0081d15e  51                   push ecx
// 0081d15f  8bce                 mov ecx, esi
// 0081d161  e8bae6ffff           call 0x81b820
// 0081d166  8b30                 mov esi, dword ptr [eax]
// 0081d168  33d2                 xor edx, edx
// 0081d16a  52                   push edx
// 0081d16b  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 0081d171  33c9                 xor ecx, ecx
// 0081d173  51                   push ecx
// 0081d174  6a01                 push 1
// 0081d176  8bc8                 mov ecx, eax
// 0081d178  ffd2                 call edx
// 0081d17a  5f                   pop edi
// 0081d17b  5e                   pop esi
// 0081d17c  5d                   pop ebp
// 0081d17d  b801000000           mov eax, 1
// 0081d182  5b                   pop ebx
// 0081d183  83c440               add esp, 0x40
// 0081d186  c20400               ret 4
// 0081d189  5f                   pop edi
// 0081d18a  5e                   pop esi
// 0081d18b  5d                   pop ebp
// 0081d18c  33c0                 xor eax, eax
// 0081d18e  5b                   pop ebx
// 0081d18f  83c440               add esp, 0x40
// 0081d192  c20400               ret 4
// 0081d195  8d4900               lea ecx, [ecx]
// 0081d198  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 0081d199  cf                   iretd 
// 0081d19a  8100e1cf8100         add dword ptr [eax], 0x81cfe1
// 0081d1a0  84d0                 test al, dl
// 0081d1a2  81003ad08100         add dword ptr [eax], 0x81d03a
// 0081d1a8  bbd0810034           mov ebx, 0x340081d0
// 0081d1ad  d18100eccf81         rol dword ptr [ecx - 0x7e301400], 1
// 0081d1b3  0020                 add byte ptr [eax], ah
// copied from an identical function in another client (function ?ProcessSpecialKey@CXTPCommandBar@@MAEHW4XTPSpecialKey@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp