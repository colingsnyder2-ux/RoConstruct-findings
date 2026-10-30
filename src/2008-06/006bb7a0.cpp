// from server: 100% by auto
// roc 2008-06 006bb7a0  unit: CXTPImageManagerResource::CBitmapDC  size: 448 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006bb7a0
//
// 006bb7a0  55                   push ebp
// 006bb7a1  8bec                 mov ebp, esp
// 006bb7a3  6aff                 push -1
// 006bb7a5  68e0ff7d00           push 0x7dffe0
// 006bb7aa  64a100000000         mov eax, dword ptr fs:[0]
// 006bb7b0  50                   push eax
// 006bb7b1  83ec4c               sub esp, 0x4c
// 006bb7b4  53                   push ebx
// 006bb7b5  56                   push esi
// 006bb7b6  57                   push edi
// 006bb7b7  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006bb7bc  33c5                 xor eax, ebp
// 006bb7be  50                   push eax
// 006bb7bf  8d45f4               lea eax, [ebp - 0xc]
// 006bb7c2  64a300000000         mov dword ptr fs:[0], eax
// 006bb7c8  8965f0               mov dword ptr [ebp - 0x10], esp
// 006bb7cb  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 006bb7ce  8b7d14               mov edi, dword ptr [ebp + 0x14]
// 006bb7d1  6a2c                 push 0x2c
// 006bb7d3  8d45a8               lea eax, [ebp - 0x58]
// 006bb7d6  6a00                 push 0
// 006bb7d8  c70300000000         mov dword ptr [ebx], 0
// 006bb7de  50                   push eax
// 006bb7df  c70700000000         mov dword ptr [edi], 0
// 006bb7e5  e81a5ffeff           call 0x6a1704
// 006bb7ea  83c40c               add esp, 0xc
// 006bb7ed  8d4dd4               lea ecx, [ebp - 0x2c]
// 006bb7f0  c745a828000000       mov dword ptr [ebp - 0x58], 0x28
// 006bb7f7  e85c081000           call 0x7bc058
// 006bb7fc  6a00                 push 0
// 006bb7fe  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006bb805  ff15d0208000         call dword ptr [0x8020d0]
// 006bb80b  50                   push eax
// 006bb80c  8d4dd4               lea ecx, [ebp - 0x2c]
// 006bb80f  e832081000           call 0x7bc046
// 006bb814  8d4de4               lea ecx, [ebp - 0x1c]
// 006bb817  e8f6081000           call 0x7bc112
// 006bb81c  8b5508               mov edx, dword ptr [ebp + 8]
// 006bb81f  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 006bb822  6a00                 push 0
// 006bb824  8d4da8               lea ecx, [ebp - 0x58]
// 006bb827  51                   push ecx
// 006bb828  6a00                 push 0
// 006bb82a  6a00                 push 0
// 006bb82c  6a00                 push 0
// 006bb82e  52                   push edx
// 006bb82f  50                   push eax
// 006bb830  c645fc02             mov byte ptr [ebp - 4], 2
// 006bb834  ff157c208000         call dword ptr [0x80207c]
// 006bb83a  85c0                 test eax, eax
// 006bb83c  7505                 jne 0x6bb843
// 006bb83e  e8434efeff           call 0x6a0686
// 006bb843  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 006bb846  85c0                 test eax, eax
// 006bb848  750b                 jne 0x6bb855
// 006bb84a  8b45ac               mov eax, dword ptr [ebp - 0x54]
// 006bb84d  0faf45b0             imul eax, dword ptr [ebp - 0x50]
// 006bb851  03c0                 add eax, eax
// 006bb853  03c0                 add eax, eax
// 006bb855  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006bb858  8b35b0288000         mov esi, dword ptr [0x8028b0]
// 006bb85e  50                   push eax
// 006bb85f  8901                 mov dword ptr [ecx], eax
// 006bb861  ffd6                 call esi
// 006bb863  83c404               add esp, 4
// 006bb866  8903                 mov dword ptr [ebx], eax
// 006bb868  85c0                 test eax, eax
// 006bb86a  7505                 jne 0x6bb871
// 006bb86c  e8154efeff           call 0x6a0686
// 006bb871  668b45b6             mov ax, word ptr [ebp - 0x4a]
// 006bb875  6683f804             cmp ax, 4
// 006bb879  7507                 jne 0x6bb882
// 006bb87b  b810000000           mov eax, 0x10
// 006bb880  eb15                 jmp 0x6bb897
// 006bb882  33d2                 xor edx, edx
// 006bb884  6683f808             cmp ax, 8
// 006bb888  0f95c2               setne dl
// 006bb88b  4a                   dec edx
// 006bb88c  81e2fd000000         and edx, 0xfd
// 006bb892  83c203               add edx, 3
// 006bb895  8bc2                 mov eax, edx
// 006bb897  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 006bb89a  8d048528000000       lea eax, [eax*4 + 0x28]
// 006bb8a1  50                   push eax
// 006bb8a2  8901                 mov dword ptr [ecx], eax
// 006bb8a4  ffd6                 call esi
// 006bb8a6  83c404               add esp, 4
// 006bb8a9  8907                 mov dword ptr [edi], eax
// 006bb8ab  85c0                 test eax, eax
// 006bb8ad  7505                 jne 0x6bb8b4
// 006bb8af  e8d24dfeff           call 0x6a0686
// 006bb8b4  6a28                 push 0x28
// 006bb8b6  8d55a8               lea edx, [ebp - 0x58]
// 006bb8b9  52                   push edx
// 006bb8ba  6a28                 push 0x28
// 006bb8bc  50                   push eax
// 006bb8bd  ff15ac288000         call dword ptr [0x8028ac]
// 006bb8c3  8b07                 mov eax, dword ptr [edi]
// 006bb8c5  8b0b                 mov ecx, dword ptr [ebx]
// 006bb8c7  8b55b0               mov edx, dword ptr [ebp - 0x50]
// 006bb8ca  83c410               add esp, 0x10
// 006bb8cd  6a00                 push 0
// 006bb8cf  50                   push eax
// 006bb8d0  8b4508               mov eax, dword ptr [ebp + 8]
// 006bb8d3  51                   push ecx
// 006bb8d4  8b4dd8               mov ecx, dword ptr [ebp - 0x28]
// 006bb8d7  52                   push edx
// 006bb8d8  6a00                 push 0
// 006bb8da  50                   push eax
// 006bb8db  51                   push ecx
// 006bb8dc  ff157c208000         call dword ptr [0x80207c]
// 006bb8e2  85c0                 test eax, eax
// 006bb8e4  7546                 jne 0x6bb92c
// 006bb8e6  e89b4dfeff           call 0x6a0686
// 006bb8eb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 006bb8ee  8955e8               mov dword ptr [ebp - 0x18], edx
// 006bb8f1  c745fc01000000       mov dword ptr [ebp - 4], 1
// 006bb8f8  b8feb86b00           mov eax, 0x6bb8fe
// 006bb8fd  c3                   ret 
// 006bb8fe  c645fc00             mov byte ptr [ebp - 4], 0
// 006bb902  e8f9071000           call 0x7bc100
// 006bb907  8d4dd4               lea ecx, [ebp - 0x2c]
// 006bb90a  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006bb911  e83c071000           call 0x7bc052
// 006bb916  33c0                 xor eax, eax
// 006bb918  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006bb91b  64890d00000000       mov dword ptr fs:[0], ecx
// 006bb922  59                   pop ecx
// 006bb923  5f                   pop edi
// 006bb924  5e                   pop esi
// 006bb925  5b                   pop ebx
// 006bb926  8be5                 mov esp, ebp
// 006bb928  5d                   pop ebp
// 006bb929  c21400               ret 0x14
// 006bb92c  c745fc00000000       mov dword ptr [ebp - 4], 0
// 006bb933  e8c8071000           call 0x7bc100
// 006bb938  8d4dd4               lea ecx, [ebp - 0x2c]
// 006bb93b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 006bb942  e80b071000           call 0x7bc052
// 006bb947  b801000000           mov eax, 1
// 006bb94c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006bb94f  64890d00000000       mov dword ptr fs:[0], ecx
// 006bb956  59                   pop ecx
// 006bb957  5f                   pop edi
// 006bb958  5e                   pop esi
// 006bb959  5b                   pop ebx
// 006bb95a  8be5                 mov esp, ebp
// 006bb95c  5d                   pop ebp
// 006bb95d  c21400               ret 0x14

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPImageManager.cpp
