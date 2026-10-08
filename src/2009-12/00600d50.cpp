// roc 2009-12 00600d50  unit: G3D::_internal::DialogTemplate  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600d50
//
// 00600d50  53                   push ebx
// 00600d51  56                   push esi
// 00600d52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00600d56  8b4604               mov eax, dword ptr [esi + 4]
// 00600d59  8b08                 mov ecx, dword ptr [eax]
// 00600d5b  68a8000000           push 0xa8
// 00600d60  33db                 xor ebx, ebx
// 00600d62  53                   push ebx
// 00600d63  56                   push esi
// 00600d64  ffd1                 call ecx
// 00600d66  898694010000         mov dword ptr [esi + 0x194], eax
// 00600d6c  83c40c               add esp, 0xc
// 00600d6f  c700200d6000         mov dword ptr [eax], 0x600d20
// 00600d75  c7400400086000       mov dword ptr [eax + 4], 0x600800
// 00600d7c  c74008800b6000       mov dword ptr [eax + 8], 0x600b80
// 00600d83  c7401890056000       mov dword ptr [eax + 0x18], 0x600590
// 00600d8a  89585c               mov dword ptr [eax + 0x5c], ebx
// 00600d8d  8d4860               lea ecx, [eax + 0x60]
// 00600d90  ba10000000           mov edx, 0x10
// 00600d95  eb09                 jmp 0x600da0
// 00600d97  8da42400000000       lea esp, [esp]
// 00600d9e  8bff                 mov edi, edi
// 00600da0  c741bc90056000       mov dword ptr [ecx - 0x44], 0x600590
// 00600da7  8919                 mov dword ptr [ecx], ebx
// 00600da9  83c104               add ecx, 4
// 00600dac  83ea01               sub edx, 1
// 00600daf  75ef                 jne 0x600da0
// 00600db1  b930046000           mov ecx, 0x600430
// 00600db6  89481c               mov dword ptr [eax + 0x1c], ecx
// 00600db9  894854               mov dword ptr [eax + 0x54], ecx
// 00600dbc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00600dc2  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00600dc8  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00600dcb  899e7c010000         mov dword ptr [esi + 0x17c], ebx
// 00600dd1  5e                   pop esi
// 00600dd2  88580c               mov byte ptr [eax + 0xc], bl
// 00600dd5  88580d               mov byte ptr [eax + 0xd], bl
// 00600dd8  895814               mov dword ptr [eax + 0x14], ebx
// 00600ddb  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00600de1  5b                   pop ebx
// 00600de2  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
