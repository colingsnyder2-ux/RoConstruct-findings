// roc 2012-06 009e96a0  unit: CXTColorDialog  size: 355 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e96a0
//
// 009e96a0  6aff                 push -1
// 009e96a2  689113ae00           push 0xae1391
// 009e96a7  64a100000000         mov eax, dword ptr fs:[0]
// 009e96ad  50                   push eax
// 009e96ae  83ec14               sub esp, 0x14
// 009e96b1  53                   push ebx
// 009e96b2  56                   push esi
// 009e96b3  57                   push edi
// 009e96b4  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009e96b9  33c4                 xor eax, esp
// 009e96bb  50                   push eax
// 009e96bc  8d442424             lea eax, [esp + 0x24]
// 009e96c0  64a300000000         mov dword ptr fs:[0], eax
// 009e96c6  8bf1                 mov esi, ecx
// 009e96c8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009e96cb  8b442434             mov eax, dword ptr [esp + 0x34]
// 009e96cf  51                   push ecx
// 009e96d0  898624010000         mov dword ptr [esi + 0x124], eax
// 009e96d6  ff153c3bb200         call dword ptr [0xb23b3c]
// 009e96dc  85c0                 test eax, eax
// 009e96de  747a                 je 0x9e975a
// 009e96e0  56                   push esi
// 009e96e1  8d4c2414             lea ecx, [esp + 0x14]
// 009e96e5  e8b298f9ff           call 0x982f9c
// 009e96ea  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 009e96f0  52                   push edx
// 009e96f1  8d8604010000         lea eax, [esi + 0x104]
// 009e96f7  50                   push eax
// 009e96f8  8d4c2418             lea ecx, [esp + 0x18]
// 009e96fc  c744243400000000     mov dword ptr [esp + 0x34], 0
// 009e9704  e8a397f9ff           call 0x982eac
// 009e9709  f686ac00000020       test byte ptr [esi + 0xac], 0x20
// 009e9710  7437                 je 0x9e9749
// 009e9712  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 009e9718  51                   push ecx
// 009e9719  8d542438             lea edx, [esp + 0x38]
// 009e971d  52                   push edx
// 009e971e  e88df6ffff           call 0x9e8db0
// 009e9723  83c408               add esp, 8
// 009e9726  8bc8                 mov ecx, eax
// 009e9728  c644242c01           mov byte ptr [esp + 0x2c], 1
// 009e972d  ff159847b200         call dword ptr [0xb24798]
// 009e9733  50                   push eax
// 009e9734  8d8eb0000000         lea ecx, [esi + 0xb0]
// 009e973a  e87d8df9ff           call 0x9824bc
// 009e973f  8d4c2434             lea ecx, [esp + 0x34]
// 009e9743  ff15d047b200         call dword ptr [0xb247d0]
// 009e9749  8d4c2410             lea ecx, [esp + 0x10]
// 009e974d  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 009e9755  e83c98f9ff           call 0x982f96
// 009e975a  837c243800           cmp dword ptr [esp + 0x38], 0
// 009e975f  0f8484000000         je 0x9e97e9
// 009e9765  8b4620               mov eax, dword ptr [esi + 0x20]
// 009e9768  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 009e976e  6a00                 push 0
// 009e9770  6a00                 push 0
// 009e9772  6874040000           push 0x474
// 009e9777  50                   push eax
// 009e9778  ffd3                 call ebx
// 009e977a  50                   push eax
// 009e977b  e8e68ef9ff           call 0x982666
// 009e9780  85c0                 test eax, eax
// 009e9782  7465                 je 0x9e97e9
// 009e9784  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009e9787  6a00                 push 0
// 009e9789  6a00                 push 0
// 009e978b  6874040000           push 0x474
// 009e9790  51                   push ecx
// 009e9791  ffd3                 call ebx
// 009e9793  50                   push eax
// 009e9794  e8cd8ef9ff           call 0x982666
// 009e9799  85c0                 test eax, eax
// 009e979b  744c                 je 0x9e97e9
// 009e979d  83782000             cmp dword ptr [eax + 0x20], 0
// 009e97a1  7446                 je 0x9e97e9
// 009e97a3  8bce                 mov ecx, esi
// 009e97a5  33ff                 xor edi, edi
// 009e97a7  e856040b00           call 0xa99c02
// 009e97ac  85c0                 test eax, eax
// 009e97ae  7e39                 jle 0x9e97e9
// 009e97b0  85ff                 test edi, edi
// 009e97b2  7c4a                 jl 0x9e97fe
// 009e97b4  3bbe90000000         cmp edi, dword ptr [esi + 0x90]
// 009e97ba  7d42                 jge 0x9e97fe
// 009e97bc  8b968c000000         mov edx, dword ptr [esi + 0x8c]
// 009e97c2  8b04ba               mov eax, dword ptr [edx + edi*4]
// 009e97c5  85c0                 test eax, eax
// 009e97c7  7435                 je 0x9e97fe
// 009e97c9  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 009e97cf  8b5020               mov edx, dword ptr [eax + 0x20]
// 009e97d2  6a00                 push 0
// 009e97d4  51                   push ecx
// 009e97d5  6842270000           push 0x2742
// 009e97da  52                   push edx
// 009e97db  ffd3                 call ebx
// 009e97dd  8bce                 mov ecx, esi
// 009e97df  47                   inc edi
// 009e97e0  e81d040b00           call 0xa99c02
// 009e97e5  3bf8                 cmp edi, eax
// 009e97e7  7cc7                 jl 0x9e97b0
// 009e97e9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009e97ed  64890d00000000       mov dword ptr fs:[0], ecx
// 009e97f4  59                   pop ecx
// 009e97f5  5f                   pop edi
// 009e97f6  5e                   pop esi
// 009e97f7  5b                   pop ebx
// 009e97f8  83c420               add esp, 0x20
// 009e97fb  c20800               ret 8
// 009e97fe  e8bd8bf9ff           call 0x9823c0
// copied from an identical function in another client (function ?SetNewColor@CXTColorDialog@@QAEXKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp