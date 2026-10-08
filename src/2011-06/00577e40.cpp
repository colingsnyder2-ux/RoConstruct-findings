// from server: 100% by auto
// roc 2011-06 00577e40  unit: seg_00570000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577e40
//
// 00577e40  56                   push esi
// 00577e41  8b742408             mov esi, dword ptr [esp + 8]
// 00577e45  8b4604               mov eax, dword ptr [esi + 4]
// 00577e48  8b08                 mov ecx, dword ptr [eax]
// 00577e4a  57                   push edi
// 00577e4b  6a1c                 push 0x1c
// 00577e4d  6a01                 push 1
// 00577e4f  56                   push esi
// 00577e50  ffd1                 call ecx
// 00577e52  8bf8                 mov edi, eax
// 00577e54  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 00577e5a  83c40c               add esp, 0xc
// 00577e5d  c707407d5700         mov dword ptr [edi], 0x577d40
// 00577e63  c7470800000000       mov dword ptr [edi + 8], 0
// 00577e6a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00577e71  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00577e75  7459                 je 0x577ed0
// 00577e77  807c241000           cmp byte ptr [esp + 0x10], 0
// 00577e7c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00577e82  894710               mov dword ptr [edi + 0x10], eax
// 00577e85  742f                 je 0x577eb6
// 00577e87  8b5660               mov edx, dword ptr [esi + 0x60]
// 00577e8a  55                   push ebp
// 00577e8b  8b6e04               mov ebp, dword ptr [esi + 4]
// 00577e8e  50                   push eax
// 00577e8f  50                   push eax
// 00577e90  52                   push edx
// 00577e91  e81afffeff           call 0x567db0
// 00577e96  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00577e99  83c408               add esp, 8
// 00577e9c  50                   push eax
// 00577e9d  8b4664               mov eax, dword ptr [esi + 0x64]
// 00577ea0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00577ea4  50                   push eax
// 00577ea5  6a00                 push 0
// 00577ea7  6a01                 push 1
// 00577ea9  56                   push esi
// 00577eaa  ffd1                 call ecx
// 00577eac  83c418               add esp, 0x18
// 00577eaf  5d                   pop ebp
// 00577eb0  894708               mov dword ptr [edi + 8], eax
// 00577eb3  5f                   pop edi
// 00577eb4  5e                   pop esi
// 00577eb5  c3                   ret 
// 00577eb6  8b5604               mov edx, dword ptr [esi + 4]
// 00577eb9  8b4a08               mov ecx, dword ptr [edx + 8]
// 00577ebc  50                   push eax
// 00577ebd  8b4664               mov eax, dword ptr [esi + 0x64]
// 00577ec0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 00577ec4  50                   push eax
// 00577ec5  6a01                 push 1
// 00577ec7  56                   push esi
// 00577ec8  ffd1                 call ecx
// 00577eca  83c410               add esp, 0x10
// 00577ecd  89470c               mov dword ptr [edi + 0xc], eax
// 00577ed0  5f                   pop edi
// 00577ed1  5e                   pop esi
// 00577ed2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
