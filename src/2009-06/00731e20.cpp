// roc 2009-06 00731e20  unit: CXTPCommandBar  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731e20
//
// 00731e20  51                   push ecx
// 00731e21  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00731e25  56                   push esi
// 00731e26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00731e2a  68f8118b00           push 0x8b11f8
// 00731e2f  50                   push eax
// 00731e30  56                   push esi
// 00731e31  c644241089           mov byte ptr [esp + 0x10], 0x89
// 00731e36  c644241150           mov byte ptr [esp + 0x11], 0x50
// 00731e3b  c64424124e           mov byte ptr [esp + 0x12], 0x4e
// 00731e40  c644241347           mov byte ptr [esp + 0x13], 0x47
// 00731e45  ff15c0e18900         call dword ptr [0x89e1c0]
// 00731e4b  85c0                 test eax, eax
// 00731e4d  7503                 jne 0x731e52
// 00731e4f  5e                   pop esi
// 00731e50  59                   pop ecx
// 00731e51  c3                   ret 
// 00731e52  57                   push edi
// 00731e53  50                   push eax
// 00731e54  56                   push esi
// 00731e55  ff15bce18900         call dword ptr [0x89e1bc]
// 00731e5b  8bf8                 mov edi, eax
// 00731e5d  85ff                 test edi, edi
// 00731e5f  7504                 jne 0x731e65
// 00731e61  5f                   pop edi
// 00731e62  5e                   pop esi
// 00731e63  59                   pop ecx
// 00731e64  c3                   ret 
// 00731e65  57                   push edi
// 00731e66  ff1550e28900         call dword ptr [0x89e250]
// 00731e6c  8b08                 mov ecx, dword ptr [eax]
// 00731e6e  3b4c2408             cmp ecx, dword ptr [esp + 8]
// 00731e72  7426                 je 0x731e9a
// 00731e74  0fb6f1               movzx esi, cl
// 00731e77  81ee89000000         sub esi, 0x89
// 00731e7d  752f                 jne 0x731eae
// 00731e7f  0fb67001             movzx esi, byte ptr [eax + 1]
// 00731e83  83ee50               sub esi, 0x50
// 00731e86  7526                 jne 0x731eae
// 00731e88  0fb67002             movzx esi, byte ptr [eax + 2]
// 00731e8c  83ee4e               sub esi, 0x4e
// 00731e8f  751d                 jne 0x731eae
// 00731e91  0fb67003             movzx esi, byte ptr [eax + 3]
// 00731e95  83ee47               sub esi, 0x47
// 00731e98  7514                 jne 0x731eae
// 00731e9a  57                   push edi
// 00731e9b  33f6                 xor esi, esi
// 00731e9d  ff154ce28900         call dword ptr [0x89e24c]
// 00731ea3  33c0                 xor eax, eax
// 00731ea5  85f6                 test esi, esi
// 00731ea7  5f                   pop edi
// 00731ea8  0f94c0               sete al
// 00731eab  5e                   pop esi
// 00731eac  59                   pop ecx
// 00731ead  c3                   ret 
// 00731eae  c1fe1f               sar esi, 0x1f
// 00731eb1  57                   push edi
// 00731eb2  83ce01               or esi, 1
// 00731eb5  ff154ce28900         call dword ptr [0x89e24c]
// 00731ebb  33c0                 xor eax, eax
// 00731ebd  85f6                 test esi, esi
// 00731ebf  5f                   pop edi
// 00731ec0  0f94c0               sete al
// 00731ec3  5e                   pop esi
// 00731ec4  59                   pop ecx
// 00731ec5  c3                   ret 
// copied from an identical function in another client (function ?IsPngBitmapResource@CXTPImageManagerIcon@@SAHPAUHINSTANCE__@@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob0
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPImageManager.cpp