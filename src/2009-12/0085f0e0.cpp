// roc 2009-12 0085f0e0  unit: CXTColorDialog  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085f0e0
//
// 0085f0e0  6aff                 push -1
// 0085f0e2  68c3e69500           push 0x95e6c3
// 0085f0e7  64a100000000         mov eax, dword ptr fs:[0]
// 0085f0ed  50                   push eax
// 0085f0ee  83ec08               sub esp, 8
// 0085f0f1  56                   push esi
// 0085f0f2  57                   push edi
// 0085f0f3  a10052b600           mov eax, dword ptr [0xb65200]
// 0085f0f8  33c4                 xor eax, esp
// 0085f0fa  50                   push eax
// 0085f0fb  8d442414             lea eax, [esp + 0x14]
// 0085f0ff  64a300000000         mov dword ptr fs:[0], eax
// 0085f105  8bf1                 mov esi, ecx
// 0085f107  89742410             mov dword ptr [esp + 0x10], esi
// 0085f10b  e828770c00           call 0x926838
// 0085f110  8dbeb0000000         lea edi, [esi + 0xb0]
// 0085f116  8bcf                 mov ecx, edi
// 0085f118  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0085f120  c70644db9f00         mov dword ptr [esi], 0x9fdb44
// 0085f126  e81d50f9ff           call 0x7f4148
// 0085f12b  c707a4229f00         mov dword ptr [edi], 0x9f22a4
// 0085f131  8d4c240c             lea ecx, [esp + 0xc]
// 0085f135  ff1574de9800         call dword ptr [0x98de74]
// 0085f13b  c644241c02           mov byte ptr [esp + 0x1c], 2
// 0085f140  e85bf70000           call 0x86e8a0
// 0085f145  8b10                 mov edx, dword ptr [eax]
// 0085f147  8b5208               mov edx, dword ptr [edx + 8]
// 0085f14a  6887240000           push 0x2487
// 0085f14f  8d4c2410             lea ecx, [esp + 0x10]
// 0085f153  51                   push ecx
// 0085f154  8bc8                 mov ecx, eax
// 0085f156  ffd2                 call edx
// 0085f158  8b442430             mov eax, dword ptr [esp + 0x30]
// 0085f15c  6a00                 push 0
// 0085f15e  50                   push eax
// 0085f15f  8d4c2414             lea ecx, [esp + 0x14]
// 0085f163  ff1580de9800         call dword ptr [0x98de80]
// 0085f169  50                   push eax
// 0085f16a  8bce                 mov ecx, esi
// 0085f16c  e8c1760c00           call 0x926832
// 0085f171  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0085f174  8b542424             mov edx, dword ptr [esp + 0x24]
// 0085f178  8b442428             mov eax, dword ptr [esp + 0x28]
// 0085f17c  81e1fffdffff         and ecx, 0xfffffdff
// 0085f182  81c980000000         or ecx, 0x80
// 0085f188  894e58               mov dword ptr [esi + 0x58], ecx
// 0085f18b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085f18f  681c010000           push 0x11c
// 0085f194  899624010000         mov dword ptr [esi + 0x124], edx
// 0085f19a  898628010000         mov dword ptr [esi + 0x128], eax
// 0085f1a0  898eac000000         mov dword ptr [esi + 0xac], ecx
// 0085f1a6  e8b546f9ff           call 0x7f3860
// 0085f1ab  83c404               add esp, 4
// 0085f1ae  89442430             mov dword ptr [esp + 0x30], eax
// 0085f1b2  c644241c03           mov byte ptr [esp + 0x1c], 3
// 0085f1b7  85c0                 test eax, eax
// 0085f1b9  740a                 je 0x85f1c5
// 0085f1bb  56                   push esi
// 0085f1bc  8bc8                 mov ecx, eax
// 0085f1be  e8cdbd0700           call 0x8daf90
// 0085f1c3  eb02                 jmp 0x85f1c7
// 0085f1c5  33c0                 xor eax, eax
// 0085f1c7  50                   push eax
// 0085f1c8  8bce                 mov ecx, esi
// 0085f1ca  c644242002           mov byte ptr [esp + 0x20], 2
// 0085f1cf  e8ece7fdff           call 0x83d9c0
// 0085f1d4  6888070000           push 0x788
// 0085f1d9  e88246f9ff           call 0x7f3860
// 0085f1de  83c404               add esp, 4
// 0085f1e1  89442430             mov dword ptr [esp + 0x30], eax
// 0085f1e5  c644241c04           mov byte ptr [esp + 0x1c], 4
// 0085f1ea  85c0                 test eax, eax
// 0085f1ec  740a                 je 0x85f1f8
// 0085f1ee  56                   push esi
// 0085f1ef  8bc8                 mov ecx, eax
// 0085f1f1  e84af30700           call 0x8de540
// 0085f1f6  eb02                 jmp 0x85f1fa
// 0085f1f8  33c0                 xor eax, eax
// 0085f1fa  50                   push eax
// 0085f1fb  8bce                 mov ecx, esi
// 0085f1fd  c644242002           mov byte ptr [esp + 0x20], 2
// 0085f202  e8b9e7fdff           call 0x83d9c0
// 0085f207  8d4c240c             lea ecx, [esp + 0xc]
// 0085f20b  ff15c0de9800         call dword ptr [0x98dec0]
// 0085f211  8bc6                 mov eax, esi
// 0085f213  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0085f217  64890d00000000       mov dword ptr fs:[0], ecx
// 0085f21e  59                   pop ecx
// 0085f21f  5f                   pop edi
// 0085f220  5e                   pop esi
// 0085f221  83c414               add esp, 0x14
// 0085f224  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTColorDialog@@QAE@KKKPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorDialog.cpp