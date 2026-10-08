// from server: 100% by auto
// roc 2009-06 0057ef70  unit: G3D::_internal::DialogTemplate  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057ef70
//
// 0057ef70  53                   push ebx
// 0057ef71  56                   push esi
// 0057ef72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057ef76  8b4604               mov eax, dword ptr [esi + 4]
// 0057ef79  8b08                 mov ecx, dword ptr [eax]
// 0057ef7b  68a8000000           push 0xa8
// 0057ef80  33db                 xor ebx, ebx
// 0057ef82  53                   push ebx
// 0057ef83  56                   push esi
// 0057ef84  ffd1                 call ecx
// 0057ef86  898694010000         mov dword ptr [esi + 0x194], eax
// 0057ef8c  83c40c               add esp, 0xc
// 0057ef8f  c70040ef5700         mov dword ptr [eax], 0x57ef40
// 0057ef95  c7400420ea5700       mov dword ptr [eax + 4], 0x57ea20
// 0057ef9c  c74008a0ed5700       mov dword ptr [eax + 8], 0x57eda0
// 0057efa3  c74018b0e75700       mov dword ptr [eax + 0x18], 0x57e7b0
// 0057efaa  89585c               mov dword ptr [eax + 0x5c], ebx
// 0057efad  8d4860               lea ecx, [eax + 0x60]
// 0057efb0  ba10000000           mov edx, 0x10
// 0057efb5  eb09                 jmp 0x57efc0
// 0057efb7  8da42400000000       lea esp, [esp]
// 0057efbe  8bff                 mov edi, edi
// 0057efc0  c741bcb0e75700       mov dword ptr [ecx - 0x44], 0x57e7b0
// 0057efc7  8919                 mov dword ptr [ecx], ebx
// 0057efc9  83c104               add ecx, 4
// 0057efcc  83ea01               sub edx, 1
// 0057efcf  75ef                 jne 0x57efc0
// 0057efd1  b950e65700           mov ecx, 0x57e650
// 0057efd6  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057efd9  894854               mov dword ptr [eax + 0x54], ecx
// 0057efdc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057efe2  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0057efe8  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0057efeb  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0057eff1  5e                   pop esi
// 0057eff2  88580c               mov byte ptr [eax + 0xc], bl
// 0057eff5  88580d               mov byte ptr [eax + 0xd], bl
// 0057eff8  895814               mov dword ptr [eax + 0x14], ebx
// 0057effb  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0057f001  5b                   pop ebx
// 0057f002  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
