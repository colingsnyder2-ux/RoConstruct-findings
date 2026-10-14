// roc 2009-06 0049bc40  unit: G3D::Texture  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049bc40
//
// 0049bc40  6aff                 push -1
// 0049bc42  68496c8500           push 0x856c49
// 0049bc47  64a100000000         mov eax, dword ptr fs:[0]
// 0049bc4d  50                   push eax
// 0049bc4e  64892500000000       mov dword ptr fs:[0], esp
// 0049bc55  83ec10               sub esp, 0x10
// 0049bc58  8b442420             mov eax, dword ptr [esp + 0x20]
// 0049bc5c  53                   push ebx
// 0049bc5d  55                   push ebp
// 0049bc5e  56                   push esi
// 0049bc5f  57                   push edi
// 0049bc60  8bf9                 mov edi, ecx
// 0049bc62  8b5f04               mov ebx, dword ptr [edi + 4]
// 0049bc65  3bc3                 cmp eax, ebx
// 0049bc67  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049bc6b  894704               mov dword ptr [edi + 4], eax
// 0049bc6e  7d3a                 jge 0x49bcaa
// 0049bc70  8d2c40               lea ebp, [eax + eax*2]
// 0049bc73  03ed                 add ebp, ebp
// 0049bc75  03ed                 add ebp, ebp
// 0049bc77  2bd8                 sub ebx, eax
// 0049bc79  8da42400000000       lea esp, [esp]
// 0049bc80  8b37                 mov esi, dword ptr [edi]
// 0049bc82  8b042e               mov eax, dword ptr [esi + ebp]
// 0049bc85  03f5                 add esi, ebp
// 0049bc87  50                   push eax
// 0049bc88  e803f60c00           call 0x56b290
// 0049bc8d  33c0                 xor eax, eax
// 0049bc8f  83c404               add esp, 4
// 0049bc92  83c50c               add ebp, 0xc
// 0049bc95  83eb01               sub ebx, 1
// 0049bc98  8906                 mov dword ptr [esi], eax
// 0049bc9a  894604               mov dword ptr [esi + 4], eax
// 0049bc9d  894608               mov dword ptr [esi + 8], eax
// 0049bca0  75de                 jne 0x49bc80
// 0049bca2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0049bca6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0049bcaa  f60560c8a30001       test byte ptr [0xa3c860], 1
// 0049bcb1  7514                 jne 0x49bcc7
// 0049bcb3  830d60c8a30001       or dword ptr [0xa3c860], 1
// 0049bcba  bd0a000000           mov ebp, 0xa
// 0049bcbf  892d5cc8a300         mov dword ptr [0xa3c85c], ebp
// 0049bcc5  eb06                 jmp 0x49bccd
// 0049bcc7  8b2d5cc8a300         mov ebp, dword ptr [0xa3c85c]
// 0049bccd  8b7704               mov esi, dword ptr [edi + 4]
// 0049bcd0  8b4f08               mov ecx, dword ptr [edi + 8]
// 0049bcd3  3bf1                 cmp esi, ecx
// 0049bcd5  7e6c                 jle 0x49bd43
// 0049bcd7  85c9                 test ecx, ecx
// 0049bcd9  7509                 jne 0x49bce4
// 0049bcdb  894708               mov dword ptr [edi + 8], eax
// 0049bcde  53                   push ebx
// 0049bcdf  e983000000           jmp 0x49bd67
// 0049bce4  3bf5                 cmp esi, ebp
// 0049bce6  7d06                 jge 0x49bcee
// 0049bce8  896f08               mov dword ptr [edi + 8], ebp
// 0049bceb  53                   push ebx
// 0049bcec  eb79                 jmp 0x49bd67
// 0049bcee  d90548e88b00         fld dword ptr [0x8be848]
// 0049bcf4  8bc1                 mov eax, ecx
// 0049bcf6  8d0440               lea eax, [eax + eax*2]
// 0049bcf9  03c0                 add eax, eax
// 0049bcfb  03c0                 add eax, eax
// 0049bcfd  3d801a0600           cmp eax, 0x61a80
// 0049bd02  760a                 jbe 0x49bd0e
// 0049bd04  ddd8                 fstp st(0)
// 0049bd06  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0049bd0c  eb0f                 jmp 0x49bd1d
// 0049bd0e  3d00fa0000           cmp eax, 0xfa00
// 0049bd13  7608                 jbe 0x49bd1d
// 0049bd15  ddd8                 fstp st(0)
// 0049bd17  d90544d08b00         fld dword ptr [0x8bd044]
// 0049bd1d  8be9                 mov ebp, ecx
// 0049bd1f  896c2434             mov dword ptr [esp + 0x34], ebp
// 0049bd23  da4c2434             fimul dword ptr [esp + 0x34]
// 0049bd27  e894e12700           call 0x719ec0
// 0049bd2c  2bc5                 sub eax, ebp
// 0049bd2e  03c6                 add eax, esi
// 0049bd30  894708               mov dword ptr [edi + 8], eax
// 0049bd33  8b0d5cc8a300         mov ecx, dword ptr [0xa3c85c]
// 0049bd39  3bc1                 cmp eax, ecx
// 0049bd3b  7d03                 jge 0x49bd40
// 0049bd3d  894f08               mov dword ptr [edi + 8], ecx
// 0049bd40  53                   push ebx
// 0049bd41  eb24                 jmp 0x49bd67
// 0049bd43  b856555555           mov eax, 0x55555556
// 0049bd48  f7e9                 imul ecx
// 0049bd4a  8bca                 mov ecx, edx
// 0049bd4c  c1e91f               shr ecx, 0x1f
// 0049bd4f  03ca                 add ecx, edx
// 0049bd51  3bf1                 cmp esi, ecx
// 0049bd53  7f19                 jg 0x49bd6e
// 0049bd55  807c243400           cmp byte ptr [esp + 0x34], 0
// 0049bd5a  7412                 je 0x49bd6e
// 0049bd5c  3bf5                 cmp esi, ebp
// 0049bd5e  7e0e                 jle 0x49bd6e
// 0049bd60  3bf3                 cmp esi, ebx
// 0049bd62  7c02                 jl 0x49bd66
// 0049bd64  8bf3                 mov esi, ebx
// 0049bd66  56                   push esi
// 0049bd67  8bcf                 mov ecx, edi
// 0049bd69  e8f2fdffff           call 0x49bb60
// 0049bd6e  3b5f04               cmp ebx, dword ptr [edi + 4]
// 0049bd71  8bd3                 mov edx, ebx
// 0049bd73  7d24                 jge 0x49bd99
// 0049bd75  8d0c5b               lea ecx, [ebx + ebx*2]
// 0049bd78  03c9                 add ecx, ecx
// 0049bd7a  03c9                 add ecx, ecx
// 0049bd7c  8d642400             lea esp, [esp]
// 0049bd80  8b07                 mov eax, dword ptr [edi]
// 0049bd82  03c1                 add eax, ecx
// 0049bd84  740a                 je 0x49bd90
// 0049bd86  33f6                 xor esi, esi
// 0049bd88  897004               mov dword ptr [eax + 4], esi
// 0049bd8b  897008               mov dword ptr [eax + 8], esi
// 0049bd8e  8930                 mov dword ptr [eax], esi
// 0049bd90  42                   inc edx
// 0049bd91  83c10c               add ecx, 0xc
// 0049bd94  3b5704               cmp edx, dword ptr [edi + 4]
// 0049bd97  7ce7                 jl 0x49bd80
// 0049bd99  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049bd9d  5f                   pop edi
// 0049bd9e  5e                   pop esi
// 0049bd9f  5d                   pop ebp
// 0049bda0  5b                   pop ebx
// 0049bda1  64890d00000000       mov dword ptr fs:[0], ecx
// 0049bda8  83c41c               add esp, 0x1c
// 0049bdab  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgAdjacency.cpp (function ?resize@?$Array@V?$Array@H@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgAdjacency.cpp
