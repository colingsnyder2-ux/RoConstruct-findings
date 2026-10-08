// from server: 100% by auto
// roc 2009-06 0059e000  unit: seg_00590000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e000
//
// 0059e000  56                   push esi
// 0059e001  8b742408             mov esi, dword ptr [esp + 8]
// 0059e005  8b4604               mov eax, dword ptr [esi + 4]
// 0059e008  8b08                 mov ecx, dword ptr [eax]
// 0059e00a  57                   push edi
// 0059e00b  6a1c                 push 0x1c
// 0059e00d  6a01                 push 1
// 0059e00f  56                   push esi
// 0059e010  ffd1                 call ecx
// 0059e012  8bf8                 mov edi, eax
// 0059e014  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 0059e01a  83c40c               add esp, 0xc
// 0059e01d  c70700df5900         mov dword ptr [edi], 0x59df00
// 0059e023  c7470800000000       mov dword ptr [edi + 8], 0
// 0059e02a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 0059e031  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0059e035  7459                 je 0x59e090
// 0059e037  807c241000           cmp byte ptr [esp + 0x10], 0
// 0059e03c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0059e042  894710               mov dword ptr [edi + 0x10], eax
// 0059e045  742f                 je 0x59e076
// 0059e047  8b5660               mov edx, dword ptr [esi + 0x60]
// 0059e04a  55                   push ebp
// 0059e04b  8b6e04               mov ebp, dword ptr [esi + 4]
// 0059e04e  50                   push eax
// 0059e04f  50                   push eax
// 0059e050  52                   push edx
// 0059e051  e8cabdfeff           call 0x589e20
// 0059e056  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0059e059  83c408               add esp, 8
// 0059e05c  50                   push eax
// 0059e05d  8b4664               mov eax, dword ptr [esi + 0x64]
// 0059e060  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 0059e064  50                   push eax
// 0059e065  6a00                 push 0
// 0059e067  6a01                 push 1
// 0059e069  56                   push esi
// 0059e06a  ffd1                 call ecx
// 0059e06c  83c418               add esp, 0x18
// 0059e06f  5d                   pop ebp
// 0059e070  894708               mov dword ptr [edi + 8], eax
// 0059e073  5f                   pop edi
// 0059e074  5e                   pop esi
// 0059e075  c3                   ret 
// 0059e076  8b5604               mov edx, dword ptr [esi + 4]
// 0059e079  8b4a08               mov ecx, dword ptr [edx + 8]
// 0059e07c  50                   push eax
// 0059e07d  8b4664               mov eax, dword ptr [esi + 0x64]
// 0059e080  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 0059e084  50                   push eax
// 0059e085  6a01                 push 1
// 0059e087  56                   push esi
// 0059e088  ffd1                 call ecx
// 0059e08a  83c410               add esp, 0x10
// 0059e08d  89470c               mov dword ptr [edi + 0xc], eax
// 0059e090  5f                   pop edi
// 0059e091  5e                   pop esi
// 0059e092  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
