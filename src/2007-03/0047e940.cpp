// roc 2007-03 0047e940  unit: seg_00470000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e940
//
// 0047e940  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047e944  81ec80000000         sub esp, 0x80
// 0047e94a  8d0424               lea eax, [esp]
// 0047e94d  50                   push eax
// 0047e94e  51                   push ecx
// 0047e94f  ff158ceb7700         call dword ptr [0x77eb8c]
// 0047e955  8b0424               mov eax, dword ptr [esp]
// 0047e958  81c480000000         add esp, 0x80
// 0047e95e  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\getOpenGLState.cpp (function ?glGetInteger@G3D@@YAHI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/getOpenGLState.cpp
