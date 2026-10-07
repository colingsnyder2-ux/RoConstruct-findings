// roc 2010-06 00581b90  unit: seg_00580000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581b90
//
// 00581b90  56                   push esi
// 00581b91  8b742408             mov esi, dword ptr [esp + 8]
// 00581b95  8b4604               mov eax, dword ptr [esi + 4]
// 00581b98  8b08                 mov ecx, dword ptr [eax]
// 00581b9a  57                   push edi
// 00581b9b  6a1c                 push 0x1c
// 00581b9d  6a01                 push 1
// 00581b9f  56                   push esi
// 00581ba0  ffd1                 call ecx
// 00581ba2  8bf8                 mov edi, eax
// 00581ba4  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 00581baa  83c40c               add esp, 0xc
// 00581bad  c707901a5800         mov dword ptr [edi], 0x581a90
// 00581bb3  c7470800000000       mov dword ptr [edi + 8], 0
// 00581bba  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00581bc1  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00581bc5  7459                 je 0x581c20
// 00581bc7  807c241000           cmp byte ptr [esp + 0x10], 0
// 00581bcc  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00581bd2  894710               mov dword ptr [edi + 0x10], eax
// 00581bd5  742f                 je 0x581c06
// 00581bd7  8b5660               mov edx, dword ptr [esi + 0x60]
// 00581bda  55                   push ebp
// 00581bdb  8b6e04               mov ebp, dword ptr [esi + 4]
// 00581bde  50                   push eax
// 00581bdf  50                   push eax
// 00581be0  52                   push edx
// 00581be1  e86ab7feff           call 0x56d350
// 00581be6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00581be9  83c408               add esp, 8
// 00581bec  50                   push eax
// 00581bed  8b4664               mov eax, dword ptr [esi + 0x64]
// 00581bf0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00581bf4  50                   push eax
// 00581bf5  6a00                 push 0
// 00581bf7  6a01                 push 1
// 00581bf9  56                   push esi
// 00581bfa  ffd1                 call ecx
// 00581bfc  83c418               add esp, 0x18
// 00581bff  5d                   pop ebp
// 00581c00  894708               mov dword ptr [edi + 8], eax
// 00581c03  5f                   pop edi
// 00581c04  5e                   pop esi
// 00581c05  c3                   ret 
// 00581c06  8b5604               mov edx, dword ptr [esi + 4]
// 00581c09  8b4a08               mov ecx, dword ptr [edx + 8]
// 00581c0c  50                   push eax
// 00581c0d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00581c10  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00581c14  50                   push eax
// 00581c15  6a01                 push 1
// 00581c17  56                   push esi
// 00581c18  ffd1                 call ecx
// 00581c1a  83c410               add esp, 0x10
// 00581c1d  89470c               mov dword ptr [edi + 0xc], eax
// 00581c20  5f                   pop edi
// 00581c21  5e                   pop esi
// 00581c22  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
