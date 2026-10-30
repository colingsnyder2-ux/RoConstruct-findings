// roc 2009-12 0083e890  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083e890
//
// 0083e890  53                   push ebx
// 0083e891  8b1deccb9800         mov ebx, dword ptr [0x98cbec]
// 0083e897  56                   push esi
// 0083e898  57                   push edi
// 0083e899  8bf1                 mov esi, ecx
// 0083e89b  ffd3                 call ebx
// 0083e89d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 0083e8a0  e8abf3ffff           call 0x83dc50
// 0083e8a5  85c0                 test eax, eax
// 0083e8a7  740b                 je 0x83e8b4
// 0083e8a9  5f                   pop edi
// 0083e8aa  5e                   pop esi
// 0083e8ab  b801000000           mov eax, 1
// 0083e8b0  5b                   pop ebx
// 0083e8b1  c20800               ret 8
// 0083e8b4  ffd3                 call ebx
// 0083e8b6  50                   push eax
// 0083e8b7  e86e52fbff           call 0x7f3b2a
// 0083e8bc  85c0                 test eax, eax
// 0083e8be  7427                 je 0x83e8e7
// 0083e8c0  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083e8c3  50                   push eax
// 0083e8c4  ff15bccb9800         call dword ptr [0x98cbbc]
// 0083e8ca  50                   push eax
// 0083e8cb  e85a52fbff           call 0x7f3b2a
// 0083e8d0  8bf0                 mov esi, eax
// 0083e8d2  85f6                 test esi, esi
// 0083e8d4  7411                 je 0x83e8e7
// 0083e8d6  e8b558fcff           call 0x804190
// 0083e8db  50                   push eax
// 0083e8dc  8bce                 mov ecx, esi
// 0083e8de  e80555fbff           call 0x7f3de8
// 0083e8e3  85c0                 test eax, eax
// 0083e8e5  75c2                 jne 0x83e8a9
// 0083e8e7  8b35cccb9800         mov esi, dword ptr [0x98cbcc]
// 0083e8ed  ffd6                 call esi
// 0083e8ef  85c0                 test eax, eax
// 0083e8f1  7413                 je 0x83e906
// 0083e8f3  ffd3                 call ebx
// 0083e8f5  8bd8                 mov ebx, eax
// 0083e8f7  ffd6                 call esi
// 0083e8f9  8bf8                 mov edi, eax
// 0083e8fb  8bc3                 mov eax, ebx
// 0083e8fd  e84ef3ffff           call 0x83dc50
// 0083e902  85c0                 test eax, eax
// 0083e904  75a3                 jne 0x83e8a9
// 0083e906  ff1528cc9800         call dword ptr [0x98cc28]
// 0083e90c  f7d8                 neg eax
// 0083e90e  5f                   pop edi
// 0083e90f  1bc0                 sbb eax, eax
// 0083e911  5e                   pop esi
// 0083e912  f7d8                 neg eax
// 0083e914  5b                   pop ebx
// 0083e915  c20800               ret 8
// copied from an identical function in another client (function ?FilterKey@CXTPCustomizeSheet@@AAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp