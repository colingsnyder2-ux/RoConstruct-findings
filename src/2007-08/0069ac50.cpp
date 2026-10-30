// from server: 100% by auto
// roc 2007-08 0069ac50  unit: CXTPPropertyGridView  size: 351 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ac50
//
// 0069ac50  53                   push ebx
// 0069ac51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0069ac55  56                   push esi
// 0069ac56  57                   push edi
// 0069ac57  33ff                 xor edi, edi
// 0069ac59  3bdf                 cmp ebx, edi
// 0069ac5b  8bf1                 mov esi, ecx
// 0069ac5d  7d05                 jge 0x69ac64
// 0069ac5f  e8bc52f9ff           call 0x62ff20
// 0069ac64  8b442414             mov eax, dword ptr [esp + 0x14]
// 0069ac68  3bc7                 cmp eax, edi
// 0069ac6a  7c03                 jl 0x69ac6f
// 0069ac6c  894610               mov dword ptr [esi + 0x10], eax
// 0069ac6f  3bdf                 cmp ebx, edi
// 0069ac71  751f                 jne 0x69ac92
// 0069ac73  8b4604               mov eax, dword ptr [esi + 4]
// 0069ac76  3bc7                 cmp eax, edi
// 0069ac78  740c                 je 0x69ac86
// 0069ac7a  50                   push eax
// 0069ac7b  e8a652f9ff           call 0x62ff26
// 0069ac80  83c404               add esp, 4
// 0069ac83  897e04               mov dword ptr [esi + 4], edi
// 0069ac86  897e0c               mov dword ptr [esi + 0xc], edi
// 0069ac89  897e08               mov dword ptr [esi + 8], edi
// 0069ac8c  5f                   pop edi
// 0069ac8d  5e                   pop esi
// 0069ac8e  5b                   pop ebx
// 0069ac8f  c20800               ret 8
// 0069ac92  8b5604               mov edx, dword ptr [esi + 4]
// 0069ac95  3bd7                 cmp edx, edi
// 0069ac97  55                   push ebp
// 0069ac98  7533                 jne 0x69accd
// 0069ac9a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0069ac9d  3bdd                 cmp ebx, ebp
// 0069ac9f  7e02                 jle 0x69aca3
// 0069aca1  8beb                 mov ebp, ebx
// 0069aca3  8d7cad00             lea edi, [ebp + ebp*4]
// 0069aca7  03ff                 add edi, edi
// 0069aca9  03ff                 add edi, edi
// 0069acab  57                   push edi
// 0069acac  e88152f9ff           call 0x62ff32
// 0069acb1  57                   push edi
// 0069acb2  6a00                 push 0
// 0069acb4  50                   push eax
// 0069acb5  894604               mov dword ptr [esi + 4], eax
// 0069acb8  e8cf5ef9ff           call 0x630b8c
// 0069acbd  83c410               add esp, 0x10
// 0069acc0  896e0c               mov dword ptr [esi + 0xc], ebp
// 0069acc3  5d                   pop ebp
// 0069acc4  5f                   pop edi
// 0069acc5  895e08               mov dword ptr [esi + 8], ebx
// 0069acc8  5e                   pop esi
// 0069acc9  5b                   pop ebx
// 0069acca  c20800               ret 8
// 0069accd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0069acd0  3bd9                 cmp ebx, ecx
// 0069acd2  7f31                 jg 0x69ad05
// 0069acd4  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069acd7  3bd9                 cmp ebx, ecx
// 0069acd9  0f8ec6000000         jle 0x69ada5
// 0069acdf  8bc3                 mov eax, ebx
// 0069ace1  2bc1                 sub eax, ecx
// 0069ace3  8d0480               lea eax, [eax + eax*4]
// 0069ace6  03c0                 add eax, eax
// 0069ace8  03c0                 add eax, eax
// 0069acea  50                   push eax
// 0069aceb  8d0c89               lea ecx, [ecx + ecx*4]
// 0069acee  8d148a               lea edx, [edx + ecx*4]
// 0069acf1  57                   push edi
// 0069acf2  52                   push edx
// 0069acf3  e8945ef9ff           call 0x630b8c
// 0069acf8  83c40c               add esp, 0xc
// 0069acfb  5d                   pop ebp
// 0069acfc  5f                   pop edi
// 0069acfd  895e08               mov dword ptr [esi + 8], ebx
// 0069ad00  5e                   pop esi
// 0069ad01  5b                   pop ebx
// 0069ad02  c20800               ret 8
// 0069ad05  8b4610               mov eax, dword ptr [esi + 0x10]
// 0069ad08  3bc7                 cmp eax, edi
// 0069ad0a  7524                 jne 0x69ad30
// 0069ad0c  8b4608               mov eax, dword ptr [esi + 8]
// 0069ad0f  99                   cdq 
// 0069ad10  83e207               and edx, 7
// 0069ad13  03c2                 add eax, edx
// 0069ad15  c1f803               sar eax, 3
// 0069ad18  83f804               cmp eax, 4
// 0069ad1b  7d07                 jge 0x69ad24
// 0069ad1d  b804000000           mov eax, 4
// 0069ad22  eb0c                 jmp 0x69ad30
// 0069ad24  3d00040000           cmp eax, 0x400
// 0069ad29  7e05                 jle 0x69ad30
// 0069ad2b  b800040000           mov eax, 0x400
// 0069ad30  8d3c01               lea edi, [ecx + eax]
// 0069ad33  3bdf                 cmp ebx, edi
// 0069ad35  7d06                 jge 0x69ad3d
// 0069ad37  897c2414             mov dword ptr [esp + 0x14], edi
// 0069ad3b  eb06                 jmp 0x69ad43
// 0069ad3d  895c2414             mov dword ptr [esp + 0x14], ebx
// 0069ad41  8bfb                 mov edi, ebx
// 0069ad43  3bf9                 cmp edi, ecx
// 0069ad45  7d05                 jge 0x69ad4c
// 0069ad47  e8d451f9ff           call 0x62ff20
// 0069ad4c  8d3cbf               lea edi, [edi + edi*4]
// 0069ad4f  03ff                 add edi, edi
// 0069ad51  03ff                 add edi, edi
// 0069ad53  57                   push edi
// 0069ad54  e8d951f9ff           call 0x62ff32
// 0069ad59  8b4e04               mov ecx, dword ptr [esi + 4]
// 0069ad5c  8be8                 mov ebp, eax
// 0069ad5e  8b4608               mov eax, dword ptr [esi + 8]
// 0069ad61  8d0480               lea eax, [eax + eax*4]
// 0069ad64  03c0                 add eax, eax
// 0069ad66  03c0                 add eax, eax
// 0069ad68  50                   push eax
// 0069ad69  51                   push ecx
// 0069ad6a  57                   push edi
// 0069ad6b  55                   push ebp
// 0069ad6c  e80f6bd6ff           call 0x401880
// 0069ad71  8b4e08               mov ecx, dword ptr [esi + 8]
// 0069ad74  8bc3                 mov eax, ebx
// 0069ad76  2bc1                 sub eax, ecx
// 0069ad78  8d1480               lea edx, [eax + eax*4]
// 0069ad7b  03d2                 add edx, edx
// 0069ad7d  03d2                 add edx, edx
// 0069ad7f  52                   push edx
// 0069ad80  8d0489               lea eax, [ecx + ecx*4]
// 0069ad83  8d4c8500             lea ecx, [ebp + eax*4]
// 0069ad87  6a00                 push 0
// 0069ad89  51                   push ecx
// 0069ad8a  e8fd5df9ff           call 0x630b8c
// 0069ad8f  8b5604               mov edx, dword ptr [esi + 4]
// 0069ad92  52                   push edx
// 0069ad93  e88e51f9ff           call 0x62ff26
// 0069ad98  8b442438             mov eax, dword ptr [esp + 0x38]
// 0069ad9c  83c424               add esp, 0x24
// 0069ad9f  896e04               mov dword ptr [esi + 4], ebp
// 0069ada2  89460c               mov dword ptr [esi + 0xc], eax
// 0069ada5  5d                   pop ebp
// 0069ada6  5f                   pop edi
// 0069ada7  895e08               mov dword ptr [esi + 8], ebx
// 0069adaa  5e                   pop esi
// 0069adab  5b                   pop ebx
// 0069adac  c20800               ret 8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SetSize@?$CArray@UWNDRECT@CXTPPropertyGridView@@AAU12@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridView.cpp
