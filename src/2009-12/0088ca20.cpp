// roc 2009-12 0088ca20  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ca20
//
// 0088ca20  6aff                 push -1
// 0088ca22  6809bb9500           push 0x95bb09
// 0088ca27  64a100000000         mov eax, dword ptr fs:[0]
// 0088ca2d  50                   push eax
// 0088ca2e  83ec14               sub esp, 0x14
// 0088ca31  53                   push ebx
// 0088ca32  55                   push ebp
// 0088ca33  56                   push esi
// 0088ca34  57                   push edi
// 0088ca35  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ca3a  33c4                 xor eax, esp
// 0088ca3c  50                   push eax
// 0088ca3d  8d442428             lea eax, [esp + 0x28]
// 0088ca41  64a300000000         mov dword ptr fs:[0], eax
// 0088ca47  8bf9                 mov edi, ecx
// 0088ca49  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0088ca4d  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 0088ca51  33d2                 xor edx, edx
// 0088ca53  8bc3                 mov eax, ebx
// 0088ca55  0fafc5               imul eax, ebp
// 0088ca58  85ed                 test ebp, ebp
// 0088ca5a  0f9ec2               setle dl
// 0088ca5d  8d4c2414             lea ecx, [esp + 0x14]
// 0088ca61  51                   push ecx
// 0088ca62  8bcf                 mov ecx, edi
// 0088ca64  89442428             mov dword ptr [esp + 0x28], eax
// 0088ca68  81c210100000         add edx, 0x1010
// 0088ca6e  52                   push edx
// 0088ca6f  e85cbbf6ff           call 0x7f85d0
// 0088ca74  85c0                 test eax, eax
// 0088ca76  0f8587000000         jne 0x88cb03
// 0088ca7c  8d44243c             lea eax, [esp + 0x3c]
// 0088ca80  50                   push eax
// 0088ca81  8bcf                 mov ecx, edi
// 0088ca83  e868f9ffff           call 0x88c3f0
// 0088ca88  8bc8                 mov ecx, eax
// 0088ca8a  ff1580de9800         call dword ptr [0x98de80]
// 0088ca90  50                   push eax
// 0088ca91  ff1598b79800         call dword ptr [0x98b798]
// 0088ca97  83c404               add esp, 4
// 0088ca9a  8d4c243c             lea ecx, [esp + 0x3c]
// 0088ca9e  8bf0                 mov esi, eax
// 0088caa0  ff15c0de9800         call dword ptr [0x98dec0]
// 0088caa6  03742424             add esi, dword ptr [esp + 0x24]
// 0088caaa  8bc6                 mov eax, esi
// 0088caac  99                   cdq 
// 0088caad  f7fb                 idiv ebx
// 0088caaf  85d2                 test edx, edx
// 0088cab1  740b                 je 0x88cabe
// 0088cab3  03f5                 add esi, ebp
// 0088cab5  8bc6                 mov eax, esi
// 0088cab7  99                   cdq 
// 0088cab8  f7fb                 idiv ebx
// 0088caba  85d2                 test edx, edx
// 0088cabc  75f5                 jne 0x88cab3
// 0088cabe  8d4c2438             lea ecx, [esp + 0x38]
// 0088cac2  ff1574de9800         call dword ptr [0x98de74]
// 0088cac8  56                   push esi
// 0088cac9  8d4c243c             lea ecx, [esp + 0x3c]
// 0088cacd  68583f9f00           push 0x9f3f58
// 0088cad2  51                   push ecx
// 0088cad3  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0088cadb  ff157cde9800         call dword ptr [0x98de7c]
// 0088cae1  83c40c               add esp, 0xc
// 0088cae4  8d542438             lea edx, [esp + 0x38]
// 0088cae8  52                   push edx
// 0088cae9  8bcf                 mov ecx, edi
// 0088caeb  e8b0f9ffff           call 0x88c4a0
// 0088caf0  6a64                 push 0x64
// 0088caf2  8bcf                 mov ecx, edi
// 0088caf4  e897baf6ff           call 0x7f8590
// 0088caf9  8d4c2438             lea ecx, [esp + 0x38]
// 0088cafd  ff15c0de9800         call dword ptr [0x98dec0]
// 0088cb03  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0088cb07  64890d00000000       mov dword ptr fs:[0], ecx
// 0088cb0e  59                   pop ecx
// 0088cb0f  5f                   pop edi
// 0088cb10  5e                   pop esi
// 0088cb11  5d                   pop ebp
// 0088cb12  5b                   pop ebx
// 0088cb13  83c420               add esp, 0x20
// 0088cb16  c20800               ret 8
// copied from an identical function in another client (function ?NotifySpinChanged@CXTPControlEdit@@MAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp