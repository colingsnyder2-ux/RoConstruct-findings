// from server: 100% by auto
// roc 2012-06 00663550  unit: seg_00660000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00663550
//
// 00663550  56                   push esi
// 00663551  8b742408             mov esi, dword ptr [esp + 8]
// 00663555  8b4604               mov eax, dword ptr [esi + 4]
// 00663558  8b08                 mov ecx, dword ptr [eax]
// 0066355a  57                   push edi
// 0066355b  6a1c                 push 0x1c
// 0066355d  6a01                 push 1
// 0066355f  56                   push esi
// 00663560  ffd1                 call ecx
// 00663562  8bf8                 mov edi, eax
// 00663564  89be8c010000         mov dword ptr [esi + 0x18c], edi
// 0066356a  83c40c               add esp, 0xc
// 0066356d  c70750346600         mov dword ptr [edi], 0x663450
// 00663573  c7470800000000       mov dword ptr [edi + 8], 0
// 0066357a  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00663581  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00663585  7459                 je 0x6635e0
// 00663587  807c241000           cmp byte ptr [esp + 0x10], 0
// 0066358c  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00663592  894710               mov dword ptr [edi + 0x10], eax
// 00663595  742f                 je 0x6635c6
// 00663597  8b5660               mov edx, dword ptr [esi + 0x60]
// 0066359a  55                   push ebp
// 0066359b  8b6e04               mov ebp, dword ptr [esi + 4]
// 0066359e  50                   push eax
// 0066359f  50                   push eax
// 006635a0  52                   push edx
// 006635a1  e81afffeff           call 0x6534c0
// 006635a6  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 006635a9  83c408               add esp, 8
// 006635ac  50                   push eax
// 006635ad  8b4664               mov eax, dword ptr [esi + 0x64]
// 006635b0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 006635b4  50                   push eax
// 006635b5  6a00                 push 0
// 006635b7  6a01                 push 1
// 006635b9  56                   push esi
// 006635ba  ffd1                 call ecx
// 006635bc  83c418               add esp, 0x18
// 006635bf  5d                   pop ebp
// 006635c0  894708               mov dword ptr [edi + 8], eax
// 006635c3  5f                   pop edi
// 006635c4  5e                   pop esi
// 006635c5  c3                   ret 
// 006635c6  8b5604               mov edx, dword ptr [esi + 4]
// 006635c9  8b4a08               mov ecx, dword ptr [edx + 8]
// 006635cc  50                   push eax
// 006635cd  8b4664               mov eax, dword ptr [esi + 0x64]
// 006635d0  0faf465c             imul eax, dword ptr [esi + 0x5c]
// 006635d4  50                   push eax
// 006635d5  6a01                 push 1
// 006635d7  56                   push esi
// 006635d8  ffd1                 call ecx
// 006635da  83c410               add esp, 0x10
// 006635dd  89470c               mov dword ptr [edi + 0xc], eax
// 006635e0  5f                   pop edi
// 006635e1  5e                   pop esi
// 006635e2  c3                   ret 
// library jpeg-6b/jdpostct.c (function _jinit_d_post_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
