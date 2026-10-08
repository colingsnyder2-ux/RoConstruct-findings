// from server: 100% by auto
// roc 2008-06 00475a40  unit: G3D::Texture  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00475a40
//
// 00475a40  6aff                 push -1
// 00475a42  6871487c00           push 0x7c4871
// 00475a47  64a100000000         mov eax, dword ptr fs:[0]
// 00475a4d  50                   push eax
// 00475a4e  64892500000000       mov dword ptr fs:[0], esp
// 00475a55  83ec0c               sub esp, 0xc
// 00475a58  53                   push ebx
// 00475a59  55                   push ebp
// 00475a5a  56                   push esi
// 00475a5b  57                   push edi
// 00475a5c  8bf9                 mov edi, ecx
// 00475a5e  8b4708               mov eax, dword ptr [edi + 8]
// 00475a61  8b2f                 mov ebp, dword ptr [edi]
// 00475a63  03c0                 add eax, eax
// 00475a65  03c0                 add eax, eax
// 00475a67  6a10                 push 0x10
// 00475a69  50                   push eax
// 00475a6a  896c2420             mov dword ptr [esp + 0x20], ebp
// 00475a6e  e80d2b0900           call 0x508580
// 00475a73  8b4f08               mov ecx, dword ptr [edi + 8]
// 00475a76  8b542434             mov edx, dword ptr [esp + 0x34]
// 00475a7a  83c408               add esp, 8
// 00475a7d  3bd1                 cmp edx, ecx
// 00475a7f  8907                 mov dword ptr [edi], eax
// 00475a81  7d02                 jge 0x475a85
// 00475a83  8bca                 mov ecx, edx
// 00475a85  8d1c88               lea ebx, [eax + ecx*4]
// 00475a88  8bf0                 mov esi, eax
// 00475a8a  8bfd                 mov edi, ebp
// 00475a8c  3bf3                 cmp esi, ebx
// 00475a8e  7338                 jae 0x475ac8
// 00475a90  8b2db0218000         mov ebp, dword ptr [0x8021b0]
// 00475a96  85f6                 test esi, esi
// 00475a98  7414                 je 0x475aae
// 00475a9a  c70600000000         mov dword ptr [esi], 0
// 00475aa0  8b07                 mov eax, dword ptr [edi]
// 00475aa2  85c0                 test eax, eax
// 00475aa4  7408                 je 0x475aae
// 00475aa6  8906                 mov dword ptr [esi], eax
// 00475aa8  83c004               add eax, 4
// 00475aab  50                   push eax
// 00475aac  ffd5                 call ebp
// 00475aae  83c604               add esi, 4
// 00475ab1  83c704               add edi, 4
// 00475ab4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00475abc  3bf3                 cmp esi, ebx
// 00475abe  72d6                 jb 0x475a96
// 00475ac0  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00475ac4  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00475ac8  8d5c9500             lea ebx, [ebp + edx*4]
// 00475acc  8bfd                 mov edi, ebp
// 00475ace  3beb                 cmp ebp, ebx
// 00475ad0  7354                 jae 0x475b26
// 00475ad2  8b07                 mov eax, dword ptr [edi]
// 00475ad4  85c0                 test eax, eax
// 00475ad6  7447                 je 0x475b1f
// 00475ad8  83c004               add eax, 4
// 00475adb  50                   push eax
// 00475adc  ff15ac218000         call dword ptr [0x8021ac]
// 00475ae2  85c0                 test eax, eax
// 00475ae4  7533                 jne 0x475b19
// 00475ae6  8b0f                 mov ecx, dword ptr [edi]
// 00475ae8  8b7108               mov esi, dword ptr [ecx + 8]
// 00475aeb  85f6                 test esi, esi
// 00475aed  741c                 je 0x475b0b
// 00475aef  90                   nop 
// 00475af0  8b0e                 mov ecx, dword ptr [esi]
// 00475af2  8b11                 mov edx, dword ptr [ecx]
// 00475af4  8b4204               mov eax, dword ptr [edx + 4]
// 00475af7  ffd0                 call eax
// 00475af9  8bc6                 mov eax, esi
// 00475afb  8b7604               mov esi, dword ptr [esi + 4]
// 00475afe  50                   push eax
// 00475aff  e876ab2200           call 0x6a067a
// 00475b04  83c404               add esp, 4
// 00475b07  85f6                 test esi, esi
// 00475b09  75e5                 jne 0x475af0
// 00475b0b  8b0f                 mov ecx, dword ptr [edi]
// 00475b0d  85c9                 test ecx, ecx
// 00475b0f  7408                 je 0x475b19
// 00475b11  8b11                 mov edx, dword ptr [ecx]
// 00475b13  8b02                 mov eax, dword ptr [edx]
// 00475b15  6a01                 push 1
// 00475b17  ffd0                 call eax
// 00475b19  c70700000000         mov dword ptr [edi], 0
// 00475b1f  83c704               add edi, 4
// 00475b22  3bfb                 cmp edi, ebx
// 00475b24  72ac                 jb 0x475ad2
// 00475b26  55                   push ebp
// 00475b27  e8f4210900           call 0x507d20
// 00475b2c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00475b30  83c404               add esp, 4
// 00475b33  5f                   pop edi
// 00475b34  5e                   pop esi
// 00475b35  5d                   pop ebp
// 00475b36  5b                   pop ebx
// 00475b37  64890d00000000       mov dword ptr fs:[0], ecx
// 00475b3e  83c418               add esp, 0x18
// 00475b41  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
