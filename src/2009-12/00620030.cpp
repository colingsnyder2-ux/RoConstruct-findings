// roc 2009-12 00620030  unit: seg_00620000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620030
//
// 00620030  56                   push esi
// 00620031  8b742408             mov esi, dword ptr [esp + 8]
// 00620035  8b4604               mov eax, dword ptr [esi + 4]
// 00620038  8b08                 mov ecx, dword ptr [eax]
// 0062003a  57                   push edi
// 0062003b  6a1c                 push 0x1c
// 0062003d  6a01                 push 1
// 0062003f  56                   push esi
// 00620040  ffd1                 call ecx
// 00620042  8bf8                 mov edi, eax
// 00620044  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 0062004a  83c40c               add esp, 0xc
// 0062004d  c70730ff6100         mov dword ptr [edi], 0x61ff30
// 00620053  c7470800000000       mov dword ptr [edi + 8], 0
// 0062005a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00620061  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00620065  7459                 je 0x6200c0
// 00620067  807c241000           cmp byte ptr [esp + 0x10], 0
// 0062006c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00620072  894710               mov dword ptr [edi + 0x10], eax
// 00620075  742f                 je 0x6200a6
// 00620077  8b5660               mov edx, dword ptr [esi + 0x60]
// 0062007a  55                   push ebp
// 0062007b  8b6e04               mov ebp, dword ptr [esi + 4]
// 0062007e  50                   push eax
// 0062007f  50                   push eax
// 00620080  52                   push edx
// 00620081  e8eabbfeff           call 0x60bc70
// 00620086  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00620089  83c408               add esp, 8
// 0062008c  50                   push eax
// 0062008d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00620090  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00620094  50                   push eax
// 00620095  6a00                 push 0
// 00620097  6a01                 push 1
// 00620099  56                   push esi
// 0062009a  ffd1                 call ecx
// 0062009c  83c418               add esp, 0x18
// 0062009f  5d                   pop ebp
// 006200a0  894708               mov dword ptr [edi + 8], eax
// 006200a3  5f                   pop edi
// 006200a4  5e                   pop esi
// 006200a5  c3                   ret 
// 006200a6  8b5604               mov edx, dword ptr [esi + 4]
// 006200a9  8b4a08               mov ecx, dword ptr [edx + 8]
// 006200ac  50                   push eax
// 006200ad  8b4664               mov eax, dword ptr [esi + 0x64]
// 006200b0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 006200b4  50                   push eax
// 006200b5  6a01                 push 1
// 006200b7  56                   push esi
// 006200b8  ffd1                 call ecx
// 006200ba  83c410               add esp, 0x10
// 006200bd  89470c               mov dword ptr [edi + 0xc], eax
// 006200c0  5f                   pop edi
// 006200c1  5e                   pop esi
// 006200c2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
