// roc 2009-12 0086f940  unit: CXTPNewToolbarDlg  size: 359 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086f940
//
// 0086f940  6aff                 push -1
// 0086f942  689cfb9500           push 0x95fb9c
// 0086f947  64a100000000         mov eax, dword ptr fs:[0]
// 0086f94d  50                   push eax
// 0086f94e  83ec14               sub esp, 0x14
// 0086f951  53                   push ebx
// 0086f952  55                   push ebp
// 0086f953  56                   push esi
// 0086f954  57                   push edi
// 0086f955  a10052b600           mov eax, dword ptr [0xb65200]
// 0086f95a  33c4                 xor eax, esp
// 0086f95c  50                   push eax
// 0086f95d  8d442428             lea eax, [esp + 0x28]
// 0086f961  64a300000000         mov dword ptr fs:[0], eax
// 0086f967  8be9                 mov ebp, ecx
// 0086f969  33f6                 xor esi, esi
// 0086f96b  8d4c241c             lea ecx, [esp + 0x1c]
// 0086f96f  89742414             mov dword ptr [esp + 0x14], esi
// 0086f973  ff1574de9800         call dword ptr [0x98de74]
// 0086f979  89742430             mov dword ptr [esp + 0x30], esi
// 0086f97d  e81eefffff           call 0x86e8a0
// 0086f982  8b10                 mov edx, dword ptr [eax]
// 0086f984  8b5208               mov edx, dword ptr [edx + 8]
// 0086f987  68cb230000           push 0x23cb
// 0086f98c  8d4c2420             lea ecx, [esp + 0x20]
// 0086f990  51                   push ecx
// 0086f991  8bc8                 mov ecx, eax
// 0086f993  ffd2                 call edx
// 0086f995  8d4c2418             lea ecx, [esp + 0x18]
// 0086f999  8d7e01               lea edi, [esi + 1]
// 0086f99c  ff1574de9800         call dword ptr [0x98de74]
// 0086f9a2  57                   push edi
// 0086f9a3  8d4c2420             lea ecx, [esp + 0x20]
// 0086f9a7  c644243401           mov byte ptr [esp + 0x34], 1
// 0086f9ac  ff1580de9800         call dword ptr [0x98de80]
// 0086f9b2  50                   push eax
// 0086f9b3  8d442420             lea eax, [esp + 0x20]
// 0086f9b7  50                   push eax
// 0086f9b8  ff157cde9800         call dword ptr [0x98de7c]
// 0086f9be  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0086f9c4  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 0086f9ca  83c40c               add esp, 0xc
// 0086f9cd  3bc6                 cmp eax, esi
// 0086f9cf  89442424             mov dword ptr [esp + 0x24], eax
// 0086f9d3  0f8e8f000000         jle 0x86fa68
// 0086f9d9  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0086f9df  56                   push esi
// 0086f9e0  e8fb52faff           call 0x814ce0
// 0086f9e5  85c0                 test eax, eax
// 0086f9e7  7431                 je 0x86fa1a
// 0086f9e9  8d542420             lea edx, [esp + 0x20]
// 0086f9ed  52                   push edx
// 0086f9ee  8bc8                 mov ecx, eax
// 0086f9f0  e88bdbf8ff           call 0x7fd580
// 0086f9f5  834c241401           or dword ptr [esp + 0x14], 1
// 0086f9fa  8bc8                 mov ecx, eax
// 0086f9fc  c644243002           mov byte ptr [esp + 0x30], 2
// 0086fa01  ff1580de9800         call dword ptr [0x98de80]
// 0086fa07  50                   push eax
// 0086fa08  8d4c241c             lea ecx, [esp + 0x1c]
// 0086fa0c  ff1584de9800         call dword ptr [0x98de84]
// 0086fa12  85c0                 test eax, eax
// 0086fa14  7504                 jne 0x86fa1a
// 0086fa16  b301                 mov bl, 1
// 0086fa18  eb02                 jmp 0x86fa1c
// 0086fa1a  32db                 xor bl, bl
// 0086fa1c  f644241401           test byte ptr [esp + 0x14], 1
// 0086fa21  c744243001000000     mov dword ptr [esp + 0x30], 1
// 0086fa29  740f                 je 0x86fa3a
// 0086fa2b  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 0086fa30  8d4c2420             lea ecx, [esp + 0x20]
// 0086fa34  ff15c0de9800         call dword ptr [0x98dec0]
// 0086fa3a  84db                 test bl, bl
// 0086fa3c  741f                 je 0x86fa5d
// 0086fa3e  57                   push edi
// 0086fa3f  8d4c2420             lea ecx, [esp + 0x20]
// 0086fa43  ff1580de9800         call dword ptr [0x98de80]
// 0086fa49  50                   push eax
// 0086fa4a  8d442420             lea eax, [esp + 0x20]
// 0086fa4e  50                   push eax
// 0086fa4f  ff157cde9800         call dword ptr [0x98de7c]
// 0086fa55  83c40c               add esp, 0xc
// 0086fa58  47                   inc edi
// 0086fa59  33f6                 xor esi, esi
// 0086fa5b  eb01                 jmp 0x86fa5e
// 0086fa5d  46                   inc esi
// 0086fa5e  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0086fa62  0f8c71ffffff         jl 0x86f9d9
// 0086fa68  8d4c2418             lea ecx, [esp + 0x18]
// 0086fa6c  51                   push ecx
// 0086fa6d  8d4d78               lea ecx, [ebp + 0x78]
// 0086fa70  ff1538d59800         call dword ptr [0x98d538]
// 0086fa76  6a00                 push 0
// 0086fa78  8bcd                 mov ecx, ebp
// 0086fa7a  e86940f8ff           call 0x7f3ae8
// 0086fa7f  8d4c2418             lea ecx, [esp + 0x18]
// 0086fa83  ff15c0de9800         call dword ptr [0x98dec0]
// 0086fa89  8d4c241c             lea ecx, [esp + 0x1c]
// 0086fa8d  ff15c0de9800         call dword ptr [0x98dec0]
// 0086fa93  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0086fa97  64890d00000000       mov dword ptr fs:[0], ecx
// 0086fa9e  59                   pop ecx
// 0086fa9f  5f                   pop edi
// 0086faa0  5e                   pop esi
// 0086faa1  5d                   pop ebp
// 0086faa2  5b                   pop ebx
// 0086faa3  83c420               add esp, 0x20
// 0086faa6  c3                   ret 
// copied from an identical function in another client (function ?SetSuggestedName@CXTPNewToolbarDlg@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp