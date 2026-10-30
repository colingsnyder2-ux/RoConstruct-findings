// roc 2009-12 0086b440  unit: CXTPPropertyGridItemBool  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086b440
//
// 0086b440  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086b444  56                   push esi
// 0086b445  57                   push edi
// 0086b446  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0086b44a  8bf1                 mov esi, ecx
// 0086b44c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086b450  50                   push eax
// 0086b451  51                   push ecx
// 0086b452  57                   push edi
// 0086b453  8bce                 mov ecx, esi
// 0086b455  e806a1ffff           call 0x865560
// 0086b45a  85c0                 test eax, eax
// 0086b45c  7505                 jne 0x86b463
// 0086b45e  5f                   pop edi
// 0086b45f  5e                   pop esi
// 0086b460  c20c00               ret 0xc
// 0086b463  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0086b46a  7439                 je 0x86b4a5
// 0086b46c  8b542414             mov edx, dword ptr [esp + 0x14]
// 0086b470  8b442410             mov eax, dword ptr [esp + 0x10]
// 0086b474  52                   push edx
// 0086b475  50                   push eax
// 0086b476  8bce                 mov ecx, esi
// 0086b478  e883ffffff           call 0x86b400
// 0086b47d  85c0                 test eax, eax
// 0086b47f  7424                 je 0x86b4a5
// 0086b481  8b16                 mov edx, dword ptr [esi]
// 0086b483  8b4258               mov eax, dword ptr [edx + 0x58]
// 0086b486  8bce                 mov ecx, esi
// 0086b488  ffd0                 call eax
// 0086b48a  85c0                 test eax, eax
// 0086b48c  7517                 jne 0x86b4a5
// 0086b48e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0086b492  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086b496  8b16                 mov edx, dword ptr [esi]
// 0086b498  8b92b8000000         mov edx, dword ptr [edx + 0xb8]
// 0086b49e  50                   push eax
// 0086b49f  51                   push ecx
// 0086b4a0  57                   push edi
// 0086b4a1  8bce                 mov ecx, esi
// 0086b4a3  ffd2                 call edx
// 0086b4a5  5f                   pop edi
// 0086b4a6  b801000000           mov eax, 1
// 0086b4ab  5e                   pop esi
// 0086b4ac  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPPropertyGridItemBool@@MAEHIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemBool.cpp