// roc 2009-12 00722aa0  unit: UString_sink::?$stream_buffer  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722aa0
//
// 00722aa0  55                   push ebp
// 00722aa1  8bec                 mov ebp, esp
// 00722aa3  6aff                 push -1
// 00722aa5  68d0eb9400           push 0x94ebd0
// 00722aaa  64a100000000         mov eax, dword ptr fs:[0]
// 00722ab0  50                   push eax
// 00722ab1  64892500000000       mov dword ptr fs:[0], esp
// 00722ab8  51                   push ecx
// 00722ab9  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00722abc  53                   push ebx
// 00722abd  56                   push esi
// 00722abe  8b7508               mov esi, dword ptr [ebp + 8]
// 00722ac1  57                   push edi
// 00722ac2  8965f0               mov dword ptr [ebp - 0x10], esp
// 00722ac5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00722acc  8bf8                 mov edi, eax
// 00722ace  83f801               cmp eax, 1
// 00722ad1  7517                 jne 0x722aea
// 00722ad3  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00722ad6  a802                 test al, 2
// 00722ad8  7510                 jne 0x722aea
// 00722ada  83c802               or eax, 2
// 00722add  89463c               mov dword ptr [esi + 0x3c], eax
// 00722ae0  8b06                 mov eax, dword ptr [esi]
// 00722ae2  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00722ae5  57                   push edi
// 00722ae6  8bce                 mov ecx, esi
// 00722ae8  ffd2                 call edx
// 00722aea  83ff02               cmp edi, 2
// 00722aed  7517                 jne 0x722b06
// 00722aef  8b463c               mov eax, dword ptr [esi + 0x3c]
// 00722af2  a804                 test al, 4
// 00722af4  7510                 jne 0x722b06
// 00722af6  83c804               or eax, 4
// 00722af9  89463c               mov dword ptr [esi + 0x3c], eax
// 00722afc  8b06                 mov eax, dword ptr [esi]
// 00722afe  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00722b01  57                   push edi
// 00722b02  8bce                 mov ecx, esi
// 00722b04  ffd2                 call edx
// 00722b06  8b4514               mov eax, dword ptr [ebp + 0x14]
// 00722b09  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00722b0c  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00722b13  83f801               cmp eax, 1
// 00722b16  753a                 jne 0x722b52
// 00722b18  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00722b1b  a802                 test al, 2
// 00722b1d  754e                 jne 0x722b6d
// 00722b1f  83c802               or eax, 2
// 00722b22  6a01                 push 1
// 00722b24  eb3d                 jmp 0x722b63
// 00722b26  8d4d10               lea ecx, [ebp + 0x10]
// 00722b29  8965f0               mov dword ptr [ebp - 0x10], esp
// 00722b2c  c645fc02             mov byte ptr [ebp - 4], 2
// 00722b30  e8cbf5ffff           call 0x722100
// 00722b35  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00722b3c  6a00                 push 0
// 00722b3e  6a00                 push 0
// 00722b40  e8331d0d00           call 0x7f4878
// 00722b45  c745fc01000000       mov dword ptr [ebp - 4], 1
// 00722b4c  b83c2b7200           mov eax, 0x722b3c
// 00722b51  c3                   ret 
// 00722b52  83f802               cmp eax, 2
// 00722b55  7516                 jne 0x722b6d
// 00722b57  8b413c               mov eax, dword ptr [ecx + 0x3c]
// 00722b5a  a804                 test al, 4
// 00722b5c  750f                 jne 0x722b6d
// 00722b5e  83c804               or eax, 4
// 00722b61  6a02                 push 2
// 00722b63  89413c               mov dword ptr [ecx + 0x3c], eax
// 00722b66  8b01                 mov eax, dword ptr [ecx]
// 00722b68  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00722b6b  ffd2                 call edx
// 00722b6d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00722b70  5f                   pop edi
// 00722b71  5e                   pop esi
// 00722b72  33c0                 xor eax, eax
// 00722b74  64890d00000000       mov dword ptr fs:[0], ecx
// 00722b7b  5b                   pop ebx
// 00722b7c  8be5                 mov esp, ebp
// 00722b7e  5d                   pop ebp
// 00722b7f  c3                   ret 
// copied from an identical function in another client (function ??$execute_all@V?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@detail@iostreams@boost@@V1234@@detail@iostreams@boost@@YAHV?$member_close_operation@V?$linked_streambuf@DU?$char_traits@D@std@@@detail@iostreams@boost@@@012@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_40_0 client-rtti-bf08f30a8aa6090dc7b7.cpp