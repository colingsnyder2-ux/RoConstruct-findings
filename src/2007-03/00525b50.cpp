// roc 2007-03 00525b50  unit: seg_00520000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525b50
//
// 00525b50  56                   push esi
// 00525b51  57                   push edi
// 00525b52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00525b56  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00525b5c  8b4608               mov eax, dword ptr [esi + 8]
// 00525b5f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 00525b65  0f8384000000         jae 0x525bef
// 00525b6b  53                   push ebx
// 00525b6c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00525b70  55                   push ebp
// 00525b71  8d6e0c               lea ebp, [esi + 0xc]
// 00525b74  837d0008             cmp dword ptr [ebp], 8
// 00525b78  7325                 jae 0x525b9f
// 00525b7a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00525b7e  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 00525b84  6a08                 push 8
// 00525b86  55                   push ebp
// 00525b87  8d5618               lea edx, [esi + 0x18]
// 00525b8a  52                   push edx
// 00525b8b  8b542424             mov edx, dword ptr [esp + 0x24]
// 00525b8f  50                   push eax
// 00525b90  8b4104               mov eax, dword ptr [ecx + 4]
// 00525b93  53                   push ebx
// 00525b94  52                   push edx
// 00525b95  57                   push edi
// 00525b96  ffd0                 call eax
// 00525b98  83c41c               add esp, 0x1c
// 00525b9b  837d0008             cmp dword ptr [ebp], 8
// 00525b9f  754c                 jne 0x525bed
// 00525ba1  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 00525ba7  8b4104               mov eax, dword ptr [ecx + 4]
// 00525baa  8d5618               lea edx, [esi + 0x18]
// 00525bad  52                   push edx
// 00525bae  57                   push edi
// 00525baf  ffd0                 call eax
// 00525bb1  83c408               add esp, 8
// 00525bb4  84c0                 test al, al
// 00525bb6  7428                 je 0x525be0
// 00525bb8  807e1000             cmp byte ptr [esi + 0x10], 0
// 00525bbc  7407                 je 0x525bc5
// 00525bbe  830301               add dword ptr [ebx], 1
// 00525bc1  c6461000             mov byte ptr [esi + 0x10], 0
// 00525bc5  83460801             add dword ptr [esi + 8], 1
// 00525bc9  c7450000000000       mov dword ptr [ebp], 0
// 00525bd0  8b4e08               mov ecx, dword ptr [esi + 8]
// 00525bd3  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 00525bd9  7299                 jb 0x525b74
// 00525bdb  5d                   pop ebp
// 00525bdc  5b                   pop ebx
// 00525bdd  5f                   pop edi
// 00525bde  5e                   pop esi
// 00525bdf  c3                   ret 
// 00525be0  807e1000             cmp byte ptr [esi + 0x10], 0
// 00525be4  7507                 jne 0x525bed
// 00525be6  8303ff               add dword ptr [ebx], -1
// 00525be9  c6461001             mov byte ptr [esi + 0x10], 1
// 00525bed  5d                   pop ebp
// 00525bee  5b                   pop ebx
// 00525bef  5f                   pop edi
// 00525bf0  5e                   pop esi
// 00525bf1  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
