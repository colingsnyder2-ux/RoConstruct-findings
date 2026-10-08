// from server: 100% by auto
// roc 2007-08 00527b50  unit: G3D::Line  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527b50
//
// 00527b50  56                   push esi
// 00527b51  8b742408             mov esi, dword ptr [esp + 8]
// 00527b55  8b4604               mov eax, dword ptr [esi + 4]
// 00527b58  8b08                 mov ecx, dword ptr [eax]
// 00527b5a  57                   push edi
// 00527b5b  6a1c                 push 0x1c
// 00527b5d  6a01                 push 1
// 00527b5f  56                   push esi
// 00527b60  ffd1                 call ecx
// 00527b62  8bf8                 mov edi, eax
// 00527b64  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 00527b6a  83c40c               add esp, 0xc
// 00527b6d  c707507a5200         mov dword ptr [edi], 0x527a50
// 00527b73  c7470800000000       mov dword ptr [edi + 8], 0
// 00527b7a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00527b81  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00527b85  7459                 je 0x527be0
// 00527b87  807c241000           cmp byte ptr [esp + 0x10], 0
// 00527b8c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00527b92  894710               mov dword ptr [edi + 0x10], eax
// 00527b95  742f                 je 0x527bc6
// 00527b97  8b5660               mov edx, dword ptr [esi + 0x60]
// 00527b9a  55                   push ebp
// 00527b9b  8b6e04               mov ebp, dword ptr [esi + 4]
// 00527b9e  50                   push eax
// 00527b9f  50                   push eax
// 00527ba0  52                   push edx
// 00527ba1  e8ba66ffff           call 0x51e260
// 00527ba6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00527ba9  83c408               add esp, 8
// 00527bac  50                   push eax
// 00527bad  8b4664               mov eax, dword ptr [esi + 0x64]
// 00527bb0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00527bb4  50                   push eax
// 00527bb5  6a00                 push 0
// 00527bb7  6a01                 push 1
// 00527bb9  56                   push esi
// 00527bba  ffd1                 call ecx
// 00527bbc  83c418               add esp, 0x18
// 00527bbf  5d                   pop ebp
// 00527bc0  894708               mov dword ptr [edi + 8], eax
// 00527bc3  5f                   pop edi
// 00527bc4  5e                   pop esi
// 00527bc5  c3                   ret 
// 00527bc6  8b5604               mov edx, dword ptr [esi + 4]
// 00527bc9  8b4a08               mov ecx, dword ptr [edx + 8]
// 00527bcc  50                   push eax
// 00527bcd  8b4664               mov eax, dword ptr [esi + 0x64]
// 00527bd0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00527bd4  50                   push eax
// 00527bd5  6a01                 push 1
// 00527bd7  56                   push esi
// 00527bd8  ffd1                 call ecx
// 00527bda  83c410               add esp, 0x10
// 00527bdd  89470c               mov dword ptr [edi + 0xc], eax
// 00527be0  5f                   pop edi
// 00527be1  5e                   pop esi
// 00527be2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
