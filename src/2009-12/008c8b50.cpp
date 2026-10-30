// roc 2009-12 008c8b50  unit: CXTPPropertyGridInplaceEdit  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8b50
//
// 008c8b50  6aff                 push -1
// 008c8b52  688b489600           push 0x96488b
// 008c8b57  64a100000000         mov eax, dword ptr fs:[0]
// 008c8b5d  50                   push eax
// 008c8b5e  83ec08               sub esp, 8
// 008c8b61  53                   push ebx
// 008c8b62  55                   push ebp
// 008c8b63  56                   push esi
// 008c8b64  57                   push edi
// 008c8b65  a10052b600           mov eax, dword ptr [0xb65200]
// 008c8b6a  33c4                 xor eax, esp
// 008c8b6c  50                   push eax
// 008c8b6d  8d44241c             lea eax, [esp + 0x1c]
// 008c8b71  64a300000000         mov dword ptr fs:[0], eax
// 008c8b77  8be9                 mov ebp, ecx
// 008c8b79  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008c8b7d  83fb09               cmp ebx, 9
// 008c8b80  0f84c4010000         je 0x8c8d4a
// 008c8b86  83fb0d               cmp ebx, 0xd
// 008c8b89  7527                 jne 0x8c8bb2
// 008c8b8b  e8e2d80500           call 0x926472
// 008c8b90  a900100000           test eax, 0x1000
// 008c8b95  0f84a4010000         je 0x8c8d3f
// 008c8b9b  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c8b9f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c8ba3  50                   push eax
// 008c8ba4  51                   push ecx
// 008c8ba5  53                   push ebx
// 008c8ba6  8bcd                 mov ecx, ebp
// 008c8ba8  e8e3fcffff           call 0x8c8890
// 008c8bad  e998010000           jmp 0x8c8d4a
// 008c8bb2  83fb1b               cmp ebx, 0x1b
// 008c8bb5  0f8484010000         je 0x8c8d3f
// 008c8bbb  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 008c8bc1  85c9                 test ecx, ecx
// 008c8bc3  0f8449010000         je 0x8c8d12
// 008c8bc9  8b11                 mov edx, dword ptr [ecx]
// 008c8bcb  8b4258               mov eax, dword ptr [edx + 0x58]
// 008c8bce  ffd0                 call eax
// 008c8bd0  85c0                 test eax, eax
// 008c8bd2  0f853a010000         jne 0x8c8d12
// 008c8bd8  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 008c8bde  83787c00             cmp dword ptr [eax + 0x7c], 0
// 008c8be2  0f842a010000         je 0x8c8d12
// 008c8be8  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 008c8bee  837f2800             cmp dword ptr [edi + 0x28], 0
// 008c8bf2  0f841a010000         je 0x8c8d12
// 008c8bf8  8d4c2430             lea ecx, [esp + 0x30]
// 008c8bfc  ff1574de9800         call dword ptr [0x98de74]
// 008c8c02  8d4c2430             lea ecx, [esp + 0x30]
// 008c8c06  51                   push ecx
// 008c8c07  8bcd                 mov ecx, ebp
// 008c8c09  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008c8c11  e832b2f2ff           call 0x7f3e48
// 008c8c16  8d4c2430             lea ecx, [esp + 0x30]
// 008c8c1a  ff1580de9800         call dword ptr [0x98de80]
// 008c8c20  50                   push eax
// 008c8c21  8bcf                 mov ecx, edi
// 008c8c23  e8b8d1f9ff           call 0x865de0
// 008c8c28  8bf0                 mov esi, eax
// 008c8c2a  83feff               cmp esi, -1
// 008c8c2d  750a                 jne 0x8c8c39
// 008c8c2f  8b4728               mov eax, dword ptr [edi + 0x28]
// 008c8c32  48                   dec eax
// 008c8c33  89442414             mov dword ptr [esp + 0x14], eax
// 008c8c37  eb04                 jmp 0x8c8c3d
// 008c8c39  89742414             mov dword ptr [esp + 0x14], esi
// 008c8c3d  6a01                 push 1
// 008c8c3f  53                   push ebx
// 008c8c40  8d4c2434             lea ecx, [esp + 0x34]
// 008c8c44  ff15f0da9800         call dword ptr [0x98daf0]
// 008c8c4a  c644242401           mov byte ptr [esp + 0x24], 1
// 008c8c4f  90                   nop 
// 008c8c50  8b4728               mov eax, dword ptr [edi + 0x28]
// 008c8c53  48                   dec eax
// 008c8c54  3bf0                 cmp esi, eax
// 008c8c56  7d03                 jge 0x8c8c5b
// 008c8c58  46                   inc esi
// 008c8c59  eb02                 jmp 0x8c8c5d
// 008c8c5b  33f6                 xor esi, esi
// 008c8c5d  56                   push esi
// 008c8c5e  8d542438             lea edx, [esp + 0x38]
// 008c8c62  52                   push edx
// 008c8c63  8bcf                 mov ecx, edi
// 008c8c65  e8d6d0f9ff           call 0x865d40
// 008c8c6a  6a01                 push 1
// 008c8c6c  8d44241c             lea eax, [esp + 0x1c]
// 008c8c70  50                   push eax
// 008c8c71  8d4c243c             lea ecx, [esp + 0x3c]
// 008c8c75  c644242c02           mov byte ptr [esp + 0x2c], 2
// 008c8c7a  ff1544cf9800         call dword ptr [0x98cf44]
// 008c8c80  8bc8                 mov ecx, eax
// 008c8c82  ff1580de9800         call dword ptr [0x98de80]
// 008c8c88  50                   push eax
// 008c8c89  8d4c2430             lea ecx, [esp + 0x30]
// 008c8c8d  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008c8c93  85c0                 test eax, eax
// 008c8c95  8d4c2418             lea ecx, [esp + 0x18]
// 008c8c99  0f94c3               sete bl
// 008c8c9c  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8ca2  8d4c2434             lea ecx, [esp + 0x34]
// 008c8ca6  84db                 test bl, bl
// 008c8ca8  7513                 jne 0x8c8cbd
// 008c8caa  c644242401           mov byte ptr [esp + 0x24], 1
// 008c8caf  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8cb5  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008c8cb9  7595                 jne 0x8c8c50
// 008c8cbb  eb3f                 jmp 0x8c8cfc
// 008c8cbd  ff1580de9800         call dword ptr [0x98de80]
// 008c8cc3  50                   push eax
// 008c8cc4  8bcd                 mov ecx, ebp
// 008c8cc6  e849aff2ff           call 0x7f3c14
// 008c8ccb  6aff                 push -1
// 008c8ccd  6a00                 push 0
// 008c8ccf  897734               mov dword ptr [edi + 0x34], esi
// 008c8cd2  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 008c8cd5  8b35c4cb9800         mov esi, dword ptr [0x98cbc4]
// 008c8cdb  68b1000000           push 0xb1
// 008c8ce0  51                   push ecx
// 008c8ce1  ffd6                 call esi
// 008c8ce3  8b5520               mov edx, dword ptr [ebp + 0x20]
// 008c8ce6  6a00                 push 0
// 008c8ce8  6a00                 push 0
// 008c8cea  68b7000000           push 0xb7
// 008c8cef  52                   push edx
// 008c8cf0  ffd6                 call esi
// 008c8cf2  8d4c2434             lea ecx, [esp + 0x34]
// 008c8cf6  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8cfc  8d4c242c             lea ecx, [esp + 0x2c]
// 008c8d00  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8d06  8d4c2430             lea ecx, [esp + 0x30]
// 008c8d0a  ff15c0de9800         call dword ptr [0x98dec0]
// 008c8d10  eb38                 jmp 0x8c8d4a
// 008c8d12  83fb2e               cmp ebx, 0x2e
// 008c8d15  740c                 je 0x8c8d23
// 008c8d17  83fb08               cmp ebx, 8
// 008c8d1a  7407                 je 0x8c8d23
// 008c8d1c  b801000000           mov eax, 1
// 008c8d21  eb02                 jmp 0x8c8d25
// 008c8d23  33c0                 xor eax, eax
// 008c8d25  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c8d29  8985b4000000         mov dword ptr [ebp + 0xb4], eax
// 008c8d2f  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c8d33  50                   push eax
// 008c8d34  51                   push ecx
// 008c8d35  53                   push ebx
// 008c8d36  8bcd                 mov ecx, ebp
// 008c8d38  e853fbffff           call 0x8c8890
// 008c8d3d  eb0b                 jmp 0x8c8d4a
// 008c8d3f  8b8d9c000000         mov ecx, dword ptr [ebp + 0x9c]
// 008c8d45  e8b8aef2ff           call 0x7f3c02
// 008c8d4a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c8d4e  64890d00000000       mov dword ptr fs:[0], ecx
// 008c8d55  59                   pop ecx
// 008c8d56  5f                   pop edi
// 008c8d57  5e                   pop esi
// 008c8d58  5d                   pop ebp
// 008c8d59  5b                   pop ebx
// 008c8d5a  83c414               add esp, 0x14
// 008c8d5d  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp