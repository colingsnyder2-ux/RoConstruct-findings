// roc 2008-06 00715000  unit: CXTPPropertyGridView  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00715000
//
// 00715000  83ec18               sub esp, 0x18
// 00715003  56                   push esi
// 00715004  8bf1                 mov esi, ecx
// 00715006  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0071500d  7e09                 jle 0x715018
// 0071500f  33c0                 xor eax, eax
// 00715011  5e                   pop esi
// 00715012  83c418               add esp, 0x18
// 00715015  c20800               ret 8
// 00715018  837e2000             cmp dword ptr [esi + 0x20], 0
// 0071501c  74f1                 je 0x71500f
// 0071501e  57                   push edi
// 0071501f  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00715023  8bcf                 mov ecx, edi
// 00715025  e896c0ffff           call 0x7110c0
// 0071502a  85c0                 test eax, eax
// 0071502c  740a                 je 0x715038
// 0071502e  5f                   pop edi
// 0071502f  33c0                 xor eax, eax
// 00715031  5e                   pop esi
// 00715032  83c418               add esp, 0x18
// 00715035  c20800               ret 8
// 00715038  8b07                 mov eax, dword ptr [edi]
// 0071503a  8b90dc000000         mov edx, dword ptr [eax + 0xdc]
// 00715040  53                   push ebx
// 00715041  55                   push ebp
// 00715042  8bcf                 mov ecx, edi
// 00715044  ffd2                 call edx
// 00715046  8b442430             mov eax, dword ptr [esp + 0x30]
// 0071504a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0071504d  8b2d142e8000         mov ebp, dword ptr [0x802e14]
// 00715053  57                   push edi
// 00715054  50                   push eax
// 00715055  6881010000           push 0x181
// 0071505a  51                   push ecx
// 0071505b  ffd5                 call ebp
// 0071505d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00715060  57                   push edi
// 00715061  8bd8                 mov ebx, eax
// 00715063  53                   push ebx
// 00715064  689a010000           push 0x19a
// 00715069  52                   push edx
// 0071506a  ffd5                 call ebp
// 0071506c  8bce                 mov ecx, esi
// 0071506e  e8976f0a00           call 0x7bc00a
// 00715073  a820                 test al, 0x20
// 00715075  7447                 je 0x7150be
// 00715077  8b16                 mov edx, dword ptr [esi]
// 00715079  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0071507f  33c0                 xor eax, eax
// 00715081  89442414             mov dword ptr [esp + 0x14], eax
// 00715085  8944241c             mov dword ptr [esp + 0x1c], eax
// 00715089  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0071508f  89442420             mov dword ptr [esp + 0x20], eax
// 00715093  8d442410             lea eax, [esp + 0x10]
// 00715097  50                   push eax
// 00715098  8bce                 mov ecx, esi
// 0071509a  c744241402000000     mov dword ptr [esp + 0x14], 2
// 007150a2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007150a6  897c2428             mov dword ptr [esp + 0x28], edi
// 007150aa  ffd2                 call edx
// 007150ac  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 007150b1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007150b4  50                   push eax
// 007150b5  53                   push ebx
// 007150b6  68a0010000           push 0x1a0
// 007150bb  51                   push ecx
// 007150bc  ffd5                 call ebp
// 007150be  8b17                 mov edx, dword ptr [edi]
// 007150c0  8b82a4000000         mov eax, dword ptr [edx + 0xa4]
// 007150c6  6a01                 push 1
// 007150c8  8bcf                 mov ecx, edi
// 007150ca  ffd0                 call eax
// 007150cc  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 007150d3  b801000000           mov eax, 1
// 007150d8  740a                 je 0x7150e4
// 007150da  53                   push ebx
// 007150db  57                   push edi
// 007150dc  8bce                 mov ecx, esi
// 007150de  e80d000000           call 0x7150f0
// 007150e3  40                   inc eax
// 007150e4  5d                   pop ebp
// 007150e5  5b                   pop ebx
// 007150e6  5f                   pop edi
// 007150e7  5e                   pop esi
// 007150e8  83c418               add esp, 0x18
// 007150eb  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?InsertItem@CXTPPropertyGridView@@AAEHPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
