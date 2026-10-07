// roc 2008-06 0051b5d0  unit: G3D::_internal::DialogTemplate  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b5d0
//
// 0051b5d0  53                   push ebx
// 0051b5d1  56                   push esi
// 0051b5d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051b5d6  8b4604               mov eax, dword ptr [esi + 4]
// 0051b5d9  8b08                 mov ecx, dword ptr [eax]
// 0051b5db  68a8000000           push 0xa8
// 0051b5e0  33db                 xor ebx, ebx
// 0051b5e2  53                   push ebx
// 0051b5e3  56                   push esi
// 0051b5e4  ffd1                 call ecx
// 0051b5e6  898694010000         mov dword ptr [esi + 0x194], eax
// 0051b5ec  83c40c               add esp, 0xc
// 0051b5ef  c700a0b55100         mov dword ptr [eax], 0x51b5a0
// 0051b5f5  c7400480b05100       mov dword ptr [eax + 4], 0x51b080
// 0051b5fc  c7400800b45100       mov dword ptr [eax + 8], 0x51b400
// 0051b603  c7401810ae5100       mov dword ptr [eax + 0x18], 0x51ae10
// 0051b60a  89585c               mov dword ptr [eax + 0x5c], ebx
// 0051b60d  8d4860               lea ecx, [eax + 0x60]
// 0051b610  ba10000000           mov edx, 0x10
// 0051b615  eb09                 jmp 0x51b620
// 0051b617  8da42400000000       lea esp, [esp]
// 0051b61e  8bff                 mov edi, edi
// 0051b620  c741bc10ae5100       mov dword ptr [ecx - 0x44], 0x51ae10
// 0051b627  8919                 mov dword ptr [ecx], ebx
// 0051b629  83c104               add ecx, 4
// 0051b62c  83ea01               sub edx, 1
// 0051b62f  75ef                 jne 0x51b620
// 0051b631  b9b0ac5100           mov ecx, 0x51acb0
// 0051b636  89481c               mov dword ptr [eax + 0x1c], ecx
// 0051b639  894854               mov dword ptr [eax + 0x54], ecx
// 0051b63c  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0051b642  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0051b648  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0051b64b  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 0051b651  5e                   pop esi
// 0051b652  88580c               mov byte ptr [eax + 0xc], bl
// 0051b655  88580d               mov byte ptr [eax + 0xd], bl
// 0051b658  895814               mov dword ptr [eax + 0x14], ebx
// 0051b65b  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0051b661  5b                   pop ebx
// 0051b662  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
