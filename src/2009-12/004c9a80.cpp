// roc 2009-12 004c9a80  unit: G3D::Texture  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c9a80
//
// 004c9a80  6aff                 push -1
// 004c9a82  68c12d9300           push 0x932dc1
// 004c9a87  64a100000000         mov eax, dword ptr fs:[0]
// 004c9a8d  50                   push eax
// 004c9a8e  64892500000000       mov dword ptr fs:[0], esp
// 004c9a95  83ec0c               sub esp, 0xc
// 004c9a98  53                   push ebx
// 004c9a99  55                   push ebp
// 004c9a9a  56                   push esi
// 004c9a9b  57                   push edi
// 004c9a9c  8bf9                 mov edi, ecx
// 004c9a9e  8b4708               mov eax, dword ptr [edi + 8]
// 004c9aa1  8b2f                 mov ebp, dword ptr [edi]
// 004c9aa3  03c0                 add eax, eax
// 004c9aa5  03c0                 add eax, eax
// 004c9aa7  6a10                 push 0x10
// 004c9aa9  50                   push eax
// 004c9aaa  896c2420             mov dword ptr [esp + 0x20], ebp
// 004c9aae  e80d081200           call 0x5ea2c0
// 004c9ab3  8b4f08               mov ecx, dword ptr [edi + 8]
// 004c9ab6  8b542434             mov edx, dword ptr [esp + 0x34]
// 004c9aba  83c408               add esp, 8
// 004c9abd  3bd1                 cmp edx, ecx
// 004c9abf  8907                 mov dword ptr [edi], eax
// 004c9ac1  7d02                 jge 0x4c9ac5
// 004c9ac3  8bca                 mov ecx, edx
// 004c9ac5  8d1c88               lea ebx, [eax + ecx*4]
// 004c9ac8  8bf0                 mov esi, eax
// 004c9aca  8bfd                 mov edi, ebp
// 004c9acc  3bf3                 cmp esi, ebx
// 004c9ace  7338                 jae 0x4c9b08
// 004c9ad0  8b2d0cb29800         mov ebp, dword ptr [0x98b20c]
// 004c9ad6  85f6                 test esi, esi
// 004c9ad8  7414                 je 0x4c9aee
// 004c9ada  c70600000000         mov dword ptr [esi], 0
// 004c9ae0  8b07                 mov eax, dword ptr [edi]
// 004c9ae2  85c0                 test eax, eax
// 004c9ae4  7408                 je 0x4c9aee
// 004c9ae6  8906                 mov dword ptr [esi], eax
// 004c9ae8  83c004               add eax, 4
// 004c9aeb  50                   push eax
// 004c9aec  ffd5                 call ebp
// 004c9aee  83c604               add esi, 4
// 004c9af1  83c704               add edi, 4
// 004c9af4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004c9afc  3bf3                 cmp esi, ebx
// 004c9afe  72d6                 jb 0x4c9ad6
// 004c9b00  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c9b04  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004c9b08  8d5c9500             lea ebx, [ebp + edx*4]
// 004c9b0c  8bfd                 mov edi, ebp
// 004c9b0e  3beb                 cmp ebp, ebx
// 004c9b10  7354                 jae 0x4c9b66
// 004c9b12  8b07                 mov eax, dword ptr [edi]
// 004c9b14  85c0                 test eax, eax
// 004c9b16  7447                 je 0x4c9b5f
// 004c9b18  83c004               add eax, 4
// 004c9b1b  50                   push eax
// 004c9b1c  ff1508b29800         call dword ptr [0x98b208]
// 004c9b22  85c0                 test eax, eax
// 004c9b24  7533                 jne 0x4c9b59
// 004c9b26  8b0f                 mov ecx, dword ptr [edi]
// 004c9b28  8b7108               mov esi, dword ptr [ecx + 8]
// 004c9b2b  85f6                 test esi, esi
// 004c9b2d  741c                 je 0x4c9b4b
// 004c9b2f  90                   nop 
// 004c9b30  8b0e                 mov ecx, dword ptr [esi]
// 004c9b32  8b11                 mov edx, dword ptr [ecx]
// 004c9b34  8b4204               mov eax, dword ptr [edx + 4]
// 004c9b37  ffd0                 call eax
// 004c9b39  8bc6                 mov eax, esi
// 004c9b3b  8b7604               mov esi, dword ptr [esi + 4]
// 004c9b3e  50                   push eax
// 004c9b3f  e8169d3200           call 0x7f385a
// 004c9b44  83c404               add esp, 4
// 004c9b47  85f6                 test esi, esi
// 004c9b49  75e5                 jne 0x4c9b30
// 004c9b4b  8b0f                 mov ecx, dword ptr [edi]
// 004c9b4d  85c9                 test ecx, ecx
// 004c9b4f  7408                 je 0x4c9b59
// 004c9b51  8b11                 mov edx, dword ptr [ecx]
// 004c9b53  8b02                 mov eax, dword ptr [edx]
// 004c9b55  6a01                 push 1
// 004c9b57  ffd0                 call eax
// 004c9b59  c70700000000         mov dword ptr [edi], 0
// 004c9b5f  83c704               add edi, 4
// 004c9b62  3bfb                 cmp edi, ebx
// 004c9b64  72ac                 jb 0x4c9b12
// 004c9b66  55                   push ebp
// 004c9b67  e874081200           call 0x5ea3e0
// 004c9b6c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c9b70  83c404               add esp, 4
// 004c9b73  5f                   pop edi
// 004c9b74  5e                   pop esi
// 004c9b75  5d                   pop ebp
// 004c9b76  5b                   pop ebx
// 004c9b77  64890d00000000       mov dword ptr fs:[0], ecx
// 004c9b7e  83c418               add esp, 0x18
// 004c9b81  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
