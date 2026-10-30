// roc 2009-12 00839d00  unit: CXTPDockingPaneManager  size: 645 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839d00
//
// 00839d00  6aff                 push -1
// 00839d02  682ec69500           push 0x95c62e
// 00839d07  64a100000000         mov eax, dword ptr fs:[0]
// 00839d0d  50                   push eax
// 00839d0e  56                   push esi
// 00839d0f  57                   push edi
// 00839d10  a10052b600           mov eax, dword ptr [0xb65200]
// 00839d15  33c4                 xor eax, esp
// 00839d17  50                   push eax
// 00839d18  8d44240c             lea eax, [esp + 0xc]
// 00839d1c  64a300000000         mov dword ptr fs:[0], eax
// 00839d22  8bf1                 mov esi, ecx
// 00839d24  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00839d2a  85c9                 test ecx, ecx
// 00839d2c  7405                 je 0x839d33
// 00839d2e  e8a9a0fbff           call 0x7f3ddc
// 00839d33  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00839d37  83ff01               cmp edi, 1
// 00839d3a  752d                 jne 0x839d69
// 00839d3c  684c020000           push 0x24c
// 00839d41  e81a9bfbff           call 0x7f3860
// 00839d46  83c404               add esp, 4
// 00839d49  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839d4d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00839d55  85c0                 test eax, eax
// 00839d57  0f84db010000         je 0x839f38
// 00839d5d  8bc8                 mov ecx, eax
// 00839d5f  e8fc0e0800           call 0x8bac60
// 00839d64  e9d1010000           jmp 0x839f3a
// 00839d69  83ff04               cmp edi, 4
// 00839d6c  752d                 jne 0x839d9b
// 00839d6e  68f0010000           push 0x1f0
// 00839d73  e8e89afbff           call 0x7f3860
// 00839d78  83c404               add esp, 4
// 00839d7b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839d7f  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00839d87  85c0                 test eax, eax
// 00839d89  0f84a9010000         je 0x839f38
// 00839d8f  8bc8                 mov ecx, eax
// 00839d91  e86ade0700           call 0x8b7c00
// 00839d96  e99f010000           jmp 0x839f3a
// 00839d9b  83ff05               cmp edi, 5
// 00839d9e  752d                 jne 0x839dcd
// 00839da0  684c020000           push 0x24c
// 00839da5  e8b69afbff           call 0x7f3860
// 00839daa  83c404               add esp, 4
// 00839dad  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839db1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00839db9  85c0                 test eax, eax
// 00839dbb  0f8477010000         je 0x839f38
// 00839dc1  8bc8                 mov ecx, eax
// 00839dc3  e888150800           call 0x8bb350
// 00839dc8  e96d010000           jmp 0x839f3a
// 00839dcd  83ff02               cmp edi, 2
// 00839dd0  752d                 jne 0x839dff
// 00839dd2  6854020000           push 0x254
// 00839dd7  e8849afbff           call 0x7f3860
// 00839ddc  83c404               add esp, 4
// 00839ddf  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839de3  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00839deb  85c0                 test eax, eax
// 00839ded  0f8445010000         je 0x839f38
// 00839df3  8bc8                 mov ecx, eax
// 00839df5  e8a6180800           call 0x8bb6a0
// 00839dfa  e93b010000           jmp 0x839f3a
// 00839dff  83ff03               cmp edi, 3
// 00839e02  752d                 jne 0x839e31
// 00839e04  684c020000           push 0x24c
// 00839e09  e8529afbff           call 0x7f3860
// 00839e0e  83c404               add esp, 4
// 00839e11  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839e15  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00839e1d  85c0                 test eax, eax
// 00839e1f  0f8413010000         je 0x839f38
// 00839e25  8bc8                 mov ecx, eax
// 00839e27  e8641a0800           call 0x8bb890
// 00839e2c  e909010000           jmp 0x839f3a
// 00839e31  83ff06               cmp edi, 6
// 00839e34  752d                 jne 0x839e63
// 00839e36  684c020000           push 0x24c
// 00839e3b  e8209afbff           call 0x7f3860
// 00839e40  83c404               add esp, 4
// 00839e43  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839e47  c744241405000000     mov dword ptr [esp + 0x14], 5
// 00839e4f  85c0                 test eax, eax
// 00839e51  0f84e1000000         je 0x839f38
// 00839e57  8bc8                 mov ecx, eax
// 00839e59  e8421c0800           call 0x8bbaa0
// 00839e5e  e9d7000000           jmp 0x839f3a
// 00839e63  83ff09               cmp edi, 9
// 00839e66  752d                 jne 0x839e95
// 00839e68  6850020000           push 0x250
// 00839e6d  e8ee99fbff           call 0x7f3860
// 00839e72  83c404               add esp, 4
// 00839e75  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839e79  c744241406000000     mov dword ptr [esp + 0x14], 6
// 00839e81  85c0                 test eax, eax
// 00839e83  0f84af000000         je 0x839f38
// 00839e89  8bc8                 mov ecx, eax
// 00839e8b  e8b01e0800           call 0x8bbd40
// 00839e90  e9a5000000           jmp 0x839f3a
// 00839e95  83ff07               cmp edi, 7
// 00839e98  7526                 jne 0x839ec0
// 00839e9a  6854020000           push 0x254
// 00839e9f  e8bc99fbff           call 0x7f3860
// 00839ea4  83c404               add esp, 4
// 00839ea7  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839eab  897c2414             mov dword ptr [esp + 0x14], edi
// 00839eaf  85c0                 test eax, eax
// 00839eb1  0f8481000000         je 0x839f38
// 00839eb7  8bc8                 mov ecx, eax
// 00839eb9  e882190800           call 0x8bb840
// 00839ebe  eb7a                 jmp 0x839f3a
// 00839ec0  83ff08               cmp edi, 8
// 00839ec3  7522                 jne 0x839ee7
// 00839ec5  68fc010000           push 0x1fc
// 00839eca  e89199fbff           call 0x7f3860
// 00839ecf  83c404               add esp, 4
// 00839ed2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839ed6  897c2414             mov dword ptr [esp + 0x14], edi
// 00839eda  85c0                 test eax, eax
// 00839edc  745a                 je 0x839f38
// 00839ede  8bc8                 mov ecx, eax
// 00839ee0  e84b050800           call 0x8ba430
// 00839ee5  eb53                 jmp 0x839f3a
// 00839ee7  83ff0a               cmp edi, 0xa
// 00839eea  7526                 jne 0x839f12
// 00839eec  6854020000           push 0x254
// 00839ef1  e86a99fbff           call 0x7f3860
// 00839ef6  83c404               add esp, 4
// 00839ef9  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839efd  c744241409000000     mov dword ptr [esp + 0x14], 9
// 00839f05  85c0                 test eax, eax
// 00839f07  742f                 je 0x839f38
// 00839f09  8bc8                 mov ecx, eax
// 00839f0b  e850180800           call 0x8bb760
// 00839f10  eb28                 jmp 0x839f3a
// 00839f12  68f0010000           push 0x1f0
// 00839f17  e84499fbff           call 0x7f3860
// 00839f1c  83c404               add esp, 4
// 00839f1f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00839f23  c74424140a000000     mov dword ptr [esp + 0x14], 0xa
// 00839f2b  85c0                 test eax, eax
// 00839f2d  7409                 je 0x839f38
// 00839f2f  8bc8                 mov ecx, eax
// 00839f31  e8cad60700           call 0x8b7600
// 00839f36  eb02                 jmp 0x839f3a
// 00839f38  33c0                 xor eax, eax
// 00839f3a  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 00839f40  89b8a0010000         mov dword ptr [eax + 0x1a0], edi
// 00839f46  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 00839f4c  8b11                 mov edx, dword ptr [ecx]
// 00839f4e  8b4268               mov eax, dword ptr [edx + 0x68]
// 00839f51  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00839f59  ffd0                 call eax
// 00839f5b  8bce                 mov ecx, esi
// 00839f5d  e8eefcffff           call 0x839c50
// 00839f62  83ff09               cmp edi, 9
// 00839f65  750a                 jne 0x839f71
// 00839f67  c7862001000001000000 mov dword ptr [esi + 0x120], 1
// 00839f71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00839f75  64890d00000000       mov dword ptr fs:[0], ecx
// 00839f7c  59                   pop ecx
// 00839f7d  5f                   pop edi
// 00839f7e  5e                   pop esi
// 00839f7f  83c40c               add esp, 0xc
// 00839f82  c20400               ret 4
// copied from an identical function in another client (function ?SetTheme@CXTPDockingPaneManager@@QAEXW4XTPDockingPanePaintTheme@@@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp