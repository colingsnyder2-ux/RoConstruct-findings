// roc 2009-12 008f4990  unit: CXTButtonTheme  size: 418 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4990
//
// 008f4990  6aff                 push -1
// 008f4992  68e16c9600           push 0x966ce1
// 008f4997  64a100000000         mov eax, dword ptr fs:[0]
// 008f499d  50                   push eax
// 008f499e  83ec2c               sub esp, 0x2c
// 008f49a1  53                   push ebx
// 008f49a2  55                   push ebp
// 008f49a3  56                   push esi
// 008f49a4  57                   push edi
// 008f49a5  a10052b600           mov eax, dword ptr [0xb65200]
// 008f49aa  33c4                 xor eax, esp
// 008f49ac  50                   push eax
// 008f49ad  8d442440             lea eax, [esp + 0x40]
// 008f49b1  64a300000000         mov dword ptr fs:[0], eax
// 008f49b7  8bf1                 mov esi, ecx
// 008f49b9  8d4c2414             lea ecx, [esp + 0x14]
// 008f49bd  ff1574de9800         call dword ptr [0x98de74]
// 008f49c3  8b6c245c             mov ebp, dword ptr [esp + 0x5c]
// 008f49c7  8d442414             lea eax, [esp + 0x14]
// 008f49cb  50                   push eax
// 008f49cc  8bcd                 mov ecx, ebp
// 008f49ce  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 008f49d6  e86df4efff           call 0x7f3e48
// 008f49db  8d4c2414             lea ecx, [esp + 0x14]
// 008f49df  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008f49e5  84c0                 test al, al
// 008f49e7  0f8525010000         jne 0x8f4b12
// 008f49ed  e8ae88f5ff           call 0x84d2a0
// 008f49f2  8d4c2414             lea ecx, [esp + 0x14]
// 008f49f6  51                   push ecx
// 008f49f7  e83459f5ff           call 0x84a330
// 008f49fc  8b16                 mov edx, dword ptr [esi]
// 008f49fe  8b4220               mov eax, dword ptr [edx + 0x20]
// 008f4a01  83c404               add esp, 4
// 008f4a04  55                   push ebp
// 008f4a05  8bce                 mov ecx, esi
// 008f4a07  ffd0                 call eax
// 008f4a09  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008f4a0d  50                   push eax
// 008f4a0e  57                   push edi
// 008f4a0f  8d4c2438             lea ecx, [esp + 0x38]
// 008f4a13  e8486cf5ff           call 0x84b660
// 008f4a18  8d4c2428             lea ecx, [esp + 0x28]
// 008f4a1c  51                   push ecx
// 008f4a1d  8d4c2418             lea ecx, [esp + 0x18]
// 008f4a21  c644244c01           mov byte ptr [esp + 0x4c], 1
// 008f4a26  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008f4a2c  50                   push eax
// 008f4a2d  8d4c241c             lea ecx, [esp + 0x1c]
// 008f4a31  ff1580de9800         call dword ptr [0x98de80]
// 008f4a37  8b5708               mov edx, dword ptr [edi + 8]
// 008f4a3a  50                   push eax
// 008f4a3b  52                   push edx
// 008f4a3c  ff156cb19800         call dword ptr [0x98b16c]
// 008f4a42  8b442428             mov eax, dword ptr [esp + 0x28]
// 008f4a46  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f4a4a  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008f4a4e  8b16                 mov edx, dword ptr [esi]
// 008f4a50  8b5244               mov edx, dword ptr [edx + 0x44]
// 008f4a53  55                   push ebp
// 008f4a54  89442424             mov dword ptr [esp + 0x24], eax
// 008f4a58  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f4a5c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008f4a60  8d442424             lea eax, [esp + 0x24]
// 008f4a64  50                   push eax
// 008f4a65  51                   push ecx
// 008f4a66  53                   push ebx
// 008f4a67  8d442428             lea eax, [esp + 0x28]
// 008f4a6b  50                   push eax
// 008f4a6c  8bce                 mov ecx, esi
// 008f4a6e  ffd2                 call edx
// 008f4a70  837d7c00             cmp dword ptr [ebp + 0x7c], 0
// 008f4a74  7505                 jne 0x8f4a7b
// 008f4a76  f6c301               test bl, 1
// 008f4a79  7413                 je 0x8f4a8e
// 008f4a7b  837e1800             cmp dword ptr [esi + 0x18], 0
// 008f4a7f  740d                 je 0x8f4a8e
// 008f4a81  b801000000           mov eax, 1
// 008f4a86  01442418             add dword ptr [esp + 0x18], eax
// 008f4a8a  0144241c             add dword ptr [esp + 0x1c], eax
// 008f4a8e  8b07                 mov eax, dword ptr [edi]
// 008f4a90  8b16                 mov edx, dword ptr [esi]
// 008f4a92  55                   push ebp
// 008f4a93  89442460             mov dword ptr [esp + 0x60], eax
// 008f4a97  8b4248               mov eax, dword ptr [edx + 0x48]
// 008f4a9a  53                   push ebx
// 008f4a9b  8bce                 mov ecx, esi
// 008f4a9d  ffd0                 call eax
// 008f4a9f  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008f4aa3  50                   push eax
// 008f4aa4  8b4238               mov eax, dword ptr [edx + 0x38]
// 008f4aa7  8bcf                 mov ecx, edi
// 008f4aa9  ffd0                 call eax
// 008f4aab  f7c300010000         test ebx, 0x100
// 008f4ab1  750c                 jne 0x8f4abf
// 008f4ab3  8d4c2414             lea ecx, [esp + 0x14]
// 008f4ab7  51                   push ecx
// 008f4ab8  8bcd                 mov ecx, ebp
// 008f4aba  e889f3efff           call 0x7f3e48
// 008f4abf  6a00                 push 0
// 008f4ac1  8bcf                 mov ecx, edi
// 008f4ac3  e880fcefff           call 0x7f4748
// 008f4ac8  8d4c2414             lea ecx, [esp + 0x14]
// 008f4acc  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008f4ad2  8d4c2414             lea ecx, [esp + 0x14]
// 008f4ad6  8bf0                 mov esi, eax
// 008f4ad8  ff1580de9800         call dword ptr [0x98de80]
// 008f4ade  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f4ae2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f4ae6  8b7f04               mov edi, dword ptr [edi + 4]
// 008f4ae9  6a02                 push 2
// 008f4aeb  52                   push edx
// 008f4aec  8b542424             mov edx, dword ptr [esp + 0x24]
// 008f4af0  51                   push ecx
// 008f4af1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008f4af5  52                   push edx
// 008f4af6  51                   push ecx
// 008f4af7  56                   push esi
// 008f4af8  50                   push eax
// 008f4af9  6a00                 push 0
// 008f4afb  6a00                 push 0
// 008f4afd  57                   push edi
// 008f4afe  ff15f8ca9800         call dword ptr [0x98caf8]
// 008f4b04  8d4c2430             lea ecx, [esp + 0x30]
// 008f4b08  c644244800           mov byte ptr [esp + 0x48], 0
// 008f4b0d  e8ce6bf5ff           call 0x84b6e0
// 008f4b12  8d4c2414             lea ecx, [esp + 0x14]
// 008f4b16  ff15c0de9800         call dword ptr [0x98dec0]
// 008f4b1c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f4b20  64890d00000000       mov dword ptr fs:[0], ecx
// 008f4b27  59                   pop ecx
// 008f4b28  5f                   pop edi
// 008f4b29  5e                   pop esi
// 008f4b2a  5d                   pop ebp
// 008f4b2b  5b                   pop ebx
// 008f4b2c  83c438               add esp, 0x38
// 008f4b2f  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawButtonText@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTButtonTheme.cpp