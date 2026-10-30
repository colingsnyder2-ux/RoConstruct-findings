// roc 2007-03 00507f60  unit: seg_00500000  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507f60
//
// 00507f60  56                   push esi
// 00507f61  8b742408             mov esi, dword ptr [esp + 8]
// 00507f65  8b4604               mov eax, dword ptr [esi + 4]
// 00507f68  8b08                 mov ecx, dword ptr [eax]
// 00507f6a  68a8000000           push 0xa8
// 00507f6f  6a00                 push 0
// 00507f71  56                   push esi
// 00507f72  ffd1                 call ecx
// 00507f74  898694010000         mov dword ptr [esi + 0x194], eax
// 00507f7a  83c40c               add esp, 0xc
// 00507f7d  c700307f5000         mov dword ptr [eax], 0x507f30
// 00507f83  c74004207a5000       mov dword ptr [eax + 4], 0x507a20
// 00507f8a  c74008a07d5000       mov dword ptr [eax + 8], 0x507da0
// 00507f91  c7401890775000       mov dword ptr [eax + 0x18], 0x507790
// 00507f98  c7405c00000000       mov dword ptr [eax + 0x5c], 0
// 00507f9f  8d4860               lea ecx, [eax + 0x60]
// 00507fa2  ba10000000           mov edx, 0x10
// 00507fa7  eb07                 jmp 0x507fb0
// 00507fa9  8da42400000000       lea esp, [esp]
// 00507fb0  c741bc90775000       mov dword ptr [ecx - 0x44], 0x507790
// 00507fb7  c70100000000         mov dword ptr [ecx], 0
// 00507fbd  83c104               add ecx, 4
// 00507fc0  83ea01               sub edx, 1
// 00507fc3  75eb                 jne 0x507fb0
// 00507fc5  b9f0755000           mov ecx, 0x5075f0
// 00507fca  56                   push esi
// 00507fcb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00507fce  894854               mov dword ptr [eax + 0x54], ecx
// 00507fd1  e85affffff           call 0x507f30
// 00507fd6  83c404               add esp, 4
// 00507fd9  5e                   pop esi
// 00507fda  c3                   ret 
// library jpeg-6b/jdmarker.c (function _jinit_marker_reader)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
