// roc 2009-06 0049bb60  unit: G3D::Texture  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049bb60
//
// 0049bb60  64a100000000         mov eax, dword ptr fs:[0]
// 0049bb66  6aff                 push -1
// 0049bb68  68f17d8600           push 0x867df1
// 0049bb6d  50                   push eax
// 0049bb6e  64892500000000       mov dword ptr fs:[0], esp
// 0049bb75  83ec08               sub esp, 8
// 0049bb78  55                   push ebp
// 0049bb79  56                   push esi
// 0049bb7a  57                   push edi
// 0049bb7b  8bf9                 mov edi, ecx
// 0049bb7d  8b4708               mov eax, dword ptr [edi + 8]
// 0049bb80  8b2f                 mov ebp, dword ptr [edi]
// 0049bb82  8d0440               lea eax, [eax + eax*2]
// 0049bb85  03c0                 add eax, eax
// 0049bb87  03c0                 add eax, eax
// 0049bb89  6a10                 push 0x10
// 0049bb8b  50                   push eax
// 0049bb8c  e8dff50c00           call 0x56b170
// 0049bb91  8b4f08               mov ecx, dword ptr [edi + 8]
// 0049bb94  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049bb98  83c408               add esp, 8
// 0049bb9b  3bd1                 cmp edx, ecx
// 0049bb9d  8907                 mov dword ptr [edi], eax
// 0049bb9f  7d02                 jge 0x49bba3
// 0049bba1  8bca                 mov ecx, edx
// 0049bba3  8d0c49               lea ecx, [ecx + ecx*2]
// 0049bba6  8bf0                 mov esi, eax
// 0049bba8  8d3c88               lea edi, [eax + ecx*4]
// 0049bbab  53                   push ebx
// 0049bbac  8bdd                 mov ebx, ebp
// 0049bbae  89742410             mov dword ptr [esp + 0x10], esi
// 0049bbb2  3bf7                 cmp esi, edi
// 0049bbb4  733c                 jae 0x49bbf2
// 0049bbb6  eb08                 jmp 0x49bbc0
// 0049bbb8  8da42400000000       lea esp, [esp]
// 0049bbbf  90                   nop 
// 0049bbc0  89742414             mov dword ptr [esp + 0x14], esi
// 0049bbc4  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0049bbcc  85f6                 test esi, esi
// 0049bbce  740c                 je 0x49bbdc
// 0049bbd0  53                   push ebx
// 0049bbd1  8bce                 mov ecx, esi
// 0049bbd3  e828ffffff           call 0x49bb00
// 0049bbd8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0049bbdc  83c60c               add esi, 0xc
// 0049bbdf  83c30c               add ebx, 0xc
// 0049bbe2  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0049bbea  89742410             mov dword ptr [esp + 0x10], esi
// 0049bbee  3bf7                 cmp esi, edi
// 0049bbf0  72ce                 jb 0x49bbc0
// 0049bbf2  8d1452               lea edx, [edx + edx*2]
// 0049bbf5  8d7c9500             lea edi, [ebp + edx*4]
// 0049bbf9  8bf5                 mov esi, ebp
// 0049bbfb  5b                   pop ebx
// 0049bbfc  3bef                 cmp ebp, edi
// 0049bbfe  731c                 jae 0x49bc1c
// 0049bc00  8b06                 mov eax, dword ptr [esi]
// 0049bc02  50                   push eax
// 0049bc03  e888f60c00           call 0x56b290
// 0049bc08  33c0                 xor eax, eax
// 0049bc0a  8906                 mov dword ptr [esi], eax
// 0049bc0c  894604               mov dword ptr [esi + 4], eax
// 0049bc0f  894608               mov dword ptr [esi + 8], eax
// 0049bc12  83c60c               add esi, 0xc
// 0049bc15  83c404               add esp, 4
// 0049bc18  3bf7                 cmp esi, edi
// 0049bc1a  72e4                 jb 0x49bc00
// 0049bc1c  55                   push ebp
// 0049bc1d  e86ef60c00           call 0x56b290
// 0049bc22  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049bc26  83c404               add esp, 4
// 0049bc29  5f                   pop edi
// 0049bc2a  5e                   pop esi
// 0049bc2b  5d                   pop ebp
// 0049bc2c  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bc33  83c414               add esp, 0x14
// 0049bc36  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@V?$Array@PBX@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
