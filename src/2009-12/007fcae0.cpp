// roc 2009-12 007fcae0  unit: CXTPControlComboBoxList  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fcae0
//
// 007fcae0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007fcae4  53                   push ebx
// 007fcae5  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007fcae9  56                   push esi
// 007fcaea  8bf1                 mov esi, ecx
// 007fcaec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007fcaf0  50                   push eax
// 007fcaf1  51                   push ecx
// 007fcaf2  53                   push ebx
// 007fcaf3  8bce                 mov ecx, esi
// 007fcaf5  e886ae0000           call 0x807980
// 007fcafa  85c0                 test eax, eax
// 007fcafc  7505                 jne 0x7fcb03
// 007fcafe  5e                   pop esi
// 007fcaff  5b                   pop ebx
// 007fcb00  c20c00               ret 0xc
// 007fcb03  57                   push edi
// 007fcb04  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 007fcb0a  85db                 test ebx, ebx
// 007fcb0c  7569                 jne 0x7fcb77
// 007fcb0e  6a08                 push 8
// 007fcb10  8bcf                 mov ecx, edi
// 007fcb12  e879baffff           call 0x7f8590
// 007fcb17  68b0647f00           push 0x7f64b0
// 007fcb1c  b9d0bab900           mov ecx, 0xb9bad0
// 007fcb21  e816991200           call 0x92643c
// 007fcb26  85c0                 test eax, eax
// 007fcb28  7505                 jne 0x7fcb2f
// 007fcb2a  e8dd6fffff           call 0x7f3b0c
// 007fcb2f  ff4804               dec dword ptr [eax + 4]
// 007fcb32  6a00                 push 0
// 007fcb34  8bce                 mov ecx, esi
// 007fcb36  e80d70ffff           call 0x7f3b48
// 007fcb3b  8b16                 mov edx, dword ptr [esi]
// 007fcb3d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007fcb43  8bce                 mov ecx, esi
// 007fcb45  ffd0                 call eax
// 007fcb47  85c0                 test eax, eax
// 007fcb49  7417                 je 0x7fcb62
// 007fcb4b  8b16                 mov edx, dword ptr [esi]
// 007fcb4d  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 007fcb53  6a00                 push 0
// 007fcb55  6aff                 push -1
// 007fcb57  8bce                 mov ecx, esi
// 007fcb59  ffd0                 call eax
// 007fcb5b  8bc8                 mov ecx, eax
// 007fcb5d  e83e9a0000           call 0x8065a0
// 007fcb62  5f                   pop edi
// 007fcb63  c7868001000000000000 mov dword ptr [esi + 0x180], 0
// 007fcb6d  5e                   pop esi
// 007fcb6e  b801000000           mov eax, 1
// 007fcb73  5b                   pop ebx
// 007fcb74  c20c00               ret 0xc
// 007fcb77  68b0647f00           push 0x7f64b0
// 007fcb7c  b9d0bab900           mov ecx, 0xb9bad0
// 007fcb81  e8b6981200           call 0x92643c
// 007fcb86  85c0                 test eax, eax
// 007fcb88  7505                 jne 0x7fcb8f
// 007fcb8a  e87d6fffff           call 0x7f3b0c
// 007fcb8f  ff4004               inc dword ptr [eax + 4]
// 007fcb92  8bcf                 mov ecx, edi
// 007fcb94  e807f4ffff           call 0x7fbfa0
// 007fcb99  6a07                 push 7
// 007fcb9b  8bcf                 mov ecx, edi
// 007fcb9d  e8eeb9ffff           call 0x7f8590
// 007fcba2  5f                   pop edi
// 007fcba3  5e                   pop esi
// 007fcba4  b801000000           mov eax, 1
// 007fcba9  5b                   pop ebx
// 007fcbaa  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetTrackingMode@CXTPControlComboBoxList@@MAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp