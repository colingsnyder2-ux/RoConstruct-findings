// roc 2007-08 00569800  unit: RBX::ModelInstance  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569800
//
// 00569800  64a100000000         mov eax, dword ptr fs:[0]
// 00569806  6aff                 push -1
// 00569808  683e457500           push 0x75453e
// 0056980d  50                   push eax
// 0056980e  64892500000000       mov dword ptr fs:[0], esp
// 00569815  53                   push ebx
// 00569816  55                   push ebp
// 00569817  56                   push esi
// 00569818  57                   push edi
// 00569819  bb01000000           mov ebx, 1
// 0056981e  33ff                 xor edi, edi
// 00569820  841dd0238c00         test byte ptr [0x8c23d0], bl
// 00569826  7526                 jne 0x56984e
// 00569828  091dd0238c00         or dword ptr [0x8c23d0], ebx
// 0056982e  6aff                 push -1
// 00569830  688c9b7a00           push 0x7a9b8c
// 00569835  897c2420             mov dword ptr [esp + 0x20], edi
// 00569839  e80231fcff           call 0x52c940
// 0056983e  83c408               add esp, 8
// 00569841  a3cc238c00           mov dword ptr [0x8c23cc], eax
// 00569846  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056984e  6a20                 push 0x20
// 00569850  e8a1660c00           call 0x62fef6
// 00569855  83c404               add esp, 4
// 00569858  3bc7                 cmp eax, edi
// 0056985a  741e                 je 0x56987a
// 0056985c  8b0dd8228c00         mov ecx, dword ptr [0x8c22d8]
// 00569862  8938                 mov dword ptr [eax], edi
// 00569864  897804               mov dword ptr [eax + 4], edi
// 00569867  897808               mov dword ptr [eax + 8], edi
// 0056986a  89480c               mov dword ptr [eax + 0xc], ecx
// 0056986d  897810               mov dword ptr [eax + 0x10], edi
// 00569870  897818               mov dword ptr [eax + 0x18], edi
// 00569873  89781c               mov dword ptr [eax + 0x1c], edi
// 00569876  8bf0                 mov esi, eax
// 00569878  eb02                 jmp 0x56987c
// 0056987a  33f6                 xor esi, esi
// 0056987c  a1cc238c00           mov eax, dword ptr [0x8c23cc]
// 00569881  68689b7a00           push 0x7a9b68
// 00569886  50                   push eax
// 00569887  8bce                 mov ecx, esi
// 00569889  e892feffff           call 0x569720
// 0056988e  8b0d58228c00         mov ecx, dword ptr [0x8c2258]
// 00569894  683c9b7a00           push 0x7a9b3c
// 00569899  51                   push ecx
// 0056989a  8bce                 mov ecx, esi
// 0056989c  e87ffeffff           call 0x569720
// 005698a1  8b1590228c00         mov edx, dword ptr [0x8c2290]
// 005698a7  68189b7a00           push 0x7a9b18
// 005698ac  52                   push edx
// 005698ad  8bce                 mov ecx, esi
// 005698af  e86cfeffff           call 0x569720
// 005698b4  8b2dc0228c00         mov ebp, dword ptr [0x8c22c0]
// 005698ba  6a10                 push 0x10
// 005698bc  e835660c00           call 0x62fef6
// 005698c1  83c404               add esp, 4
// 005698c4  3bc7                 cmp eax, edi
// 005698c6  7415                 je 0x5698dd
// 005698c8  8938                 mov dword ptr [eax], edi
// 005698ca  896804               mov dword ptr [eax + 4], ebp
// 005698cd  c7400805000000       mov dword ptr [eax + 8], 5
// 005698d4  c7400c04000000       mov dword ptr [eax + 0xc], 4
// 005698db  eb02                 jmp 0x5698df
// 005698dd  33c0                 xor eax, eax
// 005698df  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005698e2  3bcf                 cmp ecx, edi
// 005698e4  7505                 jne 0x5698eb
// 005698e6  894618               mov dword ptr [esi + 0x18], eax
// 005698e9  eb02                 jmp 0x5698ed
// 005698eb  8901                 mov dword ptr [ecx], eax
// 005698ed  6a20                 push 0x20
// 005698ef  89461c               mov dword ptr [esi + 0x1c], eax
// 005698f2  e8ff650c00           call 0x62fef6
// 005698f7  83c404               add esp, 4
// 005698fa  3bc7                 cmp eax, edi
// 005698fc  7425                 je 0x569923
// 005698fe  8b0d78228c00         mov ecx, dword ptr [0x8c2278]
// 00569904  8b15b8228c00         mov edx, dword ptr [0x8c22b8]
// 0056990a  8938                 mov dword ptr [eax], edi
// 0056990c  897804               mov dword ptr [eax + 4], edi
// 0056990f  897808               mov dword ptr [eax + 8], edi
// 00569912  89500c               mov dword ptr [eax + 0xc], edx
// 00569915  895810               mov dword ptr [eax + 0x10], ebx
// 00569918  894814               mov dword ptr [eax + 0x14], ecx
// 0056991b  897818               mov dword ptr [eax + 0x18], edi
// 0056991e  89781c               mov dword ptr [eax + 0x1c], edi
// 00569921  eb02                 jmp 0x569925
// 00569923  33c0                 xor eax, eax
// 00569925  8b4e08               mov ecx, dword ptr [esi + 8]
// 00569928  3bcf                 cmp ecx, edi
// 0056992a  7505                 jne 0x569931
// 0056992c  894604               mov dword ptr [esi + 4], eax
// 0056992f  eb02                 jmp 0x569933
// 00569931  8901                 mov dword ptr [ecx], eax
// 00569933  6a20                 push 0x20
// 00569935  894608               mov dword ptr [esi + 8], eax
// 00569938  e8b9650c00           call 0x62fef6
// 0056993d  83c404               add esp, 4
// 00569940  3bc7                 cmp eax, edi
// 00569942  7425                 je 0x569969
// 00569944  8b0de8228c00         mov ecx, dword ptr [0x8c22e8]
// 0056994a  8b15b8228c00         mov edx, dword ptr [0x8c22b8]
// 00569950  8938                 mov dword ptr [eax], edi
// 00569952  897804               mov dword ptr [eax + 4], edi
// 00569955  897808               mov dword ptr [eax + 8], edi
// 00569958  89500c               mov dword ptr [eax + 0xc], edx
// 0056995b  895810               mov dword ptr [eax + 0x10], ebx
// 0056995e  894814               mov dword ptr [eax + 0x14], ecx
// 00569961  897818               mov dword ptr [eax + 0x18], edi
// 00569964  89781c               mov dword ptr [eax + 0x1c], edi
// 00569967  eb02                 jmp 0x56996b
// 00569969  33c0                 xor eax, eax
// 0056996b  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056996e  3bcf                 cmp ecx, edi
// 00569970  7505                 jne 0x569977
// 00569972  894604               mov dword ptr [esi + 4], eax
// 00569975  eb02                 jmp 0x569979
// 00569977  8901                 mov dword ptr [ecx], eax
// 00569979  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056997d  894608               mov dword ptr [esi + 8], eax
// 00569980  5f                   pop edi
// 00569981  8bc6                 mov eax, esi
// 00569983  5e                   pop esi
// 00569984  5d                   pop ebp
// 00569985  64890d00000000       mov dword ptr fs:[0], ecx
// 0056998c  5b                   pop ebx
// 0056998d  83c40c               add esp, 0xc
// 00569990  c3                   ret 
// library rbxgs/v8xml\SerializerV2.cpp (function ?newRootElement@SerializerV2@@SAPAVXmlElement@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
