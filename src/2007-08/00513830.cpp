// roc 2007-08 00513830  unit: G3D::_internal::DialogTemplate  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513830
//
// 00513830  56                   push esi
// 00513831  8b742408             mov esi, dword ptr [esp + 8]
// 00513835  8b4604               mov eax, dword ptr [esi + 4]
// 00513838  8b08                 mov ecx, dword ptr [eax]
// 0051383a  68a8000000           push 0xa8
// 0051383f  6a00                 push 0
// 00513841  56                   push esi
// 00513842  ffd1                 call ecx
// 00513844  898694010000         mov dword ptr [esi + 0x194], eax
// 0051384a  83c40c               add esp, 0xc
// 0051384d  c70000385100         mov dword ptr [eax], 0x513800
// 00513853  c74004f0325100       mov dword ptr [eax + 4], 0x5132f0
// 0051385a  c7400870365100       mov dword ptr [eax + 8], 0x513670
// 00513861  c7401860305100       mov dword ptr [eax + 0x18], 0x513060
// 00513868  c7405c00000000       mov dword ptr [eax + 0x5c], 0
// 0051386f  8d4860               lea ecx, [eax + 0x60]
// 00513872  ba10000000           mov edx, 0x10
// 00513877  eb07                 jmp 0x513880
// 00513879  8da42400000000       lea esp, [esp]
// 00513880  c741bc60305100       mov dword ptr [ecx - 0x44], 0x513060
// 00513887  c70100000000         mov dword ptr [ecx], 0
// 0051388d  83c104               add ecx, 4
// 00513890  83ea01               sub edx, 1
// 00513893  75eb                 jne 0x513880
// 00513895  b9c02e5100           mov ecx, 0x512ec0
// 0051389a  56                   push esi
// 0051389b  89481c               mov dword ptr [eax + 0x1c], ecx
// 0051389e  894854               mov dword ptr [eax + 0x54], ecx
// 005138a1  e85affffff           call 0x513800
// 005138a6  83c404               add esp, 4
// 005138a9  5e                   pop esi
// 005138aa  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
