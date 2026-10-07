// roc 2009-06 0049d1c0  unit: G3D::Texture  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049d1c0
//
// 0049d1c0  6aff                 push -1
// 0049d1c2  68a16e8500           push 0x856ea1
// 0049d1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0049d1cd  50                   push eax
// 0049d1ce  64892500000000       mov dword ptr fs:[0], esp
// 0049d1d5  83ec0c               sub esp, 0xc
// 0049d1d8  53                   push ebx
// 0049d1d9  55                   push ebp
// 0049d1da  56                   push esi
// 0049d1db  57                   push edi
// 0049d1dc  8bf9                 mov edi, ecx
// 0049d1de  8b4708               mov eax, dword ptr [edi + 8]
// 0049d1e1  8b2f                 mov ebp, dword ptr [edi]
// 0049d1e3  03c0                 add eax, eax
// 0049d1e5  03c0                 add eax, eax
// 0049d1e7  6a10                 push 0x10
// 0049d1e9  50                   push eax
// 0049d1ea  896c2420             mov dword ptr [esp + 0x20], ebp
// 0049d1ee  e87ddf0c00           call 0x56b170
// 0049d1f3  8b4f08               mov ecx, dword ptr [edi + 8]
// 0049d1f6  8b542434             mov edx, dword ptr [esp + 0x34]
// 0049d1fa  83c408               add esp, 8
// 0049d1fd  3bd1                 cmp edx, ecx
// 0049d1ff  8907                 mov dword ptr [edi], eax
// 0049d201  7d02                 jge 0x49d205
// 0049d203  8bca                 mov ecx, edx
// 0049d205  8d1c88               lea ebx, [eax + ecx*4]
// 0049d208  8bf0                 mov esi, eax
// 0049d20a  8bfd                 mov edi, ebp
// 0049d20c  3bf3                 cmp esi, ebx
// 0049d20e  7338                 jae 0x49d248
// 0049d210  8b2dd0e18900         mov ebp, dword ptr [0x89e1d0]
// 0049d216  85f6                 test esi, esi
// 0049d218  7414                 je 0x49d22e
// 0049d21a  c70600000000         mov dword ptr [esi], 0
// 0049d220  8b07                 mov eax, dword ptr [edi]
// 0049d222  85c0                 test eax, eax
// 0049d224  7408                 je 0x49d22e
// 0049d226  8906                 mov dword ptr [esi], eax
// 0049d228  83c004               add eax, 4
// 0049d22b  50                   push eax
// 0049d22c  ffd5                 call ebp
// 0049d22e  83c604               add esi, 4
// 0049d231  83c704               add edi, 4
// 0049d234  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0049d23c  3bf3                 cmp esi, ebx
// 0049d23e  72d6                 jb 0x49d216
// 0049d240  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049d244  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049d248  8d5c9500             lea ebx, [ebp + edx*4]
// 0049d24c  8bfd                 mov edi, ebp
// 0049d24e  3beb                 cmp ebp, ebx
// 0049d250  7354                 jae 0x49d2a6
// 0049d252  8b07                 mov eax, dword ptr [edi]
// 0049d254  85c0                 test eax, eax
// 0049d256  7447                 je 0x49d29f
// 0049d258  83c004               add eax, 4
// 0049d25b  50                   push eax
// 0049d25c  ff15a4e18900         call dword ptr [0x89e1a4]
// 0049d262  85c0                 test eax, eax
// 0049d264  7533                 jne 0x49d299
// 0049d266  8b0f                 mov ecx, dword ptr [edi]
// 0049d268  8b7108               mov esi, dword ptr [ecx + 8]
// 0049d26b  85f6                 test esi, esi
// 0049d26d  741c                 je 0x49d28b
// 0049d26f  90                   nop 
// 0049d270  8b0e                 mov ecx, dword ptr [esi]
// 0049d272  8b11                 mov edx, dword ptr [ecx]
// 0049d274  8b4204               mov eax, dword ptr [edx + 4]
// 0049d277  ffd0                 call eax
// 0049d279  8bc6                 mov eax, esi
// 0049d27b  8b7604               mov esi, dword ptr [esi + 4]
// 0049d27e  50                   push eax
// 0049d27f  e8aeb72700           call 0x718a32
// 0049d284  83c404               add esp, 4
// 0049d287  85f6                 test esi, esi
// 0049d289  75e5                 jne 0x49d270
// 0049d28b  8b0f                 mov ecx, dword ptr [edi]
// 0049d28d  85c9                 test ecx, ecx
// 0049d28f  7408                 je 0x49d299
// 0049d291  8b11                 mov edx, dword ptr [ecx]
// 0049d293  8b02                 mov eax, dword ptr [edx]
// 0049d295  6a01                 push 1
// 0049d297  ffd0                 call eax
// 0049d299  c70700000000         mov dword ptr [edi], 0
// 0049d29f  83c704               add edi, 4
// 0049d2a2  3bfb                 cmp edi, ebx
// 0049d2a4  72ac                 jb 0x49d252
// 0049d2a6  55                   push ebp
// 0049d2a7  e8e4df0c00           call 0x56b290
// 0049d2ac  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049d2b0  83c404               add esp, 4
// 0049d2b3  5f                   pop edi
// 0049d2b4  5e                   pop esi
// 0049d2b5  5d                   pop ebp
// 0049d2b6  5b                   pop ebx
// 0049d2b7  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d2be  83c418               add esp, 0x18
// 0049d2c1  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?realloc@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
