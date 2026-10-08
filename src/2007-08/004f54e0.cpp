// roc 2007-08 004f54e0  unit: boost::bad_lexical_cast  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f54e0
//
// 004f54e0  51                   push ecx
// 004f54e1  8b1538fb8b00         mov edx, dword ptr [0x8bfb38]
// 004f54e7  85d2                 test edx, edx
// 004f54e9  7433                 je 0x4f551e
// 004f54eb  8b442408             mov eax, dword ptr [esp + 8]
// 004f54ef  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 004f54f2  832dc4fa8b0001       sub dword ptr [0x8bfac4], 1
// 004f54f9  83f901               cmp ecx, 1
// 004f54fc  751a                 jne 0x4f5518
// 004f54fe  c7048200000000       mov dword ptr [edx + eax*4], 0
// 004f5505  890424               mov dword ptr [esp], eax
// 004f5508  8d0424               lea eax, [esp]
// 004f550b  50                   push eax
// 004f550c  b944fb8b00           mov ecx, 0x8bfb44
// 004f5511  e89af3ffff           call 0x4f48b0
// 004f5516  59                   pop ecx
// 004f5517  c3                   ret 
// 004f5518  83c1ff               add ecx, -1
// 004f551b  890c82               mov dword ptr [edx + eax*4], ecx
// 004f551e  59                   pop ecx
// 004f551f  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?freeVertex@Mesh@Render@RBX@@SAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
