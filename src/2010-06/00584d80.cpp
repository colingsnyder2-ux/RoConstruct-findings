// from server: 100% by auto
// roc 2010-06 00584d80  unit: seg_00580000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00584d80
//
// 00584d80  56                   push esi
// 00584d81  57                   push edi
// 00584d82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00584d86  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00584d8c  8b4608               mov eax, dword ptr [esi + 8]
// 00584d8f  3b87e0000000         cmp eax, dword ptr [edi + 0xe0]
// 00584d95  0f8381000000         jae 0x584e1c
// 00584d9b  53                   push ebx
// 00584d9c  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00584da0  55                   push ebp
// 00584da1  8d6e0c               lea ebp, [esi + 0xc]
// 00584da4  837d0008             cmp dword ptr [ebp], 8
// 00584da8  7325                 jae 0x584dcf
// 00584daa  8b442420             mov eax, dword ptr [esp + 0x20]
// 00584dae  8b8f44010000         mov ecx, dword ptr [edi + 0x144]
// 00584db4  6a08                 push 8
// 00584db6  55                   push ebp
// 00584db7  8d5618               lea edx, [esi + 0x18]
// 00584dba  52                   push edx
// 00584dbb  8b542424             mov edx, dword ptr [esp + 0x24]
// 00584dbf  50                   push eax
// 00584dc0  8b4104               mov eax, dword ptr [ecx + 4]
// 00584dc3  53                   push ebx
// 00584dc4  52                   push edx
// 00584dc5  57                   push edi
// 00584dc6  ffd0                 call eax
// 00584dc8  83c41c               add esp, 0x1c
// 00584dcb  837d0008             cmp dword ptr [ebp], 8
// 00584dcf  7549                 jne 0x584e1a
// 00584dd1  8b8f48010000         mov ecx, dword ptr [edi + 0x148]
// 00584dd7  8b4104               mov eax, dword ptr [ecx + 4]
// 00584dda  8d5618               lea edx, [esi + 0x18]
// 00584ddd  52                   push edx
// 00584dde  57                   push edi
// 00584ddf  ffd0                 call eax
// 00584de1  83c408               add esp, 8
// 00584de4  84c0                 test al, al
// 00584de6  7426                 je 0x584e0e
// 00584de8  807e1000             cmp byte ptr [esi + 0x10], 0
// 00584dec  7406                 je 0x584df4
// 00584dee  ff03                 inc dword ptr [ebx]
// 00584df0  c6461000             mov byte ptr [esi + 0x10], 0
// 00584df4  ff4608               inc dword ptr [esi + 8]
// 00584df7  c7450000000000       mov dword ptr [ebp], 0
// 00584dfe  8b4e08               mov ecx, dword ptr [esi + 8]
// 00584e01  3b8fe0000000         cmp ecx, dword ptr [edi + 0xe0]
// 00584e07  729b                 jb 0x584da4
// 00584e09  5d                   pop ebp
// 00584e0a  5b                   pop ebx
// 00584e0b  5f                   pop edi
// 00584e0c  5e                   pop esi
// 00584e0d  c3                   ret 
// 00584e0e  807e1000             cmp byte ptr [esi + 0x10], 0
// 00584e12  7506                 jne 0x584e1a
// 00584e14  ff0b                 dec dword ptr [ebx]
// 00584e16  c6461001             mov byte ptr [esi + 0x10], 1
// 00584e1a  5d                   pop ebp
// 00584e1b  5b                   pop ebx
// 00584e1c  5f                   pop edi
// 00584e1d  5e                   pop esi
// 00584e1e  c3                   ret 
// library jpeg-6b/jcmainct.c (function _process_data_simple_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmainct.c
