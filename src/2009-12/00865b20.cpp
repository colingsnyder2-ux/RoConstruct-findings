// roc 2009-12 00865b20  unit: CPropertyGridItemBrickColor  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865b20
//
// 00865b20  83ec20               sub esp, 0x20
// 00865b23  56                   push esi
// 00865b24  57                   push edi
// 00865b25  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00865b29  8bf1                 mov esi, ecx
// 00865b2b  85ff                 test edi, edi
// 00865b2d  750d                 jne 0x865b3c
// 00865b2f  5f                   pop edi
// 00865b30  b857000780           mov eax, 0x80070057
// 00865b35  5e                   pop esi
// 00865b36  83c420               add esp, 0x20
// 00865b39  c20c00               ret 0xc
// 00865b3c  33c0                 xor eax, eax
// 00865b3e  668907               mov word ptr [edi], ax
// 00865b41  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00865b47  85c0                 test eax, eax
// 00865b49  7406                 je 0x865b51
// 00865b4b  83782000             cmp dword ptr [eax + 0x20], 0
// 00865b4f  750d                 jne 0x865b5e
// 00865b51  5f                   pop edi
// 00865b52  b801000000           mov eax, 1
// 00865b57  5e                   pop esi
// 00865b58  83c420               add esp, 0x20
// 00865b5b  c20c00               ret 0xc
// 00865b5e  53                   push ebx
// 00865b5f  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00865b63  55                   push ebp
// 00865b64  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00865b68  50                   push eax
// 00865b69  8d4c2424             lea ecx, [esp + 0x24]
// 00865b6d  e8fe56feff           call 0x84b270
// 00865b72  55                   push ebp
// 00865b73  53                   push ebx
// 00865b74  50                   push eax
// 00865b75  ff155cca9800         call dword ptr [0x98ca5c]
// 00865b7b  85c0                 test eax, eax
// 00865b7d  750f                 jne 0x865b8e
// 00865b7f  5d                   pop ebp
// 00865b80  5b                   pop ebx
// 00865b81  5f                   pop edi
// 00865b82  b801000000           mov eax, 1
// 00865b87  5e                   pop esi
// 00865b88  83c420               add esp, 0x20
// 00865b8b  c20c00               ret 0xc
// 00865b8e  b903000000           mov ecx, 3
// 00865b93  66890f               mov word ptr [edi], cx
// 00865b96  8d542410             lea edx, [esp + 0x10]
// 00865b9a  52                   push edx
// 00865b9b  8d4ee0               lea ecx, [esi - 0x20]
// 00865b9e  c7470800000000       mov dword ptr [edi + 8], 0
// 00865ba5  e876eeffff           call 0x864a20
// 00865baa  50                   push eax
// 00865bab  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00865bb1  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00865bb4  6898010000           push 0x198
// 00865bb9  51                   push ecx
// 00865bba  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00865bc0  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00865bc6  8d542410             lea edx, [esp + 0x10]
// 00865bca  52                   push edx
// 00865bcb  e82ae2f8ff           call 0x7f3dfa
// 00865bd0  55                   push ebp
// 00865bd1  53                   push ebx
// 00865bd2  8d442418             lea eax, [esp + 0x18]
// 00865bd6  50                   push eax
// 00865bd7  ff155cca9800         call dword ptr [0x98ca5c]
// 00865bdd  5d                   pop ebp
// 00865bde  f7d8                 neg eax
// 00865be0  5b                   pop ebx
// 00865be1  1bc0                 sbb eax, eax
// 00865be3  5f                   pop edi
// 00865be4  40                   inc eax
// 00865be5  5e                   pop esi
// 00865be6  83c420               add esp, 0x20
// 00865be9  c20c00               ret 0xc
// copied from an identical function in another client (function ?AccessibleHitTest@CXTPPropertyGridItem@@MAEJJJPAUtagVARIANT@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp