// roc 2009-12 0084e520  unit: CXTPPropertyGrid  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084e520
//
// 0084e520  56                   push esi
// 0084e521  8bf1                 mov esi, ecx
// 0084e523  83be8001000000       cmp dword ptr [esi + 0x180], 0
// 0084e52a  757e                 jne 0x84e5aa
// 0084e52c  53                   push ebx
// 0084e52d  57                   push edi
// 0084e52e  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084e532  85ff                 test edi, edi
// 0084e534  7460                 je 0x84e596
// 0084e536  6a00                 push 0
// 0084e538  e8c3f9ffff           call 0x84df00
// 0084e53d  8b1d30cc9800         mov ebx, dword ptr [0x98cc30]
// 0084e543  3bf8                 cmp edi, eax
// 0084e545  7521                 jne 0x84e568
// 0084e547  6a10                 push 0x10
// 0084e549  ffd3                 call ebx
// 0084e54b  6685c0               test ax, ax
// 0084e54e  7d18                 jge 0x84e568
// 0084e550  8b06                 mov eax, dword ptr [esi]
// 0084e552  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084e558  6a00                 push 0
// 0084e55a  6a00                 push 0
// 0084e55c  6a06                 push 6
// 0084e55e  8bce                 mov ecx, esi
// 0084e560  ffd2                 call edx
// 0084e562  5f                   pop edi
// 0084e563  5b                   pop ebx
// 0084e564  5e                   pop esi
// 0084e565  c20400               ret 4
// 0084e568  6a01                 push 1
// 0084e56a  8bce                 mov ecx, esi
// 0084e56c  e88ff9ffff           call 0x84df00
// 0084e571  3bf8                 cmp edi, eax
// 0084e573  7521                 jne 0x84e596
// 0084e575  6a10                 push 0x10
// 0084e577  ffd3                 call ebx
// 0084e579  6685c0               test ax, ax
// 0084e57c  7c18                 jl 0x84e596
// 0084e57e  8b06                 mov eax, dword ptr [esi]
// 0084e580  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084e586  6a00                 push 0
// 0084e588  6a01                 push 1
// 0084e58a  6afe                 push -2
// 0084e58c  8bce                 mov ecx, esi
// 0084e58e  ffd2                 call edx
// 0084e590  5f                   pop edi
// 0084e591  5b                   pop ebx
// 0084e592  5e                   pop esi
// 0084e593  c20400               ret 4
// 0084e596  8bce                 mov ecx, esi
// 0084e598  e8e3f4ffff           call 0x84da80
// 0084e59d  8bc8                 mov ecx, eax
// 0084e59f  e85e56faff           call 0x7f3c02
// 0084e5a4  5f                   pop edi
// 0084e5a5  5b                   pop ebx
// 0084e5a6  5e                   pop esi
// 0084e5a7  c20400               ret 4
// 0084e5aa  8b442408             mov eax, dword ptr [esp + 8]
// 0084e5ae  50                   push eax
// 0084e5af  e8da60faff           call 0x7f468e
// 0084e5b4  5e                   pop esi
// 0084e5b5  c20400               ret 4
// copied from an identical function in another client (function ?OnSetFocus@CXTPPropertyGrid@@IAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp