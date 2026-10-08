// roc 2007-03 0047e500  unit: seg_00470000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e500
//
// 0047e500  83790800             cmp dword ptr [ecx + 8], 0
// 0047e504  7e37                 jle 0x47e53d
// 0047e506  8b4108               mov eax, dword ptr [ecx + 8]
// 0047e509  56                   push esi
// 0047e50a  8d7104               lea esi, [ecx + 4]
// 0047e50d  8b0e                 mov ecx, dword ptr [esi]
// 0047e50f  8d0440               lea eax, [eax + eax*2]
// 0047e512  807c81fc00           cmp byte ptr [ecx + eax*4 - 4], 0
// 0047e517  7423                 je 0x47e53c
// 0047e519  8b4604               mov eax, dword ptr [esi + 4]
// 0047e51c  8d1440               lea edx, [eax + eax*2]
// 0047e51f  8bc1                 mov eax, ecx
// 0047e521  8b4c90f4             mov ecx, dword ptr [eax + edx*4 - 0xc]
// 0047e525  8b11                 mov edx, dword ptr [ecx]
// 0047e527  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0047e52a  ffd0                 call eax
// 0047e52c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047e52f  83e901               sub ecx, 1
// 0047e532  6a00                 push 0
// 0047e534  51                   push ecx
// 0047e535  8bce                 mov ecx, esi
// 0047e537  e86430feff           call 0x4615a0
// 0047e53c  5e                   pop esi
// 0047e53d  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?popLoopBody@GWindow@G3D@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
