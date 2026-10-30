// roc 2009-12 0084e350  unit: CXTPPropertyGrid  size: 407 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e350
//
// 0084e350  83ec10               sub esp, 0x10
// 0084e353  56                   push esi
// 0084e354  8bf1                 mov esi, ecx
// 0084e356  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0084e35c  57                   push edi
// 0084e35d  83faff               cmp edx, -1
// 0084e360  0f8472010000         je 0x84e4d8
// 0084e366  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084e36c  83792800             cmp dword ptr [ecx + 0x28], 0
// 0084e370  0f8462010000         je 0x84e4d8
// 0084e376  e805f9ffff           call 0x84dc80
// 0084e37b  3bd0                 cmp edx, eax
// 0084e37d  7c0c                 jl 0x84e38b
// 0084e37f  e8fcf8ffff           call 0x84dc80
// 0084e384  48                   dec eax
// 0084e385  898648010000         mov dword ptr [esi + 0x148], eax
// 0084e38b  6a10                 push 0x10
// 0084e38d  ff1530cc9800         call dword ptr [0x98cc30]
// 0084e393  33c9                 xor ecx, ecx
// 0084e395  6685c0               test ax, ax
// 0084e398  0f9dc1               setge cl
// 0084e39b  8d54241c             lea edx, [esp + 0x1c]
// 0084e39f  52                   push edx
// 0084e3a0  56                   push esi
// 0084e3a1  8bf9                 mov edi, ecx
// 0084e3a3  e8b8ddffff           call 0x84c160
// 0084e3a8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0084e3ac  83c408               add esp, 8
// 0084e3af  83f809               cmp eax, 9
// 0084e3b2  755d                 jne 0x84e411
// 0084e3b4  85ff                 test edi, edi
// 0084e3b6  7432                 je 0x84e3ea
// 0084e3b8  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084e3be  e8bdf8ffff           call 0x84dc80
// 0084e3c3  48                   dec eax
// 0084e3c4  398648010000         cmp dword ptr [esi + 0x148], eax
// 0084e3ca  0f85d5000000         jne 0x84e4a5
// 0084e3d0  8b06                 mov eax, dword ptr [esi]
// 0084e3d2  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084e3d8  6a00                 push 0
// 0084e3da  6a01                 push 1
// 0084e3dc  6a05                 push 5
// 0084e3de  8bce                 mov ecx, esi
// 0084e3e0  ffd2                 call edx
// 0084e3e2  5f                   pop edi
// 0084e3e3  5e                   pop esi
// 0084e3e4  83c410               add esp, 0x10
// 0084e3e7  c20c00               ret 0xc
// 0084e3ea  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 0084e3f1  0f8589000000         jne 0x84e480
// 0084e3f7  8b06                 mov eax, dword ptr [esi]
// 0084e3f9  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084e3ff  6a00                 push 0
// 0084e401  6a00                 push 0
// 0084e403  6a05                 push 5
// 0084e405  8bce                 mov ecx, esi
// 0084e407  ffd2                 call edx
// 0084e409  5f                   pop edi
// 0084e40a  5e                   pop esi
// 0084e40b  83c410               add esp, 0x10
// 0084e40e  c20c00               ret 0xc
// 0084e411  83f827               cmp eax, 0x27
// 0084e414  0f848b000000         je 0x84e4a5
// 0084e41a  83f828               cmp eax, 0x28
// 0084e41d  0f8482000000         je 0x84e4a5
// 0084e423  83f825               cmp eax, 0x25
// 0084e426  7458                 je 0x84e480
// 0084e428  83f826               cmp eax, 0x26
// 0084e42b  7453                 je 0x84e480
// 0084e42d  83f80d               cmp eax, 0xd
// 0084e430  0f85a2000000         jne 0x84e4d8
// 0084e436  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 0084e43c  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084e442  50                   push eax
// 0084e443  e8e84a0500           call 0x8a2f30
// 0084e448  8b5030               mov edx, dword ptr [eax + 0x30]
// 0084e44b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0084e44e  8954240c             mov dword ptr [esp + 0xc], edx
// 0084e452  8b5034               mov edx, dword ptr [eax + 0x34]
// 0084e455  8b4038               mov eax, dword ptr [eax + 0x38]
// 0084e458  50                   push eax
// 0084e459  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 0084e45f  89542414             mov dword ptr [esp + 0x14], edx
// 0084e463  8b16                 mov edx, dword ptr [esi]
// 0084e465  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0084e46b  51                   push ecx
// 0084e46c  50                   push eax
// 0084e46d  8bce                 mov ecx, esi
// 0084e46f  ffd2                 call edx
// 0084e471  8bce                 mov ecx, esi
// 0084e473  e8b859faff           call 0x7f3e30
// 0084e478  5f                   pop edi
// 0084e479  5e                   pop esi
// 0084e47a  83c410               add esp, 0x10
// 0084e47d  c20c00               ret 0xc
// 0084e480  838648010000ff       add dword ptr [esi + 0x148], -1
// 0084e487  7912                 jns 0x84e49b
// 0084e489  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084e48f  e8ecf7ffff           call 0x84dc80
// 0084e494  48                   dec eax
// 0084e495  898648010000         mov dword ptr [esi + 0x148], eax
// 0084e49b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0084e49e  6a00                 push 0
// 0084e4a0  6a00                 push 0
// 0084e4a2  50                   push eax
// 0084e4a3  eb2d                 jmp 0x84e4d2
// 0084e4a5  ff8648010000         inc dword ptr [esi + 0x148]
// 0084e4ab  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084e4b1  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0084e4b7  e8c4f7ffff           call 0x84dc80
// 0084e4bc  3bd0                 cmp edx, eax
// 0084e4be  7c0a                 jl 0x84e4ca
// 0084e4c0  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 0084e4ca  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0084e4cd  6a00                 push 0
// 0084e4cf  6a00                 push 0
// 0084e4d1  51                   push ecx
// 0084e4d2  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084e4d8  8bce                 mov ecx, esi
// 0084e4da  e85159faff           call 0x7f3e30
// 0084e4df  5f                   pop edi
// 0084e4e0  5e                   pop esi
// 0084e4e1  83c410               add esp, 0x10
// 0084e4e4  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnKeyDown@CXTPPropertyGrid@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp