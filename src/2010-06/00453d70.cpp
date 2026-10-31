// roc 2010-06 00453d70  unit: CRobloxControlColorSelector  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00453d70
//
// 00453d70  55                   push ebp
// 00453d71  8bec                 mov ebp, esp
// 00453d73  6aff                 push -1
// 00453d75  68e11f9800           push 0x981fe1
// 00453d7a  64a100000000         mov eax, dword ptr fs:[0]
// 00453d80  50                   push eax
// 00453d81  64892500000000       mov dword ptr fs:[0], esp
// 00453d88  83ec0c               sub esp, 0xc
// 00453d8b  53                   push ebx
// 00453d8c  56                   push esi
// 00453d8d  8b7508               mov esi, dword ptr [ebp + 8]
// 00453d90  57                   push edi
// 00453d91  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00453d94  33db                 xor ebx, ebx
// 00453d96  8965f0               mov dword ptr [ebp - 0x10], esp
// 00453d99  8975ec               mov dword ptr [ebp - 0x14], esi
// 00453d9c  895dfc               mov dword ptr [ebp - 4], ebx
// 00453d9f  90                   nop 
// 00453da0  3bfb                 cmp edi, ebx
// 00453da2  7657                 jbe 0x453dfb
// 00453da4  89750c               mov dword ptr [ebp + 0xc], esi
// 00453da7  8975e8               mov dword ptr [ebp - 0x18], esi
// 00453daa  c645fc01             mov byte ptr [ebp - 4], 1
// 00453dae  3bf3                 cmp esi, ebx
// 00453db0  741a                 je 0x453dcc
// 00453db2  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00453db5  8b08                 mov ecx, dword ptr [eax]
// 00453db7  890e                 mov dword ptr [esi], ecx
// 00453db9  8b5004               mov edx, dword ptr [eax + 4]
// 00453dbc  83c008               add eax, 8
// 00453dbf  50                   push eax
// 00453dc0  8d4e08               lea ecx, [esi + 8]
// 00453dc3  895604               mov dword ptr [esi + 4], edx
// 00453dc6  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00453dcc  4f                   dec edi
// 00453dcd  83c60c               add esi, 0xc
// 00453dd0  885dfc               mov byte ptr [ebp - 4], bl
// 00453dd3  897508               mov dword ptr [ebp + 8], esi
// 00453dd6  ebc8                 jmp 0x453da0
// 00453dd8  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 00453ddb  8b7d08               mov edi, dword ptr [ebp + 8]
// 00453dde  3bf7                 cmp esi, edi
// 00453de0  7410                 je 0x453df2
// 00453de2  8d4e08               lea ecx, [esi + 8]
// 00453de5  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00453deb  83c60c               add esi, 0xc
// 00453dee  3bf7                 cmp esi, edi
// 00453df0  75f0                 jne 0x453de2
// 00453df2  33db                 xor ebx, ebx
// 00453df4  53                   push ebx
// 00453df5  53                   push ebx
// 00453df6  e8b74b3500           call 0x7a89b2
// 00453dfb  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00453dfe  5f                   pop edi
// 00453dff  5e                   pop esi
// 00453e00  64890d00000000       mov dword ptr fs:[0], ecx
// 00453e07  5b                   pop ebx
// 00453e08  8be5                 mov esp, ebp
// 00453e0a  5d                   pop ebp
// 00453e0b  c3                   ret 
// copied from an identical function in another client (function ??$_Uninit_fill_n@PAUColorEntry@@IU1@V?$allocator@UColorEntry@@@std@@@std@@YAXPAUColorEntry@@IABU1@AAV?$allocator@UColorEntry@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_colorentrynativevector160b2e39d0f8f701.cpp