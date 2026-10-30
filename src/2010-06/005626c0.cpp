// from server: 100% by auto
// roc 2010-06 005626c0  unit: G3D::_internal::DialogTemplate  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005626c0
//
// 005626c0  53                   push ebx
// 005626c1  56                   push esi
// 005626c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005626c6  8b4604               mov eax, dword ptr [esi + 4]
// 005626c9  8b08                 mov ecx, dword ptr [eax]
// 005626cb  68a8000000           push 0xa8
// 005626d0  33db                 xor ebx, ebx
// 005626d2  53                   push ebx
// 005626d3  56                   push esi
// 005626d4  ffd1                 call ecx
// 005626d6  898694010000         mov dword ptr [esi + 0x194], eax
// 005626dc  83c40c               add esp, 0xc
// 005626df  c70090265600         mov dword ptr [eax], 0x562690
// 005626e5  c7400470215600       mov dword ptr [eax + 4], 0x562170
// 005626ec  c74008f0245600       mov dword ptr [eax + 8], 0x5624f0
// 005626f3  c74018001f5600       mov dword ptr [eax + 0x18], 0x561f00
// 005626fa  89585c               mov dword ptr [eax + 0x5c], ebx
// 005626fd  8d4860               lea ecx, [eax + 0x60]
// 00562700  ba10000000           mov edx, 0x10
// 00562705  eb09                 jmp 0x562710
// 00562707  8da42400000000       lea esp, [esp]
// 0056270e  8bff                 mov edi, edi
// 00562710  c741bc001f5600       mov dword ptr [ecx - 0x44], 0x561f00
// 00562717  8919                 mov dword ptr [ecx], ebx
// 00562719  83c104               add ecx, 4
// 0056271c  83ea01               sub edx, 1
// 0056271f  75ef                 jne 0x562710
// 00562721  b9a01d5600           mov ecx, 0x561da0
// 00562726  89481c               mov dword ptr [eax + 0x1c], ecx
// 00562729  894854               mov dword ptr [eax + 0x54], ecx
// 0056272c  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00562732  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00562738  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0056273b  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00562741  5e                   pop esi
// 00562742  88580c               mov byte ptr [eax + 0xc], bl
// 00562745  88580d               mov byte ptr [eax + 0xd], bl
// 00562748  895814               mov dword ptr [eax + 0x14], ebx
// 0056274b  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00562751  5b                   pop ebx
// 00562752  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
