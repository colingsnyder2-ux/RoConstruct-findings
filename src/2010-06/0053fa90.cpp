// from server: 100% by auto
// roc 2010-06 0053fa90  unit: RBX::SceneManager  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fa90
//
// 0053fa90  6aff                 push -1
// 0053fa92  6851f99800           push 0x98f951
// 0053fa97  64a100000000         mov eax, dword ptr fs:[0]
// 0053fa9d  50                   push eax
// 0053fa9e  64892500000000       mov dword ptr fs:[0], esp
// 0053faa5  83ec0c               sub esp, 0xc
// 0053faa8  53                   push ebx
// 0053faa9  55                   push ebp
// 0053faaa  56                   push esi
// 0053faab  57                   push edi
// 0053faac  8bf9                 mov edi, ecx
// 0053faae  8b4708               mov eax, dword ptr [edi + 8]
// 0053fab1  8b2f                 mov ebp, dword ptr [edi]
// 0053fab3  03c0                 add eax, eax
// 0053fab5  03c0                 add eax, eax
// 0053fab7  6a10                 push 0x10
// 0053fab9  50                   push eax
// 0053faba  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053fabe  e8dddd0000           call 0x54d8a0
// 0053fac3  8b4f08               mov ecx, dword ptr [edi + 8]
// 0053fac6  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053faca  83c408               add esp, 8
// 0053facd  3bd1                 cmp edx, ecx
// 0053facf  8907                 mov dword ptr [edi], eax
// 0053fad1  7d02                 jge 0x53fad5
// 0053fad3  8bca                 mov ecx, edx
// 0053fad5  8d1c88               lea ebx, [eax + ecx*4]
// 0053fad8  8bf0                 mov esi, eax
// 0053fada  8bfd                 mov edi, ebp
// 0053fadc  3bf3                 cmp esi, ebx
// 0053fade  7338                 jae 0x53fb18
// 0053fae0  8b2d80a39e00         mov ebp, dword ptr [0x9ea380]
// 0053fae6  85f6                 test esi, esi
// 0053fae8  7414                 je 0x53fafe
// 0053faea  c70600000000         mov dword ptr [esi], 0
// 0053faf0  8b07                 mov eax, dword ptr [edi]
// 0053faf2  85c0                 test eax, eax
// 0053faf4  7408                 je 0x53fafe
// 0053faf6  8906                 mov dword ptr [esi], eax
// 0053faf8  83c004               add eax, 4
// 0053fafb  50                   push eax
// 0053fafc  ffd5                 call ebp
// 0053fafe  83c604               add esi, 4
// 0053fb01  83c704               add edi, 4
// 0053fb04  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0053fb0c  3bf3                 cmp esi, ebx
// 0053fb0e  72d6                 jb 0x53fae6
// 0053fb10  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053fb14  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053fb18  8d5c9500             lea ebx, [ebp + edx*4]
// 0053fb1c  8bfd                 mov edi, ebp
// 0053fb1e  3beb                 cmp ebp, ebx
// 0053fb20  7354                 jae 0x53fb76
// 0053fb22  8b07                 mov eax, dword ptr [edi]
// 0053fb24  85c0                 test eax, eax
// 0053fb26  7447                 je 0x53fb6f
// 0053fb28  83c004               add eax, 4
// 0053fb2b  50                   push eax
// 0053fb2c  ff157ca39e00         call dword ptr [0x9ea37c]
// 0053fb32  85c0                 test eax, eax
// 0053fb34  7533                 jne 0x53fb69
// 0053fb36  8b0f                 mov ecx, dword ptr [edi]
// 0053fb38  8b7108               mov esi, dword ptr [ecx + 8]
// 0053fb3b  85f6                 test esi, esi
// 0053fb3d  741c                 je 0x53fb5b
// 0053fb3f  90                   nop 
// 0053fb40  8b0e                 mov ecx, dword ptr [esi]
// 0053fb42  8b11                 mov edx, dword ptr [ecx]
// 0053fb44  8b4204               mov eax, dword ptr [edx + 4]
// 0053fb47  ffd0                 call eax
// 0053fb49  8bc6                 mov eax, esi
// 0053fb4b  8b7604               mov esi, dword ptr [esi + 4]
// 0053fb4e  50                   push eax
// 0053fb4f  e8467e2600           call 0x7a799a
// 0053fb54  83c404               add esp, 4
// 0053fb57  85f6                 test esi, esi
// 0053fb59  75e5                 jne 0x53fb40
// 0053fb5b  8b0f                 mov ecx, dword ptr [edi]
// 0053fb5d  85c9                 test ecx, ecx
// 0053fb5f  7408                 je 0x53fb69
// 0053fb61  8b11                 mov edx, dword ptr [ecx]
// 0053fb63  8b02                 mov eax, dword ptr [edx]
// 0053fb65  6a01                 push 1
// 0053fb67  ffd0                 call eax
// 0053fb69  c70700000000         mov dword ptr [edi], 0
// 0053fb6f  83c704               add edi, 4
// 0053fb72  3bfb                 cmp edi, ebx
// 0053fb74  72ac                 jb 0x53fb22
// 0053fb76  55                   push ebp
// 0053fb77  e844de0000           call 0x54d9c0
// 0053fb7c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053fb80  83c404               add esp, 4
// 0053fb83  5f                   pop edi
// 0053fb84  5e                   pop esi
// 0053fb85  5d                   pop ebp
// 0053fb86  5b                   pop ebx
// 0053fb87  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fb8e  83c418               add esp, 0x18
// 0053fb91  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
