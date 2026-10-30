// roc 2009-12 007f6730  unit: CXTPControl  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f6730
//
// 007f6730  6aff                 push -1
// 007f6732  6812879500           push 0x958712
// 007f6737  64a100000000         mov eax, dword ptr fs:[0]
// 007f673d  50                   push eax
// 007f673e  51                   push ecx
// 007f673f  53                   push ebx
// 007f6740  55                   push ebp
// 007f6741  56                   push esi
// 007f6742  57                   push edi
// 007f6743  a10052b600           mov eax, dword ptr [0xb65200]
// 007f6748  33c4                 xor eax, esp
// 007f674a  50                   push eax
// 007f674b  8d442418             lea eax, [esp + 0x18]
// 007f674f  64a300000000         mov dword ptr fs:[0], eax
// 007f6755  8be9                 mov ebp, ecx
// 007f6757  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f675b  50                   push eax
// 007f675c  8d4c242c             lea ecx, [esp + 0x2c]
// 007f6760  ff15b8de9800         call dword ptr [0x98deb8]
// 007f6766  33db                 xor ebx, ebx
// 007f6768  53                   push ebx
// 007f6769  6a09                 push 9
// 007f676b  8d4c2430             lea ecx, [esp + 0x30]
// 007f676f  895c2428             mov dword ptr [esp + 0x28], ebx
// 007f6773  ff1580d69800         call dword ptr [0x98d680]
// 007f6779  8bf0                 mov esi, eax
// 007f677b  83feff               cmp esi, -1
// 007f677e  7461                 je 0x7f67e1
// 007f6780  8d4e01               lea ecx, [esi + 1]
// 007f6783  51                   push ecx
// 007f6784  8d542418             lea edx, [esp + 0x18]
// 007f6788  52                   push edx
// 007f6789  8d4c2430             lea ecx, [esp + 0x30]
// 007f678d  ff157cd69800         call dword ptr [0x98d67c]
// 007f6793  8d4c2414             lea ecx, [esp + 0x14]
// 007f6797  c644242001           mov byte ptr [esp + 0x20], 1
// 007f679c  8dbde4000000         lea edi, [ebp + 0xe4]
// 007f67a2  ff1580de9800         call dword ptr [0x98de80]
// 007f67a8  50                   push eax
// 007f67a9  8bcf                 mov ecx, edi
// 007f67ab  ff1584de9800         call dword ptr [0x98de84]
// 007f67b1  85c0                 test eax, eax
// 007f67b3  7412                 je 0x7f67c7
// 007f67b5  8d442414             lea eax, [esp + 0x14]
// 007f67b9  50                   push eax
// 007f67ba  8bcf                 mov ecx, edi
// 007f67bc  ff1538d59800         call dword ptr [0x98d538]
// 007f67c2  bb01000000           mov ebx, 1
// 007f67c7  56                   push esi
// 007f67c8  8d4c242c             lea ecx, [esp + 0x2c]
// 007f67cc  ff1560d29800         call dword ptr [0x98d260]
// 007f67d2  8d4c2414             lea ecx, [esp + 0x14]
// 007f67d6  c644242000           mov byte ptr [esp + 0x20], 0
// 007f67db  ff15c0de9800         call dword ptr [0x98dec0]
// 007f67e1  8d4c2428             lea ecx, [esp + 0x28]
// 007f67e5  8db5d8000000         lea esi, [ebp + 0xd8]
// 007f67eb  ff1580de9800         call dword ptr [0x98de80]
// 007f67f1  50                   push eax
// 007f67f2  8bce                 mov ecx, esi
// 007f67f4  ff1584de9800         call dword ptr [0x98de84]
// 007f67fa  85c0                 test eax, eax
// 007f67fc  740f                 je 0x7f680d
// 007f67fe  8d4c2428             lea ecx, [esp + 0x28]
// 007f6802  51                   push ecx
// 007f6803  8bce                 mov ecx, esi
// 007f6805  ff1538d59800         call dword ptr [0x98d538]
// 007f680b  eb04                 jmp 0x7f6811
// 007f680d  85db                 test ebx, ebx
// 007f680f  7407                 je 0x7f6818
// 007f6811  8bcd                 mov ecx, ebp
// 007f6813  e8a8f4ffff           call 0x7f5cc0
// 007f6818  8d4c2428             lea ecx, [esp + 0x28]
// 007f681c  ff15c0de9800         call dword ptr [0x98dec0]
// 007f6822  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007f6826  64890d00000000       mov dword ptr fs:[0], ecx
// 007f682d  59                   pop ecx
// 007f682e  5f                   pop edi
// 007f682f  5e                   pop esi
// 007f6830  5d                   pop ebp
// 007f6831  5b                   pop ebx
// 007f6832  83c410               add esp, 0x10
// 007f6835  c20400               ret 4
// copied from an identical function in another client (function ?SetCaption@CXTPControl@@QAEXPBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp